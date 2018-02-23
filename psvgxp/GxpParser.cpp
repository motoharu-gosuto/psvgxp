#include "GxpParser.h"

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdint>
#include <sstream>
#include <iomanip>

//#define DEBUG_OUTPUT

std::string read_string(std::ifstream& input)
{
   char letter = 0;
   std::vector<char> buffer;
   while(input.read(&letter, 1), letter != 0)
      buffer.push_back(letter);
   return std::string(buffer.data(), buffer.size());
}

std::string type_to_string(std::uint32_t type)
{
   std::uint32_t component_count = (type & 0x0F00) >> 8;
   std::uint32_t parameter_type = (type & 0x00F0) >> 4;

   std::stringstream ss;

   switch(parameter_type)
   {
   case 0:
      ss << "float";
      break;
   case 1:
      ss << "half";
      break;
   case 2:
      ss << "fixed";
      break;
   case 3:
      ss << "uint";
      break;
   case 4:
      ss << "int";
      break;
   case 5:
      ss << "ushort";
      break;
   case 6:
      ss << "short";
      break;
   case 7:
      ss << "uchar";
      break;
   case 8:
      ss << "char";
      break;
   case 9:
      ss << "aggregate";
      break;
   default:
      ss << "invalid";
      break;
   }
   
   ss << component_count;

   return ss.str();
}

std::string type_to_container_type(std::uint32_t type)
{
   std::uint32_t container_index = (type & 0xF000) >> 12;
   switch(container_index)
   {
   case 14:
      return "DEFAULT ";
   case 15:
      return "TEXTURE ";
   default:
      {
         std::stringstream ss;
         ss << "BUFFER" << std::setfill(' ') << std::setw(2) << std::left << container_index;
         return ss.str();
      }
   }
}

std::string type_to_usable_register(std::uint32_t type, std::uint32_t resource_index)
{
   //all 4 bytes are used
   std::uint32_t container_index = (type & 0xF000) >> 12;
   switch(container_index)
   {
   case 14:
      {
         std::stringstream ss;
         ss << "sa" << std::setfill(' ') << std::setw(2) << std::left << resource_index; 
         return ss.str();
      }
   default:
      return "    ";
   }
}

std::string array_size_to_string(std::uint32_t element_num)
{
   //all 4 bytes are used
   if(element_num > 1)
   {
      std::stringstream ss;
      ss << "[" << element_num << "]";
      return ss.str();
   }
   else
   {
      return std::string();
   }
}

std::string parameter_to_string(const symbol_t& sym, const std::string& name)
{
   std::uint32_t unused = (sym.symbol.type & 0xFFFF0000) >> 16;
   if(unused != 0)
   {
      std::stringstream ss;
      ss << "unused field is not equal to zero";
      return ss.str();
   }

   std::uint32_t category = sym.symbol.type & 0x000F;
   switch(category)
   {
   case 1: //Constants:
      {
         std::stringstream ss;
         ss << "["<< type_to_container_type(sym.symbol.type) << " + " 
            << std::setfill(' ') << std::setw(2) << std::left << sym.symbol.resource_index << " ] " 
            << type_to_usable_register(sym.symbol.type, sym.symbol.resource_index ) << " "
            << " = " << "(" << type_to_string(sym.symbol.type) << ")" << " " << name 
            << array_size_to_string(sym.symbol.array_size);
         return ss.str();
      }
   case 2: //Samplers:
      {
         std::stringstream ss;
         ss << "TEXUNIT" << std::setfill(' ') << std::setw(2) << std::left << sym.symbol.resource_index << " = " << name;
         return ss.str();
      }
      break;
   default:
      std::stringstream ss;
      ss << "unknown basic type";
      return ss.str();
   }

   return std::string();
}

//specific layout of commonprimitive.fpshd
//0x060 - ?
//0x064 - offset to offset to literal?
//0x068 - contains offset to part of literal
//0x06C - ?
//0x070 - ?
//0x074 - contains offset to literal
//0x07C - contains offset to symbol table
//0x084 - contains offset to part of literal
//0x08C - contains offset to part of literal
//0x094 - contains offset to part of literal
//0x09C - chunk of ? bytes
//0x0E0 - unchangable 0 causes internal error
//0x0E4 - chunk of 0xF0 bytes - if zeroed - 30 mad instructions
//0x1D4 - literal
//0x1EC - constants / samplers table
//0x26C - name table

//specific example of literal - still has to be documented
/*
[LITERAL  + 0  ] sa65535 = 0x40000000 (2.000000f) (0.00000h, 2.00000h)
0000 0000 - offset (unsigned short) gots added to reg : not sure (has not effect on literal)
00000040 - value (including interpretation in floats and halfs)
0E000000 - not sure (has not effect on literal)
0000 3000 - 0000 - not sure (has not effect on literal)
            3000 is related to which "sa" registers are shown in constants (affects only DEFAULT, shows registers whos reg_index > this field)
            confirmed to be unsigned short
1300 0000 - 13 regulates some addressing mode. if 13 then full_reg_index = offset + reg_index. if not 13 then full_reg_index = offset
            : changing lower word causes "error D403I: fatal internal error"
FFFF 0100 - reg_index (unsigned short) : not sure (has not effect on literal)
*/

void parse_gxp(std::string path, SceGxmProgram& header)
{
   //still need to figure out literals and iterators

   std::ifstream input(path, std::ios_base::in | std::ios_base::binary);

   input.read((char*)&header, sizeof(SceGxmProgram));

   std::uint64_t parameters_offset_abs =  ((char*)&header.parameters_offset - (char*)&header) + header.parameters_offset;
   input.seekg(parameters_offset_abs, std::ios_base::beg);

   std::vector<symbol_t> sym_table;
   for(std::size_t i = 0; i < header.parameter_count; i++)
   {
      sym_table.push_back(symbol_t());
      symbol_t& item = sym_table.back();
      item.pos = input.tellg();
      input.read((char*)&item.symbol, sizeof(SceGxmProgramParameter));
   }
   
   std::vector<std::string> string_table;
   for(auto& sym : sym_table)
   {
      input.seekg(sym.pos + sym.symbol.name_offset, std::ios_base::beg);
      string_table.push_back(read_string(input));
   }

   #ifdef DEBUG_OUTPUT
   for(std::size_t i = 0; i < header.parameter_count; i++)
   {
      symbol_t& sym = sym_table[i];
      std::string& name = string_table[i];

      std::cout << parameter_to_string(sym, name) << std::endl;
   }
   #endif
}
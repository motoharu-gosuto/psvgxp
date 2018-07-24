#include "Disassembler.h"

#include <cstdint>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <bitset>
#include <fstream>

#include "Utils.h"

//#define DEBUG_OUTPUT

void read_gxp_data(const std::string& path, const void** gxp_data)
{
   std::ifstream input(path, std::ios_base::in | std::ios_base::binary);

   input.seekg(0, std::ios::end);
   std::uint64_t fsize = input.tellg();
   input.seekg(0, std::ios::beg);
   char* data = new char[fsize];
   input.read(data, fsize);

   *gxp_data = data;
}

void destroy_gxp_data(const void* gxp_data)
{
   const char* data = (const char*)gxp_data;
   delete [] gxp_data;
}

std::uint64_t get_asm_offset(const SceGxmProgram* header)
{
   std::uint64_t maybe_asm_offset_abs = ((char*)&header->maybe_asm_offset - (char*)header) + header->maybe_asm_offset;
   return maybe_asm_offset_abs;
}

std::uint64_t get_literal_offset(const SceGxmProgram* header)
{
   std::uint64_t maybe_literal_ofset_abs = ((char*)&header->maybe_literal_ofset - (char*)header) + header->maybe_literal_ofset;
   return maybe_literal_ofset_abs;
}

void prepare_options(const std::string& gxp_path, ScePsp2ShaderPerfOptions* opt)
{
   scePsp2ShaderPerfInitializeOptions(opt);
   opt->locale = SCE_PSP2SHADERPERF_ENGLISH;
   opt->disasm = 1;

   read_gxp_data(gxp_path, &opt->gxpData);
}

std::uint64_t* get_instr_ptr(const ScePsp2ShaderPerfOptions* opt, const SceGxmProgram* header, std::int32_t index)
{
   std::uint64_t maybe_asm_offset_abs = get_asm_offset(header);
   std::uint64_t* instr_raw_ptr = (std::uint64_t*)((char*)opt->gxpData + maybe_asm_offset_abs);
   return instr_raw_ptr + index;
}

//disassemble donor gxp file that is specified in opt
//instruction should be already set
//instruction_raw is used only for output listing
void disasm_gxp_implicit(ScePsp2ShaderPerfOptions* opt, std::uint64_t instruction_raw, int num_instructions)
{
   //disassemble gxp file
   const ScePsp2ShaderPerfOutput* out;
   out = scePsp2ShaderPerf(opt);

   //check that there was no error during disassembling - not all values are allowed to be instructions
   if(out->errorMessage != NULL)
   {
      #ifdef DEBUG_OUTPUT
      std::bitset<8> bs0((instruction_raw & 0xFF00000000000000) >> 56 );
      std::bitset<8> bs1((instruction_raw & 0x00FF000000000000) >> 48 );
      std::bitset<8> bs2((instruction_raw & 0x0000FF0000000000) >> 40 );
      std::bitset<8> bs3((instruction_raw & 0x000000FF00000000) >> 32 );
      #endif

      std::cout << std::hex <<std::setw(16) << std::setfill('0') << std::right << instruction_raw << "\t" 
         #ifdef DEBUG_OUTPUT
         << bs0.to_string() << "\t" 
         << bs1.to_string() << "\t" 
         << bs2.to_string() << "\t" 
         << bs3.to_string() << "\t" 
         #endif
         << "invalid opcode"
         << std::endl;
   }
   else
   {
      std::string disasm(out->disassembly);
      std::stringstream ss;
      ss << disasm;

      //skip garbage in listing - find first instruction
      std::string line;
      int line_num = 0;
      bool skip = true;
      
      while(std::getline(ss, line, '\n') && (line_num < num_instructions))
      {
         if(line == "Primary program:") //there can be Secondary program:
         {
            skip = false;
            continue;
         }

         if(skip)
            continue;

         if(line.empty())
            continue;

         std::string::size_type semicolon = line.find(":");
         std::string clean = trim(line.substr(semicolon + 1));

         #ifdef DEBUG_OUTPUT
         std::bitset<8> bs0((instruction_raw & 0xFF00000000000000) >> 56 );
         std::bitset<8> bs1((instruction_raw & 0x00FF000000000000) >> 48 );
         std::bitset<8> bs2((instruction_raw & 0x0000FF0000000000) >> 40 );
         std::bitset<8> bs3((instruction_raw & 0x000000FF00000000) >> 32 );
         #endif

         //this code checks for expected predicates
         std::string::size_type spaceIndex = clean.find(" ");
         std::string possibleP = clean.substr(0, spaceIndex);
         if(possibleP == "p0" || possibleP == "!p0" || possibleP == "Pn" || possibleP == "p1" || possibleP == "!p1" || possibleP == "p2" || possibleP == "!p2" || possibleP == "p3")
         {
            //instruction may have operands or not
            std::string::size_type spaceIndex2 = clean.find_first_of(" ", spaceIndex + 1);
            if(spaceIndex2 == 0xFFFFFFFF)
            {
               std::string instr = clean.substr(spaceIndex + 1);  

               std::cout << std::hex <<std::setw(16) << std::setfill('0') << std::right << (line_num == 0 ? instruction_raw : 0xDEADBEEFDEADBEEF) << "\t" 
                  #ifdef DEBUG_OUTPUT
                  << bs0.to_string() << "\t" 
                  << bs1.to_string() << "\t" 
                  << bs2.to_string() << "\t" 
                  << bs3.to_string() << "\t" 
                  #endif
                  << possibleP << "\t" << instr
                  << std::endl;
            }
            else
            {
               std::string instr = clean.substr(spaceIndex + 1, spaceIndex2 - spaceIndex - 1);  
               std::string regs = trim(clean.substr(spaceIndex2));

               std::cout << std::hex <<std::setw(16) << std::setfill('0') << std::right << (line_num == 0 ? instruction_raw : 0xDEADBEEFDEADBEEF) << "\t" 
                  #ifdef DEBUG_OUTPUT
                  << bs0.to_string() << "\t" 
                  << bs1.to_string() << "\t" 
                  << bs2.to_string() << "\t" 
                  << bs3.to_string() << "\t" 
                  #endif
                  << possibleP << "\t" << instr 
                  << "\t" << regs 
                  << std::endl;
            }
         }
         else
         {
            //instruction may have operands or not
            std::string instr = possibleP;
            if(spaceIndex > 0)
            {
               std::string regs = trim(clean.substr(spaceIndex + 1));

               std::cout << std::hex <<std::setw(16) << std::setfill('0') << std::right << (line_num == 0 ? instruction_raw : 0xDEADBEEFDEADBEEF) << "\t"
                  #ifdef DEBUG_OUTPUT
                  << bs0.to_string() << "\t" 
                  << bs1.to_string() << "\t" 
                  << bs2.to_string() << "\t" 
                  << bs3.to_string() << "\t" 
                  #endif
                  << "" << "\t" << instr 
                  << "\t" << regs 
                  << std::endl;
            }
            else
            {
               std::cout << std::hex <<std::setw(16) << std::setfill('0') << std::right << (line_num == 0 ? instruction_raw : 0xDEADBEEFDEADBEEF) << "\t"
                  #ifdef DEBUG_OUTPUT
                  << bs0.to_string() << "\t" 
                  << bs1.to_string() << "\t" 
                  << bs2.to_string() << "\t" 
                  << bs3.to_string() << "\t" 
                  #endif
                  << "" << "\t" << instr 
                  << std::endl;
            }
         }
         
         line_num++;
      }
   }

   //do a cleanup
   scePsp2ShaderPerfDestroyOutput(out);
}

//disassemble donor gxp file that is specified in opt
//instruction will be set by this function
//instruction_raw is used only for output listing
void disasm_gxp_explicit(ScePsp2ShaderPerfOptions* opt, const SceGxmProgram* header, std::uint64_t instruction_raw, int num_instructions)
{
   std::uint64_t* instr_raw_ptr = get_instr_ptr(opt, header, 0);

   *instr_raw_ptr = instruction_raw;
   disasm_gxp_implicit(opt, instruction_raw, num_instructions);
}

void set_gxp_instruction(ScePsp2ShaderPerfOptions* opt, const SceGxmProgram* header, std::uint64_t instruction_raw, int index)
{
   std::uint64_t* instr_raw_ptr = get_instr_ptr(opt, header, index);

   *instr_raw_ptr = instruction_raw;
}
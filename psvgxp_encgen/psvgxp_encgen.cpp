#include <string>
#include <vector>
#include <iostream>
#include <cstdint>
#include <fstream>

#include <boost/property_tree/json_parser.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/filesystem.hpp>

int generate_base_function_def_from_json(std::ostream& output, const std::string& name, const std::vector<std::pair<std::string, std::uint8_t> >& field_definitions)
{
   std::string indent = "   ";

   std::stringstream ass;

   for(auto field : field_definitions)
      ass << "std::uint8_t " << field.first << ", ";

   std::string arg_string = ass.str();
   boost::trim_right_if(arg_string, boost::is_any_of(", "));

   output << "std::uint64_t " << name << "(" << arg_string << ")" << std::endl;

   output << "{" << std::endl;

   for(std::vector<std::pair<std::string, std::uint8_t> >::const_reverse_iterator it = field_definitions.rbegin() ; it != field_definitions.rend(); ++it)
   {
      output << indent << "typedef NbitsToMask<" << (std::int32_t)it->second << "> " << it->first << "_t;" << std::endl;
   }

   output << std::endl;

   for(std::vector<std::pair<std::string, std::uint8_t> >::const_reverse_iterator it = field_definitions.rbegin() ; it != field_definitions.rend(); ++it)
   {
      output << indent << "std::uint8_t " << it->first << "_masked = " << it->first << " & " << it->first << "_t::mask;" << std::endl;
   }

   output << std::endl;

   for(std::vector<std::pair<std::string, std::uint8_t> >::const_reverse_iterator it_outer = field_definitions.rbegin() ; it_outer != field_definitions.rend(); ++it_outer)
   {
      std::vector<std::string> fields;
      for(std::vector<std::pair<std::string, std::uint8_t> >::const_reverse_iterator it_inner = field_definitions.rbegin() ; it_inner != it_outer; ++it_inner)
         fields.push_back(it_inner->first);

      std::stringstream fss;
      for(std::vector<std::string>::const_reverse_iterator it_fld = fields.rbegin(); it_fld != fields.rend(); ++it_fld)
         fss << *it_fld << "_t, ";

      std::string field_str = fss.str();
      boost::trim_right_if(field_str, boost::is_any_of(", "));

      output << indent << "std::uint64_t " << it_outer->first << "_shift = (std::uint64_t)" << it_outer->first << "_masked << SumBits<" << field_str << ">::result;" << std::endl;
   }

   output << std::endl;

   std::stringstream rss;

   for(auto field : field_definitions)
      rss << field.first << "_shift" << " | ";

   std::string result_str = rss.str();
   boost::trim_right_if(result_str, boost::is_any_of(" | "));

   output << indent << "return " << result_str << ";" << std::endl;

   output << "}" << std::endl;

   return 0;
}

int generate_glue_function_def_from_json(std::ostream& output, const std::string& name, const std::vector<std::pair<std::string, std::uint8_t> >& high, const std::vector<std::pair<std::string, std::uint8_t>>& low)
{
   std::string indent = "   ";

   std::stringstream ass;

   for(auto field : high)
      ass << "std::uint8_t " << field.first << ", ";

   for(auto field : low)
      ass << "std::uint8_t " << field.first << ", ";

   std::string arg_string = ass.str();
   boost::trim_right_if(arg_string, boost::is_any_of(", "));

   output << "std::uint64_t " << name << "(" << arg_string << ")" << std::endl;

   output << "{" << std::endl;

   std::stringstream hpss;

   for(auto field : high)
      hpss << field.first << ", ";

   std::string hpss_string = hpss.str();
   boost::trim_right_if(hpss_string, boost::is_any_of(", "));

   output << indent << "std::uint64_t hi = " << name << "_HIGHER4(" << hpss_string << ");" << std::endl << std::endl;

   std::stringstream lpss;

   for(auto field : low)
      lpss << field.first << ", ";

   std::string lpss_string = lpss.str();
   boost::trim_right_if(lpss_string, boost::is_any_of(", "));

   output << indent << "std::uint64_t lo = " << name << "_LOWER4(" << lpss_string << ");" << std::endl << std::endl;

   output << indent << "return (hi << 32) | lo;" << std::endl;

   output << "}" << std::endl;

   return 0;
}

int generate_def_from_json(std::ostream& output, const std::string& name, const std::vector<std::pair<std::string, std::uint8_t> >& high, const std::vector<std::pair<std::string, std::uint8_t>>& low)
{
   generate_base_function_def_from_json(output, name + "_HIGHER4", high);
   
   output << std::endl;

   generate_base_function_def_from_json(output, name + "_LOWER4", low);

   output << std::endl;

   generate_glue_function_def_from_json(output, name, high, low);

   output << std::endl;

   output << "//=====================" << std::endl;

   output << std::endl;

   return 0;
}

int generate_decl_from_json(std::ostream& output, const std::string& name, const std::vector<std::pair<std::string, std::uint8_t> >& high, const std::vector<std::pair<std::string, std::uint8_t>>& low)
{
   std::stringstream ass;

   for(auto field : high)
      ass << "std::uint8_t " << field.first << ", ";

   for(auto field : low)
      ass << "std::uint8_t " << field.first << ", ";

   std::string arg_string = ass.str();
   boost::trim_right_if(arg_string, boost::is_any_of(", "));

   output << "std::uint64_t " << name << "(" << arg_string << ");" << std::endl << std::endl;

   return 0;
}

int generate_decl_header(std::ostream& output)
{
   output << "#pragma once" << std::endl << std::endl;
   
   output << "#include <cstdint>" << std::endl << std::endl;

   return 0;
}

int generate_def_header(std::ostream& output, const std::string& decl_filename)
{
   output << "#include \"" << decl_filename << "\"" << std::endl << std::endl;
   
   output << "#include \"BitsetUtils.hpp\"" << std::endl << std::endl;

   return 0;
}

int generate_from_json(const std::string& json_path, const std::string decl_path, const std::string def_path)
{
   try
   {
      boost::property_tree::ptree pt2;
      boost::property_tree::read_json(json_path, pt2);

      std::ofstream declaration_file(decl_path, std::ios_base::trunc);
      std::ofstream definition_file(def_path, std::ios_base::trunc);

      generate_decl_header(declaration_file);

      generate_def_header(definition_file, boost::filesystem::path(decl_path).filename().generic_string());

      for(auto definition : pt2.get_child("definitions"))
      {
         std::string name = definition.second.get_child("name").get_value<std::string>();

         std::vector<std::pair<std::string, std::uint8_t> > high;
         for(auto item : definition.second.get_child("high"))
            high.push_back(std::make_pair(item.first, item.second.get_value<std::uint8_t>()));

         std::vector<std::pair<std::string, std::uint8_t> > low;
         for(auto item : definition.second.get_child("low"))
            low.push_back(std::make_pair(item.first, item.second.get_value<std::uint8_t>()));

         generate_decl_from_json(declaration_file, name, high, low);

         generate_def_from_json(definition_file, name, high, low);
      }
   }
   catch(std::exception e)
   {
      std::cout << e.what() << std::endl;
      return -1;
   }
   
   return 0;
}

int main(int argc, char* argv[])
{
   generate_from_json(argv[1], argv[2], argv[3]);
   
   return 0;
}


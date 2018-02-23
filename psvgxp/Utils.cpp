#include "Utils.h"

#include <string>
#include <algorithm>
#include <cctype>
#include <cstdint>
#include <sstream>
#include <iomanip>

std::string trim(const std::string &s)
{
   auto wsfront=std::find_if_not(s.begin(),s.end(),[](int c){return std::isspace(c);});
   auto wsback=std::find_if_not(s.rbegin(),s.rend(),[](int c){return std::isspace(c);}).base();
   return (wsback<=wsfront ? std::string() : std::string(wsfront,wsback));
}

std::uint64_t to_uint64(const std::string& valueString)
{
   std::stringstream ss;
   ss << valueString;
   std::uint64_t value;
   ss >> std::hex >> value;
   return value;
}
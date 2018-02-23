#include <cstdint>

#include "InstructionEncoders.h"
#include "Disassembler.h"
#include "GxpParser.h"

//use for first scan to figure out bit fields
void raw_bruteforce(ScePsp2ShaderPerfOptions* opt, const SceGxmProgram* header)
{
   std::uint64_t* instr_raw_ptr = get_instr_ptr(opt, header, 0);

   //for(std::uint64_t i = lowerBound; i != upperBound; i = i + 0x1)
   //it is most usefull to adjust starting value and iteration size
   for(std::uint64_t i = 0x0800000000000000; i != 0x1000000000000000; i = i + 0x1)
   {         
      *instr_raw_ptr = i;

      disasm_gxp_implicit(opt, i);  
   }
}

int main(int argc, char* argv[])
{
   //parse command line args
   /*
   std::string lowerBoundString(argv[1]);
   std::string upperBoundString(argv[2]);

   std::uint64_t lowerBound = to_uint64(lowerBoundString);
   std::uint64_t upperBound = to_uint64(upperBoundString);
   */

   //path to donor gxp file
   std::string gxp_path = std::string(argv[1]);

   //parse gxp file
   SceGxmProgram header;
   parse_gxp(gxp_path, header);
      
   //get offset to assembly section
   std::uint64_t maybe_asm_offset_abs = get_asm_offset(&header);
   std::uint64_t maybe_literal_ofset_abs = get_literal_offset(&header);

   #ifdef DEBUG_OUTPUT
   std::cout << "asm start: " << std::hex << maybe_asm_offset_abs << std::endl;
   std::cout << "asm end: " << std::hex << maybe_literal_ofset_abs << std::endl;
   std::cout << "asm size: " << std::hex << maybe_literal_ofset_abs - maybe_asm_offset_abs << std::endl;
   #endif

   //initialize options and load gxp donor file into options
   ScePsp2ShaderPerfOptions opt;
   prepare_options(gxp_path, &opt);

   //1. do bruteforcing scan - figure out bit fields and simple dependencies between them
   raw_bruteforce(&opt, &header);

   //2. tweak bits of instruction by hand to figure out complex dependencies of bits
   //std::uint64_t instr = INSTR_OP4_0x00000000_0x08000000(4, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
   //disasm_gxp_explicit(&opt, &header, instr);

   //3. enumerate different fields when layout is already known
   //enumerate_0x00000000_0x08000000(header, &opt);
   
   //cleanup gxp donor file
   destroy_gxp_data(opt.gxpData);

   return 0;
}


#include "BruteForceTests.h"

#include "InstructionEncoders.h"
#include "Disassembler.h"

void enumerate_0x00000000_0x08000000_orig(const SceGxmProgram* header, ScePsp2ShaderPerfOptions* opt)
{
   std::uint64_t* instr_raw_ptr = get_instr_ptr(opt, header, 0);

   std::uint8_t opcode = 0;
   std::uint8_t data_format = 0;
   std::uint8_t predicate = 0;

   std::uint8_t unk4 = 0;
   std::uint8_t unk3 = 0; 
   std::uint8_t swz_alt_op1 = 0;
   std::uint8_t unk2 = 0;
   std::uint8_t alt_opt0 = 0;
   std::uint8_t abs_op1 = 0;
   std::uint8_t alt_opt2 = 0;
   std::uint8_t alt_opt3 = 0;
   std::uint8_t swz_alt_op3 = 0;
   std::uint8_t op3_swz = 0;
   std::uint8_t swz_alt_op2 = 0;
   std::uint8_t unk1 = 0;
   std::uint8_t unk0 = 0; 
   std::uint8_t swz_mask16 = 0;
   std::uint8_t swz_mask32 = 0;
   std::uint8_t swz_en = 0;
   std::uint8_t abs_op2 = 0;
   std::uint8_t neg_op2 = 0;
   std::uint8_t abs_op3 = 0;
   std::uint8_t neg_op3 = 0;
   std::uint8_t opt1 = 0;
   std::uint8_t opt0 = 0;
   std::uint8_t opt2 = 0;
   std::uint8_t opt3 = 0;
   std::uint8_t op0 = 0x16; //test constant and test - offset if possible, not 0
   std::uint8_t op2_swz = 0; 
   std::uint8_t op1_swz = 0;
   std::uint8_t op1 = 0x16;
   std::uint8_t op2 = 0x16;
   std::uint8_t op3 = 0x16;

   for(unk4 = 0; unk4 <= 1; unk4++)
   {
      for(unk3 = 0; unk3 <= 1; unk3++)
      {
         for(swz_alt_op1 = 0; swz_alt_op1 <= 1; swz_alt_op1++)
         {
            for(unk2 = 0; unk2 <= 1; unk2++)
            {
               for(alt_opt0 = 0; alt_opt0 <= 1; alt_opt0++)
               {
                  for(abs_op1 = 0; abs_op1 <= 1; abs_op1++)
                  {
                     for(alt_opt2 = 0; alt_opt2 <= 1; alt_opt2++)
                     {
                        for(alt_opt3 = 0; alt_opt3 <= 1; alt_opt3++)
                        {
                           for(swz_alt_op3 = 0; swz_alt_op3 <= 1; swz_alt_op3++)
                           {
                              for(op3_swz = 0; op3_swz <= 3; op3_swz++)
                              {
                                 for(swz_alt_op2 = 0; swz_alt_op2 <= 1; swz_alt_op2++)
                                 {
                                    for(unk1 = 0; unk1 <= 1; unk1++)
                                    {
                                       for(unk0 = 0; unk0 <= 1; unk0++)
                                       {
                                          for(swz_mask16 = 0; swz_mask16 <= 1; swz_mask16++)
                                          {
                                             for(swz_mask32 = 0; swz_mask32 <= 1; swz_mask32++)
                                             {
                                                for(swz_en = 0; swz_en <= 1; swz_en++)
                                                {
                                                   for(abs_op2 = 0; abs_op2 <= 1; abs_op2++)
                                                   {
                                                      for(neg_op2 = 0; neg_op2 <= 1; neg_op2++)
                                                      {
                                                         for(abs_op3 = 0; abs_op3 <= 1; abs_op3++)
                                                         {
                                                            for(neg_op3 = 0; neg_op3 <= 1; neg_op3++)
                                                            {
                                                               for(opt1 = 0; opt1 <= 1; opt1++)
                                                               {
                                                                  for(opt0 = 0; opt0 <= 3; opt0++)
                                                                  {
                                                                     for(opt2 = 0; opt2 <= 3; opt2++)
                                                                     {
                                                                        for(opt3 = 0; opt3 <= 3; opt3++)
                                                                        {
                                                                           //for(op0 = 0; op0 <= 7; op0++)
                                                                           //{
                                                                              for(op2_swz = 0; op2_swz <= 3; op2_swz++)
                                                                              {
                                                                                 for(op1_swz = 0; op1_swz <= 3; op1_swz++)
                                                                                 {
                                                                                    //for(op1 = 0; op1 <= 7; op1++)
                                                                                    //{
                                                                                       //for(op2 = 0; op2 <= 7; op2++)
                                                                                       //{
                                                                                          //for(op3 = 0; op3 <= 7; op3++)
                                                                                          //{
                                                                                             *instr_raw_ptr = INSTR_OP4_0x00000000_0x08000000(opcode, data_format, predicate,
                                                                                                                        unk4, unk3, swz_alt_op1, unk2, alt_opt0, abs_op1, alt_opt2, alt_opt3, 
                                                                                                                        swz_alt_op3, op3_swz, swz_alt_op2, unk1, unk0, swz_mask16, swz_mask32, 
                                                                                                                        swz_en, abs_op2, neg_op2, abs_op3, neg_op3, opt1, opt0,
                                                                                                                        opt2, opt3, op0, op2_swz, op1_swz, op1, op2, op3); 
                                                                                             disasm_gxp_implicit(opt, *instr_raw_ptr);
                                                                                          //}
                                                                                       //}
                                                                                    //}
                                                                                 }
                                                                              }
                                                                           //}
                                                                        }
                                                                     }
                                                                  }
                                                               }
                                                            }
                                                         }
                                                      }
                                                   }
                                                }
                                             }
                                          }
                                       }
                                    }
                                 }
                              }
                           }
                        }
                     }
                  }
               }
            }
         }
      }
   }
}

void enumerate_0x00000000_0x08000000(const SceGxmProgram* header, ScePsp2ShaderPerfOptions* opt)
{
   std::uint64_t* instr_raw_ptr = get_instr_ptr(opt, header, 0);

   std::uint8_t opcode = 0;
   std::uint8_t data_format = 0;
   std::uint8_t predicate = 0;

   std::uint8_t unk4 = 0;
   std::uint8_t unk3 = 0; 
   std::uint8_t swz_alt_op1 = 0;
   std::uint8_t unk2 = 0;
   std::uint8_t alt_opt0 = 0;
   std::uint8_t abs_op1 = 0;
   std::uint8_t alt_opt2 = 0;
   std::uint8_t alt_opt3 = 0;
   std::uint8_t swz_alt_op3 = 0;
   std::uint8_t op3_swz = 0;
   std::uint8_t swz_alt_op2 = 0;
   std::uint8_t unk1 = 0;
   std::uint8_t unk0 = 0; 
   std::uint8_t swz_mask16 = 0;
   std::uint8_t swz_mask32 = 0;
   std::uint8_t swz_en = 0;
   std::uint8_t abs_op2 = 0;
   std::uint8_t neg_op2 = 0;
   std::uint8_t abs_op3 = 0;
   std::uint8_t neg_op3 = 0;
   std::uint8_t opt1 = 0;
   std::uint8_t opt0 = 0;
   std::uint8_t opt2 = 0;
   std::uint8_t opt3 = 0;
   std::uint8_t op0 = 0x16; //test constant and test - offset if possible, not 0
   std::uint8_t op2_swz = 0; 
   std::uint8_t op1_swz = 0;
   std::uint8_t op1 = 0x16;
   std::uint8_t op2 = 0x16;
   std::uint8_t op3 = 0x16;

   for(unk4 = 1; unk4 <= 1; unk4++) // check set bit
   {
      for(unk3 = 1; unk3 <= 1; unk3++) // check set bit
      {
         for(unk2 = 1; unk2 <= 1; unk2++) // check set bit
         {
            for(unk1 = 1; unk1 <= 1; unk1++) // check set bit
            {
               for(unk0 = 1; unk0 <= 1; unk0++) // check set bit
               {
                  ///=========
                  for(swz_alt_op1 = 0; swz_alt_op1 <= 1; swz_alt_op1++)
                  {
            
                     for(alt_opt0 = 0; alt_opt0 <= 1; alt_opt0++)
                     {
                        for(abs_op1 = 0; abs_op1 <= 1; abs_op1++)
                        {
                           for(alt_opt2 = 1; alt_opt2 <= 1; alt_opt2++) //index only
                           {
                              for(alt_opt3 = 1; alt_opt3 <= 1; alt_opt3++) // index only
                              {
                                 for(swz_alt_op3 = 0; swz_alt_op3 <= 1; swz_alt_op3++)
                                 {
                                    for(op3_swz = 0; op3_swz <= 3; op3_swz++)
                                    {
                                       for(swz_alt_op2 = 0; swz_alt_op2 <= 1; swz_alt_op2++)
                                       {    
                                          for(swz_mask16 = 0; swz_mask16 <= 1; swz_mask16++)
                                          {
                                             for(swz_mask32 = 0; swz_mask32 <= 1; swz_mask32++)
                                             {
                                                for(swz_en = 0; swz_en <= 1; swz_en++)
                                                {
                                                   for(abs_op2 = 0; abs_op2 <= 1; abs_op2++)
                                                   {
                                                      for(neg_op2 = 0; neg_op2 <= 1; neg_op2++)
                                                      {
                                                         for(abs_op3 = 0; abs_op3 <= 1; abs_op3++)
                                                         {
                                                            for(neg_op3 = 0; neg_op3 <= 1; neg_op3++)
                                                            {
                                                               for(opt1 = 0; opt1 <= 1; opt1++)
                                                               {
                                                                  for(opt0 = 3; opt0 <= 3; opt0++) //index only
                                                                  {
                                                                     for(opt2 = 3; opt2 <= 3; opt2++) //index only
                                                                     {
                                                                        for(opt3 = 3; opt3 <= 3; opt3++) //index only
                                                                        {
                                                                           //for(op0 = 0; op0 <= 7; op0++)
                                                                           //{
                                                                              for(op2_swz = 0; op2_swz <= 3; op2_swz++)
                                                                              {
                                                                                 for(op1_swz = 0; op1_swz <= 3; op1_swz++)
                                                                                 {
                                                                                    //for(op1 = 0; op1 <= 7; op1++)
                                                                                    //{
                                                                                       //for(op2 = 0; op2 <= 7; op2++)
                                                                                       //{
                                                                                          //for(op3 = 0; op3 <= 7; op3++)
                                                                                          //{
                                                                                             *instr_raw_ptr = INSTR_OP4_0x00000000_0x08000000(opcode, data_format, predicate,
                                                                                                                        unk4, unk3, swz_alt_op1, unk2, alt_opt0, abs_op1, alt_opt2, alt_opt3, 
                                                                                                                        swz_alt_op3, op3_swz, swz_alt_op2, unk1, unk0, swz_mask16, swz_mask32, 
                                                                                                                        swz_en, abs_op2, neg_op2, abs_op3, neg_op3, opt1, opt0,
                                                                                                                        opt2, opt3, op0, op2_swz, op1_swz, op1, op2, op3); 
                                                                                             disasm_gxp_implicit(opt, *instr_raw_ptr);
                                                                                          //}
                                                                                       //}
                                                                                    //}
                                                                                 }
                                                                              }
                                                                           //}
                                                                        }
                                                                     }
                                                                  }
                                                               }
                                                            }
                                                         }
                                                      }
                                                   }
                                                }
                                             }
                                          }
                                       }
                                    }
                                 }
                              }
                           }
                        }
                     }
                  }
                  ///=========
               }
            }
         }
      }
   }
}

void enumerate_0x08000000_0x10000000_swizzles(const SceGxmProgram* header, ScePsp2ShaderPerfOptions* opt)
{
   std::uint64_t* instr_raw_ptr = get_instr_ptr(opt, header, 0);

   std::uint8_t opcode1 = 1; 
   std::uint8_t opcode2 = 0;

   std::uint8_t swz_mask3 = 0; 
   std::uint8_t swz_mask2 = 0; 
   std::uint8_t swz_mask1 = 0;
   std::uint8_t swz_en = 0;

   std::uint8_t op1_swz_c3x = 0;
   std::uint8_t op1_swz_c30 = 0;
   std::uint8_t op1_swz_c2x = 0;
   std::uint8_t op1_swz_c20 = 0;
   std::uint8_t op1_swz_c1 = 0;
   std::uint8_t op1_swz_c0 = 0;

   std::uint8_t swz_alt_op2 = 0;
   std::uint8_t op2_swz = 0;

   for(swz_mask3 = 1; swz_mask3 <= 1; swz_mask3++)
   {
      for(swz_mask2 = 0; swz_mask2 <= 1; swz_mask2++)
      {
         for(swz_mask1 = 1; swz_mask1 <= 1; swz_mask1++)
         {
            for(swz_en = 0; swz_en <= 1; swz_en++)
            {
               //============
               for(op1_swz_c3x = 3; op1_swz_c3x <= 3; op1_swz_c3x++)
               {
                  for(op1_swz_c30 = 1; op1_swz_c30 <= 1; op1_swz_c30++)
                  {
                     for(op1_swz_c2x = 0; op1_swz_c2x <= 3; op1_swz_c2x++)
                     {
                        for(op1_swz_c20 = 0; op1_swz_c20 <= 1; op1_swz_c20++)
                        {
                           for(op1_swz_c1 = 0; op1_swz_c1 <= 7; op1_swz_c1++)
                           {
                              for(op1_swz_c0 = 0; op1_swz_c0 <= 7; op1_swz_c0++)
                              {
                                 for(swz_alt_op2 = 0; swz_alt_op2 <= 3; swz_alt_op2++)
                                 {
                                    for(op2_swz = 0; op2_swz <= 3; op2_swz++)
                                    {
                                       *instr_raw_ptr = INSTR_OP3_0x08000000_0x10000000(opcode1,0,
                                                                                        0,op1_swz_c3x,0,0,op1_swz_c30,0,0,
                                                                                        swz_alt_op2,op2_swz,0,swz_mask3,swz_mask2,swz_mask1,
                                                                                        swz_en,0,0,0,op1_swz_c2x,0,
                                                                                        0,0,0,op1_swz_c20,op1_swz_c1,op1_swz_c0,opcode2,0,0);

                                       disasm_gxp_implicit(opt, *instr_raw_ptr);
                                    }
                                 }
                              }
                           }
                        }
                     }
                  }
               }
               //============
            }
         }
      }
   }
}
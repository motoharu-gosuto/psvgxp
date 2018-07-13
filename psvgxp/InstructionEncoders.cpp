#include "InstructionEncoders.h"

#include "BitsetUtils.hpp"

std::uint64_t INSTR_0x00000000_0x08000000_HIGHER4(std::uint8_t opcode1, std::uint8_t data_format, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t unk3, std::uint8_t swz_alt_op1, std::uint8_t unk2, std::uint8_t alt_opt0, std::uint8_t abs_op1, std::uint8_t alt_opt2, std::uint8_t alt_opt3, std::uint8_t swz_alt_op3, std::uint8_t op3_swz, std::uint8_t swz_alt_op2, std::uint8_t unk1, std::uint8_t unk0, std::uint8_t swz_mask16, std::uint8_t swz_mask32, std::uint8_t swz_en, std::uint8_t abs_op2, std::uint8_t neg_op2, std::uint8_t abs_op3, std::uint8_t neg_op3, std::uint8_t opt1, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<1> opt1_t;
   typedef NbitsToMask<1> neg_op3_t;
   typedef NbitsToMask<1> abs_op3_t;
   typedef NbitsToMask<1> neg_op2_t;
   typedef NbitsToMask<1> abs_op2_t;
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> swz_mask32_t;
   typedef NbitsToMask<1> swz_mask16_t;
   typedef NbitsToMask<1> unk0_t;
   typedef NbitsToMask<1> unk1_t;
   typedef NbitsToMask<1> swz_alt_op2_t;
   typedef NbitsToMask<2> op3_swz_t;
   typedef NbitsToMask<1> swz_alt_op3_t;
   typedef NbitsToMask<1> alt_opt3_t;
   typedef NbitsToMask<1> alt_opt2_t;
   typedef NbitsToMask<1> abs_op1_t;
   typedef NbitsToMask<1> alt_opt0_t;
   typedef NbitsToMask<1> unk2_t;
   typedef NbitsToMask<1> swz_alt_op1_t;
   typedef NbitsToMask<1> unk3_t;
   typedef NbitsToMask<1> unk4_t;
   typedef NbitsToMask<2> predicate_t;
   typedef NbitsToMask<1> data_format_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t opt1_masked = opt1 & opt1_t::mask;
   std::uint8_t neg_op3_masked = neg_op3 & neg_op3_t::mask;
   std::uint8_t abs_op3_masked = abs_op3 & abs_op3_t::mask;
   std::uint8_t neg_op2_masked = neg_op2 & neg_op2_t::mask;
   std::uint8_t abs_op2_masked = abs_op2 & abs_op2_t::mask;
   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t swz_mask32_masked = swz_mask32 & swz_mask32_t::mask;
   std::uint8_t swz_mask16_masked = swz_mask16 & swz_mask16_t::mask;
   std::uint8_t unk0_masked = unk0 & unk0_t::mask;
   std::uint8_t unk1_masked = unk1 & unk1_t::mask;
   std::uint8_t swz_alt_op2_masked = swz_alt_op2 & swz_alt_op2_t::mask;
   std::uint8_t op3_swz_masked = op3_swz & op3_swz_t::mask;
   std::uint8_t swz_alt_op3_masked = swz_alt_op3 & swz_alt_op3_t::mask;
   std::uint8_t alt_opt3_masked = alt_opt3 & alt_opt3_t::mask;
   std::uint8_t alt_opt2_masked = alt_opt2 & alt_opt2_t::mask;
   std::uint8_t abs_op1_masked = abs_op1 & abs_op1_t::mask;
   std::uint8_t alt_opt0_masked = alt_opt0 & alt_opt0_t::mask;
   std::uint8_t unk2_masked = unk2 & unk2_t::mask;
   std::uint8_t swz_alt_op1_masked = swz_alt_op1 & swz_alt_op1_t::mask;
   std::uint8_t unk3_masked = unk3 & unk3_t::mask;
   std::uint8_t unk4_masked = unk4 & unk4_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t data_format_masked = data_format & data_format_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t opt1_shift = (std::uint64_t)opt1_masked << SumBits<opt0_t>::result;
   std::uint64_t neg_op3_shift = (std::uint64_t)neg_op3_masked << SumBits<opt1_t, opt0_t>::result;
   std::uint64_t abs_op3_shift = (std::uint64_t)abs_op3_masked << SumBits<neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t neg_op2_shift = (std::uint64_t)neg_op2_masked << SumBits<abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t abs_op2_shift = (std::uint64_t)abs_op2_masked << SumBits<neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t swz_mask32_shift = (std::uint64_t)swz_mask32_masked << SumBits<swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t swz_mask16_shift = (std::uint64_t)swz_mask16_masked << SumBits<swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t unk0_shift = (std::uint64_t)unk0_masked << SumBits<swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t unk1_shift = (std::uint64_t)unk1_masked << SumBits<unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t swz_alt_op2_shift = (std::uint64_t)swz_alt_op2_masked << SumBits<unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t op3_swz_shift = (std::uint64_t)op3_swz_masked << SumBits<swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t swz_alt_op3_shift = (std::uint64_t)swz_alt_op3_masked << SumBits<op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t alt_opt3_shift = (std::uint64_t)alt_opt3_masked << SumBits<swz_alt_op3_t, op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t alt_opt2_shift = (std::uint64_t)alt_opt2_masked << SumBits<alt_opt3_t, swz_alt_op3_t, op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t abs_op1_shift = (std::uint64_t)abs_op1_masked << SumBits<alt_opt2_t, alt_opt3_t, swz_alt_op3_t, op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t alt_opt0_shift = (std::uint64_t)alt_opt0_masked << SumBits<abs_op1_t, alt_opt2_t, alt_opt3_t, swz_alt_op3_t, op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t unk2_shift = (std::uint64_t)unk2_masked << SumBits<alt_opt0_t, abs_op1_t, alt_opt2_t, alt_opt3_t, swz_alt_op3_t, op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t swz_alt_op1_shift = (std::uint64_t)swz_alt_op1_masked << SumBits<unk2_t, alt_opt0_t, abs_op1_t, alt_opt2_t, alt_opt3_t, swz_alt_op3_t, op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t unk3_shift = (std::uint64_t)unk3_masked << SumBits<swz_alt_op1_t, unk2_t, alt_opt0_t, abs_op1_t, alt_opt2_t, alt_opt3_t, swz_alt_op3_t, op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t unk4_shift = (std::uint64_t)unk4_masked << SumBits<unk3_t, swz_alt_op1_t, unk2_t, alt_opt0_t, abs_op1_t, alt_opt2_t, alt_opt3_t, swz_alt_op3_t, op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk4_t, unk3_t, swz_alt_op1_t, unk2_t, alt_opt0_t, abs_op1_t, alt_opt2_t, alt_opt3_t, swz_alt_op3_t, op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t data_format_shift = (std::uint64_t)data_format_masked << SumBits<predicate_t, unk4_t, unk3_t, swz_alt_op1_t, unk2_t, alt_opt0_t, abs_op1_t, alt_opt2_t, alt_opt3_t, swz_alt_op3_t, op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<data_format_t, predicate_t, unk4_t, unk3_t, swz_alt_op1_t, unk2_t, alt_opt0_t, abs_op1_t, alt_opt2_t, alt_opt3_t, swz_alt_op3_t, op3_swz_t, swz_alt_op2_t, unk1_t, unk0_t, swz_mask16_t, swz_mask32_t, swz_en_t, abs_op2_t, neg_op2_t, abs_op3_t, neg_op3_t, opt1_t, opt0_t>::result;

   return opcode1_shift | data_format_shift | predicate_shift | unk4_shift | unk3_shift | swz_alt_op1_shift | unk2_shift | alt_opt0_shift | abs_op1_shift | alt_opt2_shift | alt_opt3_shift | swz_alt_op3_shift | op3_swz_shift | swz_alt_op2_shift | unk1_shift | unk0_shift | swz_mask16_shift | swz_mask32_shift | swz_en_shift | abs_op2_shift | neg_op2_shift | abs_op3_shift | neg_op3_shift | opt1_shift | opt0_shift;
}

std::uint64_t INSTR_0x00000000_0x08000000_LOWER4(std::uint8_t opt2, std::uint8_t opt3, std::uint8_t op0, std::uint8_t op2_swz, std::uint8_t op1_swz, std::uint8_t op1, std::uint8_t op2, std::uint8_t op3)
{
   typedef NbitsToMask<6> op3_t;
   typedef NbitsToMask<6> op2_t;
   typedef NbitsToMask<6> op1_t;
   typedef NbitsToMask<2> op1_swz_t;
   typedef NbitsToMask<2> op2_swz_t;
   typedef NbitsToMask<6> op0_t;
   typedef NbitsToMask<2> opt3_t;
   typedef NbitsToMask<2> opt2_t;

   std::uint8_t op3_masked = op3 & op3_t::mask;
   std::uint8_t op2_masked = op2 & op2_t::mask;
   std::uint8_t op1_masked = op1 & op1_t::mask;
   std::uint8_t op1_swz_masked = op1_swz & op1_swz_t::mask;
   std::uint8_t op2_swz_masked = op2_swz & op2_swz_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t opt3_masked = opt3 & opt3_t::mask;
   std::uint8_t opt2_masked = opt2 & opt2_t::mask;

   std::uint64_t op3_shift = (std::uint64_t)op3_masked << SumBits<>::result;
   std::uint64_t op2_shift = (std::uint64_t)op2_masked << SumBits<op3_t>::result;
   std::uint64_t op1_shift = (std::uint64_t)op1_masked << SumBits<op2_t, op3_t>::result;
   std::uint64_t op1_swz_shift = (std::uint64_t)op1_swz_masked << SumBits<op1_t, op2_t, op3_t>::result;
   std::uint64_t op2_swz_shift = (std::uint64_t)op2_swz_masked << SumBits<op1_swz_t, op1_t, op2_t, op3_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<op2_swz_t, op1_swz_t, op1_t, op2_t, op3_t>::result;
   std::uint64_t opt3_shift = (std::uint64_t)opt3_masked << SumBits<op0_t, op2_swz_t, op1_swz_t, op1_t, op2_t, op3_t>::result;
   std::uint64_t opt2_shift = (std::uint64_t)opt2_masked << SumBits<opt3_t, op0_t, op2_swz_t, op1_swz_t, op1_t, op2_t, op3_t>::result;

   return opt2_shift | opt3_shift | op0_shift | op2_swz_shift | op1_swz_shift | op1_shift | op2_shift | op3_shift;
}

std::uint64_t INSTR_0x00000000_0x08000000(std::uint8_t opcode1, std::uint8_t data_format, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t unk3, std::uint8_t swz_alt_op1, std::uint8_t unk2, std::uint8_t alt_opt0, std::uint8_t abs_op1, std::uint8_t alt_opt2, std::uint8_t alt_opt3, std::uint8_t swz_alt_op3, std::uint8_t op3_swz, std::uint8_t swz_alt_op2, std::uint8_t unk1, std::uint8_t unk0, std::uint8_t swz_mask16, std::uint8_t swz_mask32, std::uint8_t swz_en, std::uint8_t abs_op2, std::uint8_t neg_op2, std::uint8_t abs_op3, std::uint8_t neg_op3, std::uint8_t opt1, std::uint8_t opt0, std::uint8_t opt2, std::uint8_t opt3, std::uint8_t op0, std::uint8_t op2_swz, std::uint8_t op1_swz, std::uint8_t op1, std::uint8_t op2, std::uint8_t op3)
{
   std::uint64_t hi = INSTR_0x00000000_0x08000000_HIGHER4(opcode1, data_format, predicate, unk4, unk3, swz_alt_op1, unk2, alt_opt0, abs_op1, alt_opt2, alt_opt3, swz_alt_op3, op3_swz, swz_alt_op2, unk1, unk0, swz_mask16, swz_mask32, swz_en, abs_op2, neg_op2, abs_op3, neg_op3, opt1, opt0);

   std::uint64_t lo = INSTR_0x00000000_0x08000000_LOWER4(opt2, opt3, op0, op2_swz, op1_swz, op1, op2, op3);

   return (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_0x08000000_0x10000000_HIGHER4(std::uint8_t opcode1, std::uint8_t predicate, std::uint8_t unk2, std::uint8_t op1_swz_c3x, std::uint8_t unk1, std::uint8_t alt_opt0, std::uint8_t op1_swz_c30, std::uint8_t alt_opt1, std::uint8_t alt_opt2, std::uint8_t swz_alt_op2, std::uint8_t op2_swz, std::uint8_t unk0, std::uint8_t swz_mask3, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t abs_op1, std::uint8_t neg_op1, std::uint8_t abs_op2, std::uint8_t op1_swz_c2x, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<2> op1_swz_c2x_t;
   typedef NbitsToMask<1> abs_op2_t;
   typedef NbitsToMask<1> neg_op1_t;
   typedef NbitsToMask<1> abs_op1_t;
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> swz_mask1_t;
   typedef NbitsToMask<1> swz_mask2_t;
   typedef NbitsToMask<1> swz_mask3_t;
   typedef NbitsToMask<1> unk0_t;
   typedef NbitsToMask<2> op2_swz_t;
   typedef NbitsToMask<2> swz_alt_op2_t;
   typedef NbitsToMask<1> alt_opt2_t;
   typedef NbitsToMask<1> alt_opt1_t;
   typedef NbitsToMask<1> op1_swz_c30_t;
   typedef NbitsToMask<1> alt_opt0_t;
   typedef NbitsToMask<1> unk1_t;
   typedef NbitsToMask<2> op1_swz_c3x_t;
   typedef NbitsToMask<1> unk2_t;
   typedef NbitsToMask<3> predicate_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t op1_swz_c2x_masked = op1_swz_c2x & op1_swz_c2x_t::mask;
   std::uint8_t abs_op2_masked = abs_op2 & abs_op2_t::mask;
   std::uint8_t neg_op1_masked = neg_op1 & neg_op1_t::mask;
   std::uint8_t abs_op1_masked = abs_op1 & abs_op1_t::mask;
   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t swz_mask1_masked = swz_mask1 & swz_mask1_t::mask;
   std::uint8_t swz_mask2_masked = swz_mask2 & swz_mask2_t::mask;
   std::uint8_t swz_mask3_masked = swz_mask3 & swz_mask3_t::mask;
   std::uint8_t unk0_masked = unk0 & unk0_t::mask;
   std::uint8_t op2_swz_masked = op2_swz & op2_swz_t::mask;
   std::uint8_t swz_alt_op2_masked = swz_alt_op2 & swz_alt_op2_t::mask;
   std::uint8_t alt_opt2_masked = alt_opt2 & alt_opt2_t::mask;
   std::uint8_t alt_opt1_masked = alt_opt1 & alt_opt1_t::mask;
   std::uint8_t op1_swz_c30_masked = op1_swz_c30 & op1_swz_c30_t::mask;
   std::uint8_t alt_opt0_masked = alt_opt0 & alt_opt0_t::mask;
   std::uint8_t unk1_masked = unk1 & unk1_t::mask;
   std::uint8_t op1_swz_c3x_masked = op1_swz_c3x & op1_swz_c3x_t::mask;
   std::uint8_t unk2_masked = unk2 & unk2_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t op1_swz_c2x_shift = (std::uint64_t)op1_swz_c2x_masked << SumBits<opt0_t>::result;
   std::uint64_t abs_op2_shift = (std::uint64_t)abs_op2_masked << SumBits<op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t neg_op1_shift = (std::uint64_t)neg_op1_masked << SumBits<abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t abs_op1_shift = (std::uint64_t)abs_op1_masked << SumBits<neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t swz_mask1_shift = (std::uint64_t)swz_mask1_masked << SumBits<swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t swz_mask2_shift = (std::uint64_t)swz_mask2_masked << SumBits<swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t swz_mask3_shift = (std::uint64_t)swz_mask3_masked << SumBits<swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t unk0_shift = (std::uint64_t)unk0_masked << SumBits<swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t op2_swz_shift = (std::uint64_t)op2_swz_masked << SumBits<unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t swz_alt_op2_shift = (std::uint64_t)swz_alt_op2_masked << SumBits<op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t alt_opt2_shift = (std::uint64_t)alt_opt2_masked << SumBits<swz_alt_op2_t, op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t alt_opt1_shift = (std::uint64_t)alt_opt1_masked << SumBits<alt_opt2_t, swz_alt_op2_t, op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t op1_swz_c30_shift = (std::uint64_t)op1_swz_c30_masked << SumBits<alt_opt1_t, alt_opt2_t, swz_alt_op2_t, op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t alt_opt0_shift = (std::uint64_t)alt_opt0_masked << SumBits<op1_swz_c30_t, alt_opt1_t, alt_opt2_t, swz_alt_op2_t, op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t unk1_shift = (std::uint64_t)unk1_masked << SumBits<alt_opt0_t, op1_swz_c30_t, alt_opt1_t, alt_opt2_t, swz_alt_op2_t, op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t op1_swz_c3x_shift = (std::uint64_t)op1_swz_c3x_masked << SumBits<unk1_t, alt_opt0_t, op1_swz_c30_t, alt_opt1_t, alt_opt2_t, swz_alt_op2_t, op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t unk2_shift = (std::uint64_t)unk2_masked << SumBits<op1_swz_c3x_t, unk1_t, alt_opt0_t, op1_swz_c30_t, alt_opt1_t, alt_opt2_t, swz_alt_op2_t, op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk2_t, op1_swz_c3x_t, unk1_t, alt_opt0_t, op1_swz_c30_t, alt_opt1_t, alt_opt2_t, swz_alt_op2_t, op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<predicate_t, unk2_t, op1_swz_c3x_t, unk1_t, alt_opt0_t, op1_swz_c30_t, alt_opt1_t, alt_opt2_t, swz_alt_op2_t, op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;

   return opcode1_shift | predicate_shift | unk2_shift | op1_swz_c3x_shift | unk1_shift | alt_opt0_shift | op1_swz_c30_shift | alt_opt1_shift | alt_opt2_shift | swz_alt_op2_shift | op2_swz_shift | unk0_shift | swz_mask3_shift | swz_mask2_shift | swz_mask1_shift | swz_en_shift | abs_op1_shift | neg_op1_shift | abs_op2_shift | op1_swz_c2x_shift | opt0_shift;
}

std::uint64_t INSTR_0x08000000_0x10000000_LOWER4(std::uint8_t opt1, std::uint8_t opt2, std::uint8_t op0, std::uint8_t op1_swz_c20, std::uint8_t op1_swz_c1, std::uint8_t op1_swz_c0, std::uint8_t opcode2, std::uint8_t op1, std::uint8_t op2)
{
   typedef NbitsToMask<6> op2_t;
   typedef NbitsToMask<6> op1_t;
   typedef NbitsToMask<3> opcode2_t;
   typedef NbitsToMask<3> op1_swz_c0_t;
   typedef NbitsToMask<3> op1_swz_c1_t;
   typedef NbitsToMask<1> op1_swz_c20_t;
   typedef NbitsToMask<6> op0_t;
   typedef NbitsToMask<2> opt2_t;
   typedef NbitsToMask<2> opt1_t;

   std::uint8_t op2_masked = op2 & op2_t::mask;
   std::uint8_t op1_masked = op1 & op1_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t op1_swz_c0_masked = op1_swz_c0 & op1_swz_c0_t::mask;
   std::uint8_t op1_swz_c1_masked = op1_swz_c1 & op1_swz_c1_t::mask;
   std::uint8_t op1_swz_c20_masked = op1_swz_c20 & op1_swz_c20_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t opt2_masked = opt2 & opt2_t::mask;
   std::uint8_t opt1_masked = opt1 & opt1_t::mask;

   std::uint64_t op2_shift = (std::uint64_t)op2_masked << SumBits<>::result;
   std::uint64_t op1_shift = (std::uint64_t)op1_masked << SumBits<op2_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<op1_t, op2_t>::result;
   std::uint64_t op1_swz_c0_shift = (std::uint64_t)op1_swz_c0_masked << SumBits<opcode2_t, op1_t, op2_t>::result;
   std::uint64_t op1_swz_c1_shift = (std::uint64_t)op1_swz_c1_masked << SumBits<op1_swz_c0_t, opcode2_t, op1_t, op2_t>::result;
   std::uint64_t op1_swz_c20_shift = (std::uint64_t)op1_swz_c20_masked << SumBits<op1_swz_c1_t, op1_swz_c0_t, opcode2_t, op1_t, op2_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<op1_swz_c20_t, op1_swz_c1_t, op1_swz_c0_t, opcode2_t, op1_t, op2_t>::result;
   std::uint64_t opt2_shift = (std::uint64_t)opt2_masked << SumBits<op0_t, op1_swz_c20_t, op1_swz_c1_t, op1_swz_c0_t, opcode2_t, op1_t, op2_t>::result;
   std::uint64_t opt1_shift = (std::uint64_t)opt1_masked << SumBits<opt2_t, op0_t, op1_swz_c20_t, op1_swz_c1_t, op1_swz_c0_t, opcode2_t, op1_t, op2_t>::result;

   return opt1_shift | opt2_shift | op0_shift | op1_swz_c20_shift | op1_swz_c1_shift | op1_swz_c0_shift | opcode2_shift | op1_shift | op2_shift;
}

std::uint64_t INSTR_0x08000000_0x10000000(std::uint8_t opcode1, std::uint8_t predicate, std::uint8_t unk2, std::uint8_t op1_swz_c3x, std::uint8_t unk1, std::uint8_t alt_opt0, std::uint8_t op1_swz_c30, std::uint8_t alt_opt1, std::uint8_t alt_opt2, std::uint8_t swz_alt_op2, std::uint8_t op2_swz, std::uint8_t unk0, std::uint8_t swz_mask3, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t abs_op1, std::uint8_t neg_op1, std::uint8_t abs_op2, std::uint8_t op1_swz_c2x, std::uint8_t opt0, std::uint8_t opt1, std::uint8_t opt2, std::uint8_t op0, std::uint8_t op1_swz_c20, std::uint8_t op1_swz_c1, std::uint8_t op1_swz_c0, std::uint8_t opcode2, std::uint8_t op1, std::uint8_t op2)
{
   std::uint64_t hi = INSTR_0x08000000_0x10000000_HIGHER4(opcode1, predicate, unk2, op1_swz_c3x, unk1, alt_opt0, op1_swz_c30, alt_opt1, alt_opt2, swz_alt_op2, op2_swz, unk0, swz_mask3, swz_mask2, swz_mask1, swz_en, abs_op1, neg_op1, abs_op2, op1_swz_c2x, opt0);

   std::uint64_t lo = INSTR_0x08000000_0x10000000_LOWER4(opt1, opt2, op0, op1_swz_c20, op1_swz_c1, op1_swz_c0, opcode2, op1, op2);

   return (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_0x10000000_0x18000000_HIGHER4(std::uint8_t opcode1, std::uint8_t predicate, std::uint8_t unk2, std::uint8_t op1_swz_c3x, std::uint8_t unk1, std::uint8_t alt_opt0, std::uint8_t op1_swz_c30, std::uint8_t alt_opt1, std::uint8_t alt_opt2, std::uint8_t swz_alt_op2, std::uint8_t op2_swz, std::uint8_t unk0, std::uint8_t swz_mask3, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t abs_op1, std::uint8_t neg_op1, std::uint8_t abs_op2, std::uint8_t op1_swz_c2x, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<2> op1_swz_c2x_t;
   typedef NbitsToMask<1> abs_op2_t;
   typedef NbitsToMask<1> neg_op1_t;
   typedef NbitsToMask<1> abs_op1_t;
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> swz_mask1_t;
   typedef NbitsToMask<1> swz_mask2_t;
   typedef NbitsToMask<1> swz_mask3_t;
   typedef NbitsToMask<1> unk0_t;
   typedef NbitsToMask<2> op2_swz_t;
   typedef NbitsToMask<2> swz_alt_op2_t;
   typedef NbitsToMask<1> alt_opt2_t;
   typedef NbitsToMask<1> alt_opt1_t;
   typedef NbitsToMask<1> op1_swz_c30_t;
   typedef NbitsToMask<1> alt_opt0_t;
   typedef NbitsToMask<1> unk1_t;
   typedef NbitsToMask<2> op1_swz_c3x_t;
   typedef NbitsToMask<1> unk2_t;
   typedef NbitsToMask<3> predicate_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t op1_swz_c2x_masked = op1_swz_c2x & op1_swz_c2x_t::mask;
   std::uint8_t abs_op2_masked = abs_op2 & abs_op2_t::mask;
   std::uint8_t neg_op1_masked = neg_op1 & neg_op1_t::mask;
   std::uint8_t abs_op1_masked = abs_op1 & abs_op1_t::mask;
   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t swz_mask1_masked = swz_mask1 & swz_mask1_t::mask;
   std::uint8_t swz_mask2_masked = swz_mask2 & swz_mask2_t::mask;
   std::uint8_t swz_mask3_masked = swz_mask3 & swz_mask3_t::mask;
   std::uint8_t unk0_masked = unk0 & unk0_t::mask;
   std::uint8_t op2_swz_masked = op2_swz & op2_swz_t::mask;
   std::uint8_t swz_alt_op2_masked = swz_alt_op2 & swz_alt_op2_t::mask;
   std::uint8_t alt_opt2_masked = alt_opt2 & alt_opt2_t::mask;
   std::uint8_t alt_opt1_masked = alt_opt1 & alt_opt1_t::mask;
   std::uint8_t op1_swz_c30_masked = op1_swz_c30 & op1_swz_c30_t::mask;
   std::uint8_t alt_opt0_masked = alt_opt0 & alt_opt0_t::mask;
   std::uint8_t unk1_masked = unk1 & unk1_t::mask;
   std::uint8_t op1_swz_c3x_masked = op1_swz_c3x & op1_swz_c3x_t::mask;
   std::uint8_t unk2_masked = unk2 & unk2_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t op1_swz_c2x_shift = (std::uint64_t)op1_swz_c2x_masked << SumBits<opt0_t>::result;
   std::uint64_t abs_op2_shift = (std::uint64_t)abs_op2_masked << SumBits<op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t neg_op1_shift = (std::uint64_t)neg_op1_masked << SumBits<abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t abs_op1_shift = (std::uint64_t)abs_op1_masked << SumBits<neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t swz_mask1_shift = (std::uint64_t)swz_mask1_masked << SumBits<swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t swz_mask2_shift = (std::uint64_t)swz_mask2_masked << SumBits<swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t swz_mask3_shift = (std::uint64_t)swz_mask3_masked << SumBits<swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t unk0_shift = (std::uint64_t)unk0_masked << SumBits<swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t op2_swz_shift = (std::uint64_t)op2_swz_masked << SumBits<unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t swz_alt_op2_shift = (std::uint64_t)swz_alt_op2_masked << SumBits<op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t alt_opt2_shift = (std::uint64_t)alt_opt2_masked << SumBits<swz_alt_op2_t, op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t alt_opt1_shift = (std::uint64_t)alt_opt1_masked << SumBits<alt_opt2_t, swz_alt_op2_t, op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t op1_swz_c30_shift = (std::uint64_t)op1_swz_c30_masked << SumBits<alt_opt1_t, alt_opt2_t, swz_alt_op2_t, op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t alt_opt0_shift = (std::uint64_t)alt_opt0_masked << SumBits<op1_swz_c30_t, alt_opt1_t, alt_opt2_t, swz_alt_op2_t, op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t unk1_shift = (std::uint64_t)unk1_masked << SumBits<alt_opt0_t, op1_swz_c30_t, alt_opt1_t, alt_opt2_t, swz_alt_op2_t, op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t op1_swz_c3x_shift = (std::uint64_t)op1_swz_c3x_masked << SumBits<unk1_t, alt_opt0_t, op1_swz_c30_t, alt_opt1_t, alt_opt2_t, swz_alt_op2_t, op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t unk2_shift = (std::uint64_t)unk2_masked << SumBits<op1_swz_c3x_t, unk1_t, alt_opt0_t, op1_swz_c30_t, alt_opt1_t, alt_opt2_t, swz_alt_op2_t, op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk2_t, op1_swz_c3x_t, unk1_t, alt_opt0_t, op1_swz_c30_t, alt_opt1_t, alt_opt2_t, swz_alt_op2_t, op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<predicate_t, unk2_t, op1_swz_c3x_t, unk1_t, alt_opt0_t, op1_swz_c30_t, alt_opt1_t, alt_opt2_t, swz_alt_op2_t, op2_swz_t, unk0_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, abs_op1_t, neg_op1_t, abs_op2_t, op1_swz_c2x_t, opt0_t>::result;

   return opcode1_shift | predicate_shift | unk2_shift | op1_swz_c3x_shift | unk1_shift | alt_opt0_shift | op1_swz_c30_shift | alt_opt1_shift | alt_opt2_shift | swz_alt_op2_shift | op2_swz_shift | unk0_shift | swz_mask3_shift | swz_mask2_shift | swz_mask1_shift | swz_en_shift | abs_op1_shift | neg_op1_shift | abs_op2_shift | op1_swz_c2x_shift | opt0_shift;
}

std::uint64_t INSTR_0x10000000_0x18000000_LOWER4(std::uint8_t opt1, std::uint8_t opt2, std::uint8_t op0, std::uint8_t op1_swz_c20, std::uint8_t op1_swz_c1, std::uint8_t op1_swz_c0, std::uint8_t opcode2, std::uint8_t op1, std::uint8_t op2)
{
   typedef NbitsToMask<6> op2_t;
   typedef NbitsToMask<6> op1_t;
   typedef NbitsToMask<3> opcode2_t;
   typedef NbitsToMask<3> op1_swz_c0_t;
   typedef NbitsToMask<3> op1_swz_c1_t;
   typedef NbitsToMask<1> op1_swz_c20_t;
   typedef NbitsToMask<6> op0_t;
   typedef NbitsToMask<2> opt2_t;
   typedef NbitsToMask<2> opt1_t;

   std::uint8_t op2_masked = op2 & op2_t::mask;
   std::uint8_t op1_masked = op1 & op1_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t op1_swz_c0_masked = op1_swz_c0 & op1_swz_c0_t::mask;
   std::uint8_t op1_swz_c1_masked = op1_swz_c1 & op1_swz_c1_t::mask;
   std::uint8_t op1_swz_c20_masked = op1_swz_c20 & op1_swz_c20_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t opt2_masked = opt2 & opt2_t::mask;
   std::uint8_t opt1_masked = opt1 & opt1_t::mask;

   std::uint64_t op2_shift = (std::uint64_t)op2_masked << SumBits<>::result;
   std::uint64_t op1_shift = (std::uint64_t)op1_masked << SumBits<op2_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<op1_t, op2_t>::result;
   std::uint64_t op1_swz_c0_shift = (std::uint64_t)op1_swz_c0_masked << SumBits<opcode2_t, op1_t, op2_t>::result;
   std::uint64_t op1_swz_c1_shift = (std::uint64_t)op1_swz_c1_masked << SumBits<op1_swz_c0_t, opcode2_t, op1_t, op2_t>::result;
   std::uint64_t op1_swz_c20_shift = (std::uint64_t)op1_swz_c20_masked << SumBits<op1_swz_c1_t, op1_swz_c0_t, opcode2_t, op1_t, op2_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<op1_swz_c20_t, op1_swz_c1_t, op1_swz_c0_t, opcode2_t, op1_t, op2_t>::result;
   std::uint64_t opt2_shift = (std::uint64_t)opt2_masked << SumBits<op0_t, op1_swz_c20_t, op1_swz_c1_t, op1_swz_c0_t, opcode2_t, op1_t, op2_t>::result;
   std::uint64_t opt1_shift = (std::uint64_t)opt1_masked << SumBits<opt2_t, op0_t, op1_swz_c20_t, op1_swz_c1_t, op1_swz_c0_t, opcode2_t, op1_t, op2_t>::result;

   return opt1_shift | opt2_shift | op0_shift | op1_swz_c20_shift | op1_swz_c1_shift | op1_swz_c0_shift | opcode2_shift | op1_shift | op2_shift;
}

std::uint64_t INSTR_0x10000000_0x18000000(std::uint8_t opcode1, std::uint8_t predicate, std::uint8_t unk2, std::uint8_t op1_swz_c3x, std::uint8_t unk1, std::uint8_t alt_opt0, std::uint8_t op1_swz_c30, std::uint8_t alt_opt1, std::uint8_t alt_opt2, std::uint8_t swz_alt_op2, std::uint8_t op2_swz, std::uint8_t unk0, std::uint8_t swz_mask3, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t abs_op1, std::uint8_t neg_op1, std::uint8_t abs_op2, std::uint8_t op1_swz_c2x, std::uint8_t opt0, std::uint8_t opt1, std::uint8_t opt2, std::uint8_t op0, std::uint8_t op1_swz_c20, std::uint8_t op1_swz_c1, std::uint8_t op1_swz_c0, std::uint8_t opcode2, std::uint8_t op1, std::uint8_t op2)
{
   std::uint64_t hi = INSTR_0x10000000_0x18000000_HIGHER4(opcode1, predicate, unk2, op1_swz_c3x, unk1, alt_opt0, op1_swz_c30, alt_opt1, alt_opt2, swz_alt_op2, op2_swz, unk0, swz_mask3, swz_mask2, swz_mask1, swz_en, abs_op1, neg_op1, abs_op2, op1_swz_c2x, opt0);

   std::uint64_t lo = INSTR_0x10000000_0x18000000_LOWER4(opt1, opt2, op0, op1_swz_c20, op1_swz_c1, op1_swz_c0, opcode2, op1, op2);

   return (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_0x18000000_0x20000000_DOT_HIGHER4(std::uint8_t opcode1, std::uint8_t predicate, std::uint8_t unk12, std::uint8_t unk11, std::uint8_t opcode2, std::uint8_t c3_en, std::uint8_t alt_opt0, std::uint8_t unk9, std::uint8_t alt_opt1, std::uint8_t unk8, std::uint8_t unk7, std::uint8_t abs_op2, std::uint8_t swz_en_strange1, std::uint8_t swz_en_strange0, std::uint8_t unk6, std::uint8_t swz_mask3, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t neg_op1, std::uint8_t abs_op1, std::uint8_t unk5, std::uint8_t unk4, std::uint8_t unk3, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<1> unk3_t;
   typedef NbitsToMask<1> unk4_t;
   typedef NbitsToMask<1> unk5_t;
   typedef NbitsToMask<1> abs_op1_t;
   typedef NbitsToMask<1> neg_op1_t;
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> swz_mask1_t;
   typedef NbitsToMask<1> swz_mask2_t;
   typedef NbitsToMask<1> swz_mask3_t;
   typedef NbitsToMask<1> unk6_t;
   typedef NbitsToMask<1> swz_en_strange0_t;
   typedef NbitsToMask<1> swz_en_strange1_t;
   typedef NbitsToMask<1> abs_op2_t;
   typedef NbitsToMask<1> unk7_t;
   typedef NbitsToMask<1> unk8_t;
   typedef NbitsToMask<1> alt_opt1_t;
   typedef NbitsToMask<1> unk9_t;
   typedef NbitsToMask<1> alt_opt0_t;
   typedef NbitsToMask<1> c3_en_t;
   typedef NbitsToMask<1> opcode2_t;
   typedef NbitsToMask<1> unk11_t;
   typedef NbitsToMask<1> unk12_t;
   typedef NbitsToMask<3> predicate_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t unk3_masked = unk3 & unk3_t::mask;
   std::uint8_t unk4_masked = unk4 & unk4_t::mask;
   std::uint8_t unk5_masked = unk5 & unk5_t::mask;
   std::uint8_t abs_op1_masked = abs_op1 & abs_op1_t::mask;
   std::uint8_t neg_op1_masked = neg_op1 & neg_op1_t::mask;
   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t swz_mask1_masked = swz_mask1 & swz_mask1_t::mask;
   std::uint8_t swz_mask2_masked = swz_mask2 & swz_mask2_t::mask;
   std::uint8_t swz_mask3_masked = swz_mask3 & swz_mask3_t::mask;
   std::uint8_t unk6_masked = unk6 & unk6_t::mask;
   std::uint8_t swz_en_strange0_masked = swz_en_strange0 & swz_en_strange0_t::mask;
   std::uint8_t swz_en_strange1_masked = swz_en_strange1 & swz_en_strange1_t::mask;
   std::uint8_t abs_op2_masked = abs_op2 & abs_op2_t::mask;
   std::uint8_t unk7_masked = unk7 & unk7_t::mask;
   std::uint8_t unk8_masked = unk8 & unk8_t::mask;
   std::uint8_t alt_opt1_masked = alt_opt1 & alt_opt1_t::mask;
   std::uint8_t unk9_masked = unk9 & unk9_t::mask;
   std::uint8_t alt_opt0_masked = alt_opt0 & alt_opt0_t::mask;
   std::uint8_t c3_en_masked = c3_en & c3_en_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t unk11_masked = unk11 & unk11_t::mask;
   std::uint8_t unk12_masked = unk12 & unk12_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t unk3_shift = (std::uint64_t)unk3_masked << SumBits<opt0_t>::result;
   std::uint64_t unk4_shift = (std::uint64_t)unk4_masked << SumBits<unk3_t, opt0_t>::result;
   std::uint64_t unk5_shift = (std::uint64_t)unk5_masked << SumBits<unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t abs_op1_shift = (std::uint64_t)abs_op1_masked << SumBits<unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t neg_op1_shift = (std::uint64_t)neg_op1_masked << SumBits<abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<neg_op1_t, abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t swz_mask1_shift = (std::uint64_t)swz_mask1_masked << SumBits<swz_en_t, neg_op1_t, abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t swz_mask2_shift = (std::uint64_t)swz_mask2_masked << SumBits<swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t swz_mask3_shift = (std::uint64_t)swz_mask3_masked << SumBits<swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t unk6_shift = (std::uint64_t)unk6_masked << SumBits<swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t swz_en_strange0_shift = (std::uint64_t)swz_en_strange0_masked << SumBits<unk6_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t swz_en_strange1_shift = (std::uint64_t)swz_en_strange1_masked << SumBits<swz_en_strange0_t, unk6_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t abs_op2_shift = (std::uint64_t)abs_op2_masked << SumBits<swz_en_strange1_t, swz_en_strange0_t, unk6_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t unk7_shift = (std::uint64_t)unk7_masked << SumBits<abs_op2_t, swz_en_strange1_t, swz_en_strange0_t, unk6_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t unk8_shift = (std::uint64_t)unk8_masked << SumBits<unk7_t, abs_op2_t, swz_en_strange1_t, swz_en_strange0_t, unk6_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t alt_opt1_shift = (std::uint64_t)alt_opt1_masked << SumBits<unk8_t, unk7_t, abs_op2_t, swz_en_strange1_t, swz_en_strange0_t, unk6_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t unk9_shift = (std::uint64_t)unk9_masked << SumBits<alt_opt1_t, unk8_t, unk7_t, abs_op2_t, swz_en_strange1_t, swz_en_strange0_t, unk6_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t alt_opt0_shift = (std::uint64_t)alt_opt0_masked << SumBits<unk9_t, alt_opt1_t, unk8_t, unk7_t, abs_op2_t, swz_en_strange1_t, swz_en_strange0_t, unk6_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t c3_en_shift = (std::uint64_t)c3_en_masked << SumBits<alt_opt0_t, unk9_t, alt_opt1_t, unk8_t, unk7_t, abs_op2_t, swz_en_strange1_t, swz_en_strange0_t, unk6_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<c3_en_t, alt_opt0_t, unk9_t, alt_opt1_t, unk8_t, unk7_t, abs_op2_t, swz_en_strange1_t, swz_en_strange0_t, unk6_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t unk11_shift = (std::uint64_t)unk11_masked << SumBits<opcode2_t, c3_en_t, alt_opt0_t, unk9_t, alt_opt1_t, unk8_t, unk7_t, abs_op2_t, swz_en_strange1_t, swz_en_strange0_t, unk6_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t unk12_shift = (std::uint64_t)unk12_masked << SumBits<unk11_t, opcode2_t, c3_en_t, alt_opt0_t, unk9_t, alt_opt1_t, unk8_t, unk7_t, abs_op2_t, swz_en_strange1_t, swz_en_strange0_t, unk6_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk12_t, unk11_t, opcode2_t, c3_en_t, alt_opt0_t, unk9_t, alt_opt1_t, unk8_t, unk7_t, abs_op2_t, swz_en_strange1_t, swz_en_strange0_t, unk6_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<predicate_t, unk12_t, unk11_t, opcode2_t, c3_en_t, alt_opt0_t, unk9_t, alt_opt1_t, unk8_t, unk7_t, abs_op2_t, swz_en_strange1_t, swz_en_strange0_t, unk6_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, unk5_t, unk4_t, unk3_t, opt0_t>::result;

   return opcode1_shift | predicate_shift | unk12_shift | unk11_shift | opcode2_shift | c3_en_shift | alt_opt0_shift | unk9_shift | alt_opt1_shift | unk8_shift | unk7_shift | abs_op2_shift | swz_en_strange1_shift | swz_en_strange0_shift | unk6_shift | swz_mask3_shift | swz_mask2_shift | swz_mask1_shift | swz_en_shift | neg_op1_shift | abs_op1_shift | unk5_shift | unk4_shift | unk3_shift | opt0_shift;
}

std::uint64_t INSTR_0x18000000_0x20000000_DOT_LOWER4(std::uint8_t opt1, std::uint8_t op2i, std::uint8_t op0, std::uint8_t swz_alt_op2, std::uint8_t op2_swz, std::uint8_t op1_swz_c3, std::uint8_t op1_swz_c2, std::uint8_t op1_swz_c1, std::uint8_t op1_swz_c0, std::uint8_t op1)
{
   typedef NbitsToMask<6> op1_t;
   typedef NbitsToMask<3> op1_swz_c0_t;
   typedef NbitsToMask<3> op1_swz_c1_t;
   typedef NbitsToMask<3> op1_swz_c2_t;
   typedef NbitsToMask<3> op1_swz_c3_t;
   typedef NbitsToMask<2> op2_swz_t;
   typedef NbitsToMask<2> swz_alt_op2_t;
   typedef NbitsToMask<6> op0_t;
   typedef NbitsToMask<2> op2i_t;
   typedef NbitsToMask<2> opt1_t;

   std::uint8_t op1_masked = op1 & op1_t::mask;
   std::uint8_t op1_swz_c0_masked = op1_swz_c0 & op1_swz_c0_t::mask;
   std::uint8_t op1_swz_c1_masked = op1_swz_c1 & op1_swz_c1_t::mask;
   std::uint8_t op1_swz_c2_masked = op1_swz_c2 & op1_swz_c2_t::mask;
   std::uint8_t op1_swz_c3_masked = op1_swz_c3 & op1_swz_c3_t::mask;
   std::uint8_t op2_swz_masked = op2_swz & op2_swz_t::mask;
   std::uint8_t swz_alt_op2_masked = swz_alt_op2 & swz_alt_op2_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t op2i_masked = op2i & op2i_t::mask;
   std::uint8_t opt1_masked = opt1 & opt1_t::mask;

   std::uint64_t op1_shift = (std::uint64_t)op1_masked << SumBits<>::result;
   std::uint64_t op1_swz_c0_shift = (std::uint64_t)op1_swz_c0_masked << SumBits<op1_t>::result;
   std::uint64_t op1_swz_c1_shift = (std::uint64_t)op1_swz_c1_masked << SumBits<op1_swz_c0_t, op1_t>::result;
   std::uint64_t op1_swz_c2_shift = (std::uint64_t)op1_swz_c2_masked << SumBits<op1_swz_c1_t, op1_swz_c0_t, op1_t>::result;
   std::uint64_t op1_swz_c3_shift = (std::uint64_t)op1_swz_c3_masked << SumBits<op1_swz_c2_t, op1_swz_c1_t, op1_swz_c0_t, op1_t>::result;
   std::uint64_t op2_swz_shift = (std::uint64_t)op2_swz_masked << SumBits<op1_swz_c3_t, op1_swz_c2_t, op1_swz_c1_t, op1_swz_c0_t, op1_t>::result;
   std::uint64_t swz_alt_op2_shift = (std::uint64_t)swz_alt_op2_masked << SumBits<op2_swz_t, op1_swz_c3_t, op1_swz_c2_t, op1_swz_c1_t, op1_swz_c0_t, op1_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<swz_alt_op2_t, op2_swz_t, op1_swz_c3_t, op1_swz_c2_t, op1_swz_c1_t, op1_swz_c0_t, op1_t>::result;
   std::uint64_t op2i_shift = (std::uint64_t)op2i_masked << SumBits<op0_t, swz_alt_op2_t, op2_swz_t, op1_swz_c3_t, op1_swz_c2_t, op1_swz_c1_t, op1_swz_c0_t, op1_t>::result;
   std::uint64_t opt1_shift = (std::uint64_t)opt1_masked << SumBits<op2i_t, op0_t, swz_alt_op2_t, op2_swz_t, op1_swz_c3_t, op1_swz_c2_t, op1_swz_c1_t, op1_swz_c0_t, op1_t>::result;

   return opt1_shift | op2i_shift | op0_shift | swz_alt_op2_shift | op2_swz_shift | op1_swz_c3_shift | op1_swz_c2_shift | op1_swz_c1_shift | op1_swz_c0_shift | op1_shift;
}

std::uint64_t INSTR_0x18000000_0x20000000_DOT(std::uint8_t opcode1, std::uint8_t predicate, std::uint8_t unk12, std::uint8_t unk11, std::uint8_t opcode2, std::uint8_t c3_en, std::uint8_t alt_opt0, std::uint8_t unk9, std::uint8_t alt_opt1, std::uint8_t unk8, std::uint8_t unk7, std::uint8_t abs_op2, std::uint8_t swz_en_strange1, std::uint8_t swz_en_strange0, std::uint8_t unk6, std::uint8_t swz_mask3, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t neg_op1, std::uint8_t abs_op1, std::uint8_t unk5, std::uint8_t unk4, std::uint8_t unk3, std::uint8_t opt0, std::uint8_t opt1, std::uint8_t op2i, std::uint8_t op0, std::uint8_t swz_alt_op2, std::uint8_t op2_swz, std::uint8_t op1_swz_c3, std::uint8_t op1_swz_c2, std::uint8_t op1_swz_c1, std::uint8_t op1_swz_c0, std::uint8_t op1)
{
   std::uint64_t hi = INSTR_0x18000000_0x20000000_DOT_HIGHER4(opcode1, predicate, unk12, unk11, opcode2, c3_en, alt_opt0, unk9, alt_opt1, unk8, unk7, abs_op2, swz_en_strange1, swz_en_strange0, unk6, swz_mask3, swz_mask2, swz_mask1, swz_en, neg_op1, abs_op1, unk5, unk4, unk3, opt0);

   std::uint64_t lo = INSTR_0x18000000_0x20000000_DOT_LOWER4(opt1, op2i, op0, swz_alt_op2, op2_swz, op1_swz_c3, op1_swz_c2, op1_swz_c1, op1_swz_c0, op1);

   return (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_0x18000000_0x20000000_MAD_HIGHER4(std::uint8_t opcode1, std::uint8_t predicate, std::uint8_t unk6, std::uint8_t swz_alt_op3_2, std::uint8_t opcode2, std::uint8_t unk5, std::uint8_t alt_opt0, std::uint8_t unk4, std::uint8_t alt_opt1, std::uint8_t unk3, std::uint8_t unk2, std::uint8_t abs_op2, std::uint8_t op0_strange1, std::uint8_t op0_strange0, std::uint8_t unk1, std::uint8_t swz_mask3, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t neg_op1, std::uint8_t abs_op1, std::uint8_t neg_op3, std::uint8_t abs_op3, std::uint8_t swz_alt_op2_2, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<1> swz_alt_op2_2_t;
   typedef NbitsToMask<1> abs_op3_t;
   typedef NbitsToMask<1> neg_op3_t;
   typedef NbitsToMask<1> abs_op1_t;
   typedef NbitsToMask<1> neg_op1_t;
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> swz_mask1_t;
   typedef NbitsToMask<1> swz_mask2_t;
   typedef NbitsToMask<1> swz_mask3_t;
   typedef NbitsToMask<1> unk1_t;
   typedef NbitsToMask<1> op0_strange0_t;
   typedef NbitsToMask<1> op0_strange1_t;
   typedef NbitsToMask<1> abs_op2_t;
   typedef NbitsToMask<1> unk2_t;
   typedef NbitsToMask<1> unk3_t;
   typedef NbitsToMask<1> alt_opt1_t;
   typedef NbitsToMask<1> unk4_t;
   typedef NbitsToMask<1> alt_opt0_t;
   typedef NbitsToMask<1> unk5_t;
   typedef NbitsToMask<1> opcode2_t;
   typedef NbitsToMask<1> swz_alt_op3_2_t;
   typedef NbitsToMask<1> unk6_t;
   typedef NbitsToMask<3> predicate_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t swz_alt_op2_2_masked = swz_alt_op2_2 & swz_alt_op2_2_t::mask;
   std::uint8_t abs_op3_masked = abs_op3 & abs_op3_t::mask;
   std::uint8_t neg_op3_masked = neg_op3 & neg_op3_t::mask;
   std::uint8_t abs_op1_masked = abs_op1 & abs_op1_t::mask;
   std::uint8_t neg_op1_masked = neg_op1 & neg_op1_t::mask;
   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t swz_mask1_masked = swz_mask1 & swz_mask1_t::mask;
   std::uint8_t swz_mask2_masked = swz_mask2 & swz_mask2_t::mask;
   std::uint8_t swz_mask3_masked = swz_mask3 & swz_mask3_t::mask;
   std::uint8_t unk1_masked = unk1 & unk1_t::mask;
   std::uint8_t op0_strange0_masked = op0_strange0 & op0_strange0_t::mask;
   std::uint8_t op0_strange1_masked = op0_strange1 & op0_strange1_t::mask;
   std::uint8_t abs_op2_masked = abs_op2 & abs_op2_t::mask;
   std::uint8_t unk2_masked = unk2 & unk2_t::mask;
   std::uint8_t unk3_masked = unk3 & unk3_t::mask;
   std::uint8_t alt_opt1_masked = alt_opt1 & alt_opt1_t::mask;
   std::uint8_t unk4_masked = unk4 & unk4_t::mask;
   std::uint8_t alt_opt0_masked = alt_opt0 & alt_opt0_t::mask;
   std::uint8_t unk5_masked = unk5 & unk5_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t swz_alt_op3_2_masked = swz_alt_op3_2 & swz_alt_op3_2_t::mask;
   std::uint8_t unk6_masked = unk6 & unk6_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t swz_alt_op2_2_shift = (std::uint64_t)swz_alt_op2_2_masked << SumBits<opt0_t>::result;
   std::uint64_t abs_op3_shift = (std::uint64_t)abs_op3_masked << SumBits<swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t neg_op3_shift = (std::uint64_t)neg_op3_masked << SumBits<abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t abs_op1_shift = (std::uint64_t)abs_op1_masked << SumBits<neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t neg_op1_shift = (std::uint64_t)neg_op1_masked << SumBits<abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<neg_op1_t, abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t swz_mask1_shift = (std::uint64_t)swz_mask1_masked << SumBits<swz_en_t, neg_op1_t, abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t swz_mask2_shift = (std::uint64_t)swz_mask2_masked << SumBits<swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t swz_mask3_shift = (std::uint64_t)swz_mask3_masked << SumBits<swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t unk1_shift = (std::uint64_t)unk1_masked << SumBits<swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t op0_strange0_shift = (std::uint64_t)op0_strange0_masked << SumBits<unk1_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t op0_strange1_shift = (std::uint64_t)op0_strange1_masked << SumBits<op0_strange0_t, unk1_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t abs_op2_shift = (std::uint64_t)abs_op2_masked << SumBits<op0_strange1_t, op0_strange0_t, unk1_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t unk2_shift = (std::uint64_t)unk2_masked << SumBits<abs_op2_t, op0_strange1_t, op0_strange0_t, unk1_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t unk3_shift = (std::uint64_t)unk3_masked << SumBits<unk2_t, abs_op2_t, op0_strange1_t, op0_strange0_t, unk1_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t alt_opt1_shift = (std::uint64_t)alt_opt1_masked << SumBits<unk3_t, unk2_t, abs_op2_t, op0_strange1_t, op0_strange0_t, unk1_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t unk4_shift = (std::uint64_t)unk4_masked << SumBits<alt_opt1_t, unk3_t, unk2_t, abs_op2_t, op0_strange1_t, op0_strange0_t, unk1_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t alt_opt0_shift = (std::uint64_t)alt_opt0_masked << SumBits<unk4_t, alt_opt1_t, unk3_t, unk2_t, abs_op2_t, op0_strange1_t, op0_strange0_t, unk1_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t unk5_shift = (std::uint64_t)unk5_masked << SumBits<alt_opt0_t, unk4_t, alt_opt1_t, unk3_t, unk2_t, abs_op2_t, op0_strange1_t, op0_strange0_t, unk1_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<unk5_t, alt_opt0_t, unk4_t, alt_opt1_t, unk3_t, unk2_t, abs_op2_t, op0_strange1_t, op0_strange0_t, unk1_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t swz_alt_op3_2_shift = (std::uint64_t)swz_alt_op3_2_masked << SumBits<opcode2_t, unk5_t, alt_opt0_t, unk4_t, alt_opt1_t, unk3_t, unk2_t, abs_op2_t, op0_strange1_t, op0_strange0_t, unk1_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t unk6_shift = (std::uint64_t)unk6_masked << SumBits<swz_alt_op3_2_t, opcode2_t, unk5_t, alt_opt0_t, unk4_t, alt_opt1_t, unk3_t, unk2_t, abs_op2_t, op0_strange1_t, op0_strange0_t, unk1_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk6_t, swz_alt_op3_2_t, opcode2_t, unk5_t, alt_opt0_t, unk4_t, alt_opt1_t, unk3_t, unk2_t, abs_op2_t, op0_strange1_t, op0_strange0_t, unk1_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<predicate_t, unk6_t, swz_alt_op3_2_t, opcode2_t, unk5_t, alt_opt0_t, unk4_t, alt_opt1_t, unk3_t, unk2_t, abs_op2_t, op0_strange1_t, op0_strange0_t, unk1_t, swz_mask3_t, swz_mask2_t, swz_mask1_t, swz_en_t, neg_op1_t, abs_op1_t, neg_op3_t, abs_op3_t, swz_alt_op2_2_t, opt0_t>::result;

   return opcode1_shift | predicate_shift | unk6_shift | swz_alt_op3_2_shift | opcode2_shift | unk5_shift | alt_opt0_shift | unk4_shift | alt_opt1_shift | unk3_shift | unk2_shift | abs_op2_shift | op0_strange1_shift | op0_strange0_shift | unk1_shift | swz_mask3_shift | swz_mask2_shift | swz_mask1_shift | swz_en_shift | neg_op1_shift | abs_op1_shift | neg_op3_shift | abs_op3_shift | swz_alt_op2_2_shift | opt0_shift;
}

std::uint64_t INSTR_0x18000000_0x20000000_MAD_LOWER4(std::uint8_t opt1, std::uint8_t op2i, std::uint8_t op0, std::uint8_t swz_alt_op2_x, std::uint8_t op2_swz, std::uint8_t swz_alt_op3_x, std::uint8_t op3_swz, std::uint8_t op3i, std::uint8_t unk0, std::uint8_t swz_alt_op1, std::uint8_t op1_swz, std::uint8_t op1)
{
   typedef NbitsToMask<6> op1_t;
   typedef NbitsToMask<2> op1_swz_t;
   typedef NbitsToMask<3> swz_alt_op1_t;
   typedef NbitsToMask<1> unk0_t;
   typedef NbitsToMask<2> op3i_t;
   typedef NbitsToMask<2> op3_swz_t;
   typedef NbitsToMask<2> swz_alt_op3_x_t;
   typedef NbitsToMask<2> op2_swz_t;
   typedef NbitsToMask<2> swz_alt_op2_x_t;
   typedef NbitsToMask<6> op0_t;
   typedef NbitsToMask<2> op2i_t;
   typedef NbitsToMask<2> opt1_t;

   std::uint8_t op1_masked = op1 & op1_t::mask;
   std::uint8_t op1_swz_masked = op1_swz & op1_swz_t::mask;
   std::uint8_t swz_alt_op1_masked = swz_alt_op1 & swz_alt_op1_t::mask;
   std::uint8_t unk0_masked = unk0 & unk0_t::mask;
   std::uint8_t op3i_masked = op3i & op3i_t::mask;
   std::uint8_t op3_swz_masked = op3_swz & op3_swz_t::mask;
   std::uint8_t swz_alt_op3_x_masked = swz_alt_op3_x & swz_alt_op3_x_t::mask;
   std::uint8_t op2_swz_masked = op2_swz & op2_swz_t::mask;
   std::uint8_t swz_alt_op2_x_masked = swz_alt_op2_x & swz_alt_op2_x_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t op2i_masked = op2i & op2i_t::mask;
   std::uint8_t opt1_masked = opt1 & opt1_t::mask;

   std::uint64_t op1_shift = (std::uint64_t)op1_masked << SumBits<>::result;
   std::uint64_t op1_swz_shift = (std::uint64_t)op1_swz_masked << SumBits<op1_t>::result;
   std::uint64_t swz_alt_op1_shift = (std::uint64_t)swz_alt_op1_masked << SumBits<op1_swz_t, op1_t>::result;
   std::uint64_t unk0_shift = (std::uint64_t)unk0_masked << SumBits<swz_alt_op1_t, op1_swz_t, op1_t>::result;
   std::uint64_t op3i_shift = (std::uint64_t)op3i_masked << SumBits<unk0_t, swz_alt_op1_t, op1_swz_t, op1_t>::result;
   std::uint64_t op3_swz_shift = (std::uint64_t)op3_swz_masked << SumBits<op3i_t, unk0_t, swz_alt_op1_t, op1_swz_t, op1_t>::result;
   std::uint64_t swz_alt_op3_x_shift = (std::uint64_t)swz_alt_op3_x_masked << SumBits<op3_swz_t, op3i_t, unk0_t, swz_alt_op1_t, op1_swz_t, op1_t>::result;
   std::uint64_t op2_swz_shift = (std::uint64_t)op2_swz_masked << SumBits<swz_alt_op3_x_t, op3_swz_t, op3i_t, unk0_t, swz_alt_op1_t, op1_swz_t, op1_t>::result;
   std::uint64_t swz_alt_op2_x_shift = (std::uint64_t)swz_alt_op2_x_masked << SumBits<op2_swz_t, swz_alt_op3_x_t, op3_swz_t, op3i_t, unk0_t, swz_alt_op1_t, op1_swz_t, op1_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<swz_alt_op2_x_t, op2_swz_t, swz_alt_op3_x_t, op3_swz_t, op3i_t, unk0_t, swz_alt_op1_t, op1_swz_t, op1_t>::result;
   std::uint64_t op2i_shift = (std::uint64_t)op2i_masked << SumBits<op0_t, swz_alt_op2_x_t, op2_swz_t, swz_alt_op3_x_t, op3_swz_t, op3i_t, unk0_t, swz_alt_op1_t, op1_swz_t, op1_t>::result;
   std::uint64_t opt1_shift = (std::uint64_t)opt1_masked << SumBits<op2i_t, op0_t, swz_alt_op2_x_t, op2_swz_t, swz_alt_op3_x_t, op3_swz_t, op3i_t, unk0_t, swz_alt_op1_t, op1_swz_t, op1_t>::result;

   return opt1_shift | op2i_shift | op0_shift | swz_alt_op2_x_shift | op2_swz_shift | swz_alt_op3_x_shift | op3_swz_shift | op3i_shift | unk0_shift | swz_alt_op1_shift | op1_swz_shift | op1_shift;
}

std::uint64_t INSTR_0x18000000_0x20000000_MAD(std::uint8_t opcode1, std::uint8_t predicate, std::uint8_t unk6, std::uint8_t swz_alt_op3_2, std::uint8_t opcode2, std::uint8_t unk5, std::uint8_t alt_opt0, std::uint8_t unk4, std::uint8_t alt_opt1, std::uint8_t unk3, std::uint8_t unk2, std::uint8_t abs_op2, std::uint8_t op0_strange1, std::uint8_t op0_strange0, std::uint8_t unk1, std::uint8_t swz_mask3, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t neg_op1, std::uint8_t abs_op1, std::uint8_t neg_op3, std::uint8_t abs_op3, std::uint8_t swz_alt_op2_2, std::uint8_t opt0, std::uint8_t opt1, std::uint8_t op2i, std::uint8_t op0, std::uint8_t swz_alt_op2_x, std::uint8_t op2_swz, std::uint8_t swz_alt_op3_x, std::uint8_t op3_swz, std::uint8_t op3i, std::uint8_t unk0, std::uint8_t swz_alt_op1, std::uint8_t op1_swz, std::uint8_t op1)
{
   std::uint64_t hi = INSTR_0x18000000_0x20000000_MAD_HIGHER4(opcode1, predicate, unk6, swz_alt_op3_2, opcode2, unk5, alt_opt0, unk4, alt_opt1, unk3, unk2, abs_op2, op0_strange1, op0_strange0, unk1, swz_mask3, swz_mask2, swz_mask1, swz_en, neg_op1, abs_op1, neg_op3, abs_op3, swz_alt_op2_2, opt0);

   std::uint64_t lo = INSTR_0x18000000_0x20000000_MAD_LOWER4(opt1, op2i, op0, swz_alt_op2_x, op2_swz, swz_alt_op3_x, op3_swz, op3i, unk0, swz_alt_op1, op1_swz, op1);

   return (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_0x20000000_0x28000000_MAD_IRII_HIGHER4(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<2> op2i_swz_t;
   typedef NbitsToMask<2> swz_alt_op2i_x_t;
   typedef NbitsToMask<2> op1i_swz_t;
   typedef NbitsToMask<2> swz_alt_op1i_t;
   typedef NbitsToMask<1> op_sel1_t;
   typedef NbitsToMask<1> gr_sel_t;
   typedef NbitsToMask<3> opcode2_t;
   typedef NbitsToMask<1> neg_opN_t;
   typedef NbitsToMask<2> opN_swz_t;
   typedef NbitsToMask<2> swz_alt_opN_t;
   typedef NbitsToMask<1> swz_alt_op2i_2_t;
   typedef NbitsToMask<1> data_format_t;
   typedef NbitsToMask<1> op_sel2_t;
   typedef NbitsToMask<1> unk4_t;
   typedef NbitsToMask<2> predicate_t;
   typedef NbitsToMask<1> neg_op2i_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t op2i_swz_masked = op2i_swz & op2i_swz_t::mask;
   std::uint8_t swz_alt_op2i_x_masked = swz_alt_op2i_x & swz_alt_op2i_x_t::mask;
   std::uint8_t op1i_swz_masked = op1i_swz & op1i_swz_t::mask;
   std::uint8_t swz_alt_op1i_masked = swz_alt_op1i & swz_alt_op1i_t::mask;
   std::uint8_t op_sel1_masked = op_sel1 & op_sel1_t::mask;
   std::uint8_t gr_sel_masked = gr_sel & gr_sel_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t neg_opN_masked = neg_opN & neg_opN_t::mask;
   std::uint8_t opN_swz_masked = opN_swz & opN_swz_t::mask;
   std::uint8_t swz_alt_opN_masked = swz_alt_opN & swz_alt_opN_t::mask;
   std::uint8_t swz_alt_op2i_2_masked = swz_alt_op2i_2 & swz_alt_op2i_2_t::mask;
   std::uint8_t data_format_masked = data_format & data_format_t::mask;
   std::uint8_t op_sel2_masked = op_sel2 & op_sel2_t::mask;
   std::uint8_t unk4_masked = unk4 & unk4_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t neg_op2i_masked = neg_op2i & neg_op2i_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t op2i_swz_shift = (std::uint64_t)op2i_swz_masked << SumBits<opt0_t>::result;
   std::uint64_t swz_alt_op2i_x_shift = (std::uint64_t)swz_alt_op2i_x_masked << SumBits<op2i_swz_t, opt0_t>::result;
   std::uint64_t op1i_swz_shift = (std::uint64_t)op1i_swz_masked << SumBits<swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op1i_shift = (std::uint64_t)swz_alt_op1i_masked << SumBits<op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel1_shift = (std::uint64_t)op_sel1_masked << SumBits<swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t gr_sel_shift = (std::uint64_t)gr_sel_masked << SumBits<op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_opN_shift = (std::uint64_t)neg_opN_masked << SumBits<opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opN_swz_shift = (std::uint64_t)opN_swz_masked << SumBits<neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_opN_shift = (std::uint64_t)swz_alt_opN_masked << SumBits<opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op2i_2_shift = (std::uint64_t)swz_alt_op2i_2_masked << SumBits<swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t data_format_shift = (std::uint64_t)data_format_masked << SumBits<swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel2_shift = (std::uint64_t)op_sel2_masked << SumBits<data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t unk4_shift = (std::uint64_t)unk4_masked << SumBits<op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_op2i_shift = (std::uint64_t)neg_op2i_masked << SumBits<predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<neg_op2i_t, predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;

   return opcode1_shift | neg_op2i_shift | predicate_shift | unk4_shift | op_sel2_shift | data_format_shift | swz_alt_op2i_2_shift | swz_alt_opN_shift | opN_swz_shift | neg_opN_shift | opcode2_shift | gr_sel_shift | op_sel1_shift | swz_alt_op1i_shift | op1i_swz_shift | swz_alt_op2i_x_shift | op2i_swz_shift | opt0_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_MAD_IRII_LOWER4(std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t op3i, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   typedef NbitsToMask<7> opN_t;
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> swz_mask1_t;
   typedef NbitsToMask<1> swz_mask2_t;
   typedef NbitsToMask<2> op1i_t;
   typedef NbitsToMask<2> op2i_t;
   typedef NbitsToMask<2> op3i_t;
   typedef NbitsToMask<2> opN_sel_t;
   typedef NbitsToMask<3> opcode3_t;
   typedef NbitsToMask<7> op0_t;
   typedef NbitsToMask<2> op0i_t;
   typedef NbitsToMask<2> optN_t;

   std::uint8_t opN_masked = opN & opN_t::mask;
   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t swz_mask1_masked = swz_mask1 & swz_mask1_t::mask;
   std::uint8_t swz_mask2_masked = swz_mask2 & swz_mask2_t::mask;
   std::uint8_t op1i_masked = op1i & op1i_t::mask;
   std::uint8_t op2i_masked = op2i & op2i_t::mask;
   std::uint8_t op3i_masked = op3i & op3i_t::mask;
   std::uint8_t opN_sel_masked = opN_sel & opN_sel_t::mask;
   std::uint8_t opcode3_masked = opcode3 & opcode3_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t op0i_masked = op0i & op0i_t::mask;
   std::uint8_t optN_masked = optN & optN_t::mask;

   std::uint64_t opN_shift = (std::uint64_t)opN_masked << SumBits<>::result;
   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<opN_t>::result;
   std::uint64_t swz_mask1_shift = (std::uint64_t)swz_mask1_masked << SumBits<swz_en_t, opN_t>::result;
   std::uint64_t swz_mask2_shift = (std::uint64_t)swz_mask2_masked << SumBits<swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op1i_shift = (std::uint64_t)op1i_masked << SumBits<swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op2i_shift = (std::uint64_t)op2i_masked << SumBits<op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op3i_shift = (std::uint64_t)op3i_masked << SumBits<op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opN_sel_shift = (std::uint64_t)opN_sel_masked << SumBits<op3i_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opcode3_shift = (std::uint64_t)opcode3_masked << SumBits<opN_sel_t, op3i_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<opcode3_t, opN_sel_t, op3i_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0i_shift = (std::uint64_t)op0i_masked << SumBits<op0_t, opcode3_t, opN_sel_t, op3i_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t optN_shift = (std::uint64_t)optN_masked << SumBits<op0i_t, op0_t, opcode3_t, opN_sel_t, op3i_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;

   return optN_shift | op0i_shift | op0_shift | opcode3_shift | opN_sel_shift | op3i_shift | op2i_shift | op1i_shift | swz_mask2_shift | swz_mask1_shift | swz_en_shift | opN_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_MAD_IRII(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0, std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t op3i, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   std::uint64_t hi = INSTR_0x20000000_0x28000000_MAD_IRII_HIGHER4(opcode1, neg_op2i, predicate, unk4, op_sel2, data_format, swz_alt_op2i_2, swz_alt_opN, opN_swz, neg_opN, opcode2, gr_sel, op_sel1, swz_alt_op1i, op1i_swz, swz_alt_op2i_x, op2i_swz, opt0);

   std::uint64_t lo = INSTR_0x20000000_0x28000000_MAD_IRII_LOWER4(optN, op0i, op0, opcode3, opN_sel, op3i, op2i, op1i, swz_mask2, swz_mask1, swz_en, opN);

   return (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_0x20000000_0x28000000_DOT_IRI_HIGHER4(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<2> op2i_swz_t;
   typedef NbitsToMask<2> swz_alt_op2i_x_t;
   typedef NbitsToMask<2> op1i_swz_t;
   typedef NbitsToMask<2> swz_alt_op1i_t;
   typedef NbitsToMask<1> op_sel1_t;
   typedef NbitsToMask<1> gr_sel_t;
   typedef NbitsToMask<3> opcode2_t;
   typedef NbitsToMask<1> neg_opN_t;
   typedef NbitsToMask<2> opN_swz_t;
   typedef NbitsToMask<2> swz_alt_opN_t;
   typedef NbitsToMask<1> swz_alt_op2i_2_t;
   typedef NbitsToMask<1> data_format_t;
   typedef NbitsToMask<1> op_sel2_t;
   typedef NbitsToMask<1> unk4_t;
   typedef NbitsToMask<2> predicate_t;
   typedef NbitsToMask<1> neg_op2i_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t op2i_swz_masked = op2i_swz & op2i_swz_t::mask;
   std::uint8_t swz_alt_op2i_x_masked = swz_alt_op2i_x & swz_alt_op2i_x_t::mask;
   std::uint8_t op1i_swz_masked = op1i_swz & op1i_swz_t::mask;
   std::uint8_t swz_alt_op1i_masked = swz_alt_op1i & swz_alt_op1i_t::mask;
   std::uint8_t op_sel1_masked = op_sel1 & op_sel1_t::mask;
   std::uint8_t gr_sel_masked = gr_sel & gr_sel_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t neg_opN_masked = neg_opN & neg_opN_t::mask;
   std::uint8_t opN_swz_masked = opN_swz & opN_swz_t::mask;
   std::uint8_t swz_alt_opN_masked = swz_alt_opN & swz_alt_opN_t::mask;
   std::uint8_t swz_alt_op2i_2_masked = swz_alt_op2i_2 & swz_alt_op2i_2_t::mask;
   std::uint8_t data_format_masked = data_format & data_format_t::mask;
   std::uint8_t op_sel2_masked = op_sel2 & op_sel2_t::mask;
   std::uint8_t unk4_masked = unk4 & unk4_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t neg_op2i_masked = neg_op2i & neg_op2i_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t op2i_swz_shift = (std::uint64_t)op2i_swz_masked << SumBits<opt0_t>::result;
   std::uint64_t swz_alt_op2i_x_shift = (std::uint64_t)swz_alt_op2i_x_masked << SumBits<op2i_swz_t, opt0_t>::result;
   std::uint64_t op1i_swz_shift = (std::uint64_t)op1i_swz_masked << SumBits<swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op1i_shift = (std::uint64_t)swz_alt_op1i_masked << SumBits<op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel1_shift = (std::uint64_t)op_sel1_masked << SumBits<swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t gr_sel_shift = (std::uint64_t)gr_sel_masked << SumBits<op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_opN_shift = (std::uint64_t)neg_opN_masked << SumBits<opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opN_swz_shift = (std::uint64_t)opN_swz_masked << SumBits<neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_opN_shift = (std::uint64_t)swz_alt_opN_masked << SumBits<opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op2i_2_shift = (std::uint64_t)swz_alt_op2i_2_masked << SumBits<swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t data_format_shift = (std::uint64_t)data_format_masked << SumBits<swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel2_shift = (std::uint64_t)op_sel2_masked << SumBits<data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t unk4_shift = (std::uint64_t)unk4_masked << SumBits<op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_op2i_shift = (std::uint64_t)neg_op2i_masked << SumBits<predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<neg_op2i_t, predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;

   return opcode1_shift | neg_op2i_shift | predicate_shift | unk4_shift | op_sel2_shift | data_format_shift | swz_alt_op2i_2_shift | swz_alt_opN_shift | opN_swz_shift | neg_opN_shift | opcode2_shift | gr_sel_shift | op_sel1_shift | swz_alt_op1i_shift | op1i_swz_shift | swz_alt_op2i_x_shift | op2i_swz_shift | opt0_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_DOT_IRI_LOWER4(std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   typedef NbitsToMask<7> opN_t;
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> swz_mask1_t;
   typedef NbitsToMask<1> swz_mask2_t;
   typedef NbitsToMask<2> op1i_t;
   typedef NbitsToMask<2> op2i_t;
   typedef NbitsToMask<2> unused0_t;
   typedef NbitsToMask<2> opN_sel_t;
   typedef NbitsToMask<3> opcode3_t;
   typedef NbitsToMask<7> op0_t;
   typedef NbitsToMask<2> op0i_t;
   typedef NbitsToMask<2> optN_t;

   std::uint8_t opN_masked = opN & opN_t::mask;
   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t swz_mask1_masked = swz_mask1 & swz_mask1_t::mask;
   std::uint8_t swz_mask2_masked = swz_mask2 & swz_mask2_t::mask;
   std::uint8_t op1i_masked = op1i & op1i_t::mask;
   std::uint8_t op2i_masked = op2i & op2i_t::mask;
   std::uint8_t unused0_masked = unused0 & unused0_t::mask;
   std::uint8_t opN_sel_masked = opN_sel & opN_sel_t::mask;
   std::uint8_t opcode3_masked = opcode3 & opcode3_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t op0i_masked = op0i & op0i_t::mask;
   std::uint8_t optN_masked = optN & optN_t::mask;

   std::uint64_t opN_shift = (std::uint64_t)opN_masked << SumBits<>::result;
   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<opN_t>::result;
   std::uint64_t swz_mask1_shift = (std::uint64_t)swz_mask1_masked << SumBits<swz_en_t, opN_t>::result;
   std::uint64_t swz_mask2_shift = (std::uint64_t)swz_mask2_masked << SumBits<swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op1i_shift = (std::uint64_t)op1i_masked << SumBits<swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op2i_shift = (std::uint64_t)op2i_masked << SumBits<op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t unused0_shift = (std::uint64_t)unused0_masked << SumBits<op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opN_sel_shift = (std::uint64_t)opN_sel_masked << SumBits<unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opcode3_shift = (std::uint64_t)opcode3_masked << SumBits<opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<opcode3_t, opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0i_shift = (std::uint64_t)op0i_masked << SumBits<op0_t, opcode3_t, opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t optN_shift = (std::uint64_t)optN_masked << SumBits<op0i_t, op0_t, opcode3_t, opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;

   return optN_shift | op0i_shift | op0_shift | opcode3_shift | opN_sel_shift | unused0_shift | op2i_shift | op1i_shift | swz_mask2_shift | swz_mask1_shift | swz_en_shift | opN_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_DOT_IRI(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0, std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   std::uint64_t hi = INSTR_0x20000000_0x28000000_DOT_IRI_HIGHER4(opcode1, neg_op2i, predicate, unk4, op_sel2, data_format, swz_alt_op2i_2, swz_alt_opN, opN_swz, neg_opN, opcode2, gr_sel, op_sel1, swz_alt_op1i, op1i_swz, swz_alt_op2i_x, op2i_swz, opt0);

   std::uint64_t lo = INSTR_0x20000000_0x28000000_DOT_IRI_LOWER4(optN, op0i, op0, opcode3, opN_sel, unused0, op2i, op1i, swz_mask2, swz_mask1, swz_en, opN);

   return (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_0x20000000_0x28000000_DOT_IRR_EXP_HIGHER4(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<2> op2i_swz_t;
   typedef NbitsToMask<2> swz_alt_op2i_x_t;
   typedef NbitsToMask<2> op1i_swz_t;
   typedef NbitsToMask<2> swz_alt_op1i_t;
   typedef NbitsToMask<1> op_sel1_t;
   typedef NbitsToMask<1> gr_sel_t;
   typedef NbitsToMask<3> opcode2_t;
   typedef NbitsToMask<1> neg_opN_t;
   typedef NbitsToMask<2> opN_swz_t;
   typedef NbitsToMask<2> swz_alt_opN_t;
   typedef NbitsToMask<1> swz_alt_op2i_2_t;
   typedef NbitsToMask<1> data_format_t;
   typedef NbitsToMask<1> op_sel2_t;
   typedef NbitsToMask<1> unk4_t;
   typedef NbitsToMask<2> predicate_t;
   typedef NbitsToMask<1> neg_op2i_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t op2i_swz_masked = op2i_swz & op2i_swz_t::mask;
   std::uint8_t swz_alt_op2i_x_masked = swz_alt_op2i_x & swz_alt_op2i_x_t::mask;
   std::uint8_t op1i_swz_masked = op1i_swz & op1i_swz_t::mask;
   std::uint8_t swz_alt_op1i_masked = swz_alt_op1i & swz_alt_op1i_t::mask;
   std::uint8_t op_sel1_masked = op_sel1 & op_sel1_t::mask;
   std::uint8_t gr_sel_masked = gr_sel & gr_sel_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t neg_opN_masked = neg_opN & neg_opN_t::mask;
   std::uint8_t opN_swz_masked = opN_swz & opN_swz_t::mask;
   std::uint8_t swz_alt_opN_masked = swz_alt_opN & swz_alt_opN_t::mask;
   std::uint8_t swz_alt_op2i_2_masked = swz_alt_op2i_2 & swz_alt_op2i_2_t::mask;
   std::uint8_t data_format_masked = data_format & data_format_t::mask;
   std::uint8_t op_sel2_masked = op_sel2 & op_sel2_t::mask;
   std::uint8_t unk4_masked = unk4 & unk4_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t neg_op2i_masked = neg_op2i & neg_op2i_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t op2i_swz_shift = (std::uint64_t)op2i_swz_masked << SumBits<opt0_t>::result;
   std::uint64_t swz_alt_op2i_x_shift = (std::uint64_t)swz_alt_op2i_x_masked << SumBits<op2i_swz_t, opt0_t>::result;
   std::uint64_t op1i_swz_shift = (std::uint64_t)op1i_swz_masked << SumBits<swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op1i_shift = (std::uint64_t)swz_alt_op1i_masked << SumBits<op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel1_shift = (std::uint64_t)op_sel1_masked << SumBits<swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t gr_sel_shift = (std::uint64_t)gr_sel_masked << SumBits<op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_opN_shift = (std::uint64_t)neg_opN_masked << SumBits<opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opN_swz_shift = (std::uint64_t)opN_swz_masked << SumBits<neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_opN_shift = (std::uint64_t)swz_alt_opN_masked << SumBits<opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op2i_2_shift = (std::uint64_t)swz_alt_op2i_2_masked << SumBits<swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t data_format_shift = (std::uint64_t)data_format_masked << SumBits<swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel2_shift = (std::uint64_t)op_sel2_masked << SumBits<data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t unk4_shift = (std::uint64_t)unk4_masked << SumBits<op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_op2i_shift = (std::uint64_t)neg_op2i_masked << SumBits<predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<neg_op2i_t, predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;

   return opcode1_shift | neg_op2i_shift | predicate_shift | unk4_shift | op_sel2_shift | data_format_shift | swz_alt_op2i_2_shift | swz_alt_opN_shift | opN_swz_shift | neg_opN_shift | opcode2_shift | gr_sel_shift | op_sel1_shift | swz_alt_op1i_shift | op1i_swz_shift | swz_alt_op2i_x_shift | op2i_swz_shift | opt0_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_DOT_IRR_EXP_LOWER4(std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   typedef NbitsToMask<7> opN_t;
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> swz_mask1_t;
   typedef NbitsToMask<1> swz_mask2_t;
   typedef NbitsToMask<2> op1i_t;
   typedef NbitsToMask<2> op2i_t;
   typedef NbitsToMask<2> unused0_t;
   typedef NbitsToMask<2> opN_sel_t;
   typedef NbitsToMask<3> opcode3_t;
   typedef NbitsToMask<7> op0_t;
   typedef NbitsToMask<2> op0i_t;
   typedef NbitsToMask<2> optN_t;

   std::uint8_t opN_masked = opN & opN_t::mask;
   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t swz_mask1_masked = swz_mask1 & swz_mask1_t::mask;
   std::uint8_t swz_mask2_masked = swz_mask2 & swz_mask2_t::mask;
   std::uint8_t op1i_masked = op1i & op1i_t::mask;
   std::uint8_t op2i_masked = op2i & op2i_t::mask;
   std::uint8_t unused0_masked = unused0 & unused0_t::mask;
   std::uint8_t opN_sel_masked = opN_sel & opN_sel_t::mask;
   std::uint8_t opcode3_masked = opcode3 & opcode3_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t op0i_masked = op0i & op0i_t::mask;
   std::uint8_t optN_masked = optN & optN_t::mask;

   std::uint64_t opN_shift = (std::uint64_t)opN_masked << SumBits<>::result;
   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<opN_t>::result;
   std::uint64_t swz_mask1_shift = (std::uint64_t)swz_mask1_masked << SumBits<swz_en_t, opN_t>::result;
   std::uint64_t swz_mask2_shift = (std::uint64_t)swz_mask2_masked << SumBits<swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op1i_shift = (std::uint64_t)op1i_masked << SumBits<swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op2i_shift = (std::uint64_t)op2i_masked << SumBits<op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t unused0_shift = (std::uint64_t)unused0_masked << SumBits<op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opN_sel_shift = (std::uint64_t)opN_sel_masked << SumBits<unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opcode3_shift = (std::uint64_t)opcode3_masked << SumBits<opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<opcode3_t, opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0i_shift = (std::uint64_t)op0i_masked << SumBits<op0_t, opcode3_t, opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t optN_shift = (std::uint64_t)optN_masked << SumBits<op0i_t, op0_t, opcode3_t, opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;

   return optN_shift | op0i_shift | op0_shift | opcode3_shift | opN_sel_shift | unused0_shift | op2i_shift | op1i_shift | swz_mask2_shift | swz_mask1_shift | swz_en_shift | opN_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_DOT_IRR_EXP(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0, std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   std::uint64_t hi = INSTR_0x20000000_0x28000000_DOT_IRR_EXP_HIGHER4(opcode1, neg_op2i, predicate, unk4, op_sel2, data_format, swz_alt_op2i_2, swz_alt_opN, opN_swz, neg_opN, opcode2, gr_sel, op_sel1, swz_alt_op1i, op1i_swz, swz_alt_op2i_x, op2i_swz, opt0);

   std::uint64_t lo = INSTR_0x20000000_0x28000000_DOT_IRR_EXP_LOWER4(optN, op0i, op0, opcode3, opN_sel, unused0, op2i, op1i, swz_mask2, swz_mask1, swz_en, opN);

   return (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_0x20000000_0x28000000_MUL_IRI_HIGHER4(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<2> op2i_swz_t;
   typedef NbitsToMask<2> swz_alt_op2i_x_t;
   typedef NbitsToMask<2> op1i_swz_t;
   typedef NbitsToMask<2> swz_alt_op1i_t;
   typedef NbitsToMask<1> op_sel1_t;
   typedef NbitsToMask<1> gr_sel_t;
   typedef NbitsToMask<3> opcode2_t;
   typedef NbitsToMask<1> neg_opN_t;
   typedef NbitsToMask<2> opN_swz_t;
   typedef NbitsToMask<2> swz_alt_opN_t;
   typedef NbitsToMask<1> swz_alt_op2i_2_t;
   typedef NbitsToMask<1> data_format_t;
   typedef NbitsToMask<1> op_sel2_t;
   typedef NbitsToMask<1> unk4_t;
   typedef NbitsToMask<2> predicate_t;
   typedef NbitsToMask<1> neg_op2i_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t op2i_swz_masked = op2i_swz & op2i_swz_t::mask;
   std::uint8_t swz_alt_op2i_x_masked = swz_alt_op2i_x & swz_alt_op2i_x_t::mask;
   std::uint8_t op1i_swz_masked = op1i_swz & op1i_swz_t::mask;
   std::uint8_t swz_alt_op1i_masked = swz_alt_op1i & swz_alt_op1i_t::mask;
   std::uint8_t op_sel1_masked = op_sel1 & op_sel1_t::mask;
   std::uint8_t gr_sel_masked = gr_sel & gr_sel_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t neg_opN_masked = neg_opN & neg_opN_t::mask;
   std::uint8_t opN_swz_masked = opN_swz & opN_swz_t::mask;
   std::uint8_t swz_alt_opN_masked = swz_alt_opN & swz_alt_opN_t::mask;
   std::uint8_t swz_alt_op2i_2_masked = swz_alt_op2i_2 & swz_alt_op2i_2_t::mask;
   std::uint8_t data_format_masked = data_format & data_format_t::mask;
   std::uint8_t op_sel2_masked = op_sel2 & op_sel2_t::mask;
   std::uint8_t unk4_masked = unk4 & unk4_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t neg_op2i_masked = neg_op2i & neg_op2i_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t op2i_swz_shift = (std::uint64_t)op2i_swz_masked << SumBits<opt0_t>::result;
   std::uint64_t swz_alt_op2i_x_shift = (std::uint64_t)swz_alt_op2i_x_masked << SumBits<op2i_swz_t, opt0_t>::result;
   std::uint64_t op1i_swz_shift = (std::uint64_t)op1i_swz_masked << SumBits<swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op1i_shift = (std::uint64_t)swz_alt_op1i_masked << SumBits<op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel1_shift = (std::uint64_t)op_sel1_masked << SumBits<swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t gr_sel_shift = (std::uint64_t)gr_sel_masked << SumBits<op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_opN_shift = (std::uint64_t)neg_opN_masked << SumBits<opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opN_swz_shift = (std::uint64_t)opN_swz_masked << SumBits<neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_opN_shift = (std::uint64_t)swz_alt_opN_masked << SumBits<opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op2i_2_shift = (std::uint64_t)swz_alt_op2i_2_masked << SumBits<swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t data_format_shift = (std::uint64_t)data_format_masked << SumBits<swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel2_shift = (std::uint64_t)op_sel2_masked << SumBits<data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t unk4_shift = (std::uint64_t)unk4_masked << SumBits<op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_op2i_shift = (std::uint64_t)neg_op2i_masked << SumBits<predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<neg_op2i_t, predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;

   return opcode1_shift | neg_op2i_shift | predicate_shift | unk4_shift | op_sel2_shift | data_format_shift | swz_alt_op2i_2_shift | swz_alt_opN_shift | opN_swz_shift | neg_opN_shift | opcode2_shift | gr_sel_shift | op_sel1_shift | swz_alt_op1i_shift | op1i_swz_shift | swz_alt_op2i_x_shift | op2i_swz_shift | opt0_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_MUL_IRI_LOWER4(std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   typedef NbitsToMask<7> opN_t;
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> swz_mask1_t;
   typedef NbitsToMask<1> swz_mask2_t;
   typedef NbitsToMask<2> op1i_t;
   typedef NbitsToMask<2> op2i_t;
   typedef NbitsToMask<2> unused0_t;
   typedef NbitsToMask<2> opN_sel_t;
   typedef NbitsToMask<3> opcode3_t;
   typedef NbitsToMask<7> op0_t;
   typedef NbitsToMask<2> op0i_t;
   typedef NbitsToMask<2> optN_t;

   std::uint8_t opN_masked = opN & opN_t::mask;
   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t swz_mask1_masked = swz_mask1 & swz_mask1_t::mask;
   std::uint8_t swz_mask2_masked = swz_mask2 & swz_mask2_t::mask;
   std::uint8_t op1i_masked = op1i & op1i_t::mask;
   std::uint8_t op2i_masked = op2i & op2i_t::mask;
   std::uint8_t unused0_masked = unused0 & unused0_t::mask;
   std::uint8_t opN_sel_masked = opN_sel & opN_sel_t::mask;
   std::uint8_t opcode3_masked = opcode3 & opcode3_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t op0i_masked = op0i & op0i_t::mask;
   std::uint8_t optN_masked = optN & optN_t::mask;

   std::uint64_t opN_shift = (std::uint64_t)opN_masked << SumBits<>::result;
   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<opN_t>::result;
   std::uint64_t swz_mask1_shift = (std::uint64_t)swz_mask1_masked << SumBits<swz_en_t, opN_t>::result;
   std::uint64_t swz_mask2_shift = (std::uint64_t)swz_mask2_masked << SumBits<swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op1i_shift = (std::uint64_t)op1i_masked << SumBits<swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op2i_shift = (std::uint64_t)op2i_masked << SumBits<op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t unused0_shift = (std::uint64_t)unused0_masked << SumBits<op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opN_sel_shift = (std::uint64_t)opN_sel_masked << SumBits<unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opcode3_shift = (std::uint64_t)opcode3_masked << SumBits<opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<opcode3_t, opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0i_shift = (std::uint64_t)op0i_masked << SumBits<op0_t, opcode3_t, opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t optN_shift = (std::uint64_t)optN_masked << SumBits<op0i_t, op0_t, opcode3_t, opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;

   return optN_shift | op0i_shift | op0_shift | opcode3_shift | opN_sel_shift | unused0_shift | op2i_shift | op1i_shift | swz_mask2_shift | swz_mask1_shift | swz_en_shift | opN_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_MUL_IRI(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0, std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   std::uint64_t hi = INSTR_0x20000000_0x28000000_MUL_IRI_HIGHER4(opcode1, neg_op2i, predicate, unk4, op_sel2, data_format, swz_alt_op2i_2, swz_alt_opN, opN_swz, neg_opN, opcode2, gr_sel, op_sel1, swz_alt_op1i, op1i_swz, swz_alt_op2i_x, op2i_swz, opt0);

   std::uint64_t lo = INSTR_0x20000000_0x28000000_MUL_IRI_LOWER4(optN, op0i, op0, opcode3, opN_sel, unused0, op2i, op1i, swz_mask2, swz_mask1, swz_en, opN);

   return (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_0x20000000_0x28000000_ADD_IRI_HIGHER4(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<2> op2i_swz_t;
   typedef NbitsToMask<2> swz_alt_op2i_x_t;
   typedef NbitsToMask<2> op1i_swz_t;
   typedef NbitsToMask<2> swz_alt_op1i_t;
   typedef NbitsToMask<1> op_sel1_t;
   typedef NbitsToMask<1> gr_sel_t;
   typedef NbitsToMask<3> opcode2_t;
   typedef NbitsToMask<1> neg_opN_t;
   typedef NbitsToMask<2> opN_swz_t;
   typedef NbitsToMask<2> swz_alt_opN_t;
   typedef NbitsToMask<1> swz_alt_op2i_2_t;
   typedef NbitsToMask<1> data_format_t;
   typedef NbitsToMask<1> op_sel2_t;
   typedef NbitsToMask<1> unk4_t;
   typedef NbitsToMask<2> predicate_t;
   typedef NbitsToMask<1> neg_op2i_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t op2i_swz_masked = op2i_swz & op2i_swz_t::mask;
   std::uint8_t swz_alt_op2i_x_masked = swz_alt_op2i_x & swz_alt_op2i_x_t::mask;
   std::uint8_t op1i_swz_masked = op1i_swz & op1i_swz_t::mask;
   std::uint8_t swz_alt_op1i_masked = swz_alt_op1i & swz_alt_op1i_t::mask;
   std::uint8_t op_sel1_masked = op_sel1 & op_sel1_t::mask;
   std::uint8_t gr_sel_masked = gr_sel & gr_sel_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t neg_opN_masked = neg_opN & neg_opN_t::mask;
   std::uint8_t opN_swz_masked = opN_swz & opN_swz_t::mask;
   std::uint8_t swz_alt_opN_masked = swz_alt_opN & swz_alt_opN_t::mask;
   std::uint8_t swz_alt_op2i_2_masked = swz_alt_op2i_2 & swz_alt_op2i_2_t::mask;
   std::uint8_t data_format_masked = data_format & data_format_t::mask;
   std::uint8_t op_sel2_masked = op_sel2 & op_sel2_t::mask;
   std::uint8_t unk4_masked = unk4 & unk4_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t neg_op2i_masked = neg_op2i & neg_op2i_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t op2i_swz_shift = (std::uint64_t)op2i_swz_masked << SumBits<opt0_t>::result;
   std::uint64_t swz_alt_op2i_x_shift = (std::uint64_t)swz_alt_op2i_x_masked << SumBits<op2i_swz_t, opt0_t>::result;
   std::uint64_t op1i_swz_shift = (std::uint64_t)op1i_swz_masked << SumBits<swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op1i_shift = (std::uint64_t)swz_alt_op1i_masked << SumBits<op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel1_shift = (std::uint64_t)op_sel1_masked << SumBits<swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t gr_sel_shift = (std::uint64_t)gr_sel_masked << SumBits<op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_opN_shift = (std::uint64_t)neg_opN_masked << SumBits<opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opN_swz_shift = (std::uint64_t)opN_swz_masked << SumBits<neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_opN_shift = (std::uint64_t)swz_alt_opN_masked << SumBits<opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op2i_2_shift = (std::uint64_t)swz_alt_op2i_2_masked << SumBits<swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t data_format_shift = (std::uint64_t)data_format_masked << SumBits<swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel2_shift = (std::uint64_t)op_sel2_masked << SumBits<data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t unk4_shift = (std::uint64_t)unk4_masked << SumBits<op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_op2i_shift = (std::uint64_t)neg_op2i_masked << SumBits<predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<neg_op2i_t, predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;

   return opcode1_shift | neg_op2i_shift | predicate_shift | unk4_shift | op_sel2_shift | data_format_shift | swz_alt_op2i_2_shift | swz_alt_opN_shift | opN_swz_shift | neg_opN_shift | opcode2_shift | gr_sel_shift | op_sel1_shift | swz_alt_op1i_shift | op1i_swz_shift | swz_alt_op2i_x_shift | op2i_swz_shift | opt0_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_ADD_IRI_LOWER4(std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   typedef NbitsToMask<7> opN_t;
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> swz_mask1_t;
   typedef NbitsToMask<1> swz_mask2_t;
   typedef NbitsToMask<2> op1i_t;
   typedef NbitsToMask<2> op2i_t;
   typedef NbitsToMask<2> unused0_t;
   typedef NbitsToMask<2> opN_sel_t;
   typedef NbitsToMask<3> opcode3_t;
   typedef NbitsToMask<7> op0_t;
   typedef NbitsToMask<2> op0i_t;
   typedef NbitsToMask<2> optN_t;

   std::uint8_t opN_masked = opN & opN_t::mask;
   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t swz_mask1_masked = swz_mask1 & swz_mask1_t::mask;
   std::uint8_t swz_mask2_masked = swz_mask2 & swz_mask2_t::mask;
   std::uint8_t op1i_masked = op1i & op1i_t::mask;
   std::uint8_t op2i_masked = op2i & op2i_t::mask;
   std::uint8_t unused0_masked = unused0 & unused0_t::mask;
   std::uint8_t opN_sel_masked = opN_sel & opN_sel_t::mask;
   std::uint8_t opcode3_masked = opcode3 & opcode3_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t op0i_masked = op0i & op0i_t::mask;
   std::uint8_t optN_masked = optN & optN_t::mask;

   std::uint64_t opN_shift = (std::uint64_t)opN_masked << SumBits<>::result;
   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<opN_t>::result;
   std::uint64_t swz_mask1_shift = (std::uint64_t)swz_mask1_masked << SumBits<swz_en_t, opN_t>::result;
   std::uint64_t swz_mask2_shift = (std::uint64_t)swz_mask2_masked << SumBits<swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op1i_shift = (std::uint64_t)op1i_masked << SumBits<swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op2i_shift = (std::uint64_t)op2i_masked << SumBits<op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t unused0_shift = (std::uint64_t)unused0_masked << SumBits<op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opN_sel_shift = (std::uint64_t)opN_sel_masked << SumBits<unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opcode3_shift = (std::uint64_t)opcode3_masked << SumBits<opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<opcode3_t, opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0i_shift = (std::uint64_t)op0i_masked << SumBits<op0_t, opcode3_t, opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t optN_shift = (std::uint64_t)optN_masked << SumBits<op0i_t, op0_t, opcode3_t, opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;

   return optN_shift | op0i_shift | op0_shift | opcode3_shift | opN_sel_shift | unused0_shift | op2i_shift | op1i_shift | swz_mask2_shift | swz_mask1_shift | swz_en_shift | opN_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_ADD_IRI(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0, std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   std::uint64_t hi = INSTR_0x20000000_0x28000000_ADD_IRI_HIGHER4(opcode1, neg_op2i, predicate, unk4, op_sel2, data_format, swz_alt_op2i_2, swz_alt_opN, opN_swz, neg_opN, opcode2, gr_sel, op_sel1, swz_alt_op1i, op1i_swz, swz_alt_op2i_x, op2i_swz, opt0);

   std::uint64_t lo = INSTR_0x20000000_0x28000000_ADD_IRI_LOWER4(optN, op0i, op0, opcode3, opN_sel, unused0, op2i, op1i, swz_mask2, swz_mask1, swz_en, opN);

   return (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_0x20000000_0x28000000_MOV_IR_HIGHER4(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<2> op2i_swz_t;
   typedef NbitsToMask<2> swz_alt_op2i_x_t;
   typedef NbitsToMask<2> op1i_swz_t;
   typedef NbitsToMask<2> swz_alt_op1i_t;
   typedef NbitsToMask<1> op_sel1_t;
   typedef NbitsToMask<1> gr_sel_t;
   typedef NbitsToMask<3> opcode2_t;
   typedef NbitsToMask<1> neg_opN_t;
   typedef NbitsToMask<2> opN_swz_t;
   typedef NbitsToMask<2> swz_alt_opN_t;
   typedef NbitsToMask<1> swz_alt_op2i_2_t;
   typedef NbitsToMask<1> data_format_t;
   typedef NbitsToMask<1> op_sel2_t;
   typedef NbitsToMask<1> unk4_t;
   typedef NbitsToMask<2> predicate_t;
   typedef NbitsToMask<1> neg_op2i_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t op2i_swz_masked = op2i_swz & op2i_swz_t::mask;
   std::uint8_t swz_alt_op2i_x_masked = swz_alt_op2i_x & swz_alt_op2i_x_t::mask;
   std::uint8_t op1i_swz_masked = op1i_swz & op1i_swz_t::mask;
   std::uint8_t swz_alt_op1i_masked = swz_alt_op1i & swz_alt_op1i_t::mask;
   std::uint8_t op_sel1_masked = op_sel1 & op_sel1_t::mask;
   std::uint8_t gr_sel_masked = gr_sel & gr_sel_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t neg_opN_masked = neg_opN & neg_opN_t::mask;
   std::uint8_t opN_swz_masked = opN_swz & opN_swz_t::mask;
   std::uint8_t swz_alt_opN_masked = swz_alt_opN & swz_alt_opN_t::mask;
   std::uint8_t swz_alt_op2i_2_masked = swz_alt_op2i_2 & swz_alt_op2i_2_t::mask;
   std::uint8_t data_format_masked = data_format & data_format_t::mask;
   std::uint8_t op_sel2_masked = op_sel2 & op_sel2_t::mask;
   std::uint8_t unk4_masked = unk4 & unk4_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t neg_op2i_masked = neg_op2i & neg_op2i_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t op2i_swz_shift = (std::uint64_t)op2i_swz_masked << SumBits<opt0_t>::result;
   std::uint64_t swz_alt_op2i_x_shift = (std::uint64_t)swz_alt_op2i_x_masked << SumBits<op2i_swz_t, opt0_t>::result;
   std::uint64_t op1i_swz_shift = (std::uint64_t)op1i_swz_masked << SumBits<swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op1i_shift = (std::uint64_t)swz_alt_op1i_masked << SumBits<op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel1_shift = (std::uint64_t)op_sel1_masked << SumBits<swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t gr_sel_shift = (std::uint64_t)gr_sel_masked << SumBits<op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_opN_shift = (std::uint64_t)neg_opN_masked << SumBits<opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opN_swz_shift = (std::uint64_t)opN_swz_masked << SumBits<neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_opN_shift = (std::uint64_t)swz_alt_opN_masked << SumBits<opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op2i_2_shift = (std::uint64_t)swz_alt_op2i_2_masked << SumBits<swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t data_format_shift = (std::uint64_t)data_format_masked << SumBits<swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel2_shift = (std::uint64_t)op_sel2_masked << SumBits<data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t unk4_shift = (std::uint64_t)unk4_masked << SumBits<op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_op2i_shift = (std::uint64_t)neg_op2i_masked << SumBits<predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<neg_op2i_t, predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;

   return opcode1_shift | neg_op2i_shift | predicate_shift | unk4_shift | op_sel2_shift | data_format_shift | swz_alt_op2i_2_shift | swz_alt_opN_shift | opN_swz_shift | neg_opN_shift | opcode2_shift | gr_sel_shift | op_sel1_shift | swz_alt_op1i_shift | op1i_swz_shift | swz_alt_op2i_x_shift | op2i_swz_shift | opt0_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_MOV_IR_LOWER4(std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t abs_opN, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   typedef NbitsToMask<7> opN_t;
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> swz_mask1_t;
   typedef NbitsToMask<1> swz_mask2_t;
   typedef NbitsToMask<2> op1i_t;
   typedef NbitsToMask<2> op2i_t;
   typedef NbitsToMask<1> abs_opN_t;
   typedef NbitsToMask<1> unused0_t;
   typedef NbitsToMask<2> opN_sel_t;
   typedef NbitsToMask<3> opcode3_t;
   typedef NbitsToMask<7> op0_t;
   typedef NbitsToMask<2> op0i_t;
   typedef NbitsToMask<2> optN_t;

   std::uint8_t opN_masked = opN & opN_t::mask;
   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t swz_mask1_masked = swz_mask1 & swz_mask1_t::mask;
   std::uint8_t swz_mask2_masked = swz_mask2 & swz_mask2_t::mask;
   std::uint8_t op1i_masked = op1i & op1i_t::mask;
   std::uint8_t op2i_masked = op2i & op2i_t::mask;
   std::uint8_t abs_opN_masked = abs_opN & abs_opN_t::mask;
   std::uint8_t unused0_masked = unused0 & unused0_t::mask;
   std::uint8_t opN_sel_masked = opN_sel & opN_sel_t::mask;
   std::uint8_t opcode3_masked = opcode3 & opcode3_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t op0i_masked = op0i & op0i_t::mask;
   std::uint8_t optN_masked = optN & optN_t::mask;

   std::uint64_t opN_shift = (std::uint64_t)opN_masked << SumBits<>::result;
   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<opN_t>::result;
   std::uint64_t swz_mask1_shift = (std::uint64_t)swz_mask1_masked << SumBits<swz_en_t, opN_t>::result;
   std::uint64_t swz_mask2_shift = (std::uint64_t)swz_mask2_masked << SumBits<swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op1i_shift = (std::uint64_t)op1i_masked << SumBits<swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op2i_shift = (std::uint64_t)op2i_masked << SumBits<op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t abs_opN_shift = (std::uint64_t)abs_opN_masked << SumBits<op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t unused0_shift = (std::uint64_t)unused0_masked << SumBits<abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opN_sel_shift = (std::uint64_t)opN_sel_masked << SumBits<unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opcode3_shift = (std::uint64_t)opcode3_masked << SumBits<opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<opcode3_t, opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0i_shift = (std::uint64_t)op0i_masked << SumBits<op0_t, opcode3_t, opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t optN_shift = (std::uint64_t)optN_masked << SumBits<op0i_t, op0_t, opcode3_t, opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;

   return optN_shift | op0i_shift | op0_shift | opcode3_shift | opN_sel_shift | unused0_shift | abs_opN_shift | op2i_shift | op1i_shift | swz_mask2_shift | swz_mask1_shift | swz_en_shift | opN_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_MOV_IR(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0, std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t abs_opN, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   std::uint64_t hi = INSTR_0x20000000_0x28000000_MOV_IR_HIGHER4(opcode1, neg_op2i, predicate, unk4, op_sel2, data_format, swz_alt_op2i_2, swz_alt_opN, opN_swz, neg_opN, opcode2, gr_sel, op_sel1, swz_alt_op1i, op1i_swz, swz_alt_op2i_x, op2i_swz, opt0);

   std::uint64_t lo = INSTR_0x20000000_0x28000000_MOV_IR_LOWER4(optN, op0i, op0, opcode3, opN_sel, unused0, abs_opN, op2i, op1i, swz_mask2, swz_mask1, swz_en, opN);

   return (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_0x20000000_0x28000000_RSQ_IR_HIGHER4(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<2> op2i_swz_t;
   typedef NbitsToMask<2> swz_alt_op2i_x_t;
   typedef NbitsToMask<2> op1i_swz_t;
   typedef NbitsToMask<2> swz_alt_op1i_t;
   typedef NbitsToMask<1> op_sel1_t;
   typedef NbitsToMask<1> gr_sel_t;
   typedef NbitsToMask<3> opcode2_t;
   typedef NbitsToMask<1> neg_opN_t;
   typedef NbitsToMask<2> opN_swz_t;
   typedef NbitsToMask<2> swz_alt_opN_t;
   typedef NbitsToMask<1> swz_alt_op2i_2_t;
   typedef NbitsToMask<1> data_format_t;
   typedef NbitsToMask<1> op_sel2_t;
   typedef NbitsToMask<1> unk4_t;
   typedef NbitsToMask<2> predicate_t;
   typedef NbitsToMask<1> neg_op2i_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t op2i_swz_masked = op2i_swz & op2i_swz_t::mask;
   std::uint8_t swz_alt_op2i_x_masked = swz_alt_op2i_x & swz_alt_op2i_x_t::mask;
   std::uint8_t op1i_swz_masked = op1i_swz & op1i_swz_t::mask;
   std::uint8_t swz_alt_op1i_masked = swz_alt_op1i & swz_alt_op1i_t::mask;
   std::uint8_t op_sel1_masked = op_sel1 & op_sel1_t::mask;
   std::uint8_t gr_sel_masked = gr_sel & gr_sel_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t neg_opN_masked = neg_opN & neg_opN_t::mask;
   std::uint8_t opN_swz_masked = opN_swz & opN_swz_t::mask;
   std::uint8_t swz_alt_opN_masked = swz_alt_opN & swz_alt_opN_t::mask;
   std::uint8_t swz_alt_op2i_2_masked = swz_alt_op2i_2 & swz_alt_op2i_2_t::mask;
   std::uint8_t data_format_masked = data_format & data_format_t::mask;
   std::uint8_t op_sel2_masked = op_sel2 & op_sel2_t::mask;
   std::uint8_t unk4_masked = unk4 & unk4_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t neg_op2i_masked = neg_op2i & neg_op2i_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t op2i_swz_shift = (std::uint64_t)op2i_swz_masked << SumBits<opt0_t>::result;
   std::uint64_t swz_alt_op2i_x_shift = (std::uint64_t)swz_alt_op2i_x_masked << SumBits<op2i_swz_t, opt0_t>::result;
   std::uint64_t op1i_swz_shift = (std::uint64_t)op1i_swz_masked << SumBits<swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op1i_shift = (std::uint64_t)swz_alt_op1i_masked << SumBits<op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel1_shift = (std::uint64_t)op_sel1_masked << SumBits<swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t gr_sel_shift = (std::uint64_t)gr_sel_masked << SumBits<op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_opN_shift = (std::uint64_t)neg_opN_masked << SumBits<opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opN_swz_shift = (std::uint64_t)opN_swz_masked << SumBits<neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_opN_shift = (std::uint64_t)swz_alt_opN_masked << SumBits<opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op2i_2_shift = (std::uint64_t)swz_alt_op2i_2_masked << SumBits<swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t data_format_shift = (std::uint64_t)data_format_masked << SumBits<swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel2_shift = (std::uint64_t)op_sel2_masked << SumBits<data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t unk4_shift = (std::uint64_t)unk4_masked << SumBits<op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_op2i_shift = (std::uint64_t)neg_op2i_masked << SumBits<predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<neg_op2i_t, predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;

   return opcode1_shift | neg_op2i_shift | predicate_shift | unk4_shift | op_sel2_shift | data_format_shift | swz_alt_op2i_2_shift | swz_alt_opN_shift | opN_swz_shift | neg_opN_shift | opcode2_shift | gr_sel_shift | op_sel1_shift | swz_alt_op1i_shift | op1i_swz_shift | swz_alt_op2i_x_shift | op2i_swz_shift | opt0_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_RSQ_IR_LOWER4(std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t abs_opN, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   typedef NbitsToMask<7> opN_t;
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> swz_mask1_t;
   typedef NbitsToMask<1> swz_mask2_t;
   typedef NbitsToMask<2> op1i_t;
   typedef NbitsToMask<2> op2i_t;
   typedef NbitsToMask<1> abs_opN_t;
   typedef NbitsToMask<1> unused0_t;
   typedef NbitsToMask<2> opN_sel_t;
   typedef NbitsToMask<3> opcode3_t;
   typedef NbitsToMask<7> op0_t;
   typedef NbitsToMask<2> op0i_t;
   typedef NbitsToMask<2> optN_t;

   std::uint8_t opN_masked = opN & opN_t::mask;
   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t swz_mask1_masked = swz_mask1 & swz_mask1_t::mask;
   std::uint8_t swz_mask2_masked = swz_mask2 & swz_mask2_t::mask;
   std::uint8_t op1i_masked = op1i & op1i_t::mask;
   std::uint8_t op2i_masked = op2i & op2i_t::mask;
   std::uint8_t abs_opN_masked = abs_opN & abs_opN_t::mask;
   std::uint8_t unused0_masked = unused0 & unused0_t::mask;
   std::uint8_t opN_sel_masked = opN_sel & opN_sel_t::mask;
   std::uint8_t opcode3_masked = opcode3 & opcode3_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t op0i_masked = op0i & op0i_t::mask;
   std::uint8_t optN_masked = optN & optN_t::mask;

   std::uint64_t opN_shift = (std::uint64_t)opN_masked << SumBits<>::result;
   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<opN_t>::result;
   std::uint64_t swz_mask1_shift = (std::uint64_t)swz_mask1_masked << SumBits<swz_en_t, opN_t>::result;
   std::uint64_t swz_mask2_shift = (std::uint64_t)swz_mask2_masked << SumBits<swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op1i_shift = (std::uint64_t)op1i_masked << SumBits<swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op2i_shift = (std::uint64_t)op2i_masked << SumBits<op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t abs_opN_shift = (std::uint64_t)abs_opN_masked << SumBits<op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t unused0_shift = (std::uint64_t)unused0_masked << SumBits<abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opN_sel_shift = (std::uint64_t)opN_sel_masked << SumBits<unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opcode3_shift = (std::uint64_t)opcode3_masked << SumBits<opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<opcode3_t, opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0i_shift = (std::uint64_t)op0i_masked << SumBits<op0_t, opcode3_t, opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t optN_shift = (std::uint64_t)optN_masked << SumBits<op0i_t, op0_t, opcode3_t, opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;

   return optN_shift | op0i_shift | op0_shift | opcode3_shift | opN_sel_shift | unused0_shift | abs_opN_shift | op2i_shift | op1i_shift | swz_mask2_shift | swz_mask1_shift | swz_en_shift | opN_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_RSQ_IR(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0, std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t abs_opN, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   std::uint64_t hi = INSTR_0x20000000_0x28000000_RSQ_IR_HIGHER4(opcode1, neg_op2i, predicate, unk4, op_sel2, data_format, swz_alt_op2i_2, swz_alt_opN, opN_swz, neg_opN, opcode2, gr_sel, op_sel1, swz_alt_op1i, op1i_swz, swz_alt_op2i_x, op2i_swz, opt0);

   std::uint64_t lo = INSTR_0x20000000_0x28000000_RSQ_IR_LOWER4(optN, op0i, op0, opcode3, opN_sel, unused0, abs_opN, op2i, op1i, swz_mask2, swz_mask1, swz_en, opN);

   return (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_0x20000000_0x28000000_RCP_IR_HIGHER4(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<2> op2i_swz_t;
   typedef NbitsToMask<2> swz_alt_op2i_x_t;
   typedef NbitsToMask<2> op1i_swz_t;
   typedef NbitsToMask<2> swz_alt_op1i_t;
   typedef NbitsToMask<1> op_sel1_t;
   typedef NbitsToMask<1> gr_sel_t;
   typedef NbitsToMask<3> opcode2_t;
   typedef NbitsToMask<1> neg_opN_t;
   typedef NbitsToMask<2> opN_swz_t;
   typedef NbitsToMask<2> swz_alt_opN_t;
   typedef NbitsToMask<1> swz_alt_op2i_2_t;
   typedef NbitsToMask<1> data_format_t;
   typedef NbitsToMask<1> op_sel2_t;
   typedef NbitsToMask<1> unk4_t;
   typedef NbitsToMask<2> predicate_t;
   typedef NbitsToMask<1> neg_op2i_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t op2i_swz_masked = op2i_swz & op2i_swz_t::mask;
   std::uint8_t swz_alt_op2i_x_masked = swz_alt_op2i_x & swz_alt_op2i_x_t::mask;
   std::uint8_t op1i_swz_masked = op1i_swz & op1i_swz_t::mask;
   std::uint8_t swz_alt_op1i_masked = swz_alt_op1i & swz_alt_op1i_t::mask;
   std::uint8_t op_sel1_masked = op_sel1 & op_sel1_t::mask;
   std::uint8_t gr_sel_masked = gr_sel & gr_sel_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t neg_opN_masked = neg_opN & neg_opN_t::mask;
   std::uint8_t opN_swz_masked = opN_swz & opN_swz_t::mask;
   std::uint8_t swz_alt_opN_masked = swz_alt_opN & swz_alt_opN_t::mask;
   std::uint8_t swz_alt_op2i_2_masked = swz_alt_op2i_2 & swz_alt_op2i_2_t::mask;
   std::uint8_t data_format_masked = data_format & data_format_t::mask;
   std::uint8_t op_sel2_masked = op_sel2 & op_sel2_t::mask;
   std::uint8_t unk4_masked = unk4 & unk4_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t neg_op2i_masked = neg_op2i & neg_op2i_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t op2i_swz_shift = (std::uint64_t)op2i_swz_masked << SumBits<opt0_t>::result;
   std::uint64_t swz_alt_op2i_x_shift = (std::uint64_t)swz_alt_op2i_x_masked << SumBits<op2i_swz_t, opt0_t>::result;
   std::uint64_t op1i_swz_shift = (std::uint64_t)op1i_swz_masked << SumBits<swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op1i_shift = (std::uint64_t)swz_alt_op1i_masked << SumBits<op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel1_shift = (std::uint64_t)op_sel1_masked << SumBits<swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t gr_sel_shift = (std::uint64_t)gr_sel_masked << SumBits<op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_opN_shift = (std::uint64_t)neg_opN_masked << SumBits<opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opN_swz_shift = (std::uint64_t)opN_swz_masked << SumBits<neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_opN_shift = (std::uint64_t)swz_alt_opN_masked << SumBits<opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op2i_2_shift = (std::uint64_t)swz_alt_op2i_2_masked << SumBits<swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t data_format_shift = (std::uint64_t)data_format_masked << SumBits<swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel2_shift = (std::uint64_t)op_sel2_masked << SumBits<data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t unk4_shift = (std::uint64_t)unk4_masked << SumBits<op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_op2i_shift = (std::uint64_t)neg_op2i_masked << SumBits<predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<neg_op2i_t, predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;

   return opcode1_shift | neg_op2i_shift | predicate_shift | unk4_shift | op_sel2_shift | data_format_shift | swz_alt_op2i_2_shift | swz_alt_opN_shift | opN_swz_shift | neg_opN_shift | opcode2_shift | gr_sel_shift | op_sel1_shift | swz_alt_op1i_shift | op1i_swz_shift | swz_alt_op2i_x_shift | op2i_swz_shift | opt0_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_RCP_IR_LOWER4(std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t abs_opN, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   typedef NbitsToMask<7> opN_t;
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> swz_mask1_t;
   typedef NbitsToMask<1> swz_mask2_t;
   typedef NbitsToMask<2> op1i_t;
   typedef NbitsToMask<2> op2i_t;
   typedef NbitsToMask<1> abs_opN_t;
   typedef NbitsToMask<1> unused0_t;
   typedef NbitsToMask<2> opN_sel_t;
   typedef NbitsToMask<3> opcode3_t;
   typedef NbitsToMask<7> op0_t;
   typedef NbitsToMask<2> op0i_t;
   typedef NbitsToMask<2> optN_t;

   std::uint8_t opN_masked = opN & opN_t::mask;
   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t swz_mask1_masked = swz_mask1 & swz_mask1_t::mask;
   std::uint8_t swz_mask2_masked = swz_mask2 & swz_mask2_t::mask;
   std::uint8_t op1i_masked = op1i & op1i_t::mask;
   std::uint8_t op2i_masked = op2i & op2i_t::mask;
   std::uint8_t abs_opN_masked = abs_opN & abs_opN_t::mask;
   std::uint8_t unused0_masked = unused0 & unused0_t::mask;
   std::uint8_t opN_sel_masked = opN_sel & opN_sel_t::mask;
   std::uint8_t opcode3_masked = opcode3 & opcode3_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t op0i_masked = op0i & op0i_t::mask;
   std::uint8_t optN_masked = optN & optN_t::mask;

   std::uint64_t opN_shift = (std::uint64_t)opN_masked << SumBits<>::result;
   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<opN_t>::result;
   std::uint64_t swz_mask1_shift = (std::uint64_t)swz_mask1_masked << SumBits<swz_en_t, opN_t>::result;
   std::uint64_t swz_mask2_shift = (std::uint64_t)swz_mask2_masked << SumBits<swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op1i_shift = (std::uint64_t)op1i_masked << SumBits<swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op2i_shift = (std::uint64_t)op2i_masked << SumBits<op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t abs_opN_shift = (std::uint64_t)abs_opN_masked << SumBits<op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t unused0_shift = (std::uint64_t)unused0_masked << SumBits<abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opN_sel_shift = (std::uint64_t)opN_sel_masked << SumBits<unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opcode3_shift = (std::uint64_t)opcode3_masked << SumBits<opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<opcode3_t, opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0i_shift = (std::uint64_t)op0i_masked << SumBits<op0_t, opcode3_t, opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t optN_shift = (std::uint64_t)optN_masked << SumBits<op0i_t, op0_t, opcode3_t, opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;

   return optN_shift | op0i_shift | op0_shift | opcode3_shift | opN_sel_shift | unused0_shift | abs_opN_shift | op2i_shift | op1i_shift | swz_mask2_shift | swz_mask1_shift | swz_en_shift | opN_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_RCP_IR(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0, std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t abs_opN, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   std::uint64_t hi = INSTR_0x20000000_0x28000000_RCP_IR_HIGHER4(opcode1, neg_op2i, predicate, unk4, op_sel2, data_format, swz_alt_op2i_2, swz_alt_opN, opN_swz, neg_opN, opcode2, gr_sel, op_sel1, swz_alt_op1i, op1i_swz, swz_alt_op2i_x, op2i_swz, opt0);

   std::uint64_t lo = INSTR_0x20000000_0x28000000_RCP_IR_LOWER4(optN, op0i, op0, opcode3, opN_sel, unused0, abs_opN, op2i, op1i, swz_mask2, swz_mask1, swz_en, opN);

   return (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_0x20000000_0x28000000_SUBFLR_IRI_HIGHER4(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<2> op2i_swz_t;
   typedef NbitsToMask<2> swz_alt_op2i_x_t;
   typedef NbitsToMask<2> op1i_swz_t;
   typedef NbitsToMask<2> swz_alt_op1i_t;
   typedef NbitsToMask<1> op_sel1_t;
   typedef NbitsToMask<1> gr_sel_t;
   typedef NbitsToMask<3> opcode2_t;
   typedef NbitsToMask<1> neg_opN_t;
   typedef NbitsToMask<2> opN_swz_t;
   typedef NbitsToMask<2> swz_alt_opN_t;
   typedef NbitsToMask<1> swz_alt_op2i_2_t;
   typedef NbitsToMask<1> data_format_t;
   typedef NbitsToMask<1> op_sel2_t;
   typedef NbitsToMask<1> unk4_t;
   typedef NbitsToMask<2> predicate_t;
   typedef NbitsToMask<1> neg_op2i_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t op2i_swz_masked = op2i_swz & op2i_swz_t::mask;
   std::uint8_t swz_alt_op2i_x_masked = swz_alt_op2i_x & swz_alt_op2i_x_t::mask;
   std::uint8_t op1i_swz_masked = op1i_swz & op1i_swz_t::mask;
   std::uint8_t swz_alt_op1i_masked = swz_alt_op1i & swz_alt_op1i_t::mask;
   std::uint8_t op_sel1_masked = op_sel1 & op_sel1_t::mask;
   std::uint8_t gr_sel_masked = gr_sel & gr_sel_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t neg_opN_masked = neg_opN & neg_opN_t::mask;
   std::uint8_t opN_swz_masked = opN_swz & opN_swz_t::mask;
   std::uint8_t swz_alt_opN_masked = swz_alt_opN & swz_alt_opN_t::mask;
   std::uint8_t swz_alt_op2i_2_masked = swz_alt_op2i_2 & swz_alt_op2i_2_t::mask;
   std::uint8_t data_format_masked = data_format & data_format_t::mask;
   std::uint8_t op_sel2_masked = op_sel2 & op_sel2_t::mask;
   std::uint8_t unk4_masked = unk4 & unk4_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t neg_op2i_masked = neg_op2i & neg_op2i_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t op2i_swz_shift = (std::uint64_t)op2i_swz_masked << SumBits<opt0_t>::result;
   std::uint64_t swz_alt_op2i_x_shift = (std::uint64_t)swz_alt_op2i_x_masked << SumBits<op2i_swz_t, opt0_t>::result;
   std::uint64_t op1i_swz_shift = (std::uint64_t)op1i_swz_masked << SumBits<swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op1i_shift = (std::uint64_t)swz_alt_op1i_masked << SumBits<op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel1_shift = (std::uint64_t)op_sel1_masked << SumBits<swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t gr_sel_shift = (std::uint64_t)gr_sel_masked << SumBits<op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_opN_shift = (std::uint64_t)neg_opN_masked << SumBits<opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opN_swz_shift = (std::uint64_t)opN_swz_masked << SumBits<neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_opN_shift = (std::uint64_t)swz_alt_opN_masked << SumBits<opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op2i_2_shift = (std::uint64_t)swz_alt_op2i_2_masked << SumBits<swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t data_format_shift = (std::uint64_t)data_format_masked << SumBits<swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel2_shift = (std::uint64_t)op_sel2_masked << SumBits<data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t unk4_shift = (std::uint64_t)unk4_masked << SumBits<op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_op2i_shift = (std::uint64_t)neg_op2i_masked << SumBits<predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<neg_op2i_t, predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;

   return opcode1_shift | neg_op2i_shift | predicate_shift | unk4_shift | op_sel2_shift | data_format_shift | swz_alt_op2i_2_shift | swz_alt_opN_shift | opN_swz_shift | neg_opN_shift | opcode2_shift | gr_sel_shift | op_sel1_shift | swz_alt_op1i_shift | op1i_swz_shift | swz_alt_op2i_x_shift | op2i_swz_shift | opt0_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_SUBFLR_IRI_LOWER4(std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   typedef NbitsToMask<7> opN_t;
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> swz_mask1_t;
   typedef NbitsToMask<1> swz_mask2_t;
   typedef NbitsToMask<2> op1i_t;
   typedef NbitsToMask<2> op2i_t;
   typedef NbitsToMask<2> unused0_t;
   typedef NbitsToMask<2> opN_sel_t;
   typedef NbitsToMask<3> opcode3_t;
   typedef NbitsToMask<7> op0_t;
   typedef NbitsToMask<2> op0i_t;
   typedef NbitsToMask<2> optN_t;

   std::uint8_t opN_masked = opN & opN_t::mask;
   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t swz_mask1_masked = swz_mask1 & swz_mask1_t::mask;
   std::uint8_t swz_mask2_masked = swz_mask2 & swz_mask2_t::mask;
   std::uint8_t op1i_masked = op1i & op1i_t::mask;
   std::uint8_t op2i_masked = op2i & op2i_t::mask;
   std::uint8_t unused0_masked = unused0 & unused0_t::mask;
   std::uint8_t opN_sel_masked = opN_sel & opN_sel_t::mask;
   std::uint8_t opcode3_masked = opcode3 & opcode3_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t op0i_masked = op0i & op0i_t::mask;
   std::uint8_t optN_masked = optN & optN_t::mask;

   std::uint64_t opN_shift = (std::uint64_t)opN_masked << SumBits<>::result;
   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<opN_t>::result;
   std::uint64_t swz_mask1_shift = (std::uint64_t)swz_mask1_masked << SumBits<swz_en_t, opN_t>::result;
   std::uint64_t swz_mask2_shift = (std::uint64_t)swz_mask2_masked << SumBits<swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op1i_shift = (std::uint64_t)op1i_masked << SumBits<swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op2i_shift = (std::uint64_t)op2i_masked << SumBits<op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t unused0_shift = (std::uint64_t)unused0_masked << SumBits<op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opN_sel_shift = (std::uint64_t)opN_sel_masked << SumBits<unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opcode3_shift = (std::uint64_t)opcode3_masked << SumBits<opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<opcode3_t, opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0i_shift = (std::uint64_t)op0i_masked << SumBits<op0_t, opcode3_t, opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t optN_shift = (std::uint64_t)optN_masked << SumBits<op0i_t, op0_t, opcode3_t, opN_sel_t, unused0_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;

   return optN_shift | op0i_shift | op0_shift | opcode3_shift | opN_sel_shift | unused0_shift | op2i_shift | op1i_shift | swz_mask2_shift | swz_mask1_shift | swz_en_shift | opN_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_SUBFLR_IRI(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0, std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   std::uint64_t hi = INSTR_0x20000000_0x28000000_SUBFLR_IRI_HIGHER4(opcode1, neg_op2i, predicate, unk4, op_sel2, data_format, swz_alt_op2i_2, swz_alt_opN, opN_swz, neg_opN, opcode2, gr_sel, op_sel1, swz_alt_op1i, op1i_swz, swz_alt_op2i_x, op2i_swz, opt0);

   std::uint64_t lo = INSTR_0x20000000_0x28000000_SUBFLR_IRI_LOWER4(optN, op0i, op0, opcode3, opN_sel, unused0, op2i, op1i, swz_mask2, swz_mask1, swz_en, opN);

   return (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_0x20000000_0x28000000_EXP_IR_HIGHER4(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<2> op2i_swz_t;
   typedef NbitsToMask<2> swz_alt_op2i_x_t;
   typedef NbitsToMask<2> op1i_swz_t;
   typedef NbitsToMask<2> swz_alt_op1i_t;
   typedef NbitsToMask<1> op_sel1_t;
   typedef NbitsToMask<1> gr_sel_t;
   typedef NbitsToMask<3> opcode2_t;
   typedef NbitsToMask<1> neg_opN_t;
   typedef NbitsToMask<2> opN_swz_t;
   typedef NbitsToMask<2> swz_alt_opN_t;
   typedef NbitsToMask<1> swz_alt_op2i_2_t;
   typedef NbitsToMask<1> data_format_t;
   typedef NbitsToMask<1> op_sel2_t;
   typedef NbitsToMask<1> unk4_t;
   typedef NbitsToMask<2> predicate_t;
   typedef NbitsToMask<1> neg_op2i_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t op2i_swz_masked = op2i_swz & op2i_swz_t::mask;
   std::uint8_t swz_alt_op2i_x_masked = swz_alt_op2i_x & swz_alt_op2i_x_t::mask;
   std::uint8_t op1i_swz_masked = op1i_swz & op1i_swz_t::mask;
   std::uint8_t swz_alt_op1i_masked = swz_alt_op1i & swz_alt_op1i_t::mask;
   std::uint8_t op_sel1_masked = op_sel1 & op_sel1_t::mask;
   std::uint8_t gr_sel_masked = gr_sel & gr_sel_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t neg_opN_masked = neg_opN & neg_opN_t::mask;
   std::uint8_t opN_swz_masked = opN_swz & opN_swz_t::mask;
   std::uint8_t swz_alt_opN_masked = swz_alt_opN & swz_alt_opN_t::mask;
   std::uint8_t swz_alt_op2i_2_masked = swz_alt_op2i_2 & swz_alt_op2i_2_t::mask;
   std::uint8_t data_format_masked = data_format & data_format_t::mask;
   std::uint8_t op_sel2_masked = op_sel2 & op_sel2_t::mask;
   std::uint8_t unk4_masked = unk4 & unk4_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t neg_op2i_masked = neg_op2i & neg_op2i_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t op2i_swz_shift = (std::uint64_t)op2i_swz_masked << SumBits<opt0_t>::result;
   std::uint64_t swz_alt_op2i_x_shift = (std::uint64_t)swz_alt_op2i_x_masked << SumBits<op2i_swz_t, opt0_t>::result;
   std::uint64_t op1i_swz_shift = (std::uint64_t)op1i_swz_masked << SumBits<swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op1i_shift = (std::uint64_t)swz_alt_op1i_masked << SumBits<op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel1_shift = (std::uint64_t)op_sel1_masked << SumBits<swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t gr_sel_shift = (std::uint64_t)gr_sel_masked << SumBits<op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_opN_shift = (std::uint64_t)neg_opN_masked << SumBits<opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opN_swz_shift = (std::uint64_t)opN_swz_masked << SumBits<neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_opN_shift = (std::uint64_t)swz_alt_opN_masked << SumBits<opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op2i_2_shift = (std::uint64_t)swz_alt_op2i_2_masked << SumBits<swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t data_format_shift = (std::uint64_t)data_format_masked << SumBits<swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel2_shift = (std::uint64_t)op_sel2_masked << SumBits<data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t unk4_shift = (std::uint64_t)unk4_masked << SumBits<op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_op2i_shift = (std::uint64_t)neg_op2i_masked << SumBits<predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<neg_op2i_t, predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;

   return opcode1_shift | neg_op2i_shift | predicate_shift | unk4_shift | op_sel2_shift | data_format_shift | swz_alt_op2i_2_shift | swz_alt_opN_shift | opN_swz_shift | neg_opN_shift | opcode2_shift | gr_sel_shift | op_sel1_shift | swz_alt_op1i_shift | op1i_swz_shift | swz_alt_op2i_x_shift | op2i_swz_shift | opt0_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_EXP_IR_LOWER4(std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t abs_opN, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   typedef NbitsToMask<7> opN_t;
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> swz_mask1_t;
   typedef NbitsToMask<1> swz_mask2_t;
   typedef NbitsToMask<2> op1i_t;
   typedef NbitsToMask<2> op2i_t;
   typedef NbitsToMask<1> abs_opN_t;
   typedef NbitsToMask<1> unused0_t;
   typedef NbitsToMask<2> opN_sel_t;
   typedef NbitsToMask<3> opcode3_t;
   typedef NbitsToMask<7> op0_t;
   typedef NbitsToMask<2> op0i_t;
   typedef NbitsToMask<2> optN_t;

   std::uint8_t opN_masked = opN & opN_t::mask;
   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t swz_mask1_masked = swz_mask1 & swz_mask1_t::mask;
   std::uint8_t swz_mask2_masked = swz_mask2 & swz_mask2_t::mask;
   std::uint8_t op1i_masked = op1i & op1i_t::mask;
   std::uint8_t op2i_masked = op2i & op2i_t::mask;
   std::uint8_t abs_opN_masked = abs_opN & abs_opN_t::mask;
   std::uint8_t unused0_masked = unused0 & unused0_t::mask;
   std::uint8_t opN_sel_masked = opN_sel & opN_sel_t::mask;
   std::uint8_t opcode3_masked = opcode3 & opcode3_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t op0i_masked = op0i & op0i_t::mask;
   std::uint8_t optN_masked = optN & optN_t::mask;

   std::uint64_t opN_shift = (std::uint64_t)opN_masked << SumBits<>::result;
   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<opN_t>::result;
   std::uint64_t swz_mask1_shift = (std::uint64_t)swz_mask1_masked << SumBits<swz_en_t, opN_t>::result;
   std::uint64_t swz_mask2_shift = (std::uint64_t)swz_mask2_masked << SumBits<swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op1i_shift = (std::uint64_t)op1i_masked << SumBits<swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op2i_shift = (std::uint64_t)op2i_masked << SumBits<op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t abs_opN_shift = (std::uint64_t)abs_opN_masked << SumBits<op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t unused0_shift = (std::uint64_t)unused0_masked << SumBits<abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opN_sel_shift = (std::uint64_t)opN_sel_masked << SumBits<unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opcode3_shift = (std::uint64_t)opcode3_masked << SumBits<opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<opcode3_t, opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0i_shift = (std::uint64_t)op0i_masked << SumBits<op0_t, opcode3_t, opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t optN_shift = (std::uint64_t)optN_masked << SumBits<op0i_t, op0_t, opcode3_t, opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;

   return optN_shift | op0i_shift | op0_shift | opcode3_shift | opN_sel_shift | unused0_shift | abs_opN_shift | op2i_shift | op1i_shift | swz_mask2_shift | swz_mask1_shift | swz_en_shift | opN_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_EXP_IR(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0, std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t abs_opN, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   std::uint64_t hi = INSTR_0x20000000_0x28000000_EXP_IR_HIGHER4(opcode1, neg_op2i, predicate, unk4, op_sel2, data_format, swz_alt_op2i_2, swz_alt_opN, opN_swz, neg_opN, opcode2, gr_sel, op_sel1, swz_alt_op1i, op1i_swz, swz_alt_op2i_x, op2i_swz, opt0);

   std::uint64_t lo = INSTR_0x20000000_0x28000000_EXP_IR_LOWER4(optN, op0i, op0, opcode3, opN_sel, unused0, abs_opN, op2i, op1i, swz_mask2, swz_mask1, swz_en, opN);

   return (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_0x20000000_0x28000000_LOG_IR_HIGHER4(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<2> op2i_swz_t;
   typedef NbitsToMask<2> swz_alt_op2i_x_t;
   typedef NbitsToMask<2> op1i_swz_t;
   typedef NbitsToMask<2> swz_alt_op1i_t;
   typedef NbitsToMask<1> op_sel1_t;
   typedef NbitsToMask<1> gr_sel_t;
   typedef NbitsToMask<3> opcode2_t;
   typedef NbitsToMask<1> neg_opN_t;
   typedef NbitsToMask<2> opN_swz_t;
   typedef NbitsToMask<2> swz_alt_opN_t;
   typedef NbitsToMask<1> swz_alt_op2i_2_t;
   typedef NbitsToMask<1> data_format_t;
   typedef NbitsToMask<1> op_sel2_t;
   typedef NbitsToMask<1> unk4_t;
   typedef NbitsToMask<2> predicate_t;
   typedef NbitsToMask<1> neg_op2i_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t op2i_swz_masked = op2i_swz & op2i_swz_t::mask;
   std::uint8_t swz_alt_op2i_x_masked = swz_alt_op2i_x & swz_alt_op2i_x_t::mask;
   std::uint8_t op1i_swz_masked = op1i_swz & op1i_swz_t::mask;
   std::uint8_t swz_alt_op1i_masked = swz_alt_op1i & swz_alt_op1i_t::mask;
   std::uint8_t op_sel1_masked = op_sel1 & op_sel1_t::mask;
   std::uint8_t gr_sel_masked = gr_sel & gr_sel_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t neg_opN_masked = neg_opN & neg_opN_t::mask;
   std::uint8_t opN_swz_masked = opN_swz & opN_swz_t::mask;
   std::uint8_t swz_alt_opN_masked = swz_alt_opN & swz_alt_opN_t::mask;
   std::uint8_t swz_alt_op2i_2_masked = swz_alt_op2i_2 & swz_alt_op2i_2_t::mask;
   std::uint8_t data_format_masked = data_format & data_format_t::mask;
   std::uint8_t op_sel2_masked = op_sel2 & op_sel2_t::mask;
   std::uint8_t unk4_masked = unk4 & unk4_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t neg_op2i_masked = neg_op2i & neg_op2i_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t op2i_swz_shift = (std::uint64_t)op2i_swz_masked << SumBits<opt0_t>::result;
   std::uint64_t swz_alt_op2i_x_shift = (std::uint64_t)swz_alt_op2i_x_masked << SumBits<op2i_swz_t, opt0_t>::result;
   std::uint64_t op1i_swz_shift = (std::uint64_t)op1i_swz_masked << SumBits<swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op1i_shift = (std::uint64_t)swz_alt_op1i_masked << SumBits<op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel1_shift = (std::uint64_t)op_sel1_masked << SumBits<swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t gr_sel_shift = (std::uint64_t)gr_sel_masked << SumBits<op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_opN_shift = (std::uint64_t)neg_opN_masked << SumBits<opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opN_swz_shift = (std::uint64_t)opN_swz_masked << SumBits<neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_opN_shift = (std::uint64_t)swz_alt_opN_masked << SumBits<opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op2i_2_shift = (std::uint64_t)swz_alt_op2i_2_masked << SumBits<swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t data_format_shift = (std::uint64_t)data_format_masked << SumBits<swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel2_shift = (std::uint64_t)op_sel2_masked << SumBits<data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t unk4_shift = (std::uint64_t)unk4_masked << SumBits<op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_op2i_shift = (std::uint64_t)neg_op2i_masked << SumBits<predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<neg_op2i_t, predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;

   return opcode1_shift | neg_op2i_shift | predicate_shift | unk4_shift | op_sel2_shift | data_format_shift | swz_alt_op2i_2_shift | swz_alt_opN_shift | opN_swz_shift | neg_opN_shift | opcode2_shift | gr_sel_shift | op_sel1_shift | swz_alt_op1i_shift | op1i_swz_shift | swz_alt_op2i_x_shift | op2i_swz_shift | opt0_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_LOG_IR_LOWER4(std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t abs_opN, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   typedef NbitsToMask<7> opN_t;
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> swz_mask1_t;
   typedef NbitsToMask<1> swz_mask2_t;
   typedef NbitsToMask<2> op1i_t;
   typedef NbitsToMask<2> op2i_t;
   typedef NbitsToMask<1> abs_opN_t;
   typedef NbitsToMask<1> unused0_t;
   typedef NbitsToMask<2> opN_sel_t;
   typedef NbitsToMask<3> opcode3_t;
   typedef NbitsToMask<7> op0_t;
   typedef NbitsToMask<2> op0i_t;
   typedef NbitsToMask<2> optN_t;

   std::uint8_t opN_masked = opN & opN_t::mask;
   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t swz_mask1_masked = swz_mask1 & swz_mask1_t::mask;
   std::uint8_t swz_mask2_masked = swz_mask2 & swz_mask2_t::mask;
   std::uint8_t op1i_masked = op1i & op1i_t::mask;
   std::uint8_t op2i_masked = op2i & op2i_t::mask;
   std::uint8_t abs_opN_masked = abs_opN & abs_opN_t::mask;
   std::uint8_t unused0_masked = unused0 & unused0_t::mask;
   std::uint8_t opN_sel_masked = opN_sel & opN_sel_t::mask;
   std::uint8_t opcode3_masked = opcode3 & opcode3_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t op0i_masked = op0i & op0i_t::mask;
   std::uint8_t optN_masked = optN & optN_t::mask;

   std::uint64_t opN_shift = (std::uint64_t)opN_masked << SumBits<>::result;
   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<opN_t>::result;
   std::uint64_t swz_mask1_shift = (std::uint64_t)swz_mask1_masked << SumBits<swz_en_t, opN_t>::result;
   std::uint64_t swz_mask2_shift = (std::uint64_t)swz_mask2_masked << SumBits<swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op1i_shift = (std::uint64_t)op1i_masked << SumBits<swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op2i_shift = (std::uint64_t)op2i_masked << SumBits<op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t abs_opN_shift = (std::uint64_t)abs_opN_masked << SumBits<op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t unused0_shift = (std::uint64_t)unused0_masked << SumBits<abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opN_sel_shift = (std::uint64_t)opN_sel_masked << SumBits<unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opcode3_shift = (std::uint64_t)opcode3_masked << SumBits<opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<opcode3_t, opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0i_shift = (std::uint64_t)op0i_masked << SumBits<op0_t, opcode3_t, opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t optN_shift = (std::uint64_t)optN_masked << SumBits<op0i_t, op0_t, opcode3_t, opN_sel_t, unused0_t, abs_opN_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;

   return optN_shift | op0i_shift | op0_shift | opcode3_shift | opN_sel_shift | unused0_shift | abs_opN_shift | op2i_shift | op1i_shift | swz_mask2_shift | swz_mask1_shift | swz_en_shift | opN_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_LOG_IR(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0, std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t unused0, std::uint8_t abs_opN, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   std::uint64_t hi = INSTR_0x20000000_0x28000000_LOG_IR_HIGHER4(opcode1, neg_op2i, predicate, unk4, op_sel2, data_format, swz_alt_op2i_2, swz_alt_opN, opN_swz, neg_opN, opcode2, gr_sel, op_sel1, swz_alt_op1i, op1i_swz, swz_alt_op2i_x, op2i_swz, opt0);

   std::uint64_t lo = INSTR_0x20000000_0x28000000_LOG_IR_LOWER4(optN, op0i, op0, opcode3, opN_sel, unused0, abs_opN, op2i, op1i, swz_mask2, swz_mask1, swz_en, opN);

   return (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_0x20000000_0x28000000_MAD_RRII_EXP1_HIGHER4(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<2> op2i_swz_t;
   typedef NbitsToMask<2> swz_alt_op2i_x_t;
   typedef NbitsToMask<2> op1i_swz_t;
   typedef NbitsToMask<2> swz_alt_op1i_t;
   typedef NbitsToMask<1> op_sel1_t;
   typedef NbitsToMask<1> gr_sel_t;
   typedef NbitsToMask<3> opcode2_t;
   typedef NbitsToMask<1> neg_opN_t;
   typedef NbitsToMask<2> opN_swz_t;
   typedef NbitsToMask<2> swz_alt_opN_t;
   typedef NbitsToMask<1> swz_alt_op2i_2_t;
   typedef NbitsToMask<1> data_format_t;
   typedef NbitsToMask<1> op_sel2_t;
   typedef NbitsToMask<1> unk4_t;
   typedef NbitsToMask<2> predicate_t;
   typedef NbitsToMask<1> neg_op2i_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t op2i_swz_masked = op2i_swz & op2i_swz_t::mask;
   std::uint8_t swz_alt_op2i_x_masked = swz_alt_op2i_x & swz_alt_op2i_x_t::mask;
   std::uint8_t op1i_swz_masked = op1i_swz & op1i_swz_t::mask;
   std::uint8_t swz_alt_op1i_masked = swz_alt_op1i & swz_alt_op1i_t::mask;
   std::uint8_t op_sel1_masked = op_sel1 & op_sel1_t::mask;
   std::uint8_t gr_sel_masked = gr_sel & gr_sel_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t neg_opN_masked = neg_opN & neg_opN_t::mask;
   std::uint8_t opN_swz_masked = opN_swz & opN_swz_t::mask;
   std::uint8_t swz_alt_opN_masked = swz_alt_opN & swz_alt_opN_t::mask;
   std::uint8_t swz_alt_op2i_2_masked = swz_alt_op2i_2 & swz_alt_op2i_2_t::mask;
   std::uint8_t data_format_masked = data_format & data_format_t::mask;
   std::uint8_t op_sel2_masked = op_sel2 & op_sel2_t::mask;
   std::uint8_t unk4_masked = unk4 & unk4_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t neg_op2i_masked = neg_op2i & neg_op2i_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t op2i_swz_shift = (std::uint64_t)op2i_swz_masked << SumBits<opt0_t>::result;
   std::uint64_t swz_alt_op2i_x_shift = (std::uint64_t)swz_alt_op2i_x_masked << SumBits<op2i_swz_t, opt0_t>::result;
   std::uint64_t op1i_swz_shift = (std::uint64_t)op1i_swz_masked << SumBits<swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op1i_shift = (std::uint64_t)swz_alt_op1i_masked << SumBits<op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel1_shift = (std::uint64_t)op_sel1_masked << SumBits<swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t gr_sel_shift = (std::uint64_t)gr_sel_masked << SumBits<op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_opN_shift = (std::uint64_t)neg_opN_masked << SumBits<opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opN_swz_shift = (std::uint64_t)opN_swz_masked << SumBits<neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_opN_shift = (std::uint64_t)swz_alt_opN_masked << SumBits<opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op2i_2_shift = (std::uint64_t)swz_alt_op2i_2_masked << SumBits<swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t data_format_shift = (std::uint64_t)data_format_masked << SumBits<swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel2_shift = (std::uint64_t)op_sel2_masked << SumBits<data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t unk4_shift = (std::uint64_t)unk4_masked << SumBits<op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_op2i_shift = (std::uint64_t)neg_op2i_masked << SumBits<predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<neg_op2i_t, predicate_t, unk4_t, op_sel2_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;

   return opcode1_shift | neg_op2i_shift | predicate_shift | unk4_shift | op_sel2_shift | data_format_shift | swz_alt_op2i_2_shift | swz_alt_opN_shift | opN_swz_shift | neg_opN_shift | opcode2_shift | gr_sel_shift | op_sel1_shift | swz_alt_op1i_shift | op1i_swz_shift | swz_alt_op2i_x_shift | op2i_swz_shift | opt0_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_MAD_RRII_EXP1_LOWER4(std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t op3i, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   typedef NbitsToMask<7> opN_t;
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> swz_mask1_t;
   typedef NbitsToMask<1> swz_mask2_t;
   typedef NbitsToMask<2> op1i_t;
   typedef NbitsToMask<2> op2i_t;
   typedef NbitsToMask<2> op3i_t;
   typedef NbitsToMask<2> opN_sel_t;
   typedef NbitsToMask<3> opcode3_t;
   typedef NbitsToMask<7> op0_t;
   typedef NbitsToMask<2> op0i_t;
   typedef NbitsToMask<2> optN_t;

   std::uint8_t opN_masked = opN & opN_t::mask;
   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t swz_mask1_masked = swz_mask1 & swz_mask1_t::mask;
   std::uint8_t swz_mask2_masked = swz_mask2 & swz_mask2_t::mask;
   std::uint8_t op1i_masked = op1i & op1i_t::mask;
   std::uint8_t op2i_masked = op2i & op2i_t::mask;
   std::uint8_t op3i_masked = op3i & op3i_t::mask;
   std::uint8_t opN_sel_masked = opN_sel & opN_sel_t::mask;
   std::uint8_t opcode3_masked = opcode3 & opcode3_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t op0i_masked = op0i & op0i_t::mask;
   std::uint8_t optN_masked = optN & optN_t::mask;

   std::uint64_t opN_shift = (std::uint64_t)opN_masked << SumBits<>::result;
   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<opN_t>::result;
   std::uint64_t swz_mask1_shift = (std::uint64_t)swz_mask1_masked << SumBits<swz_en_t, opN_t>::result;
   std::uint64_t swz_mask2_shift = (std::uint64_t)swz_mask2_masked << SumBits<swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op1i_shift = (std::uint64_t)op1i_masked << SumBits<swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op2i_shift = (std::uint64_t)op2i_masked << SumBits<op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op3i_shift = (std::uint64_t)op3i_masked << SumBits<op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opN_sel_shift = (std::uint64_t)opN_sel_masked << SumBits<op3i_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opcode3_shift = (std::uint64_t)opcode3_masked << SumBits<opN_sel_t, op3i_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<opcode3_t, opN_sel_t, op3i_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0i_shift = (std::uint64_t)op0i_masked << SumBits<op0_t, opcode3_t, opN_sel_t, op3i_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t optN_shift = (std::uint64_t)optN_masked << SumBits<op0i_t, op0_t, opcode3_t, opN_sel_t, op3i_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;

   return optN_shift | op0i_shift | op0_shift | opcode3_shift | opN_sel_shift | op3i_shift | op2i_shift | op1i_shift | swz_mask2_shift | swz_mask1_shift | swz_en_shift | opN_shift;
}

std::uint64_t INSTR_0x20000000_0x28000000_MAD_RRII_EXP1(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk4, std::uint8_t op_sel2, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0, std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t op3i, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   std::uint64_t hi = INSTR_0x20000000_0x28000000_MAD_RRII_EXP1_HIGHER4(opcode1, neg_op2i, predicate, unk4, op_sel2, data_format, swz_alt_op2i_2, swz_alt_opN, opN_swz, neg_opN, opcode2, gr_sel, op_sel1, swz_alt_op1i, op1i_swz, swz_alt_op2i_x, op2i_swz, opt0);

   std::uint64_t lo = INSTR_0x20000000_0x28000000_MAD_RRII_EXP1_LOWER4(optN, op0i, op0, opcode3, opN_sel, op3i, op2i, op1i, swz_mask2, swz_mask1, swz_en, opN);

   return (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_0x28000000_0x30000000_HIGHER4(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk1, std::uint8_t mask3, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<2> op2i_swz_t;
   typedef NbitsToMask<2> swz_alt_op2i_x_t;
   typedef NbitsToMask<2> op1i_swz_t;
   typedef NbitsToMask<2> swz_alt_op1i_t;
   typedef NbitsToMask<1> op_sel1_t;
   typedef NbitsToMask<1> gr_sel_t;
   typedef NbitsToMask<3> opcode2_t;
   typedef NbitsToMask<1> neg_opN_t;
   typedef NbitsToMask<2> opN_swz_t;
   typedef NbitsToMask<2> swz_alt_opN_t;
   typedef NbitsToMask<1> swz_alt_op2i_2_t;
   typedef NbitsToMask<1> data_format_t;
   typedef NbitsToMask<1> mask3_t;
   typedef NbitsToMask<1> unk1_t;
   typedef NbitsToMask<2> predicate_t;
   typedef NbitsToMask<1> neg_op2i_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t op2i_swz_masked = op2i_swz & op2i_swz_t::mask;
   std::uint8_t swz_alt_op2i_x_masked = swz_alt_op2i_x & swz_alt_op2i_x_t::mask;
   std::uint8_t op1i_swz_masked = op1i_swz & op1i_swz_t::mask;
   std::uint8_t swz_alt_op1i_masked = swz_alt_op1i & swz_alt_op1i_t::mask;
   std::uint8_t op_sel1_masked = op_sel1 & op_sel1_t::mask;
   std::uint8_t gr_sel_masked = gr_sel & gr_sel_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t neg_opN_masked = neg_opN & neg_opN_t::mask;
   std::uint8_t opN_swz_masked = opN_swz & opN_swz_t::mask;
   std::uint8_t swz_alt_opN_masked = swz_alt_opN & swz_alt_opN_t::mask;
   std::uint8_t swz_alt_op2i_2_masked = swz_alt_op2i_2 & swz_alt_op2i_2_t::mask;
   std::uint8_t data_format_masked = data_format & data_format_t::mask;
   std::uint8_t mask3_masked = mask3 & mask3_t::mask;
   std::uint8_t unk1_masked = unk1 & unk1_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t neg_op2i_masked = neg_op2i & neg_op2i_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t op2i_swz_shift = (std::uint64_t)op2i_swz_masked << SumBits<opt0_t>::result;
   std::uint64_t swz_alt_op2i_x_shift = (std::uint64_t)swz_alt_op2i_x_masked << SumBits<op2i_swz_t, opt0_t>::result;
   std::uint64_t op1i_swz_shift = (std::uint64_t)op1i_swz_masked << SumBits<swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op1i_shift = (std::uint64_t)swz_alt_op1i_masked << SumBits<op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t op_sel1_shift = (std::uint64_t)op_sel1_masked << SumBits<swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t gr_sel_shift = (std::uint64_t)gr_sel_masked << SumBits<op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_opN_shift = (std::uint64_t)neg_opN_masked << SumBits<opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opN_swz_shift = (std::uint64_t)opN_swz_masked << SumBits<neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_opN_shift = (std::uint64_t)swz_alt_opN_masked << SumBits<opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t swz_alt_op2i_2_shift = (std::uint64_t)swz_alt_op2i_2_masked << SumBits<swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t data_format_shift = (std::uint64_t)data_format_masked << SumBits<swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t mask3_shift = (std::uint64_t)mask3_masked << SumBits<data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t unk1_shift = (std::uint64_t)unk1_masked << SumBits<mask3_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk1_t, mask3_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t neg_op2i_shift = (std::uint64_t)neg_op2i_masked << SumBits<predicate_t, unk1_t, mask3_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<neg_op2i_t, predicate_t, unk1_t, mask3_t, data_format_t, swz_alt_op2i_2_t, swz_alt_opN_t, opN_swz_t, neg_opN_t, opcode2_t, gr_sel_t, op_sel1_t, swz_alt_op1i_t, op1i_swz_t, swz_alt_op2i_x_t, op2i_swz_t, opt0_t>::result;

   return opcode1_shift | neg_op2i_shift | predicate_shift | unk1_shift | mask3_shift | data_format_shift | swz_alt_op2i_2_shift | swz_alt_opN_shift | opN_swz_shift | neg_opN_shift | opcode2_shift | gr_sel_shift | op_sel1_shift | swz_alt_op1i_shift | op1i_swz_shift | swz_alt_op2i_x_shift | op2i_swz_shift | opt0_shift;
}

std::uint64_t INSTR_0x28000000_0x30000000_LOWER4(std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t op3i, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   typedef NbitsToMask<7> opN_t;
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> swz_mask1_t;
   typedef NbitsToMask<1> swz_mask2_t;
   typedef NbitsToMask<2> op1i_t;
   typedef NbitsToMask<2> op2i_t;
   typedef NbitsToMask<2> op3i_t;
   typedef NbitsToMask<2> opN_sel_t;
   typedef NbitsToMask<3> opcode3_t;
   typedef NbitsToMask<7> op0_t;
   typedef NbitsToMask<2> op0i_t;
   typedef NbitsToMask<2> optN_t;

   std::uint8_t opN_masked = opN & opN_t::mask;
   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t swz_mask1_masked = swz_mask1 & swz_mask1_t::mask;
   std::uint8_t swz_mask2_masked = swz_mask2 & swz_mask2_t::mask;
   std::uint8_t op1i_masked = op1i & op1i_t::mask;
   std::uint8_t op2i_masked = op2i & op2i_t::mask;
   std::uint8_t op3i_masked = op3i & op3i_t::mask;
   std::uint8_t opN_sel_masked = opN_sel & opN_sel_t::mask;
   std::uint8_t opcode3_masked = opcode3 & opcode3_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t op0i_masked = op0i & op0i_t::mask;
   std::uint8_t optN_masked = optN & optN_t::mask;

   std::uint64_t opN_shift = (std::uint64_t)opN_masked << SumBits<>::result;
   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<opN_t>::result;
   std::uint64_t swz_mask1_shift = (std::uint64_t)swz_mask1_masked << SumBits<swz_en_t, opN_t>::result;
   std::uint64_t swz_mask2_shift = (std::uint64_t)swz_mask2_masked << SumBits<swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op1i_shift = (std::uint64_t)op1i_masked << SumBits<swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op2i_shift = (std::uint64_t)op2i_masked << SumBits<op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op3i_shift = (std::uint64_t)op3i_masked << SumBits<op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opN_sel_shift = (std::uint64_t)opN_sel_masked << SumBits<op3i_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t opcode3_shift = (std::uint64_t)opcode3_masked << SumBits<opN_sel_t, op3i_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<opcode3_t, opN_sel_t, op3i_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t op0i_shift = (std::uint64_t)op0i_masked << SumBits<op0_t, opcode3_t, opN_sel_t, op3i_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;
   std::uint64_t optN_shift = (std::uint64_t)optN_masked << SumBits<op0i_t, op0_t, opcode3_t, opN_sel_t, op3i_t, op2i_t, op1i_t, swz_mask2_t, swz_mask1_t, swz_en_t, opN_t>::result;

   return optN_shift | op0i_shift | op0_shift | opcode3_shift | opN_sel_shift | op3i_shift | op2i_shift | op1i_shift | swz_mask2_shift | swz_mask1_shift | swz_en_shift | opN_shift;
}

std::uint64_t INSTR_0x28000000_0x30000000(std::uint8_t opcode1, std::uint8_t neg_op2i, std::uint8_t predicate, std::uint8_t unk1, std::uint8_t mask3, std::uint8_t data_format, std::uint8_t swz_alt_op2i_2, std::uint8_t swz_alt_opN, std::uint8_t opN_swz, std::uint8_t neg_opN, std::uint8_t opcode2, std::uint8_t gr_sel, std::uint8_t op_sel1, std::uint8_t swz_alt_op1i, std::uint8_t op1i_swz, std::uint8_t swz_alt_op2i_x, std::uint8_t op2i_swz, std::uint8_t opt0, std::uint8_t optN, std::uint8_t op0i, std::uint8_t op0, std::uint8_t opcode3, std::uint8_t opN_sel, std::uint8_t op3i, std::uint8_t op2i, std::uint8_t op1i, std::uint8_t swz_mask2, std::uint8_t swz_mask1, std::uint8_t swz_en, std::uint8_t opN)
{
   std::uint64_t hi = INSTR_0x28000000_0x30000000_HIGHER4(opcode1, neg_op2i, predicate, unk1, mask3, data_format, swz_alt_op2i_2, swz_alt_opN, opN_swz, neg_opN, opcode2, gr_sel, op_sel1, swz_alt_op1i, op1i_swz, swz_alt_op2i_x, op2i_swz, opt0);

   std::uint64_t lo = INSTR_0x28000000_0x30000000_LOWER4(optN, op0i, op0, opcode3, opN_sel, op3i, op2i, op1i, swz_mask2, swz_mask1, swz_en, opN);

   return (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_0x30000000_0x38000000_HIGHER4(std::uint8_t opcode1, std::uint8_t predicate, std::uint8_t unk9, std::uint8_t data_format, std::uint8_t unk8, std::uint8_t alt_opt0, std::uint8_t unk7, std::uint8_t alt_opt1, std::uint8_t unk6, std::uint8_t unk5, std::uint8_t opcode2, std::uint8_t modifier1, std::uint8_t modifier0, std::uint8_t abs_op1, std::uint8_t neg_op1, std::uint8_t mask2_op1, std::uint8_t mask1_op1, std::uint8_t unk4, std::uint8_t opt0)
{
   typedef NbitsToMask<2> opt0_t;
   typedef NbitsToMask<1> unk4_t;
   typedef NbitsToMask<1> mask1_op1_t;
   typedef NbitsToMask<1> mask2_op1_t;
   typedef NbitsToMask<1> neg_op1_t;
   typedef NbitsToMask<1> abs_op1_t;
   typedef NbitsToMask<1> modifier0_t;
   typedef NbitsToMask<1> modifier1_t;
   typedef NbitsToMask<2> opcode2_t;
   typedef NbitsToMask<5> unk5_t;
   typedef NbitsToMask<1> unk6_t;
   typedef NbitsToMask<1> alt_opt1_t;
   typedef NbitsToMask<1> unk7_t;
   typedef NbitsToMask<1> alt_opt0_t;
   typedef NbitsToMask<1> unk8_t;
   typedef NbitsToMask<2> data_format_t;
   typedef NbitsToMask<1> unk9_t;
   typedef NbitsToMask<3> predicate_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t opt0_masked = opt0 & opt0_t::mask;
   std::uint8_t unk4_masked = unk4 & unk4_t::mask;
   std::uint8_t mask1_op1_masked = mask1_op1 & mask1_op1_t::mask;
   std::uint8_t mask2_op1_masked = mask2_op1 & mask2_op1_t::mask;
   std::uint8_t neg_op1_masked = neg_op1 & neg_op1_t::mask;
   std::uint8_t abs_op1_masked = abs_op1 & abs_op1_t::mask;
   std::uint8_t modifier0_masked = modifier0 & modifier0_t::mask;
   std::uint8_t modifier1_masked = modifier1 & modifier1_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t unk5_masked = unk5 & unk5_t::mask;
   std::uint8_t unk6_masked = unk6 & unk6_t::mask;
   std::uint8_t alt_opt1_masked = alt_opt1 & alt_opt1_t::mask;
   std::uint8_t unk7_masked = unk7 & unk7_t::mask;
   std::uint8_t alt_opt0_masked = alt_opt0 & alt_opt0_t::mask;
   std::uint8_t unk8_masked = unk8 & unk8_t::mask;
   std::uint8_t data_format_masked = data_format & data_format_t::mask;
   std::uint8_t unk9_masked = unk9 & unk9_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t opt0_shift = (std::uint64_t)opt0_masked << SumBits<>::result;
   std::uint64_t unk4_shift = (std::uint64_t)unk4_masked << SumBits<opt0_t>::result;
   std::uint64_t mask1_op1_shift = (std::uint64_t)mask1_op1_masked << SumBits<unk4_t, opt0_t>::result;
   std::uint64_t mask2_op1_shift = (std::uint64_t)mask2_op1_masked << SumBits<mask1_op1_t, unk4_t, opt0_t>::result;
   std::uint64_t neg_op1_shift = (std::uint64_t)neg_op1_masked << SumBits<mask2_op1_t, mask1_op1_t, unk4_t, opt0_t>::result;
   std::uint64_t abs_op1_shift = (std::uint64_t)abs_op1_masked << SumBits<neg_op1_t, mask2_op1_t, mask1_op1_t, unk4_t, opt0_t>::result;
   std::uint64_t modifier0_shift = (std::uint64_t)modifier0_masked << SumBits<abs_op1_t, neg_op1_t, mask2_op1_t, mask1_op1_t, unk4_t, opt0_t>::result;
   std::uint64_t modifier1_shift = (std::uint64_t)modifier1_masked << SumBits<modifier0_t, abs_op1_t, neg_op1_t, mask2_op1_t, mask1_op1_t, unk4_t, opt0_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<modifier1_t, modifier0_t, abs_op1_t, neg_op1_t, mask2_op1_t, mask1_op1_t, unk4_t, opt0_t>::result;
   std::uint64_t unk5_shift = (std::uint64_t)unk5_masked << SumBits<opcode2_t, modifier1_t, modifier0_t, abs_op1_t, neg_op1_t, mask2_op1_t, mask1_op1_t, unk4_t, opt0_t>::result;
   std::uint64_t unk6_shift = (std::uint64_t)unk6_masked << SumBits<unk5_t, opcode2_t, modifier1_t, modifier0_t, abs_op1_t, neg_op1_t, mask2_op1_t, mask1_op1_t, unk4_t, opt0_t>::result;
   std::uint64_t alt_opt1_shift = (std::uint64_t)alt_opt1_masked << SumBits<unk6_t, unk5_t, opcode2_t, modifier1_t, modifier0_t, abs_op1_t, neg_op1_t, mask2_op1_t, mask1_op1_t, unk4_t, opt0_t>::result;
   std::uint64_t unk7_shift = (std::uint64_t)unk7_masked << SumBits<alt_opt1_t, unk6_t, unk5_t, opcode2_t, modifier1_t, modifier0_t, abs_op1_t, neg_op1_t, mask2_op1_t, mask1_op1_t, unk4_t, opt0_t>::result;
   std::uint64_t alt_opt0_shift = (std::uint64_t)alt_opt0_masked << SumBits<unk7_t, alt_opt1_t, unk6_t, unk5_t, opcode2_t, modifier1_t, modifier0_t, abs_op1_t, neg_op1_t, mask2_op1_t, mask1_op1_t, unk4_t, opt0_t>::result;
   std::uint64_t unk8_shift = (std::uint64_t)unk8_masked << SumBits<alt_opt0_t, unk7_t, alt_opt1_t, unk6_t, unk5_t, opcode2_t, modifier1_t, modifier0_t, abs_op1_t, neg_op1_t, mask2_op1_t, mask1_op1_t, unk4_t, opt0_t>::result;
   std::uint64_t data_format_shift = (std::uint64_t)data_format_masked << SumBits<unk8_t, alt_opt0_t, unk7_t, alt_opt1_t, unk6_t, unk5_t, opcode2_t, modifier1_t, modifier0_t, abs_op1_t, neg_op1_t, mask2_op1_t, mask1_op1_t, unk4_t, opt0_t>::result;
   std::uint64_t unk9_shift = (std::uint64_t)unk9_masked << SumBits<data_format_t, unk8_t, alt_opt0_t, unk7_t, alt_opt1_t, unk6_t, unk5_t, opcode2_t, modifier1_t, modifier0_t, abs_op1_t, neg_op1_t, mask2_op1_t, mask1_op1_t, unk4_t, opt0_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk9_t, data_format_t, unk8_t, alt_opt0_t, unk7_t, alt_opt1_t, unk6_t, unk5_t, opcode2_t, modifier1_t, modifier0_t, abs_op1_t, neg_op1_t, mask2_op1_t, mask1_op1_t, unk4_t, opt0_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<predicate_t, unk9_t, data_format_t, unk8_t, alt_opt0_t, unk7_t, alt_opt1_t, unk6_t, unk5_t, opcode2_t, modifier1_t, modifier0_t, abs_op1_t, neg_op1_t, mask2_op1_t, mask1_op1_t, unk4_t, opt0_t>::result;

   return opcode1_shift | predicate_shift | unk9_shift | data_format_shift | unk8_shift | alt_opt0_shift | unk7_shift | alt_opt1_shift | unk6_shift | unk5_shift | opcode2_shift | modifier1_shift | modifier0_shift | abs_op1_shift | neg_op1_shift | mask2_op1_shift | mask1_op1_shift | unk4_shift | opt0_shift;
}

std::uint64_t INSTR_0x30000000_0x38000000_LOWER4(std::uint8_t opt1, std::uint8_t unk3, std::uint8_t op0, std::uint8_t unk2, std::uint8_t unk1, std::uint8_t op1, std::uint8_t unk0, std::uint8_t mask1_op0, std::uint8_t swz_en)
{
   typedef NbitsToMask<1> swz_en_t;
   typedef NbitsToMask<1> mask1_op0_t;
   typedef NbitsToMask<5> unk0_t;
   typedef NbitsToMask<7> op1_t;
   typedef NbitsToMask<2> unk1_t;
   typedef NbitsToMask<5> unk2_t;
   typedef NbitsToMask<7> op0_t;
   typedef NbitsToMask<2> unk3_t;
   typedef NbitsToMask<2> opt1_t;

   std::uint8_t swz_en_masked = swz_en & swz_en_t::mask;
   std::uint8_t mask1_op0_masked = mask1_op0 & mask1_op0_t::mask;
   std::uint8_t unk0_masked = unk0 & unk0_t::mask;
   std::uint8_t op1_masked = op1 & op1_t::mask;
   std::uint8_t unk1_masked = unk1 & unk1_t::mask;
   std::uint8_t unk2_masked = unk2 & unk2_t::mask;
   std::uint8_t op0_masked = op0 & op0_t::mask;
   std::uint8_t unk3_masked = unk3 & unk3_t::mask;
   std::uint8_t opt1_masked = opt1 & opt1_t::mask;

   std::uint64_t swz_en_shift = (std::uint64_t)swz_en_masked << SumBits<>::result;
   std::uint64_t mask1_op0_shift = (std::uint64_t)mask1_op0_masked << SumBits<swz_en_t>::result;
   std::uint64_t unk0_shift = (std::uint64_t)unk0_masked << SumBits<mask1_op0_t, swz_en_t>::result;
   std::uint64_t op1_shift = (std::uint64_t)op1_masked << SumBits<unk0_t, mask1_op0_t, swz_en_t>::result;
   std::uint64_t unk1_shift = (std::uint64_t)unk1_masked << SumBits<op1_t, unk0_t, mask1_op0_t, swz_en_t>::result;
   std::uint64_t unk2_shift = (std::uint64_t)unk2_masked << SumBits<unk1_t, op1_t, unk0_t, mask1_op0_t, swz_en_t>::result;
   std::uint64_t op0_shift = (std::uint64_t)op0_masked << SumBits<unk2_t, unk1_t, op1_t, unk0_t, mask1_op0_t, swz_en_t>::result;
   std::uint64_t unk3_shift = (std::uint64_t)unk3_masked << SumBits<op0_t, unk2_t, unk1_t, op1_t, unk0_t, mask1_op0_t, swz_en_t>::result;
   std::uint64_t opt1_shift = (std::uint64_t)opt1_masked << SumBits<unk3_t, op0_t, unk2_t, unk1_t, op1_t, unk0_t, mask1_op0_t, swz_en_t>::result;

   return opt1_shift | unk3_shift | op0_shift | unk2_shift | unk1_shift | op1_shift | unk0_shift | mask1_op0_shift | swz_en_shift;
}

std::uint64_t INSTR_0x30000000_0x38000000(std::uint8_t opcode1, std::uint8_t predicate, std::uint8_t unk9, std::uint8_t data_format, std::uint8_t unk8, std::uint8_t alt_opt0, std::uint8_t unk7, std::uint8_t alt_opt1, std::uint8_t unk6, std::uint8_t unk5, std::uint8_t opcode2, std::uint8_t modifier1, std::uint8_t modifier0, std::uint8_t abs_op1, std::uint8_t neg_op1, std::uint8_t mask2_op1, std::uint8_t mask1_op1, std::uint8_t unk4, std::uint8_t opt0, std::uint8_t opt1, std::uint8_t unk3, std::uint8_t op0, std::uint8_t unk2, std::uint8_t unk1, std::uint8_t op1, std::uint8_t unk0, std::uint8_t mask1_op0, std::uint8_t swz_en)
{
   std::uint64_t hi = INSTR_0x30000000_0x38000000_HIGHER4(opcode1, predicate, unk9, data_format, unk8, alt_opt0, unk7, alt_opt1, unk6, unk5, opcode2, modifier1, modifier0, abs_op1, neg_op1, mask2_op1, mask1_op1, unk4, opt0);

   std::uint64_t lo = INSTR_0x30000000_0x38000000_LOWER4(opt1, unk3, op0, unk2, unk1, op1, unk0, mask1_op0, swz_en);

   return (hi << 32) | lo;
}

//=====================

std::uint64_t INSTR_0x38000000_0x40000000_HIGHER4(std::uint8_t opcode1, std::uint8_t predicate, std::uint8_t unk1, std::uint8_t cond, std::uint8_t unk2, std::uint8_t opcode2, std::uint8_t unk3, std::uint8_t data_format, std::uint8_t unk4)
{
   typedef NbitsToMask<8> unk4_t;
   typedef NbitsToMask<3> data_format_t;
   typedef NbitsToMask<3> unk3_t;
   typedef NbitsToMask<2> opcode2_t;
   typedef NbitsToMask<6> unk2_t;
   typedef NbitsToMask<1> cond_t;
   typedef NbitsToMask<1> unk1_t;
   typedef NbitsToMask<3> predicate_t;
   typedef NbitsToMask<5> opcode1_t;

   std::uint8_t unk4_masked = unk4 & unk4_t::mask;
   std::uint8_t data_format_masked = data_format & data_format_t::mask;
   std::uint8_t unk3_masked = unk3 & unk3_t::mask;
   std::uint8_t opcode2_masked = opcode2 & opcode2_t::mask;
   std::uint8_t unk2_masked = unk2 & unk2_t::mask;
   std::uint8_t cond_masked = cond & cond_t::mask;
   std::uint8_t unk1_masked = unk1 & unk1_t::mask;
   std::uint8_t predicate_masked = predicate & predicate_t::mask;
   std::uint8_t opcode1_masked = opcode1 & opcode1_t::mask;

   std::uint64_t unk4_shift = (std::uint64_t)unk4_masked << SumBits<>::result;
   std::uint64_t data_format_shift = (std::uint64_t)data_format_masked << SumBits<unk4_t>::result;
   std::uint64_t unk3_shift = (std::uint64_t)unk3_masked << SumBits<data_format_t, unk4_t>::result;
   std::uint64_t opcode2_shift = (std::uint64_t)opcode2_masked << SumBits<unk3_t, data_format_t, unk4_t>::result;
   std::uint64_t unk2_shift = (std::uint64_t)unk2_masked << SumBits<opcode2_t, unk3_t, data_format_t, unk4_t>::result;
   std::uint64_t cond_shift = (std::uint64_t)cond_masked << SumBits<unk2_t, opcode2_t, unk3_t, data_format_t, unk4_t>::result;
   std::uint64_t unk1_shift = (std::uint64_t)unk1_masked << SumBits<cond_t, unk2_t, opcode2_t, unk3_t, data_format_t, unk4_t>::result;
   std::uint64_t predicate_shift = (std::uint64_t)predicate_masked << SumBits<unk1_t, cond_t, unk2_t, opcode2_t, unk3_t, data_format_t, unk4_t>::result;
   std::uint64_t opcode1_shift = (std::uint64_t)opcode1_masked << SumBits<predicate_t, unk1_t, cond_t, unk2_t, opcode2_t, unk3_t, data_format_t, unk4_t>::result;

   return opcode1_shift | predicate_shift | unk1_shift | cond_shift | unk2_shift | opcode2_shift | unk3_shift | data_format_shift | unk4_shift;
}

std::uint64_t INSTR_0x38000000_0x40000000_LOWER4(std::uint8_t byte1, std::uint8_t chunk0, std::uint8_t op1, std::uint8_t op2, std::uint8_t op3)
{
   typedef NbitsToMask<6> op3_t;
   typedef NbitsToMask<6> op2_t;
   typedef NbitsToMask<6> op1_t;
   typedef NbitsToMask<6> chunk0_t;
   typedef NbitsToMask<8> byte1_t;

   std::uint8_t op3_masked = op3 & op3_t::mask;
   std::uint8_t op2_masked = op2 & op2_t::mask;
   std::uint8_t op1_masked = op1 & op1_t::mask;
   std::uint8_t chunk0_masked = chunk0 & chunk0_t::mask;
   std::uint8_t byte1_masked = byte1 & byte1_t::mask;

   std::uint64_t op3_shift = (std::uint64_t)op3_masked << SumBits<>::result;
   std::uint64_t op2_shift = (std::uint64_t)op2_masked << SumBits<op3_t>::result;
   std::uint64_t op1_shift = (std::uint64_t)op1_masked << SumBits<op2_t, op3_t>::result;
   std::uint64_t chunk0_shift = (std::uint64_t)chunk0_masked << SumBits<op1_t, op2_t, op3_t>::result;
   std::uint64_t byte1_shift = (std::uint64_t)byte1_masked << SumBits<chunk0_t, op1_t, op2_t, op3_t>::result;

   return byte1_shift | chunk0_shift | op1_shift | op2_shift | op3_shift;
}

std::uint64_t INSTR_0x38000000_0x40000000(std::uint8_t opcode1, std::uint8_t predicate, std::uint8_t unk1, std::uint8_t cond, std::uint8_t unk2, std::uint8_t opcode2, std::uint8_t unk3, std::uint8_t data_format, std::uint8_t unk4, std::uint8_t byte1, std::uint8_t chunk0, std::uint8_t op1, std::uint8_t op2, std::uint8_t op3)
{
   std::uint64_t hi = INSTR_0x38000000_0x40000000_HIGHER4(opcode1, predicate, unk1, cond, unk2, opcode2, unk3, data_format, unk4);

   std::uint64_t lo = INSTR_0x38000000_0x40000000_LOWER4(byte1, chunk0, op1, op2, op3);

   return (hi << 32) | lo;
}

//=====================


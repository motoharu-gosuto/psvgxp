#pragma once

#include <cstdint>

#define GXP_MAGIC 0x00505847

#pragma pack(push, 1)

typedef struct SceGxmProgram
{
   std::uint32_t magic; // should be GXP_MAGIC
   
   std::uint8_t major_version; //min 1
   std::uint8_t minor_version; //min 4
   std::uint16_t unk6; //maybe padding
   
   std::uint32_t size; //size of file - ignoring padding bytes at the end after SceGxmProgramParameter table
   std::uint32_t unkC;
   
   std::uint16_t unk10;
   std::uint8_t unk12;
   std::uint8_t unk13;

   std::uint8_t unk14; //related to profile_type
   std::uint8_t unk15;
   std::uint8_t unk16;
   std::uint8_t unk17;

   std::uint32_t unk18;
   std::uint32_t unk1C;
   
   std::uint32_t unk20;
   std::uint32_t parameter_count;
   std::uint32_t parameters_offset; //offset to table of SceGxmProgramParameter
   std::uint32_t unk2C;

   std::uint16_t primary_reg_count; // (PAs)
   std::uint16_t secondary_reg_count; // (SAs)
   std::uint16_t temp_reg_count1; //not sure // - verify this
   std::uint16_t unk36;
   std::uint16_t temp_reg_count2; //not sure // - verify this
   std::uint16_t unk3A; //some item count?
   
   std::uint32_t unk3C;

   std::uint32_t maybe_asm_offset; 
   std::uint32_t unk44;

   std::uint32_t unk_offset_48;
   std::uint32_t unk_offset_4C;

   std::uint32_t unk_50; //usually zero?
   std::uint32_t unk_54; //usually zero?
   std::uint32_t unk_58; //usually zero?
   std::uint32_t unk_5C; //usually zero?

   std::uint32_t unk_60;
   std::uint32_t unk_64;
   std::uint32_t unk_68;
   std::uint32_t unk_6C;

   std::uint32_t unk_70;
   std::uint32_t maybe_literal_ofset; //not sure
   std::uint32_t unk_78;
   std::uint32_t maybe_parameters_offset2; //not sure
} SceGxmProgram;

//category - probably not everything is applicable to fragment / vector program

typedef enum SceGxmParameterCategory 
{
   SCE_GXM_PARAMETER_CATEGORY_ATTRIBUTE = 0, // - untested
   SCE_GXM_PARAMETER_CATEGORY_UNIFORM = 1, // - looks ok
   SCE_GXM_PARAMETER_CATEGORY_SAMPLER = 2, // - looks ok
   SCE_GXM_PARAMETER_CATEGORY_AUXILIARY_SURFACE = 3, // - untested
   SCE_GXM_PARAMETER_CATEGORY_UNIFORM_BUFFER = 4, // - untested
} SceGxmParameterCategory;

//fully tested

typedef enum SceGxmParameterType 
{
   SCE_GXM_PARAMETER_TYPE_F32 = 0,
   SCE_GXM_PARAMETER_TYPE_F16 = 1,
   SCE_GXM_PARAMETER_TYPE_C10 = 2,
   SCE_GXM_PARAMETER_TYPE_U32 = 3,
   SCE_GXM_PARAMETER_TYPE_S32 = 4,
   SCE_GXM_PARAMETER_TYPE_U16 = 5,
   SCE_GXM_PARAMETER_TYPE_S16 = 6,
   SCE_GXM_PARAMETER_TYPE_U8 = 7,
   SCE_GXM_PARAMETER_TYPE_S8 = 8,
   SCE_GXM_PARAMETER_TYPE_AGGREGATE = 9,
} SceGxmParameterType;

typedef struct SceGxmProgramParameter // SceGxmProgramParameter
{
   std::uint32_t name_offset; //offset from here to string name

   std::uint32_t type;   //[unused(16):container_index(4):component_count(4):parameter_type(4):category(4)]
                         //container_index - applicable for constants, not applicable for samplers (buffer, default, texture)
                         //component_count -  applicable for constants, not applicable for samplers (select size like float2, float3, float3 ...)
                         //parameter_type -  applicable for constants, not applicable for samplers (select type like float, half, fixed ...)  - SceGxmParameterType
                         //category -  select constant or sampler - SceGxmParameterCategory

   std::uint32_t array_size; //number of elements in array (applicable for constants, not applicable for samplers) - this confirmed to be unsigned integer
   std::int32_t resource_index; //register number (applicable for constants, applicable for samplers) - this confirmed to be signed integer
}SceGxmProgramParameter;

typedef struct symbol_t
{
   std::uint64_t pos;
   SceGxmProgramParameter symbol;
}symbol_t;

#pragma pack(pop)
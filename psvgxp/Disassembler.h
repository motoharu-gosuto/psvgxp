#pragma once

#include <cstdint>
#include <string>

#include <psp2shaderperf.h>

#include "SceGxmTypes.h"

void read_gxp_data(const std::string& path, const void** gxp_data);

void destroy_gxp_data(const void* gxp_data);

std::uint64_t get_asm_offset(const SceGxmProgram* header);

std::uint64_t get_literal_offset(const SceGxmProgram* header);

void prepare_options(const std::string& gxp_path, ScePsp2ShaderPerfOptions* opt);

std::uint64_t* get_instr_ptr(const ScePsp2ShaderPerfOptions* opt, const SceGxmProgram* header, std::int32_t index);

//disassemble donor gxp file that is specified in opt
//instruction should be already set
//instruction_raw is used only for output listing
void disasm_gxp_implicit(ScePsp2ShaderPerfOptions* opt, std::uint64_t instruction_raw, int num_instructions = 1);

//disassemble donor gxp file that is specified in opt
//instruction will be set by this function
//instruction_raw is used only for output listing
void disasm_gxp_explicit(ScePsp2ShaderPerfOptions* opt, const SceGxmProgram* header, std::uint64_t instruction_raw, int num_instructions = 1);
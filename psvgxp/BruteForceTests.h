#pragma once

#include "SceGxmTypes.h"

#include <psp2shaderperf.h>

void enumerate_0x00000000_0x08000000_orig(const SceGxmProgram* header, ScePsp2ShaderPerfOptions* opt);

void enumerate_0x00000000_0x08000000(const SceGxmProgram* header, ScePsp2ShaderPerfOptions* opt);

void enumerate_0x08000000_0x10000000_swizzles(const SceGxmProgram* header, ScePsp2ShaderPerfOptions* opt);
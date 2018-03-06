# psvgxp
Reversing GXP shader binaries

## What is the process?

1. You need to select one of instruction groups from here:

https://wiki.henkaku.xyz/vita/SGX543

One range typically expresses single instruction or group of related instructions. This is because opcode1 field is common for all instructions and is located in first byte.
For example desired range can be 0x20000000_-_0x28000000.

2. You need to figure out what fields are used in the instruction. Like encoding of operands, swizzles etc.
There is already extensive documentation for this. Basic fields include: RS2, RSI2, R6, RI2, RIO6, RSWZ2, RSWZ3, IMM6, IDX6, CNST6.

For different instructions - fields may be located in different places. However they usually have same meaning. It should not be a big problem to locate them based on already existing documentation.

The way to figure out fields is to poke psp2shaderperf using donor shader file. 
If you want to go through linear combinations it can be done in cycle like:

```cpp
void raw_bruteforce(ScePsp2ShaderPerfOptions* opt, const SceGxmProgram* header)
{
   std::uint64_t* instr_raw_ptr = get_instr_ptr(opt, header, 0);

   for(std::uint64_t i = 0x0800000000000000; i != 0x1000000000000000; i = i + 0x1)
   {         
      *instr_raw_ptr = i;

      disasm_gxp_implicit(opt, i);  
   }
}
```

By varying increment value you can cycle through different fields of instruction.

If you want to explore complex dependencies of fields or tweak group of specific fields you can execute single calls like:

```cpp
std::uint64_t instr =  0x2000000000000000;
disasm_gxp_explicit(&opt, &header, instr);
```

3. After you have discovered rough layout of fields you can describe them here:

https://github.com/motoharu-gosuto/psvgxp/blob/master/psvgxp_encgen/grammar.json

Sometimes it is usefull to do some notes on paper when working on step 2.

Then you can run this code:

https://github.com/motoharu-gosuto/psvgxp/blob/master/psvgxp_encgen/psvgxp_encgen.cpp

to generate code for encoder of your instruction here:

https://github.com/motoharu-gosuto/psvgxp/blob/master/psvgxp/InstructionEncoders.cpp

4. Having instruction encoder greatly simplifies further testing. Instead of tweaking single 64 bit value you can explicitly tweak different combinations of fields that you want. Then this value can be stored in instr_raw_ptr. You can then do extensive testing by executing single calls and tweaking different fields like this:

```
std::uint64_t instr = INSTR_OP4_0x00000000_0x08000000(4, 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
disasm_gxp_explicit(&opt, &header, instr);
```

5. This is completely optional. Usually it is hard to tweak different combinations of fields in a single 64 bit value. If you want to do extensive checking of field combinations you can use instruction encoder and write some code like this:

https://github.com/motoharu-gosuto/psvgxp/blob/master/psvgxp/BruteForceTests.cpp

Completing these steps gives more than enough information which you can then put on wiki to document specific instruction range.

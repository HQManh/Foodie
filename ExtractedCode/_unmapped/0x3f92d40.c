// rea decompile_all
// name: FUN_03f92d40
// address: 0x3f92d40
// body: available
// range: 0x3f92d40-0x3f92df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong * FUN_03f92d40(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  byte *__dest;
  uint uVar3;
  ulong uVar4;
  
  uVar4 = *param_1;
  uVar1 = 10;
  if ((*param_1 & 1) != 0) {
    uVar1 = (uVar4 & 0xfffffffffffffffe) - 1;
  }
  uVar3 = (uint)uVar4 & 0xff;
  if (param_3 < uVar1 || param_3 - uVar1 == 0) {
    __dest = (byte *)((long)param_1 + 2);
    if ((uVar4 & 1) != 0) {
      __dest = (byte *)param_1[2];
    }
    if (param_3 != 0) {
      memmove(__dest,param_2,param_3 << 1);
      uVar3 = (uint)(byte)*param_1;
    }
    if ((uVar3 & 1) == 0) {
      *(byte *)param_1 = (byte)((int)param_3 << 1);
    }
    else {
      param_1[1] = param_3;
    }
    (__dest + param_3 * 2)[0] = 0;
    (__dest + param_3 * 2)[1] = 0;
  }
  else {
    uVar2 = uVar4 >> 1 & 0x7f;
    if ((uVar4 & 1) != 0) {
      uVar2 = param_1[1];
    }
    FUN_03f92e20(param_1,uVar1,param_3 - uVar1,uVar2,0,uVar2,param_3);
  }
  return param_1;
}


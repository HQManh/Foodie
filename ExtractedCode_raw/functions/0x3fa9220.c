// rea decompile_all
// name: FUN_03fa9220
// address: 0x3fa9220
// body: available
// range: 0x3fa9220-0x3fa92f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong * FUN_03fa9220(ulong *param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *param_1;
  lVar2 = 10;
  if ((*param_1 & 1) != 0) {
    lVar2 = (uVar4 & 0xfffffffffffffffe) - 1;
  }
  uVar1 = uVar4 >> 1 & 0x7f;
  if ((uVar4 & 1) != 0) {
    uVar1 = param_1[1];
  }
  if (lVar2 - uVar1 < param_3) {
    FUN_03f92e20(param_1,lVar2,(param_3 - lVar2) + uVar1,uVar1,uVar1,0,param_3);
  }
  else if (param_3 != 0) {
    uVar5 = (uint)uVar4 & 0xff;
    uVar3 = (long)param_1 + 2;
    if ((uVar4 & 1) != 0) {
      uVar3 = param_1[2];
    }
    if ((param_3 & 0x7fffffffffffffff) != 0) {
      memmove((void *)(uVar3 + uVar1 * 2),param_2,param_3 << 1);
      uVar5 = (uint)(byte)*param_1;
    }
    uVar1 = uVar1 + param_3;
    if ((uVar5 & 1) == 0) {
      *(char *)param_1 = (char)((int)uVar1 << 1);
    }
    else {
      param_1[1] = uVar1;
    }
    *(undefined2 *)(uVar3 + uVar1 * 2) = 0;
  }
  return param_1;
}


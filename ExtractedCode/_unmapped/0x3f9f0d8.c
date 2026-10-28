// rea decompile_all
// name: FUN_03f9f0d8
// address: 0x3f9f0d8
// body: available
// range: 0x3f9f0d8-0x3f9f183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f9f0d8(long *param_1,ulong param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 uStack_11;
  
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1a) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x3ea3d70a3f4ccccd;
  uVar1 = *param_4;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 4) = uVar1;
  param_1[6] = 0;
  if (param_2 == 0) {
    uVar3 = 0x20;
  }
  else {
    uVar2 = 4;
    do {
      uVar3 = uVar2;
      uVar2 = uVar3 << 1;
    } while ((ulong)(long)((float)uVar3 * 0.8) <= param_2);
  }
  FUN_03f9f184(param_1 + 9,uVar3,&uStack_11);
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[1] = (long)((float)((ulong)param_1[2] >> 0x20) * (float)(ulong)param_1[0xc]);
  *param_1 = (long)((float)param_1[2] * (float)(ulong)param_1[0xc]);
  return;
}


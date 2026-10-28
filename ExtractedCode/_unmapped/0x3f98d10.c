// rea decompile_all
// name: FUN_03f98d10
// address: 0x3f98d10
// body: available
// range: 0x3f98d10-0x3f98d63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_03f98d10(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  
  if (*param_2 == 2) {
    uVar2 = (uint)*(ushort *)(param_1 + 1);
    bVar1 = *(ushort *)(param_1 + 1) == 0xffff;
    puVar3 = (undefined4 *)((long)param_1 + 6);
  }
  else {
    if (*param_2 != 1) {
      uVar2 = param_1[1];
      puVar3 = param_1 + 2;
      goto LAB_03f98d58;
    }
    uVar2 = (uint)*(byte *)(param_1 + 1);
    puVar3 = (undefined4 *)((long)param_1 + 5);
    bVar1 = *(byte *)(param_1 + 1) == 0xff;
  }
  if (bVar1) {
    uVar2 = 0xffffffff;
  }
LAB_03f98d58:
  auVar4._4_4_ = uVar2;
  auVar4._0_4_ = *param_1;
  auVar4._8_4_ = *puVar3;
  auVar4._12_4_ = 0;
  return auVar4;
}


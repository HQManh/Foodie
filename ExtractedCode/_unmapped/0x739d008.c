// rea decompile_all
// name: FUN_0739d008
// address: 0x739d008
// body: available
// range: 0x739d008-0x739d123 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0739d008(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_4 + 0x20);
  *param_1 = 0;
  local_40 = param_2;
  uStack_38 = param_3;
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    FUN_03f95a6c();
    lVar2 = *(long *)(param_4 + 0x20);
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x48) = uStack_38;
  *(undefined8 *)(param_1 + 0x40) = local_40;
  lVar2 = *(long *)(param_4 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  auVar3 = FUN_04a6d544(&local_40,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x50));
  if ((*(ushort *)(*(long *)(param_4 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar3;
  lVar2 = *(long *)(param_4 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  iVar1 = FUN_05fd6900(&local_40,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x98));
  lVar2 = *(long *)(param_4 + 0x20);
  *(long *)(param_1 + 0x58) = (long)iVar1;
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  iVar1 = FUN_05fd6900(&local_40,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x98));
  *(undefined8 *)(param_1 + 0x38) = 0;
  param_1[0x50] = 0 < iVar1;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}


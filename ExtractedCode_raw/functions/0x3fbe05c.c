// rea decompile_all
// name: FUN_03fbe05c
// address: 0x3fbe05c
// body: available
// range: 0x3fbe05c-0x3fbe19b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fbe05c(undefined8 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar5 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
  uVar2 = (ulong)*(byte *)(lVar5 + 0x52);
  if (uVar2 == 0) {
    lVar7 = 0;
  }
  else {
    iVar4 = 0;
    plVar3 = *(long **)(lVar5 + 0x30);
    do {
      uVar2 = uVar2 - 1;
      iVar4 = (*(uint *)(*plVar3 + 8) >> 0x1d & 1) + iVar4;
      plVar3 = plVar3 + 1;
    } while (uVar2 != 0);
    lVar7 = (long)iVar4;
  }
  if (DAT_09535830 == 0) {
    DAT_09535830 = il2cpp_array_class_get(DAT_095353e8,1);
    DataMemoryBarrier(2,3);
  }
  uVar1 = il2cpp_array_new_specific(DAT_09535830,lVar7);
  FUN_03f5ef9c(param_4,uVar1);
  *param_3 = 0;
  if (*(int *)(*(long *)(lVar5 + 0x20) + 0x28) < 0) {
    param_1 = il2cpp_object_unbox(param_1);
  }
  if (*(char *)(lVar5 + 0x52) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
  }
  uVar1 = FUN_03fbcd84(lVar5,param_1,uVar1,param_3);
  uVar2 = (ulong)*(byte *)(lVar5 + 0x52);
  if (*(byte *)(lVar5 + 0x52) != 0) {
    uVar6 = 0;
    iVar4 = 0;
    do {
      if ((*(byte *)(*(long *)(*(long *)(lVar5 + 0x30) + uVar6 * 8) + 0xb) >> 5 & 1) != 0) {
        *(undefined8 *)(*param_4 + (long)iVar4 * 8 + 0x20) =
             *(undefined8 *)(*(long *)(param_2 + 0x18) + uVar6 * 8 + 0x20);
        FUN_03f5d7b8();
        uVar2 = (ulong)*(byte *)(lVar5 + 0x52);
        iVar4 = iVar4 + 1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  return uVar1;
}


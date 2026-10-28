// rea decompile_all
// name: FUN_03fbdf78
// address: 0x3fbdf78
// body: available
// range: 0x3fbdf78-0x3fbe05b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fbdf78(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  void *__src;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  int iVar7;
  void *__dest;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  long local_58;
  long local_48;
  
  plVar4 = &local_58;
  uVar1 = FUN_03f81a28(param_1,&local_48);
  if (local_58 == 0) {
    if (param_2 != 0) {
      lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
      uVar5 = (ulong)*(byte *)(lVar8 + 0x52);
      if (*(byte *)(lVar8 + 0x52) != 0) {
        lVar9 = 0;
        uVar10 = 0;
        do {
          if ((*(byte *)(*(long *)(*(long *)(lVar8 + 0x30) + uVar10 * 8) + 0xb) >> 5 & 1) != 0) {
            lVar2 = il2cpp_class_from_type();
            if (*(int *)(lVar2 + 0x28) < 0) {
              __dest = *(void **)(param_2 + lVar9 * 8);
              __src = (void *)FUN_03f99594(*(undefined8 *)(local_48 + 0x20 + lVar9 * 8));
              memcpy(__dest,__src,(long)*(int *)(lVar2 + 0x108));
            }
            else {
              **(undefined8 **)(param_2 + lVar9 * 8) = *(undefined8 *)(local_48 + 0x20 + lVar9 * 8);
            }
            uVar5 = (ulong)*(byte *)(lVar8 + 0x52);
            lVar9 = lVar9 + 1;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar5);
      }
    }
    return uVar1;
  }
  auVar11 = il2cpp_raise_exception(local_58);
  lVar8 = auVar11._8_8_;
  uVar1 = auVar11._0_8_;
  lVar9 = *(long *)(*(long *)(lVar8 + 0x10) + 0x10);
  uVar5 = (ulong)*(byte *)(lVar9 + 0x52);
  if (uVar5 == 0) {
    lVar2 = 0;
  }
  else {
    iVar7 = 0;
    plVar6 = *(long **)(lVar9 + 0x30);
    do {
      uVar5 = uVar5 - 1;
      iVar7 = (*(uint *)(*plVar6 + 8) >> 0x1d & 1) + iVar7;
      plVar6 = plVar6 + 1;
    } while (uVar5 != 0);
    lVar2 = (long)iVar7;
  }
  if (DAT_09535830 == 0) {
    DAT_09535830 = il2cpp_array_class_get(DAT_095353e8,1);
    DataMemoryBarrier(2,3);
  }
  uVar3 = il2cpp_array_new_specific(DAT_09535830,lVar2);
  FUN_03f5ef9c(param_4,uVar3);
  *plVar4 = 0;
  if (*(int *)(*(long *)(lVar9 + 0x20) + 0x28) < 0) {
    uVar1 = il2cpp_object_unbox(uVar1);
  }
  if (*(char *)(lVar9 + 0x52) == '\0') {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar8 + 0x18);
  }
  uVar1 = FUN_03fbcd84(lVar9,uVar1,uVar3,plVar4);
  uVar5 = (ulong)*(byte *)(lVar9 + 0x52);
  if (*(byte *)(lVar9 + 0x52) != 0) {
    uVar10 = 0;
    iVar7 = 0;
    do {
      if ((*(byte *)(*(long *)(*(long *)(lVar9 + 0x30) + uVar10 * 8) + 0xb) >> 5 & 1) != 0) {
        *(undefined8 *)(*param_4 + (long)iVar7 * 8 + 0x20) =
             *(undefined8 *)(*(long *)(lVar8 + 0x18) + uVar10 * 8 + 0x20);
        FUN_03f5d7b8();
        uVar5 = (ulong)*(byte *)(lVar9 + 0x52);
        iVar7 = iVar7 + 1;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar5);
  }
  return uVar1;
}


// rea decompile_all
// name: CakeOrder.BaseUI.UIPopupHeartRefill$$UpdateButtons
// address: 0x42d8d34
// body: available
// range: 0x42d8d34-0x42d8d37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_UIPopupHeartRefill__UpdateButtons(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  
  if ((DAT_095173eb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4970);
    DAT_095173eb = 1;
  }
  lVar2 = *(long *)(DAT_091b4970 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_042d8e8c;
  uVar3 = CakeOrder_HeartSystem_HeartSystemController__IsInUnlimitedHeart
                    (**(long **)(lVar2 + 0xb8),0);
  if ((uVar3 & 1) == 0) {
    lVar2 = *(long *)(DAT_091b4970 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_042d8e8c;
    iVar1 = CakeOrder_HeartSystem_HeartSystemController__GetHeartAmount(**(long **)(lVar2 + 0xb8),0)
    ;
    lVar2 = *(long *)(DAT_091b4970 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c(lVar2);
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if ((**(long **)(lVar2 + 0xb8) == 0) ||
       (lVar2 = *(long *)(**(long **)(lVar2 + 0xb8) + 0x30), lVar2 == 0)) goto LAB_042d8e8c;
    bVar4 = iVar1 < *(int *)(lVar2 + 0x10);
  }
  else {
    bVar4 = false;
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    UnityEngine_UI_Selectable__set_interactable(*(long *)(param_1 + 0xc0),bVar4,0);
    if (*(long *)(param_1 + 200) != 0) {
      UnityEngine_UI_Selectable__set_interactable(*(long *)(param_1 + 200),bVar4,0);
      return;
    }
  }
LAB_042d8e8c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


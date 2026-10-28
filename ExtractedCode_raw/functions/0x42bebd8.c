// rea decompile_all
// name: CakeOrder.UI.UIPopupNewVersion$$OnBeforeShow
// address: 0x42bebd8
// body: available
// range: 0x42bebd8-0x42becdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42becdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIPopupNewVersion__OnBeforeShow(long param_1)

{
  long lVar1;
  int iVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  if ((DAT_09517307 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b14a0);
    DAT_09517307 = 1;
  }
  CakeOrder_BaseUI_UICakePopup__OnBeforeShow(param_1,0);
  if (*(int *)(param_1 + 0x118) < 1) {
    if (*(char *)(param_1 + 0x11c) != '\0') {
      *(undefined1 *)(param_1 + 0x11c) = 0;
    }
  }
  else {
    fVar3 = 0.0;
    iVar2 = 0;
    do {
      if ((*(long *)(param_1 + 0x110) == 0) ||
         (lVar1 = FUN_057e0998(*(long *)(param_1 + 0x110),iVar2,DAT_091b14a0), lVar1 == 0))
      goto LAB_042becdc;
      fVar3 = fVar3 + 0.05;
      CakeOrder_BaseUI_UIElementAbstract__Show(fVar3,lVar1,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x118));
    if ((*(char *)(param_1 + 0x11c) != '\0') &&
       (*(undefined1 *)(param_1 + 0x11c) = 0, 0 < *(int *)(param_1 + 0x118))) {
      iVar2 = 0;
      do {
        if ((*(long *)(param_1 + 0x110) == 0) ||
           (lVar1 = FUN_057e0998(*(long *)(param_1 + 0x110),iVar2,DAT_091b14a0), lVar1 == 0)) {
LAB_042becdc:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar4 = CakeOrder_UI_UIItemRewardClaimed__LoadContent();
        Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar4._0_8_,auVar4._8_8_,0);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x118));
    }
  }
  return;
}


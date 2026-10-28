// rea decompile_all
// name: CakeOrder.InGame.UIPopupNewBooster$$OnClickClose
// address: 0x437d738
// body: available
// range: 0x437d738-0x437d883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x437d79c to 0x42d803c CakeOrder.BaseUI.UICakePopup$$OnClickClose (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x437d87c to 0x437d2f0 CakeOrder.InGame.UIPopupNewBooster$$TryShowAnim (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x437d880 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIPopupNewBooster__OnClickClose(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  
  if ((DAT_09517951 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091dbff0);
    FUN_03f5c2a4(&DAT_092185c0);
    DAT_09517951 = 1;
  }
  if ((*(int *)(param_1 + 0x10c) != 0) || (*(long *)(param_1 + 0x110) == 0)) {
    CakeOrder_BaseUI_UICakePopup__OnClickClose(param_1,0);
    return;
  }
  plVar2 = *(long **)(param_1 + 0xf0);
  *(undefined4 *)(param_1 + 0x10c) = 1;
  if (*(int *)(DAT_09182278 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = CakeOrder_Localization_CakeLocalization__Tr(DAT_092185c0,0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x558))(plVar2,uVar1,*(undefined8 *)(*plVar2 + 0x560));
    DG_Tweening_ShortcutExtensions__DOKill(*(undefined8 *)(param_1 + 0xd0),0,0);
    uVar1 = DG_Tweening_DOTweenModuleUI__DOFade(0,0x3eb33333,*(undefined8 *)(param_1 + 0xd0),0);
    FUN_04d9656c(uVar1,1,DAT_091dbff0);
    DG_Tweening_ShortcutExtensions__DOKill(*(undefined8 *)(param_1 + 0xe8),0,0);
    uVar1 = DG_Tweening_DOTweenModuleUI__DOFade(0,0x3eb33333,*(undefined8 *)(param_1 + 0xe8),0);
    FUN_04d9656c(uVar1,1,DAT_091dbff0);
    CakeOrder_InGame_UIPopupNewBooster__TryShowAnim(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


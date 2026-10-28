// rea decompile_all
// name: CakeOrder.UI.UIListUpgradeBuildingOptionCards$$OnDoneShow
// address: 0x42c9c84
// body: available
// range: 0x42c9c84-0x42c9d37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c9d30 to 0x42c0124 CakeOrder.UI.UIMapBuildingProgress$$UpdateVisual (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42c9d34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIListUpgradeBuildingOptionCards__OnDoneShow(long param_1)

{
  long lVar1;
  int iVar2;
  
  if ((DAT_09517365 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b14e8);
    DAT_09517365 = 1;
  }
  CakeOrder_UI_UIListUpgradeBuildingOptionCards__FitScrollContentToCardList(param_1);
  if (0 < *(int *)(param_1 + 0x110)) {
    iVar2 = 0;
    do {
      if ((*(long *)(param_1 + 0x100) == 0) ||
         (lVar1 = FUN_057e0998(*(long *)(param_1 + 0x100),iVar2,DAT_091b14e8), lVar1 == 0))
      goto LAB_042c9d34;
      CakeOrder_BaseUI_UIElementAbstract__Show((float)iVar2 * 0.05,lVar1,0,0);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x110));
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    CakeOrder_UI_UIMapBuildingProgress__UpdateVisual(*(long *)(param_1 + 0x60),0);
    return;
  }
LAB_042c9d34:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


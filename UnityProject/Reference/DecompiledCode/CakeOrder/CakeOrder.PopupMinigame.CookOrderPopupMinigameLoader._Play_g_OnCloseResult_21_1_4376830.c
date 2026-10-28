// rea decompile_all
// name: CakeOrder.PopupMinigame.CookOrderPopupMinigameLoader$$<Play>g__OnCloseResult|21_1
// address: 0x4376830
// body: available
// range: 0x4376830-0x4376937 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4376930 to 0x4376938 CakeOrder.PopupMinigame.UIPopupMinigameCookOrder$$ShowViewCoverForRetry (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4376934 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_PopupMinigame_CookOrderPopupMinigameLoader__<Play>g__OnCloseResult_21_1(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_0951790d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a48);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c62d8);
    FUN_03f5c2a4(&DAT_091c62b8);
    DAT_0951790d = 1;
  }
  plVar1 = *(long **)(param_1 + 0x88);
  if (plVar1 != (long *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x178))(plVar1,*(undefined8 *)(*plVar1 + 0x180));
    lVar4 = *(long *)(param_1 + 0x78);
    if ((uVar2 & 1) == 0) {
      uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar3,param_1,DAT_091c62b8,0);
      if (lVar4 != 0) {
        CakeOrder_PopupMinigame_UIPopupMinigameCookOrder__ShowViewCoverForRetry(lVar4,uVar3);
        return;
      }
    }
    else {
      uVar3 = thunk_FUN_03f9944c(DAT_09174a48);
      FUN_070a8c30(uVar3,param_1,DAT_091c62d8,0);
      if (lVar4 != 0) {
        CakeOrder_BaseUI_UIElementAbstract__Hide(0,lVar4,uVar3,0);
        *(undefined1 *)(param_1 + 0x80) = 0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


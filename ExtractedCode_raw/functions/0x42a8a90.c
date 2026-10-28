// rea decompile_all
// name: CakeOrder.InGame.UIInLevelCakeOrder.<ShowTutorial>d__108$$MoveNext
// address: 0x42a8a90
// body: available
// range: 0x42a8a90-0x42a8db7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42a8d8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8d90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8d94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8d98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8d9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8da0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8da4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8da8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8dac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8db0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42a8db4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIInLevelCakeOrder_<ShowTutorial>d__108__MoveNext(int *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_48;
  
  if ((DAT_0951725f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a48);
    FUN_03f5c2a4(&DAT_091c1318);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091d8500);
    FUN_03f5c2a4(&DAT_091bc398);
    FUN_03f5c2a4(&DAT_091bc3a0);
    FUN_03f5c2a4(&DAT_091bcc58);
    FUN_03f5c2a4(&DAT_091f1690);
    FUN_03f5c2a4(&DAT_09195698);
    DAT_0951725f = 1;
  }
  lVar7 = *(long *)(param_1 + 10);
  local_48 = 0;
  if (*param_1 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    lVar2 = thunk_FUN_03f9944c(DAT_09195698);
    System_Object___ctor(lVar2,0);
    plVar4 = (long *)(param_1 + 0xe);
    *plVar4 = lVar2;
    thunk_FUN_03f5d7b8(plVar4,lVar2);
    if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar4 + 0x10) = *(undefined8 *)(param_1 + 8);
    thunk_FUN_03f5d7b8();
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = FUN_04d44390(lVar7,*(undefined8 *)(lVar7 + 0x1d8),0,0,DAT_091d8500);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_48 = FUN_062ee710(lVar2,DAT_091bcc58);
    uVar3 = FUN_06209cac(&local_48,DAT_091bc3a0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = local_48;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04991d20(param_1 + 2,&local_48,param_1,DAT_091c1318);
      return;
    }
  }
  lVar2 = FUN_06209cec(&local_48,DAT_091bc398);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar7 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(*(long *)(lVar7 + 0x1e0) + 0x10) = *(undefined8 *)(lVar7 + 0xc0);
  thunk_FUN_03f5d7b8();
  if (*(long *)(lVar7 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar4 = (long *)(*(long *)(lVar7 + 0x1e0) + 0x18);
  *plVar4 = lVar7;
  thunk_FUN_03f5d7b8(plVar4,lVar7);
  if (param_1[0xc] == 1) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_UI_InGameUITutorialControl__SetData
              (lVar2,*(undefined8 *)(lVar7 + 0x1e0),1,param_1[0xd],0,0);
  }
  else if (param_1[0xc] == 2) {
    lVar6 = *(long *)(lVar7 + 0x160);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = param_1[0xd];
    if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar6 = *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_UI_InGameUITutorialControl__SetData
              (lVar2,*(undefined8 *)(lVar7 + 0x1e0),2,(long)(int)uVar1,*(undefined8 *)(lVar6 + 0x10)
               ,0);
  }
  uVar8 = *(undefined8 *)(param_1 + 0xe);
  uVar5 = thunk_FUN_03f9944c(DAT_09174a48);
  FUN_070a8c30(uVar5,uVar8,DAT_091f1690,0);
  CakeOrder_BaseUI_SceneMainUI__ShowPopupInStack(lVar7,lVar2,uVar5,0,0);
  *param_1 = -2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  thunk_FUN_03f5d7b8(param_1 + 0xe,0);
  if (*(int *)(DAT_09181780 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


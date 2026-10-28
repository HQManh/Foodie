// rea decompile_all
// name: CakeOrder.BaseUI.SceneMainUI.<TryShowRateGamePopup>d__22$$MoveNext
// address: 0x42d56ac
// body: available
// range: 0x42d56ac-0x42d5bf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d5bb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d5bbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d5bc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d5bc4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d5bc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d5bcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d5bd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d5bd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d5bd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d5bdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d5be0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42d5be4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x042d5bc4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void CakeOrder_BaseUI_SceneMainUI_<TryShowRateGamePopup>d__22__MoveNext(int *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  char cVar7;
  int iVar8;
  long lVar9;
  undefined8 auStack_68 [2];
  int local_58;
  undefined8 local_50;
  long local_48;
  int local_3c;
  int *local_38;
  
  local_38 = param_1;
  if ((DAT_095173c7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174a48);
    FUN_03f5c2a4(&DAT_09198490);
    FUN_03f5c2a4(&DAT_091985d0);
    FUN_03f5c2a4(&DAT_091751c8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d8588);
    FUN_03f5c2a4(&DAT_091bc548);
    FUN_03f5c2a4(&DAT_091bc550);
    FUN_03f5c2a4(&DAT_091bcdc0);
    FUN_03f5c2a4(&DAT_091ef808);
    FUN_03f5c2a4(&DAT_091941c0);
    FUN_03f5c2a4(&DAT_09211560);
    FUN_03f5c2a4(&DAT_092141a0);
    DAT_095173c7 = 1;
  }
  local_3c = *param_1;
  local_50 = 0;
  local_48 = *(long *)(param_1 + 8);
  local_58 = 0;
  if (local_3c == 0) {
LAB_042d5830:
    local_50 = *(undefined8 *)(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    local_3c = -1;
    *param_1 = -1;
LAB_042d5848:
    uVar2 = FUN_06209cec(&local_50,DAT_091bc548);
    if (*(long *)(local_38 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*(long *)(local_38 + 0x10) + 0x20) = uVar2;
    thunk_FUN_03f5d7b8();
    if (*(long *)(local_38 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = *(undefined8 *)(*(long *)(local_38 + 0x10) + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(uVar2,0,0);
    if ((uVar3 & 1) == 0) {
      if (*(long *)(local_38 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *(long *)(*(long *)(local_38 + 0x10) + 0x20);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_RateGame_UIRateGamePopup__SetAttempt(lVar4,local_38[0x12],0);
      lVar4 = local_48;
      lVar9 = *(long *)(local_38 + 0x10);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar6 = *(undefined8 *)(lVar9 + 0x20);
      uVar2 = thunk_FUN_03f9944c(DAT_09174a48);
      FUN_070a8c30(uVar2,lVar9,DAT_091ef808,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      CakeOrder_BaseUI_SceneMainUI__ShowPopupInStack(lVar4,uVar6,uVar2,0);
      if (*(long *)(local_38 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *(long *)(*(long *)(local_38 + 0x10) + 0x20);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      bVar1 = *(int *)(lVar4 + 0x28) == 1;
      *(bool *)(local_38 + 0x13) = bVar1;
      if (bVar1) {
        CakeOrder_RateGame_RateGamePromptState__MarkShown(local_38[0x12],0);
        cVar7 = (char)local_38[0x13];
      }
      else {
        cVar7 = '\0';
      }
      bVar1 = cVar7 != '\0';
      iVar8 = 4;
    }
    else {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogWarning(DAT_092141a0,0);
      bVar1 = false;
      iVar8 = 4;
    }
  }
  else {
    uVar2 = thunk_FUN_03f9944c(DAT_091941c0);
    System_Object___ctor(uVar2,0);
    *(undefined8 *)(local_38 + 0x10) = uVar2;
    thunk_FUN_03f5d7b8(local_38 + 0x10,uVar2);
    if (*(long *)(local_38 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*(long *)(local_38 + 0x10) + 0x10) = *(undefined8 *)(local_38 + 8);
    thunk_FUN_03f5d7b8();
    if (*(long *)(local_38 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*(long *)(local_38 + 0x10) + 0x18) = *(undefined8 *)(local_38 + 10);
    thunk_FUN_03f5d7b8();
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(local_48 + 0x60) != '\0') {
      bVar1 = true;
      goto LAB_042d5b60;
    }
    uVar3 = CakeOrder_RateGame_RateGamePromptState__TryGetAttempt
                      (local_38[0xc],local_38[0xd],(char)local_38[0xe],local_38 + 0x12,0);
    if ((uVar3 & 1) == 0) {
      bVar1 = false;
      goto LAB_042d5b60;
    }
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(local_48 + 0x60) = 1;
    *(undefined1 *)(local_38 + 0x13) = 0;
    param_1 = local_38;
    if (local_3c == 0) goto LAB_042d5830;
    lVar4 = FUN_04d444b0(local_48,DAT_09211560,0,0,DAT_091d8588);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_50 = FUN_062ee710(lVar4,DAT_091bcdc0);
    uVar3 = FUN_06209cac(&local_50,DAT_091bc550);
    if ((uVar3 & 1) != 0) goto LAB_042d5848;
    local_3c = 0;
    *local_38 = 0;
    *(undefined8 *)(local_38 + 0x14) = local_50;
    thunk_FUN_03f5d7b8(local_38 + 0x14,0);
    piVar5 = local_38;
    if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091751c8,extraout_x1,local_38);
    }
    FUN_045d6628(piVar5 + 2,&local_50,local_38,DAT_09198490);
    bVar1 = false;
    iVar8 = 8;
  }
  if ((local_3c < 0) && ((char)local_38[0x13] == '\0')) {
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(local_48 + 0x60) = 0;
  }
  if (iVar8 != 4) {
    if (iVar8 != 0) {
      return;
    }
    uVar2 = auStack_68[local_58 + -1];
    *local_38 = -2;
    piVar5 = local_38 + 0x10;
    piVar5[0] = 0;
    piVar5[1] = 0;
    thunk_FUN_03f5d7b8(piVar5,0);
    piVar5 = local_38;
    lVar4 = thunk_FUN_03fc39d4(&DAT_091751c8);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = thunk_FUN_03fc39d4(&DAT_091985c8);
    FUN_069f3088(piVar5 + 2,uVar2,uVar6);
    return;
  }
LAB_042d5b60:
  *local_38 = -2;
  piVar5 = local_38 + 0x10;
  piVar5[0] = 0;
  piVar5[1] = 0;
  thunk_FUN_03f5d7b8(piVar5,0);
  piVar5 = local_38;
  if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_069f2e3c(piVar5 + 2,bVar1,DAT_091985d0);
  return;
}


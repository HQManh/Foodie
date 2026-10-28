// rea decompile_all
// name: _GAME.Team.PopupTeamInfoBaseInfo$$UpdateBaseInfo
// address: 0x776e454
// body: available
// range: 0x776e454-0x776e9b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x776e924 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776e928 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776e92c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776e930 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776e934 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776e938 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776e93c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776e940 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776e944 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776e948 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776e94c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776e950 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Team_PopupTeamInfoBaseInfo__UpdateBaseInfo(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44 [3];
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_24;
  
  if ((DAT_09522c9b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_09189998);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_092265c0);
    FUN_03f5c2a4(&DAT_0920b148);
    FUN_03f5c2a4(&DAT_0920adc0);
    DAT_09522c9b = 1;
  }
  local_38 = 0;
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0xf8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *(long *)(param_1 + 0x10);
  uVar3 = _GAME_Team_SOTeamConfig__GetTeamFlag(*(undefined4 *)(lVar5 + 0x1c),0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar3,uVar3);
  }
  UnityEngine_UI_Image__set_sprite(lVar6,uVar3,0);
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0xf8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *(long *)(param_1 + 0x18);
  uVar3 = _GAME_Localize_LocalizeHelper__OrNoTeam(*(undefined8 *)(lVar5 + 0x20),0);
  if (*(int *)(DAT_09189998 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = _GAME_Bridge_R1UserTextSupport__ForDisplay(uVar3);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar3,uVar3);
  }
  TMPro_TMP_Text__SetText(lVar6,uVar3,0);
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0xf8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *(long *)(param_1 + 0x20);
  uVar3 = _GAME_Bridge_R1UserTextSupport__ForDisplay(*(undefined8 *)(lVar5 + 0x40));
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar3,uVar3);
  }
  TMPro_TMP_Text__SetText(lVar6,uVar3,0);
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0xf8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_24 = *(undefined4 *)(lVar5 + 0x2c);
  lVar5 = *(long *)(param_1 + 0x28);
  uVar3 = FUN_03f5c42c(DAT_09535420,&local_24);
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 0xf8);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_28 = *(undefined4 *)(lVar6 + 0x48);
  uVar4 = FUN_03f5c42c(DAT_09535420,&local_28);
  uVar3 = System_String__Format(DAT_092265c0,uVar3,uVar4,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar3,uVar3);
  }
  TMPro_TMP_Text__SetText(lVar5,uVar3,0);
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0xf8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_44[0] = *(undefined4 *)(lVar5 + 0x28);
  lVar5 = *(long *)(param_1 + 0x30);
  uVar3 = FUN_03f5c42c(DAT_09535420,local_44);
  uVar3 = System_String__Format(DAT_09226038,uVar3,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar3,uVar3);
  }
  TMPro_TMP_Text__SetText(lVar5,uVar3,0);
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0xf8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_48 = *(undefined4 *)(lVar5 + 0x4c);
  lVar5 = *(long *)(param_1 + 0x38);
  uVar3 = FUN_03f5c42c(DAT_09535420,&local_48);
  uVar3 = System_String__Format(DAT_09226038,uVar3,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar3,uVar3);
  }
  TMPro_TMP_Text__SetText(lVar5,uVar3,0);
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0xf8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_4c = *(undefined4 *)(lVar5 + 0x38);
  lVar5 = *(long *)(param_1 + 0x40);
  uVar3 = FUN_03f5c42c(DAT_09535420,&local_4c);
  uVar3 = System_String__Format(DAT_09226038,uVar3,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar3,uVar3);
  }
  TMPro_TMP_Text__SetText(lVar5,uVar3,0);
  lVar5 = DAT_091c0310;
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x70) + 0xf8);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  puVar1 = &DAT_0920adc0;
  if (*(char *)(lVar6 + 0x18) != '\0') {
    puVar1 = &DAT_0920b148;
  }
  lVar6 = *(long *)(DAT_091c0310 + 0x38);
  uVar4 = *puVar1;
  if (lVar6 == 0) {
    FUN_03f95ac8(DAT_091c0310);
    lVar6 = *(long *)(lVar5 + 0x38);
  }
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
    lVar6 = FUN_03f95a6c();
  }
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  _GAME_Localize_LocalizeHelper__SetTextLocalizedByKey
            (uVar3,uVar4,**(undefined8 **)(lVar5 + 0xb8),0);
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0xf8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  lVar5 = *(long *)(lVar5 + 0x10);
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (lVar5 == *(long *)(**(long **)(DAT_091896c0 + 0xb8) + 0x50)) {
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x40);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    bVar2 = *(int *)(lVar5 + 0x30) == 1;
  }
  else {
    bVar2 = false;
  }
  _GAME_Utils_HelperButton__SetActive(uVar3,bVar2,0);
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0xf8);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  lVar5 = *(long *)(lVar5 + 0x10);
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  _GAME_Utils_HelperButton__SetActive
            (uVar3,lVar5 != *(long *)(**(long **)(DAT_091896c0 + 0xb8) + 0x50),0);
  if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x70) + 0xf8);
  if (lVar5 != 0) {
    if (**(long **)(DAT_091896c0 + 0xb8) != 0) {
      _GAME_Utils_HelperButton__SetActive
                (*(undefined8 *)(param_1 + 0x68),
                 *(long *)(lVar5 + 0x10) == *(long *)(**(long **)(DAT_091896c0 + 0xb8) + 0x50),0);
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      if (*(int *)(DAT_09187680 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(uVar3,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


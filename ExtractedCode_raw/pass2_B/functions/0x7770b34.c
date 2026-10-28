// rea decompile_all
// name: _GAME.Team.PopupTeamInfoListMember.<HandleAssignLeader>d__28$$MoveNext
// address: 0x7770b34
// body: available
// range: 0x7770b34-0x7770fcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7770f8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7770f90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7770f94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7770f98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7770f9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7770fa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7770fa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7770fa8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7770fac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7770fb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7770fb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7770fb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Team_PopupTeamInfoListMember_<HandleAssignLeader>d__28__MoveNext(int *param_1)

{
  undefined1 auVar1 [16];
  undefined2 uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  long local_68;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_38;
  
  if ((DAT_09522cb1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091c2a40);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_0919ffb8);
    FUN_03f5c2a4(&DAT_091b0c90);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_092087b8);
    DAT_09522cb1 = 1;
  }
  lVar9 = *(long *)(param_1 + 10);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_38 = 0;
  local_68 = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar3 = *(long **)(lVar9 + 0x90);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = (**(code **)(*plVar3 + 0x348))(plVar3,*(undefined8 *)(*plVar3 + 0x350));
    auVar1._8_8_ = local_60._8_8_;
    auVar1._0_8_ = local_60._0_8_;
    auVar11._8_8_ = local_50._8_8_;
    auVar11._0_8_ = local_50._0_8_;
    if (((uVar4 & 1) != 0) || (local_50 = auVar11, local_60 = auVar1, *(int *)(lVar9 + 0x98) < 0))
    goto LAB_07770f4c;
    if (*(long *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = FUN_057e0998(*(long *)(lVar9 + 0x18),*(int *)(lVar9 + 0x98),DAT_091b0c90);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar5 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    piVar8 = param_1 + 0xc;
    *(undefined8 *)piVar8 = *(undefined8 *)(*(long *)(lVar5 + 0x68) + 0x10);
    thunk_FUN_03f5d7b8(piVar8);
    uVar10 = *(undefined8 *)piVar8;
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar11 = _GAME_Team_TeamManager__HandleAssignLeader(uVar10);
    local_50._0_8_ = 0;
    local_50._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_50 = auVar11;
    thunk_FUN_03f5d7b8(local_50,0);
    local_60 = local_50;
    uVar4 = FUN_0430cf0c(local_60,DAT_0919a588);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_049ba200(param_1 + 2,local_60,param_1,DAT_091c2a40);
      return;
    }
  }
  uVar10 = local_60._0_8_;
  if ((long *)local_60._0_8_ == (long *)0x0) {
    if (local_60[8] == '\0') goto LAB_07770ec8;
LAB_07770dac:
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar9 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(*(long *)(lVar9 + 0x90) + 0xf8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(lVar5 + 0x58);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = FUN_06fd9fbc(lVar5,*(undefined8 *)(param_1 + 0xc),&local_38,DAT_0919ffb8);
    if ((uVar4 & 1) != 0) {
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined4 *)(local_38 + 0x30) = 1;
    }
    if (*(long *)(lVar9 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(*(long *)(lVar9 + 0x90) + 0xf8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(lVar5 + 0x58);
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522cb0 == '\0') {
      FUN_03f5c2a4(&DAT_09180dc0);
      DAT_09522cb0 = '\x01';
    }
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = FUN_06fd9fbc(lVar5,**(undefined8 **)(DAT_09180dc0 + 0xb8),&local_68,DAT_0919ffb8);
    if ((uVar4 & 1) != 0) {
      if (local_68 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined4 *)(local_68 + 0x30) = 0;
    }
    if (*(long *)(lVar9 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(*(long *)(lVar9 + 0x90) + 0xe8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    _GAME_Team_PopupTeamInfoBaseInfo__UpdateBaseInfo(lVar5,0);
    _GAME_Team_PopupTeamInfoListMember__UpdateListMember(lVar9,0);
  }
  else {
    uVar2 = local_60._10_2_;
    lVar5 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c(lVar5);
    }
    lVar7 = *(long *)uVar10;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07770eb4;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(uVar10,lVar5,0);
LAB_07770eb4:
    uVar4 = (*(code *)*puVar6)(uVar10,uVar2,puVar6[1]);
    if ((uVar4 & 1) != 0) goto LAB_07770dac;
LAB_07770ec8:
    lVar5 = DAT_091c0310;
    lVar7 = *(long *)(DAT_091c0310 + 0x38);
    if (lVar7 == 0) {
      FUN_03f95ac8(DAT_091c0310);
      lVar7 = *(long *)(lVar5 + 0x38);
    }
    lVar7 = *(long *)(lVar7 + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    _GAME_GameUI_ToastController__ShowLocalizeMessage
              (DAT_092087b8,**(undefined8 **)(lVar5 + 0xb8),0);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  _GAME_Team_PopupTeamInfoListMember__HideMenuActionPlayer(lVar9,0);
LAB_07770f4c:
  piVar8 = param_1 + 0xc;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *param_1 = -2;
  thunk_FUN_03f5d7b8(piVar8,0);
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


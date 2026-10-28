// rea decompile_all
// name: _GAME.Team.UITabTeamTabCreateCtrl.<HandleCreateTeam>d__21$$MoveNext
// address: 0x77987ec
// body: available
// range: 0x77987ec-0x7798daf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7798d7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7798d80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7798d84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7798d88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7798d8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7798d90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7798d94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7798d98 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7798d9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7798da0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7798da4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7798da8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Team_UITabTeamTabCreateCtrl_<HandleCreateTeam>d__21__MoveNext(int *param_1)

{
  undefined2 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09522ddd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091c2a90);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_09183010);
    FUN_03f5c2a4(&DAT_091ba6f8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0918b958);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_0921c970);
    FUN_03f5c2a4(&DAT_092087b8);
    FUN_03f5c2a4(&DAT_092085c8);
    FUN_03f5c2a4(&DAT_09206ac0);
    DAT_09522ddd = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    lVar8 = *(long *)(param_1 + 10);
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = _GAME_Team_TeamManager__CheckTimeCanCreateOrJoinTeam(0);
    lVar3 = DAT_091c0310;
    if ((uVar2 & 1) == 0) {
      lVar8 = *(long *)(DAT_091c0310 + 0x38);
      if (lVar8 == 0) {
        FUN_03f95ac8(DAT_091c0310);
        lVar8 = *(long *)(lVar3 + 0x38);
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar8 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      _GAME_GameUI_ToastController__ShowLocalizeMessage
                (DAT_09206ac0,**(undefined8 **)(lVar8 + 0xb8),0);
      goto LAB_07798d54;
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *(long *)(*(long *)(lVar8 + 0x38) + 0x210);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = System_String__Trim(lVar3,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar3 + 0x10) < 6) {
      lVar8 = FUN_03f5c394(DAT_091805f8,1);
      local_40._0_4_ = 6;
      uVar5 = FUN_03f5c42c(DAT_09535420,local_40);
      uVar5 = System_String__Format(DAT_09226038,uVar5,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar8 + 0x20) = uVar5;
      thunk_FUN_03f5d7b8();
      _GAME_GameUI_ToastController__ShowLocalizeMessage(DAT_092085c8,lVar8,0);
      goto LAB_07798d54;
    }
    if (*(int *)(DAT_09183010 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_09183010 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = _GAME_Currency_CurrencyData__get_gem(**(long **)(DAT_09183010 + 0xb8),0);
    if (lVar3 < 100) {
      _GAME_Bridge_CookOrderBridge__ShowNotEnoughCurrencyToast(DAT_0921c970,0);
      goto LAB_07798d54;
    }
    lVar3 = thunk_FUN_03f9944c(DAT_0918b958);
    _GAME_Team_TeamInfoModel___ctor(lVar3,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined4 *)(lVar3 + 0x1c) = *(undefined4 *)(lVar8 + 0x78);
    if (*(long *)(lVar8 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *(long *)(*(long *)(lVar8 + 0x38) + 0x210);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = System_String__Trim(lVar4,0);
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    thunk_FUN_03f5d7b8();
    if (*(long *)(lVar8 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *(long *)(*(long *)(lVar8 + 0x40) + 0x210);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = System_String__Trim(lVar4,0);
    *(undefined8 *)(lVar3 + 0x40) = uVar5;
    thunk_FUN_03f5d7b8();
    lVar4 = DAT_0918b978;
    *(undefined4 *)(lVar3 + 0x38) = *(undefined4 *)(lVar8 + 0x7c);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar9 = _GAME_Team_TeamManager__CreateNewTeam(lVar3,0);
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar9;
    thunk_FUN_03f5d7b8(local_40,0);
    local_50 = local_40;
    uVar2 = FUN_0430cf0c(local_50,DAT_0919a588);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049bba54(param_1 + 2,local_50,param_1,DAT_091c2a90);
      return;
    }
  }
  uVar5 = local_50._0_8_;
  if ((long *)local_50._0_8_ == (long *)0x0) {
    if (local_50[8] != '\0') goto LAB_07798c30;
  }
  else {
    uVar1 = local_50._10_2_;
    lVar8 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c(lVar8);
    }
    lVar3 = *(long *)uVar5;
    uVar2 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar8) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07798cb4;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(uVar5,lVar8,0);
LAB_07798cb4:
    uVar2 = (*(code *)*puVar6)(uVar5,uVar1,puVar6[1]);
    if ((uVar2 & 1) != 0) {
LAB_07798c30:
      if (*(int *)(DAT_09183010 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _GAME_Currency_CurrencyManager__ChangeGem(0xffffffffffffff9c,0x25,0,0);
      lVar8 = *(long *)(DAT_091ba6f8 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      if (**(long **)(lVar8 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Team_UITabTeamCtrl__UpdateUIActive();
      goto LAB_07798d54;
    }
  }
  lVar8 = DAT_091c0310;
  lVar3 = *(long *)(DAT_091c0310 + 0x38);
  if (lVar3 == 0) {
    FUN_03f95ac8(DAT_091c0310);
    lVar3 = *(long *)(lVar8 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_03f95a6c();
  }
  _GAME_GameUI_ToastController__ShowLocalizeMessage(DAT_092087b8,**(undefined8 **)(lVar8 + 0xb8),0);
LAB_07798d54:
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


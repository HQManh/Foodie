// rea decompile_all
// name: _GAME.Team.MemberLifeReqUICtrl.<SendLifeHelp>d__12$$MoveNext
// address: 0x7792ca0
// body: available
// range: 0x7792ca0-0x77931cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x779318c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7793190 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7793194 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7793198 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x779319c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77931a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77931a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77931a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77931ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77931b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77931b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77931b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Team_MemberLifeReqUICtrl_<SendLifeHelp>d__12__MoveNext(int *param_1)

{
  undefined2 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined4 local_64 [3];
  undefined4 local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09522db1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091c2a18);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_09189970);
    FUN_03f5c2a4(&DAT_0918a440);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_092087b8);
    FUN_03f5c2a4(&DAT_092265c0);
    DAT_09522db1 = 1;
  }
  lVar10 = *(long *)(param_1 + 10);
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_58 = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (*(int *)(DAT_09189970 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = _GAME_Bridge_R1RemoteConfig__get_TeamEnableSendHeart(0);
    if ((uVar2 & 1) == 0) goto LAB_07793164;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar10 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_UI_Selectable__set_interactable(*(long *)(lVar10 + 0x60),0,0);
    if (*(long *)(lVar10 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar11 = _GAME_Team_TeamServer__SendLifeHelp
                        (*(undefined8 *)(*(long *)(lVar10 + 0x68) + 0x10),0,0);
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar11;
    thunk_FUN_03f5d7b8(local_40,0);
    local_50 = local_40;
    uVar2 = FUN_0430cf0c(local_50,DAT_0919a588);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049b95e0(param_1 + 2,local_50,param_1,DAT_091c2a18);
      return;
    }
  }
  uVar9 = local_50._0_8_;
  if ((long *)local_50._0_8_ == (long *)0x0) {
    if (local_50[8] != '\0') goto LAB_07792ee8;
  }
  else {
    uVar1 = local_50._10_2_;
    lVar3 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c(lVar3);
    }
    lVar7 = *(long *)uVar9;
    uVar2 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_077930c4;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(uVar9,lVar3,0);
LAB_077930c4:
    uVar2 = (*(code *)*puVar4)(uVar9,uVar1,puVar4[1]);
    if ((uVar2 & 1) != 0) {
LAB_07792ee8:
      lVar3 = DAT_09188ad0;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *(long *)(lVar10 + 0x68);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(int *)(lVar7 + 0x20) = *(int *)(lVar7 + 0x20) + 1;
      uVar9 = *(undefined8 *)(lVar10 + 0x50);
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar9,0,0);
      if ((uVar2 & 1) != 0) {
        lVar3 = *(long *)(lVar10 + 0x68);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar5 = *(long **)(lVar10 + 0x50);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar5 + 0x428))
                  ((float)*(int *)(lVar3 + 0x20) / (float)*(int *)(lVar3 + 0x24),plVar5,
                   *(undefined8 *)(*plVar5 + 0x430));
      }
      uVar9 = *(undefined8 *)(lVar10 + 0x58);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar9,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(lVar10 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *(long *)(lVar10 + 0x58);
        local_40._0_4_ = *(undefined4 *)(*(long *)(lVar10 + 0x68) + 0x20);
        uVar9 = FUN_03f5c42c(DAT_09535420,local_40);
        if (*(long *)(lVar10 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_64[0] = *(undefined4 *)(*(long *)(lVar10 + 0x68) + 0x24);
        uVar6 = FUN_03f5c42c(DAT_09535420,local_64);
        uVar9 = System_String__Format(DAT_092265c0,uVar9,uVar6,0);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550(uVar9,uVar9);
        }
        TMPro_TMP_Text__SetText(lVar3,uVar9,0);
      }
      if (*(long *)(lVar10 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = *(long *)(lVar10 + 0x60);
      *(undefined1 *)(*(long *)(lVar10 + 0x68) + 0x28) = 0;
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_UI_Selectable__set_interactable(lVar3,0,0);
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _GAME_Profile_ProfileManager__ChangeLiveSendCount(1,0);
      _GAME_Quests_QuestsManager__ChangeQuestCounter(6,1,0);
      lVar3 = thunk_FUN_03f9944c(DAT_0918a440);
      _GAME_GameItem_RwItemModel___ctor(lVar3,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(lVar3 + 0x10) = 0x500000001;
      _GAME_GameItem_GameItemManager__ClaimReward(lVar3,0x27,0,0);
      if (*(long *)(lVar10 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar9 = UnityEngine_Component__get_transform(*(long *)(lVar10 + 0x60),0);
      _GAME_GameUI_DropItemController__DropRwItemToBag(lVar3,uVar9,0);
      goto LAB_07793164;
    }
  }
  lVar3 = DAT_091c0310;
  lVar7 = *(long *)(DAT_091c0310 + 0x38);
  if (lVar7 == 0) {
    FUN_03f95ac8(DAT_091c0310);
    lVar7 = *(long *)(lVar3 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_03f95a6c();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  _GAME_GameUI_ToastController__ShowLocalizeMessage(DAT_092087b8,**(undefined8 **)(lVar3 + 0xb8),0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar10 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  UnityEngine_UI_Selectable__set_interactable(*(long *)(lVar10 + 0x60),1,0);
LAB_07793164:
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


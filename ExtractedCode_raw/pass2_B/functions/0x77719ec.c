// rea decompile_all
// name: _GAME.Team.PopupTeamInfoCtrl.<SetUpDataFirstOpen>d__4$$MoveNext
// address: 0x77719ec
// body: available
// range: 0x77719ec-0x7771eb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7771e60 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7771e64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7771e68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7771e6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7771e70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7771e74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7771e78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7771e7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7771e80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7771e84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7771e88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7771e8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Team_PopupTeamInfoCtrl_<SetUpDataFirstOpen>d__4__MoveNext(int *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  long *local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  long local_a0;
  int *local_98;
  long *local_90;
  undefined4 local_78;
  long *local_70;
  undefined8 uStack_68;
  ulong local_60;
  long *local_50;
  undefined8 uStack_48;
  ulong local_40;
  long local_38;
  int local_24;
  
  if ((DAT_09522cb6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2b00);
    FUN_03f5c2a4(&DAT_0919a760);
    FUN_03f5c2a4(&DAT_0919a768);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_091bdf40);
    DAT_09522cb6 = 1;
  }
  local_24 = *param_1;
  local_40 = 0;
  local_38 = *(long *)(param_1 + 10);
  local_50 = (long *)0x0;
  uStack_48 = 0;
  local_70 = (long *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_78 = 0;
  if (local_24 == 0) {
LAB_07771c10:
    local_90 = &local_38;
    local_98 = &local_24;
    local_a0 = 0;
    local_40 = *(ulong *)(param_1 + 0x12);
    uStack_48 = *(undefined8 *)(param_1 + 0x10);
    local_50 = *(long **)(param_1 + 0xe);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_24 = -1;
    *param_1 = -1;
LAB_07771c34:
    plVar1 = local_50;
    uVar7 = uStack_48;
    if (local_50 != (long *)0x0) {
      uVar2 = local_40 & 0xffff;
      lVar8 = *(long *)(DAT_0919a760 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c(lVar8);
      }
      lVar4 = *plVar1;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar8) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_07771ce4;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar1,lVar8,0);
LAB_07771ce4:
      uVar7 = (*(code *)*puVar3)(plVar1,uVar2,puVar3[1]);
    }
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(local_38 + 0xf8) = uVar7;
    thunk_FUN_03f5d7b8();
    lVar8 = local_38;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(lVar8,0,0);
    if ((uVar2 & 1) != 0) {
      uVar9 = 9;
      goto LAB_07771dc4;
    }
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(local_38 + 0xf8) == 0) {
      if (*(long *)(local_38 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Team_PopupTeamInfoListMember__ShowNetworkError(*(long *)(local_38 + 0xf0),0);
    }
    else {
      if (*(long *)(local_38 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Team_PopupTeamInfoBaseInfo__UpdateBaseInfo(*(long *)(local_38 + 0xe8),0);
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(local_38 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Team_PopupTeamInfoBaseInfo__EnableAction
                (*(long *)(local_38 + 0xe8),(char)param_1[0xc] == '\0',0);
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(local_38 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Team_PopupTeamInfoListMember__UpdateListMember(*(long *)(local_38 + 0xf0),0);
      if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(local_38 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Team_PopupTeamInfoListMember__ShowListMember(*(long *)(local_38 + 0xf0),0);
    }
  }
  else {
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    _GAME_Utils_HelperButton__Interactable(*(undefined8 *)(local_38 + 0xd0),0,0);
    local_98 = &local_24;
    local_a0 = 0;
    local_90 = &local_38;
    if (local_24 == 0) goto LAB_07771c10;
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(local_38 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    _GAME_Team_PopupTeamInfoBaseInfo__UpdateBaseInfo(*(long *)(local_38 + 0xe8),0);
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(local_38 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    _GAME_Team_PopupTeamInfoBaseInfo__EnableAction(*(long *)(local_38 + 0xe8),0,0);
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(local_38 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    _GAME_Team_PopupTeamInfoListMember__ShowLoading(*(long *)(local_38 + 0xf0),0);
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(local_38 + 0xf8) != 0) {
      uVar7 = *(undefined8 *)(*(long *)(local_38 + 0xf8) + 0x10);
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _GAME_Team_TeamManager__GetFullTeamInfo(&local_c0,uVar7);
      local_60 = local_b0;
      uStack_68 = uStack_b8;
      uStack_b8 = 0;
      local_b0 = 0;
      local_70 = local_c0;
      local_c0 = (long *)0x0;
      if ((*(byte *)(*(long *)(DAT_091bdf40 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uStack_b8 = uStack_68;
      local_c0 = local_70;
      local_b0 = local_60;
      thunk_FUN_03f5d7b8(&local_c0,0);
      uStack_48 = uStack_b8;
      local_50 = local_c0;
      local_40 = local_b0;
      uVar2 = FUN_041e5390(&local_50,DAT_0919a768);
      if ((uVar2 & 1) == 0) {
        local_24 = 0;
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x10) = uStack_48;
        *(long **)(param_1 + 0xe) = local_50;
        *(ulong *)(param_1 + 0x12) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        FUN_049bcb58(param_1 + 2,&local_50,param_1,DAT_091c2b00);
        uVar9 = 7;
        goto LAB_07771dc4;
      }
      goto LAB_07771c34;
    }
    if (*(long *)(local_38 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    _GAME_Team_PopupTeamInfoListMember__ShowNetworkError(*(long *)(local_38 + 0xf0),0);
  }
  uVar9 = 0xe;
LAB_07771dc4:
  plVar1 = local_90;
  if (*local_98 < 0) {
    lVar8 = *local_90;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(lVar8,0,0);
    if ((uVar2 & 1) != 0) {
      if (*plVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Utils_HelperButton__Interactable(*(undefined8 *)(*plVar1 + 0xd0),1,0);
    }
  }
  if (local_a0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548();
  }
  if ((uVar9 < 0xf) && ((1 << (ulong)uVar9 & 0x4201U) != 0)) {
    *param_1 = -2;
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  }
  return;
}


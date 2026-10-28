// rea decompile_all
// name: _GAME.Team.PopupTeamInfoBaseInfo.<HandleJoinTeam>d__17$$MoveNext
// address: 0x776ed20
// body: available
// range: 0x776ed20-0x776f223 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x776f200 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776f204 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776f208 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776f20c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776f210 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776f214 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776f218 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776f21c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776f220 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_PopupTeamInfoBaseInfo_<HandleJoinTeam>d__17__MoveNext(int *param_1)

{
  undefined2 uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09522c9f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091c2aa8);
    FUN_03f5c2a4(&DAT_0919a620);
    FUN_03f5c2a4(&DAT_0919a628);
    FUN_03f5c2a4(&DAT_091ba6f8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_0918c3f0);
    FUN_03f5c2a4(&DAT_091bde68);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_092124e8);
    FUN_03f5c2a4(&DAT_09206ac0);
    DAT_09522c9f = 1;
  }
  lVar10 = *(long *)(param_1 + 10);
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
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar3 = *(long **)(lVar10 + 0x70);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = (**(code **)(*plVar3 + 0x348))(plVar3,*(undefined8 *)(*plVar3 + 0x350));
    if ((uVar4 & 1) != 0) goto LAB_0776f1d8;
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = _GAME_Team_TeamManager__get_IsUnlocked(0);
    if ((uVar4 & 1) == 0) {
      lVar10 = FUN_03f5c394(DAT_091805f8,1);
      local_40._0_4_ = _GAME_Team_SOTeamConfig__get_LevelUnlock(0);
      uVar9 = FUN_03f5c42c(DAT_09535420,local_40);
      uVar9 = System_String__Format(DAT_09226038,uVar9,0);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar10 + 0x20) = uVar9;
      thunk_FUN_03f5d7b8();
      _GAME_GameUI_ToastController__ShowLocalizeMessage(DAT_092124e8,lVar10,0);
      goto LAB_0776f1d8;
    }
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = _GAME_Team_TeamManager__CheckTimeCanCreateOrJoinTeam(0);
    lVar6 = DAT_091c0310;
    if ((uVar4 & 1) == 0) {
      lVar10 = *(long *)(DAT_091c0310 + 0x38);
      if (lVar10 == 0) {
        FUN_03f95ac8(DAT_091c0310);
        lVar10 = *(long *)(lVar6 + 0x38);
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_03f95a6c();
      }
      _GAME_GameUI_ToastController__ShowLocalizeMessage
                (DAT_09206ac0,**(undefined8 **)(lVar10 + 0xb8),0);
      goto LAB_0776f1d8;
    }
    if (*(long *)(lVar10 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *(long *)(*(long *)(lVar10 + 0x70) + 0xf8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar9 = *(undefined8 *)(lVar6 + 0x10);
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar11 = _GAME_Team_TeamManager__HandleJoinTeam(uVar9,0);
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bde68 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar11;
    thunk_FUN_03f5d7b8(local_40,0);
    local_50 = local_40;
    uVar4 = FUN_043587e4(local_50,DAT_0919a628);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049bc1a0(param_1 + 2,local_50,param_1,DAT_091c2aa8);
      return;
    }
  }
  uVar9 = local_50._0_8_;
  if ((long *)local_50._0_8_ == (long *)0x0) {
    iVar2 = local_50._8_4_;
  }
  else {
    uVar1 = local_50._12_2_;
    lVar6 = *(long *)(DAT_0919a620 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c(lVar6);
    }
    lVar7 = *(long *)uVar9;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar6) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0776f0a4;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(uVar9,lVar6,0);
LAB_0776f0a4:
    iVar2 = (*(code *)*puVar5)(uVar9,uVar1,puVar5[1]);
  }
  if (iVar2 == 0) {
    uVar4 = _GAME_GameUI_UIHomeTabTeamCtrl__get_IsActive(0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(DAT_0918c3f0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09522caf == '\0') {
        FUN_03f5c2a4(&DAT_0918c3f0);
        DAT_09522caf = '\x01';
      }
      if (*(int *)(DAT_0918c3f0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_0918c3f0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_GameUI_UIHomeController__OpenTabTeam(**(long **)(DAT_0918c3f0 + 0xb8),0);
    }
    else {
      lVar6 = *(long *)(DAT_091ba6f8 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      if (**(long **)(lVar6 + 0xb8) != 0) {
        _GAME_Team_UITabTeamCtrl__UpdateUIActive(**(long **)(lVar6 + 0xb8),0);
      }
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar3 = *(long **)(lVar10 + 0x70);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar3 + 0x308))(plVar3,*(undefined8 *)(*plVar3 + 0x310));
  }
  else {
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    _GAME_Team_TeamManager__ShowToastErrorCode(iVar2,0);
  }
LAB_0776f1d8:
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


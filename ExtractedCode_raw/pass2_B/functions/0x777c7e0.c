// rea decompile_all
// name: _GAME.Team.TeamManager.<HandleLeaveTeam>d__37$$MoveNext
// address: 0x777c7e0
// body: available
// range: 0x777c7e0-0x777cf6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x777cf54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777cf58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777cf5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777cf60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777cf64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777cf68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777cf6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamManager_<HandleLeaveTeam>d__37__MoveNext(int *param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  if ((DAT_09522d03 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1e30);
    FUN_03f5c2a4(&DAT_0919a620);
    FUN_03f5c2a4(&DAT_0919a628);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_09189938);
    FUN_03f5c2a4(&DAT_091ba4f0);
    FUN_03f5c2a4(&DAT_0917e758);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_091bde68);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09522d03 = 1;
  }
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  if (*param_1 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
LAB_0777c95c:
    uVar11 = local_40._0_8_;
    if ((long *)local_40._0_8_ == (long *)0x0) {
      iVar3 = local_40._8_4_;
    }
    else {
      uVar2 = local_40._12_2_;
      lVar5 = *(long *)(DAT_0919a620 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c(lVar5);
      }
      lVar7 = *(long *)uVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar5) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0777cc14;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(uVar11,lVar5,0);
LAB_0777cc14:
      iVar3 = (*(code *)*puVar6)(uVar11,uVar2,puVar6[1]);
    }
    if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = DAT_091ba4f0;
    lVar7 = *(long *)(DAT_091ba4f0 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(lVar5 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    uVar11 = **(undefined8 **)(lVar5 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar11,0,0);
    if (iVar3 != 0 || (uVar4 & 1) != 0) {
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _GAME_Team_TeamManager__ShowToastErrorCode(iVar3);
      goto LAB_0777ce14;
    }
  }
  else {
    if (*param_1 == 1) {
      local_40 = *(undefined1 (*) [16])(param_1 + 6);
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      *param_1 = -1;
    }
    else {
      uVar8 = _GAME_BaseGame_IdentityRecovery__get_CanStartNormalTeamMutations(0);
      if ((uVar8 & 1) == 0) goto LAB_0777ce14;
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar5 = **(long **)(DAT_0918b978 + 0xb8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar5 + 0x40) == 0) goto LAB_0777ce14;
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar5 = **(long **)(DAT_0918b978 + 0xb8);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      if (*(long *)(lVar5 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(*(long *)(lVar5 + 0x40) + 0x30) == 1) {
        auVar12 = _GAME_Team_TeamServer__DeleteTeam(1);
        local_30._0_8_ = 0;
        local_30._8_8_ = 0;
        if ((*(byte *)(*(long *)(DAT_091bde68 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        local_30 = auVar12;
        thunk_FUN_03f5d7b8(local_30,0);
        local_40 = local_30;
        uVar8 = FUN_043587e4(local_40,DAT_0919a628);
        if ((uVar8 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 6) = local_40;
          thunk_FUN_03f5d7b8(param_1 + 6,0);
          FUN_049aed0c(param_1 + 2,local_40,param_1,DAT_091c1e30);
          return;
        }
        goto LAB_0777c95c;
      }
      auVar12 = _GAME_Team_TeamServer__LeaveTeam(1);
      local_30._0_8_ = 0;
      local_30._8_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bde68 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_30 = auVar12;
      thunk_FUN_03f5d7b8(local_30,0);
      local_40 = local_30;
      uVar8 = FUN_043587e4(local_40,DAT_0919a628);
      if ((uVar8 & 1) == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 6) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 6,0);
        FUN_049aed0c(param_1 + 2,local_40,param_1,DAT_091c1e30);
        return;
      }
    }
    uVar11 = local_40._0_8_;
    if ((long *)local_40._0_8_ == (long *)0x0) {
      iVar3 = local_40._8_4_;
    }
    else {
      uVar2 = local_40._12_2_;
      lVar5 = *(long *)(DAT_0919a620 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c(lVar5);
      }
      lVar7 = *(long *)uVar11;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar5) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0777cb04;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(uVar11,lVar5,0);
LAB_0777cb04:
      iVar3 = (*(code *)*puVar6)(uVar11,uVar2,puVar6[1]);
    }
    if (*(int *)(DAT_0917e758 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = DAT_091ba4f0;
    lVar7 = *(long *)(DAT_091ba4f0 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(lVar5 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    uVar11 = **(undefined8 **)(lVar5 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar4 = UnityEngine_Object__op_Equality(uVar11,0,0);
    if (iVar3 != 0 || (uVar4 & 1) != 0) {
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _GAME_Team_TeamManager__ShowToastErrorCode(iVar3);
      goto LAB_0777ce14;
    }
  }
  if (*(int *)(DAT_09189938 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = _GAME_R1Features__IsEventEnabled(4,0);
  if ((uVar8 & 1) != 0) {
    _GAME_TeamTreasure_TeamTreasureManager__ResetPoint(0);
  }
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  _GAME_Profile_ProfileManager__SaveTeamInfo(0xffffffffffffffff,0,DAT_091f5700,0);
  if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  puVar6 = (undefined8 *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38);
  *puVar6 = 0;
  thunk_FUN_03f5d7b8(puVar6,0);
  if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  puVar6 = (undefined8 *)(**(long **)(DAT_0918b978 + 0xb8) + 0x40);
  *puVar6 = 0;
  thunk_FUN_03f5d7b8(puVar6,0);
  lVar5 = **(long **)(DAT_0918b978 + 0xb8);
  if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar11 = _GAME_BaseGame_TimerManager__get_UnixTimeMillisecondsUtc(0);
  lVar7 = DAT_0918b978;
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(lVar5 + 0x20) = uVar11;
  if (**(long **)(lVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  _GAME_Team_TeamDbModel__AddSaveAction();
LAB_0777ce14:
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar5 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091866a8) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0777ce9c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091866a8,2);
LAB_0777ce9c:
    (*(code *)*puVar6)(plVar10,puVar6[1]);
  }
  return;
}


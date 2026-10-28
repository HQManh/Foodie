// rea decompile_all
// name: _GAME.Team.TeamManager.<HandleJoinTeam>d__36$$MoveNext
// address: 0x777b6bc
// body: available
// range: 0x777b6bc-0x777bec7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x777bea4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777bea8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777beac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777beb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777beb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777beb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777bebc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777bec0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777bec4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamManager_<HandleJoinTeam>d__36__MoveNext(int *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 uVar11;
  long *local_e0;
  long lStack_d8;
  ulong local_d0;
  undefined4 local_b8;
  long *local_b0;
  long lStack_a8;
  ulong local_a0;
  long *local_90;
  long lStack_88;
  ulong local_80;
  long *local_70;
  long lStack_68;
  ulong local_60;
  long *local_50;
  long lStack_48;
  ulong local_40;
  undefined8 local_38;
  
  if ((DAT_09522cff & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09199bd8);
    FUN_03f5c2a4(&DAT_09199bc0);
    FUN_03f5c2a4(&DAT_09199c18);
    FUN_03f5c2a4(&DAT_0919a740);
    FUN_03f5c2a4(&DAT_0919a760);
    FUN_03f5c2a4(&DAT_0919a748);
    FUN_03f5c2a4(&DAT_0919a768);
    FUN_03f5c2a4(&DAT_0919ffb8);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_091bdf40);
    FUN_03f5c2a4(&DAT_091bdf30);
    FUN_03f5c2a4(&DAT_0921ea40);
    DAT_09522cff = 1;
  }
  local_40 = 0;
  local_38 = 0;
  local_50 = (long *)0x0;
  lStack_48 = 0;
  local_70 = (long *)0x0;
  lStack_68 = 0;
  local_60 = 0;
  local_90 = (long *)0x0;
  lStack_88 = 0;
  local_80 = 0;
  local_b0 = (long *)0x0;
  lStack_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  if (*param_1 == 0) {
    local_40 = *(ulong *)(param_1 + 0xe);
    lStack_48 = *(long *)(param_1 + 0xc);
    local_50 = *(long **)(param_1 + 10);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_0777b888:
    plVar10 = local_50;
    lVar2 = lStack_48;
    if (local_50 != (long *)0x0) {
      uVar9 = local_40 & 0xffff;
      lVar2 = *(long *)(DAT_0919a740 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c(lVar2);
      }
      lVar4 = *plVar10;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0777bc78;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar10,lVar2,0);
LAB_0777bc78:
      lVar2 = (*(code *)*puVar3)(plVar10,uVar9,puVar3[1]);
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar2 + 0x10) == '\0') {
LAB_0777bca8:
      iVar7 = -1;
      goto LAB_0777bcac;
    }
    iVar7 = *(int *)(lVar2 + 0x14);
    if (iVar7 != 0) {
      if (iVar7 < 1) {
        iVar7 = -1;
      }
      goto LAB_0777bcac;
    }
    uVar8 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    _GAME_Profile_ProfileManager__SaveTeamInfo(uVar8,0,DAT_0921ea40,0);
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    *(undefined8 *)(param_1 + 0x10) = **(undefined8 **)(DAT_0918b978 + 0xb8);
    thunk_FUN_03f5d7b8();
    _GAME_Team_TeamManager__GetFullTeamInfo(&local_e0,*(undefined8 *)(param_1 + 8));
    local_a0 = local_d0;
    lStack_a8 = lStack_d8;
    lStack_d8 = 0;
    local_d0 = 0;
    local_b0 = local_e0;
    local_e0 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdf40 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    lStack_d8 = lStack_a8;
    local_e0 = local_b0;
    local_d0 = local_a0;
    thunk_FUN_03f5d7b8(&local_e0,0);
    lStack_88 = lStack_d8;
    local_90 = local_e0;
    local_80 = local_d0;
    uVar9 = FUN_041e5390(&local_90,DAT_0919a768);
    if ((uVar9 & 1) == 0) {
      *param_1 = 1;
      *(long *)(param_1 + 0x14) = lStack_88;
      *(long **)(param_1 + 0x12) = local_90;
      *(ulong *)(param_1 + 0x16) = local_80;
      thunk_FUN_03f5d7b8(param_1 + 0x12,0);
      FUN_04790ea0(param_1 + 2,&local_90,param_1,DAT_09199bd8);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
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
      uVar9 = _GAME_Utils_HelperString__IsNullOrEmpty(**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
      if ((uVar9 & 1) == 0) {
        uVar9 = _GAME_BaseGame_IdentityRecovery__get_CanStartNormalTeamMutations(0);
        if ((uVar9 & 1) == 0) {
          iVar7 = -100;
          goto LAB_0777bcac;
        }
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
        uVar11 = *(undefined8 *)(param_1 + 8);
        uVar8 = **(undefined8 **)(DAT_09180dc0 + 0xb8);
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091896c0);
        }
        _GAME_Team_TeamServer__JoinTeamByServerId
                  (&local_e0,uVar8,uVar11,**(undefined8 **)(DAT_091896c0 + 0xb8),0,1);
        local_60 = local_d0;
        lStack_68 = lStack_d8;
        lStack_d8 = 0;
        local_d0 = 0;
        local_70 = local_e0;
        local_e0 = (long *)0x0;
        if ((*(byte *)(*(long *)(DAT_091bdf30 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        lStack_d8 = lStack_68;
        local_e0 = local_70;
        local_d0 = local_60;
        thunk_FUN_03f5d7b8(&local_e0,0);
        lStack_48 = lStack_d8;
        local_50 = local_e0;
        local_40 = local_d0;
        uVar9 = FUN_041e5390(&local_50,DAT_0919a748);
        if ((uVar9 & 1) == 0) {
          *param_1 = 0;
          *(long *)(param_1 + 0xc) = lStack_48;
          *(long **)(param_1 + 10) = local_50;
          *(ulong *)(param_1 + 0xe) = local_40;
          thunk_FUN_03f5d7b8(param_1 + 10,0);
          FUN_04790ea0(param_1 + 2,&local_50,param_1,DAT_09199bc0);
          return;
        }
        goto LAB_0777b888;
      }
      goto LAB_0777bca8;
    }
    local_80 = *(ulong *)(param_1 + 0x16);
    lStack_88 = *(long *)(param_1 + 0x14);
    local_90 = *(long **)(param_1 + 0x12);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  plVar10 = local_90;
  lVar2 = lStack_88;
  if (local_90 != (long *)0x0) {
    uVar9 = local_80 & 0xffff;
    lVar2 = *(long *)(DAT_0919a760 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c(lVar2);
    }
    lVar4 = *plVar10;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0777bae4;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar10,lVar2,0);
LAB_0777bae4:
    lVar2 = (*(code *)*puVar3)(plVar10,uVar9,puVar3[1]);
  }
  plVar10 = (long *)(param_1 + 0x10);
  if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(long *)(*plVar10 + 0x38) = lVar2;
  thunk_FUN_03f5d7b8();
  *plVar10 = 0;
  thunk_FUN_03f5d7b8(plVar10,0);
  if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = **(long **)(DAT_0918b978 + 0xb8);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar2 + 0x38) != 0) {
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar2 = **(long **)(DAT_0918b978 + 0xb8);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    if (*(long *)(lVar2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x58);
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
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar9 = FUN_06fd9fbc(lVar2,**(undefined8 **)(DAT_09180dc0 + 0xb8),&local_38,DAT_0919ffb8);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar8 = *(undefined8 *)(lVar2 + 0x10);
      uVar1 = *(undefined4 *)(lVar2 + 0x1c);
      uVar11 = *(undefined8 *)(lVar2 + 0x20);
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _GAME_Profile_ProfileManager__SaveTeamInfo(uVar8,uVar1,uVar11,0);
      if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined8 *)(**(long **)(DAT_0918b978 + 0xb8) + 0x40) = local_38;
      thunk_FUN_03f5d7b8();
    }
  }
  iVar7 = 0;
LAB_0777bcac:
  plVar10 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar10 == (long *)0x0) {
    param_1[6] = iVar7;
  }
  else {
    lVar2 = *(long *)(DAT_09199c18 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c(lVar2);
    }
    lVar4 = *plVar10;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_0777bd50;
        }
        uVar9 = uVar9 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar10,lVar2,2);
LAB_0777bd50:
    (*(code *)*puVar3)(plVar10,iVar7,puVar3[1]);
  }
  return;
}


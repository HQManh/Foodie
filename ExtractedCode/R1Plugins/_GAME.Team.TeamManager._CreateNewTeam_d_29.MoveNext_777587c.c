// rea decompile_all
// name: _GAME.Team.TeamManager.<CreateNewTeam>d__29$$MoveNext
// address: 0x777587c
// body: available
// range: 0x777587c-0x7775e3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7775e1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7775e20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7775e24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7775e28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7775e2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7775e30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7775e34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7775e38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamManager_<CreateNewTeam>d__29__MoveNext(int *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined1 uVar9;
  long *plVar10;
  undefined8 uVar11;
  long *local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined4 local_88;
  long *local_80;
  undefined8 uStack_78;
  ulong local_70;
  long *local_60;
  undefined8 uStack_58;
  ulong local_50;
  
  if ((DAT_09522cef & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091998a0);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_0919a760);
    FUN_03f5c2a4(&DAT_0919a768);
    FUN_03f5c2a4(&DAT_0919ffa0);
    FUN_03f5c2a4(&DAT_0919ff98);
    FUN_03f5c2a4(&DAT_09176c50);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_0918b980);
    FUN_03f5c2a4(&DAT_091bdf40);
    DAT_09522cef = 1;
  }
  local_60 = (long *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  local_80 = (long *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  local_88 = 0;
  if (*param_1 == 0) {
    local_50 = *(ulong *)(param_1 + 0x10);
    uStack_58 = *(undefined8 *)(param_1 + 0xe);
    local_60 = *(long **)(param_1 + 0xc);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
LAB_07775ad8:
    plVar10 = local_60;
    uVar5 = uStack_58;
    if (local_60 != (long *)0x0) {
      uVar2 = local_50 & 0xffff;
      lVar3 = *(long *)(DAT_0919a760 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c(lVar3);
      }
      lVar6 = *plVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar3) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07775b74;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar10,lVar3,0);
LAB_07775b74:
      uVar5 = (*(code *)*puVar4)(plVar10,uVar2,puVar4[1]);
    }
    plVar10 = (long *)(param_1 + 10);
    if (*plVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*plVar10 + 0x38) = uVar5;
    thunk_FUN_03f5d7b8();
    *plVar10 = 0;
    thunk_FUN_03f5d7b8(plVar10,0);
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = **(long **)(DAT_0918b978 + 0xb8);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar3 + 0x38) != 0) {
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar3 = **(long **)(DAT_0918b978 + 0xb8);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      lVar3 = *(long *)(lVar3 + 0x38);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = *(undefined8 *)(lVar3 + 0x10);
      uVar1 = *(undefined4 *)(lVar3 + 0x1c);
      uVar11 = *(undefined8 *)(lVar3 + 0x20);
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _GAME_Profile_ProfileManager__SaveTeamInfo(uVar5,uVar1,uVar11,0);
      lVar3 = **(long **)(DAT_0918b978 + 0xb8);
      uVar11 = **(undefined8 **)(DAT_091896c0 + 0xb8);
      uVar5 = thunk_FUN_03f9944c(DAT_0918b980);
      _GAME_Team_TeamMemberModel___ctor(uVar5,uVar11);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      puVar4 = (undefined8 *)(lVar3 + 0x40);
      *puVar4 = uVar5;
      thunk_FUN_03f5d7b8(puVar4,uVar5);
      if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38);
      lVar3 = thunk_FUN_03f9944c(DAT_09176c50);
      FUN_06fd76bc(lVar3,DAT_0919ff98);
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
      if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((lVar3 == 0) ||
         (FUN_06fd8454(lVar3,**(undefined8 **)(DAT_09180dc0 + 0xb8),
                       *(undefined8 *)(**(long **)(DAT_0918b978 + 0xb8) + 0x40),DAT_0919ffa0),
         lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar10 = (long *)(lVar6 + 0x58);
      *plVar10 = lVar3;
      thunk_FUN_03f5d7b8(plVar10,lVar3);
      uVar9 = 1;
      goto LAB_07775d50;
    }
  }
  else {
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
    uVar2 = _GAME_Utils_HelperString__IsNullOrEmpty(**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = _GAME_BaseGame_IdentityRecovery__get_CanStartNormalTeamMutations(0),
       (uVar2 & 1) != 0)) {
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      *(undefined8 *)(param_1 + 10) = **(undefined8 **)(DAT_0918b978 + 0xb8);
      thunk_FUN_03f5d7b8();
      _GAME_Team_TeamServer__CreateTeam(&local_b0,*(undefined8 *)(param_1 + 8),1);
      local_70 = local_a0;
      uStack_78 = uStack_a8;
      uStack_a8 = 0;
      local_a0 = 0;
      local_80 = local_b0;
      local_b0 = (long *)0x0;
      if ((*(byte *)(*(long *)(DAT_091bdf40 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      uStack_a8 = uStack_78;
      local_b0 = local_80;
      local_a0 = local_70;
      thunk_FUN_03f5d7b8(&local_b0,0);
      uStack_58 = uStack_a8;
      local_60 = local_b0;
      local_50 = local_a0;
      uVar2 = FUN_041e5390(&local_60,DAT_0919a768);
      if ((uVar2 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0xe) = uStack_58;
        *(long **)(param_1 + 0xc) = local_60;
        *(ulong *)(param_1 + 0x10) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_0478fdac(param_1 + 2,&local_60,param_1,DAT_091998a0);
        return;
      }
      goto LAB_07775ad8;
    }
  }
  uVar9 = 0;
LAB_07775d50:
  plVar10 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar10 == (long *)0x0) {
    *(undefined1 *)(param_1 + 6) = uVar9;
  }
  else {
    lVar3 = *(long *)(DAT_09199a20 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 8);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c(lVar3);
    }
    lVar6 = *plVar10;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_07775df4;
        }
        uVar2 = uVar2 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar10,lVar3,2);
LAB_07775df4:
    (*(code *)*puVar4)(plVar10,uVar9,puVar4[1]);
  }
  return;
}


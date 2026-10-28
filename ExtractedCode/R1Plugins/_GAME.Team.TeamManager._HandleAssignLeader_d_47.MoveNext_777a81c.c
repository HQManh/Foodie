// rea decompile_all
// name: _GAME.Team.TeamManager.<HandleAssignLeader>d__47$$MoveNext
// address: 0x777a81c
// body: available
// range: 0x777a81c-0x777ac7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x777ac64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777ac68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777ac6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777ac70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777ac74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777ac78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamManager_<HandleAssignLeader>d__47__MoveNext(int *param_1)

{
  undefined2 uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 local_50 [16];
  long local_38;
  undefined1 local_30 [16];
  
  if ((DAT_09522cfb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091997f0);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_0919ffb8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba4f0);
    FUN_03f5c2a4(&DAT_0917e758);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_091bddd8);
    DAT_09522cfb = 1;
  }
  local_38 = 0;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
LAB_0777a988:
    uVar10 = local_50._0_8_;
    if ((long *)local_50._0_8_ == (long *)0x0) {
      bVar2 = local_50[8] != '\0';
    }
    else {
      uVar1 = local_50._10_2_;
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
            goto LAB_0777aa2c;
          }
          uVar4 = uVar4 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(uVar10,lVar5,0);
LAB_0777aa2c:
      bVar2 = (*(code *)*puVar6)(uVar10,uVar1,puVar6[1]);
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
    uVar10 = **(undefined8 **)(lVar5 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    bVar3 = UnityEngine_Object__op_Equality(uVar10,0,0);
    if (((bVar3 | bVar2 ^ 0xff) & 1) == 0) {
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *(long *)(lVar5 + 0x58);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = FUN_06fd9fbc(lVar5,*(undefined8 *)(param_1 + 8),&local_38,DAT_0919ffb8);
      if ((uVar4 & 1) != 0) {
        if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined4 *)(local_38 + 0x30) = 1;
      }
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
      uVar9 = 1;
      *(undefined4 *)(lVar5 + 0x30) = 0;
      goto LAB_0777aba0;
    }
  }
  else {
    uVar4 = _GAME_BaseGame_IdentityRecovery__get_CanStartNormalTeamMutations(0);
    if ((uVar4 & 1) != 0) {
      auVar12 = _GAME_Team_TeamServer__AssignLeader(*(undefined8 *)(param_1 + 8),0);
      local_30._0_8_ = 0;
      local_30._8_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_30 = auVar12;
      thunk_FUN_03f5d7b8(local_30,0);
      local_50 = local_30;
      uVar4 = FUN_0430cf0c(local_50,DAT_0919a588);
      if ((uVar4 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_0478ebac(param_1 + 2,local_50,param_1,DAT_091997f0);
        return;
      }
      goto LAB_0777a988;
    }
  }
  uVar9 = 0;
LAB_0777aba0:
  plVar11 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar11 == (long *)0x0) {
    *(undefined1 *)(param_1 + 6) = uVar9;
  }
  else {
    lVar5 = *(long *)(DAT_09199a20 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c(lVar5);
    }
    lVar7 = *plVar11;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0777ac44;
        }
        uVar4 = uVar4 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar11,lVar5,2);
LAB_0777ac44:
    (*(code *)*puVar6)(plVar11,uVar9,puVar6[1]);
  }
  return;
}


// rea decompile_all
// name: _GAME.Team.PopupLeaveTeamCtrl.<HandleLeaveTeam>d__4$$MoveNext
// address: 0x776c2f4
// body: available
// range: 0x776c2f4-0x776c783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x776c76c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776c770 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776c774 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776c778 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776c77c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x776c780 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0776c770) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _GAME_Team_PopupLeaveTeamCtrl_<HandleLeaveTeam>d__4__MoveNext(int *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  undefined1 local_60 [16];
  long *local_48;
  undefined1 local_40 [16];
  int local_24;
  
  if ((DAT_09522c8c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2d78);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091b86e8);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_091ba6f8);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522c8c = 1;
  }
  local_24 = *param_1;
  local_48 = *(long **)(param_1 + 10);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (local_24 == 0) {
LAB_0776c4e8:
    local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_24 = -1;
    *param_1 = -1;
    goto LAB_0776c500;
  }
  if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar5 = (**(code **)(*local_48 + 0x348))(local_48,*(undefined8 *)(*local_48 + 0x350));
  auVar2._8_8_ = local_60._8_8_;
  auVar2._0_8_ = local_60._0_8_;
  auVar1._8_8_ = local_40._8_8_;
  auVar1._0_8_ = local_40._0_8_;
  if ((uVar5 & 1) != 0) goto LAB_0776c6e4;
  if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_40 = auVar1;
  local_60 = auVar2;
  if ((char)local_48[0x1f] != '\0') goto LAB_0776c6e4;
  *(undefined1 *)(local_48 + 0x1f) = 1;
  if (local_24 == 0) goto LAB_0776c4e8;
  if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_40 = _GAME_Team_TeamManager__HandleLeaveTeam(0);
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  thunk_FUN_03f5d7b8(local_40,0);
  local_60 = local_40;
  if (DAT_095162d4 == '\0') {
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095162d4 = '\x01';
  }
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095162d5 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d5 = '\x01';
  }
  uVar3 = local_60._0_8_;
  if ((long *)local_60._0_8_ == (long *)0x0) {
LAB_0776c500:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar3 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar8 = *(long *)local_60._0_8_;
      uVar10 = local_60._8_8_ & 0xffff;
      uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar5 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_091868c0) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_0776c584;
          }
          uVar5 = uVar5 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar5 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_0776c584:
      (*(code *)*puVar6)(uVar3,uVar10,puVar6[1]);
    }
    iVar4 = 0xb;
  }
  else {
    lVar8 = *(long *)local_60._0_8_;
    uVar10 = local_60._8_8_ & 0xffff;
    uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar5 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091868c0) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0776c718;
        }
        uVar5 = uVar5 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_0776c718:
    iVar4 = (*(code *)*puVar6)(uVar3,uVar10,puVar6[1]);
    if (iVar4 != 0) goto LAB_0776c500;
    local_24 = 0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
    thunk_FUN_03f5d7b8(param_1 + 0xc,0);
    FUN_049c9e74(param_1 + 2,local_60,param_1,DAT_091c2d78);
    iVar4 = 8;
  }
  plVar7 = local_48;
  if (local_24 < 0) {
    if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(local_48 + 0x1f) = 0;
  }
  if ((iVar4 != 0xb) && (iVar4 != 0)) {
    return;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Equality(plVar7,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_091896c0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(**(long **)(DAT_091896c0 + 0xb8) + 0x50) < 1) {
      if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*local_48 + 0x308))(local_48,*(undefined8 *)(*local_48 + 0x310));
      lVar8 = *(long *)(DAT_091b86e8 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      plVar7 = (long *)**(long **)(lVar8 + 0xb8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x308))(plVar7,*(undefined8 *)(*plVar7 + 0x310));
      }
      lVar8 = *(long *)(DAT_091ba6f8 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_03f95a6c();
      }
      if (**(long **)(lVar8 + 0xb8) != 0) {
        _GAME_Team_UITabTeamCtrl__UpdateUIActive(**(long **)(lVar8 + 0xb8),0);
      }
    }
  }
LAB_0776c6e4:
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


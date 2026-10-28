// rea decompile_all
// name: _GAME.Team.TeamManager.<ReconcileServerIdentityDetailed>d__24$$MoveNext
// address: 0x777e6e4
// body: available
// range: 0x777e6e4-0x777f34f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x777f2f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777f2f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777f2fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777f300 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777f304 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777f308 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777f30c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777f310 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777f314 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777f318 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777f31c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x777f320 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamManager_<ReconcileServerIdentityDetailed>d__24__MoveNext(int *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *local_a0;
  long lStack_98;
  ulong local_90;
  undefined4 local_80;
  undefined8 local_78;
  long *local_70;
  long lStack_68;
  ulong local_60;
  long *local_50;
  long lStack_48;
  ulong local_40;
  undefined8 local_28;
  
  if ((DAT_09522d0a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09199eb0);
    FUN_03f5c2a4(&DAT_09199ed0);
    FUN_03f5c2a4(&DAT_0919a770);
    FUN_03f5c2a4(&DAT_0919a778);
    FUN_03f5c2a4(&DAT_091a0648);
    FUN_03f5c2a4(&DAT_0919ef38);
    FUN_03f5c2a4(&DAT_0919ffb8);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_091bdf48);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09522d0a = 1;
  }
  iVar5 = *param_1;
  local_28 = 0;
  local_50 = (long *)0x0;
  lStack_48 = 0;
  local_40 = 0;
  local_70 = (long *)0x0;
  lStack_68 = 0;
  local_60 = 0;
  local_78 = 0;
  local_80 = 0;
  if (iVar5 == 0) {
    local_40 = *(ulong *)(param_1 + 0x10);
    lStack_48 = *(long *)(param_1 + 0xe);
    local_50 = *(long **)(param_1 + 0xc);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
LAB_0777e940:
    plVar4 = local_50;
    lVar2 = lStack_48;
    if (local_50 != (long *)0x0) {
      uVar10 = local_40 & 0xffff;
      lVar2 = *(long *)(DAT_0919a770 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c(lVar2);
      }
      lVar6 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar2) {
            puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0777eb18;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar4,lVar2,0);
LAB_0777eb18:
      lVar2 = (*(code *)*puVar3)(plVar4,uVar10,puVar3[1]);
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (((*(char *)(lVar2 + 0x10) == '\0') || (*(int *)(lVar2 + 0x14) != 0)) ||
       (*(long *)(lVar2 + 0x18) == 0)) goto LAB_0777f118;
    lVar6 = *(long *)(*(long *)(lVar2 + 0x18) + 0x10);
    lVar2 = *(long *)(param_1 + 10);
    if (lVar6 < 1) {
      if (0 < lVar2) {
LAB_0777f224:
        _GAME_Team_TeamServer__GetTeamInfoDetailedByServerId
                  (&local_a0,*(undefined8 *)(param_1 + 8),lVar2,0,0);
        local_60 = local_90;
        lStack_68 = lStack_98;
        lStack_98 = 0;
        local_90 = 0;
        local_70 = local_a0;
        local_a0 = (long *)0x0;
        if ((*(byte *)(*(long *)(DAT_091bdf48 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        lStack_98 = lStack_68;
        local_a0 = local_70;
        local_90 = local_60;
        thunk_FUN_03f5d7b8(&local_a0,0);
        lStack_48 = lStack_98;
        local_50 = local_a0;
        local_40 = local_90;
        uVar10 = FUN_041e5390(&local_50,DAT_0919a778);
        if ((uVar10 & 1) == 0) {
          *param_1 = 1;
          *(long *)(param_1 + 0xe) = lStack_48;
          *(long **)(param_1 + 0xc) = local_50;
          *(ulong *)(param_1 + 0x10) = local_40;
          thunk_FUN_03f5d7b8(param_1 + 0xc,0);
          FUN_04791f94(param_1 + 2,&local_50,param_1,DAT_09199eb0);
          return;
        }
        goto LAB_0777e898;
      }
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = **(long **)(DAT_091896c0 + 0xb8);
      if ((lVar2 == 0) || (*(long *)(lVar2 + 0x50) < 1)) {
        if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38);
        if (lVar2 != 0) {
          plVar4 = (long *)(lVar2 + 0x10);
          goto LAB_0777f218;
        }
      }
      else {
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar2 = **(long **)(DAT_091896c0 + 0xb8);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        plVar4 = (long *)(lVar2 + 0x50);
LAB_0777f218:
        lVar2 = *plVar4;
        if (0 < lVar2) goto LAB_0777f224;
      }
LAB_0777f028:
      if (*(long *)(param_1 + 10) < 1) {
        if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = *(long *)(*(long *)(DAT_0918b978 + 0xb8) + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_06fd85dc(lVar2,DAT_091a0648);
        lVar2 = *(long *)(*(long *)(DAT_0918b978 + 0xb8) + 0x18);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_06fd85dc(lVar2,DAT_0919ef38);
        if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        puVar3 = (undefined8 *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38);
        *puVar3 = 0;
        thunk_FUN_03f5d7b8(puVar3,0);
        if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        puVar3 = (undefined8 *)(**(long **)(DAT_0918b978 + 0xb8) + 0x40);
        *puVar3 = 0;
        thunk_FUN_03f5d7b8(puVar3,0);
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        _GAME_Profile_ProfileManager__SaveTeamInfo(0xffffffffffffffff,0,DAT_091f5700,0);
        goto LAB_0777f100;
      }
    }
    else if ((lVar2 < 1) || (lVar6 == lVar2)) {
      _GAME_Team_TeamServer__GetTeamInfoDetailedByServerId
                (&local_a0,*(undefined8 *)(param_1 + 8),lVar6,0,0);
      local_60 = local_90;
      lStack_68 = lStack_98;
      lStack_98 = 0;
      local_90 = 0;
      local_70 = local_a0;
      local_a0 = (long *)0x0;
      if ((*(byte *)(*(long *)(DAT_091bdf48 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      lStack_98 = lStack_68;
      local_a0 = local_70;
      local_90 = local_60;
      thunk_FUN_03f5d7b8(&local_a0,0);
      lStack_48 = lStack_98;
      local_50 = local_a0;
      local_40 = local_90;
      uVar10 = FUN_041e5390(&local_50,DAT_0919a778);
      if ((uVar10 & 1) == 0) {
        *param_1 = 2;
        *(long *)(param_1 + 0xe) = lStack_48;
        *(long **)(param_1 + 0xc) = local_50;
        *(ulong *)(param_1 + 0x10) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_04791f94(param_1 + 2,&local_50,param_1,DAT_09199eb0);
        return;
      }
      goto LAB_0777e7f0;
    }
LAB_0777f034:
    iVar5 = 2;
  }
  else {
    if (iVar5 == 1) {
      local_40 = *(ulong *)(param_1 + 0x10);
      lStack_48 = *(long *)(param_1 + 0xe);
      local_50 = *(long **)(param_1 + 0xc);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
LAB_0777e898:
      plVar4 = local_50;
      lVar2 = lStack_48;
      if (local_50 != (long *)0x0) {
        uVar10 = local_40 & 0xffff;
        lVar2 = *(long *)(DAT_0919a770 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03f95a6c();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03f95a6c(lVar2);
        }
        lVar6 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar2) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0777ed78;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar4,lVar2,0);
LAB_0777ed78:
        lVar2 = (*(code *)*puVar3)(plVar4,uVar10,puVar3[1]);
      }
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(lVar2 + 0x10) != '\0') {
        iVar5 = *(int *)(lVar2 + 0x14);
        if (iVar5 == 0) {
          if ((*(long *)(lVar2 + 0x18) != 0) &&
             (lVar6 = *(long *)(*(long *)(lVar2 + 0x18) + 0x58), lVar6 != 0)) {
            uVar10 = FUN_06fd9fbc(lVar6,*(undefined8 *)(param_1 + 8),&local_78,DAT_0919ffb8);
            if ((uVar10 & 1) != 0) {
              if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar6 = *(long *)(*(long *)(DAT_0918b978 + 0xb8) + 0x10);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_06fd85dc(lVar6,DAT_091a0648);
              lVar6 = *(long *)(*(long *)(DAT_0918b978 + 0xb8) + 0x18);
              if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_06fd85dc(lVar6,DAT_0919ef38);
              if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              *(undefined8 *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38) =
                   *(undefined8 *)(lVar2 + 0x18);
              thunk_FUN_03f5d7b8();
              if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              *(undefined8 *)(**(long **)(DAT_0918b978 + 0xb8) + 0x40) = local_78;
              thunk_FUN_03f5d7b8();
              lVar2 = *(long *)(lVar2 + 0x18);
              if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar9 = *(undefined8 *)(lVar2 + 0x10);
              uVar1 = *(undefined4 *)(lVar2 + 0x1c);
              uVar11 = *(undefined8 *)(lVar2 + 0x20);
              if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              _GAME_Profile_ProfileManager__SaveTeamInfo(uVar9,uVar1,uVar11,0);
              goto LAB_0777f100;
            }
            if (*(char *)(lVar2 + 0x10) == '\0') goto LAB_0777f118;
          }
          iVar5 = *(int *)(lVar2 + 0x14);
          if (iVar5 == 0) {
            if ((*(long *)(lVar2 + 0x18) != 0) && (*(long *)(*(long *)(lVar2 + 0x18) + 0x58) != 0))
            goto LAB_0777f028;
            goto LAB_0777f118;
          }
        }
        if ((iVar5 == 8) || (iVar5 == 3)) goto LAB_0777f028;
      }
    }
    else if (iVar5 == 2) {
      local_40 = *(ulong *)(param_1 + 0x10);
      lStack_48 = *(long *)(param_1 + 0xe);
      local_50 = *(long **)(param_1 + 0xc);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
LAB_0777e7f0:
      plVar4 = local_50;
      lVar2 = lStack_48;
      if (local_50 != (long *)0x0) {
        uVar10 = local_40 & 0xffff;
        lVar2 = *(long *)(DAT_0919a770 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03f95a6c();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03f95a6c(lVar2);
        }
        lVar6 = *plVar4;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar2) {
              puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_0777ec44;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar4,lVar2,0);
LAB_0777ec44:
        lVar2 = (*(code *)*puVar3)(plVar4,uVar10,puVar3[1]);
      }
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(lVar2 + 0x10) != '\0') {
        iVar5 = *(int *)(lVar2 + 0x14);
        if (iVar5 == 0) {
          if ((*(long *)(lVar2 + 0x18) == 0) ||
             (lVar6 = *(long *)(*(long *)(lVar2 + 0x18) + 0x58), lVar6 == 0)) {
LAB_0777ef08:
            iVar5 = *(int *)(lVar2 + 0x14);
            if (iVar5 != 0) goto LAB_0777ef10;
            if ((*(long *)(lVar2 + 0x18) == 0) || (*(long *)(*(long *)(lVar2 + 0x18) + 0x58) == 0))
            goto LAB_0777f118;
            goto LAB_0777ef20;
          }
          uVar10 = FUN_06fd9fbc(lVar6,*(undefined8 *)(param_1 + 8),&local_28,DAT_0919ffb8);
          if ((uVar10 & 1) == 0) {
            if (*(char *)(lVar2 + 0x10) == '\0') goto LAB_0777f118;
            goto LAB_0777ef08;
          }
          lVar2 = *(long *)(lVar2 + 0x18);
          if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar6 = *(long *)(*(long *)(DAT_0918b978 + 0xb8) + 0x10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06fd85dc(lVar6,DAT_091a0648);
          lVar6 = *(long *)(*(long *)(DAT_0918b978 + 0xb8) + 0x18);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06fd85dc(lVar6,DAT_0919ef38);
          if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar4 = (long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38);
          *plVar4 = lVar2;
          thunk_FUN_03f5d7b8(plVar4,lVar2);
          if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined8 *)(**(long **)(DAT_0918b978 + 0xb8) + 0x40) = local_28;
          thunk_FUN_03f5d7b8();
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar11 = *(undefined8 *)(lVar2 + 0x10);
          uVar1 = *(undefined4 *)(lVar2 + 0x1c);
          uVar9 = *(undefined8 *)(lVar2 + 0x20);
          if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          _GAME_Profile_ProfileManager__SaveTeamInfo(uVar11,uVar1,uVar9,0);
        }
        else {
LAB_0777ef10:
          if ((iVar5 != 8) && (iVar5 != 3)) goto LAB_0777f118;
LAB_0777ef20:
          if (0 < *(long *)(param_1 + 10)) goto LAB_0777f034;
          if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar2 = *(long *)(*(long *)(DAT_0918b978 + 0xb8) + 0x10);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06fd85dc(lVar2,DAT_091a0648);
          lVar2 = *(long *)(*(long *)(DAT_0918b978 + 0xb8) + 0x18);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          FUN_06fd85dc(lVar2,DAT_0919ef38);
          if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          puVar3 = (undefined8 *)(**(long **)(DAT_0918b978 + 0xb8) + 0x38);
          *puVar3 = 0;
          thunk_FUN_03f5d7b8(puVar3,0);
          if (**(long **)(DAT_0918b978 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          puVar3 = (undefined8 *)(**(long **)(DAT_0918b978 + 0xb8) + 0x40);
          *puVar3 = 0;
          thunk_FUN_03f5d7b8(puVar3,0);
          if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          _GAME_Profile_ProfileManager__SaveTeamInfo(0xffffffffffffffff,0,DAT_091f5700,0);
        }
LAB_0777f100:
        iVar5 = 1;
        goto LAB_0777f11c;
      }
    }
    else {
      uVar10 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 8),0);
      if ((uVar10 & 1) == 0) {
        if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(long **)(DAT_0918b978 + 0xb8) != 0) {
          uVar9 = *(undefined8 *)(param_1 + 8);
          if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar10 = _GAME_BaseGame_ABIServerAPI__IsCanonicalIdentityTarget(uVar9,0);
          if ((uVar10 & 1) != 0) {
            _GAME_Team_TeamServer__GetTeamInfoSummaryDetailedByServerId
                      (&local_a0,*(undefined8 *)(param_1 + 8),0);
            local_60 = local_90;
            lStack_68 = lStack_98;
            lStack_98 = 0;
            local_90 = 0;
            local_70 = local_a0;
            local_a0 = (long *)0x0;
            if ((*(byte *)(*(long *)(DAT_091bdf48 + 0x20) + 0x135) & 1) == 0) {
              FUN_03f95a6c();
            }
            lStack_98 = lStack_68;
            local_a0 = local_70;
            local_90 = local_60;
            thunk_FUN_03f5d7b8(&local_a0,0);
            lStack_48 = lStack_98;
            local_50 = local_a0;
            local_40 = local_90;
            uVar10 = FUN_041e5390(&local_50,DAT_0919a778);
            if ((uVar10 & 1) == 0) {
              *param_1 = 0;
              *(long *)(param_1 + 0xe) = lStack_48;
              *(long **)(param_1 + 0xc) = local_50;
              *(ulong *)(param_1 + 0x10) = local_40;
              thunk_FUN_03f5d7b8(param_1 + 0xc,0);
              FUN_04791f94(param_1 + 2,&local_50,param_1,DAT_09199eb0);
              return;
            }
            goto LAB_0777e940;
          }
        }
      }
    }
LAB_0777f118:
    iVar5 = 0;
  }
LAB_0777f11c:
  plVar4 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar4 == (long *)0x0) {
    param_1[6] = iVar5;
  }
  else {
    lVar2 = *(long *)(DAT_09199ed0 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c(lVar2);
    }
    lVar6 = *plVar4;
    uVar10 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar10 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0777f1c0;
        }
        uVar10 = uVar10 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar10 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar4,lVar2,2);
LAB_0777f1c0:
    (*(code *)*puVar3)(plVar4,iVar5,puVar3[1]);
  }
  return;
}


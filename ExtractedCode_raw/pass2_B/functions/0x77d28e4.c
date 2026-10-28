// rea decompile_all
// name: _GAME.BaseGame.ABIServerAPI.<ResolveWithPlatform>d__54$$MoveNext
// address: 0x77d28e4
// body: available
// range: 0x77d28e4-0x77d3593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77d3564 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d3568 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d356c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d3570 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d3574 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d3578 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d357c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d3580 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d3584 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d3588 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d358c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d3590 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_ABIServerAPI_<ResolveWithPlatform>d__54__MoveNext(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *local_e0;
  long lStack_d8;
  ulong local_d0;
  ulong local_a8;
  long *local_a0;
  long lStack_98;
  ulong local_90;
  long *local_80;
  long lStack_78;
  ulong local_70;
  long *local_60;
  long lStack_58;
  ulong local_50;
  long *local_40;
  long lStack_38;
  ulong local_30;
  
  if ((DAT_09522fc2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_0919a0f0);
    FUN_03f5c2a4(&DAT_0919a120);
    FUN_03f5c2a4(&DAT_0919a550);
    FUN_03f5c2a4(&DAT_0919a558);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091bdd88);
    FUN_03f5c2a4(&DAT_09213ac0);
    FUN_03f5c2a4(&DAT_09213a98);
    FUN_03f5c2a4(&DAT_0920db20);
    DAT_09522fc2 = 1;
  }
  iVar1 = *param_1;
  local_60 = (long *)0x0;
  lStack_58 = 0;
  local_50 = 0;
  local_80 = (long *)0x0;
  lStack_78 = 0;
  local_70 = 0;
  local_a0 = (long *)0x0;
  lStack_98 = 0;
  local_90 = 0;
  local_a8 = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      local_70 = *(ulong *)(param_1 + 0x18);
      lStack_78 = *(long *)(param_1 + 0x16);
      local_80 = *(long **)(param_1 + 0x14);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      *param_1 = -1;
LAB_077d2ca0:
      plVar8 = local_80;
      lVar2 = lStack_78;
      if (local_80 != (long *)0x0) {
        uVar9 = local_70 & 0xffff;
        lVar2 = *(long *)(DAT_0919a550 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03f95a6c();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03f95a6c(lVar2);
        }
        lVar4 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar2) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_077d2d94;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar8,lVar2,0);
LAB_077d2d94:
        lVar2 = (*(code *)*puVar3)(plVar8,uVar9,puVar3[1]);
      }
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(lVar2 + 0x10) != '\0') {
        uVar9 = _GAME_BaseGame_ABIServerIDCommandResult__get_IsSuccess(lVar2);
        if ((uVar9 & 1) != 0) {
          uVar7 = *(undefined8 *)(lVar2 + 0x18);
          uVar10 = *(undefined8 *)(param_1 + 0xc);
          if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          _GAME_BaseGame_ABIServerAPI__LinkedTo(&local_40,uVar7,uVar10);
          local_60 = local_40;
          lStack_58 = lStack_38;
          local_50 = local_30;
          goto LAB_077d3438;
        }
        if ((*(char *)(lVar2 + 0x10) != '\0') && (*(int *)(lVar2 + 0x14) == 2)) {
          _GAME_BaseGame_GenServerID__ReadIDDetailed(&local_40,*(undefined8 *)(param_1 + 0xe));
          local_90 = local_30;
          lStack_98 = lStack_38;
          lStack_38 = 0;
          local_30 = 0;
          local_a0 = local_40;
          local_40 = (long *)0x0;
          if ((*(byte *)(*(long *)(DAT_091bdd88 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          lStack_38 = lStack_98;
          local_40 = local_a0;
          local_30 = local_90;
          thunk_FUN_03f5d7b8(&local_40,0);
          lStack_78 = lStack_38;
          local_80 = local_40;
          local_70 = local_30;
          uVar9 = FUN_041e5390(&local_80,DAT_0919a558);
          if ((uVar9 & 1) == 0) {
            *param_1 = 1;
            *(long *)(param_1 + 0x16) = lStack_78;
            *(long **)(param_1 + 0x14) = local_80;
            *(ulong *)(param_1 + 0x18) = local_70;
            thunk_FUN_03f5d7b8(param_1 + 0x14,0);
            FUN_04796114(param_1 + 2,&local_80,param_1,DAT_0919a0f0);
            return;
          }
          goto LAB_077d2aa4;
        }
      }
    }
    else {
      if (iVar1 != 1) {
LAB_077d2c1c:
        _GAME_BaseGame_GenServerID__ReadIDDetailed(&local_40,*(undefined8 *)(param_1 + 0xc));
        local_90 = local_30;
        lStack_98 = lStack_38;
        lStack_38 = 0;
        local_30 = 0;
        local_a0 = local_40;
        local_40 = (long *)0x0;
        if ((*(byte *)(*(long *)(DAT_091bdd88 + 0x20) + 0x135) & 1) == 0) {
          FUN_03f95a6c();
        }
        lStack_38 = lStack_98;
        local_40 = local_a0;
        local_30 = local_90;
        thunk_FUN_03f5d7b8(&local_40,0);
        lStack_78 = lStack_38;
        local_80 = local_40;
        local_70 = local_30;
        uVar9 = FUN_041e5390(&local_80,DAT_0919a558);
        if ((uVar9 & 1) == 0) {
          *param_1 = 0;
          *(long *)(param_1 + 0x16) = lStack_78;
          *(long **)(param_1 + 0x14) = local_80;
          *(ulong *)(param_1 + 0x18) = local_70;
          thunk_FUN_03f5d7b8(param_1 + 0x14,0);
          FUN_04796114(param_1 + 2,&local_80,param_1,DAT_0919a0f0);
          return;
        }
        goto LAB_077d2ca0;
      }
      local_70 = *(ulong *)(param_1 + 0x18);
      lStack_78 = *(long *)(param_1 + 0x16);
      local_80 = *(long **)(param_1 + 0x14);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      *param_1 = -1;
LAB_077d2aa4:
      plVar8 = local_80;
      lVar2 = lStack_78;
      if (local_80 != (long *)0x0) {
        uVar9 = local_70 & 0xffff;
        lVar2 = *(long *)(DAT_0919a550 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03f95a6c();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03f95a6c(lVar2);
        }
        lVar4 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar2) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_077d31c8;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar8,lVar2,0);
LAB_077d31c8:
        lVar2 = (*(code *)*puVar3)(plVar8,uVar9,puVar3[1]);
      }
      plVar8 = (long *)(param_1 + 0x12);
      *plVar8 = lVar2;
      thunk_FUN_03f5d7b8(plVar8);
      if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(*plVar8 + 0x10) != '\0') {
        uVar9 = _GAME_BaseGame_ABIServerIDCommandResult__get_IsSuccess();
        if ((uVar9 & 1) != 0) {
          _GAME_BaseGame_GenServerID__LinkIDDetailed
                    (&local_40,*(undefined8 *)(param_1 + 0xe),*(undefined8 *)(param_1 + 0xc));
          local_90 = local_30;
          lStack_98 = lStack_38;
          lStack_38 = 0;
          local_30 = 0;
          local_a0 = local_40;
          local_40 = (long *)0x0;
          if ((*(byte *)(*(long *)(DAT_091bdd88 + 0x20) + 0x135) & 1) == 0) {
            FUN_03f95a6c();
          }
          lStack_38 = lStack_98;
          local_40 = local_a0;
          local_30 = local_90;
          thunk_FUN_03f5d7b8(&local_40,0);
          lStack_78 = lStack_38;
          local_80 = local_40;
          local_70 = local_30;
          uVar9 = FUN_041e5390(&local_80,DAT_0919a558);
          if ((uVar9 & 1) == 0) {
            *param_1 = 2;
            *(long *)(param_1 + 0x16) = lStack_78;
            *(long **)(param_1 + 0x14) = local_80;
            *(ulong *)(param_1 + 0x18) = local_70;
            thunk_FUN_03f5d7b8(param_1 + 0x14,0);
            FUN_04796114(param_1 + 2,&local_80,param_1,DAT_0919a0f0);
            return;
          }
          goto LAB_077d2b4c;
        }
        lVar2 = *plVar8;
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((*(char *)(lVar2 + 0x10) != '\0') && (*(int *)(lVar2 + 0x14) == 2)) {
          uVar9 = _GAME_Utils_HelperString__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x10),0);
          if ((uVar9 & 1) == 0) {
            local_a8 = DAT_0920db20;
            thunk_FUN_03f5d7b8(&local_a8);
            lStack_58 = 0;
            local_60 = (long *)0x0;
            local_50 = local_a8;
            goto LAB_077d3438;
          }
          _GAME_BaseGame_GenServerID__GenIDDetailed(&local_40,*(undefined8 *)(param_1 + 0xc));
          lStack_98 = lStack_38;
          local_a0 = local_40;
          local_90 = local_30;
          FUN_039b5b60(&local_40,&local_a0,DAT_091bdd88);
          lStack_78 = lStack_38;
          local_80 = local_40;
          local_70 = local_30;
          uVar9 = FUN_041e5390(&local_80,DAT_0919a558);
          if ((uVar9 & 1) == 0) {
            *param_1 = 4;
            *(long *)(param_1 + 0x16) = lStack_78;
            *(long **)(param_1 + 0x14) = local_80;
            *(ulong *)(param_1 + 0x18) = local_70;
            thunk_FUN_03f5d7b8(param_1 + 0x14,0);
            FUN_04796114(param_1 + 2,&local_80,param_1,DAT_0919a0f0);
            return;
          }
          goto LAB_077d29f0;
        }
      }
    }
  }
  else {
    if (iVar1 == 2) {
      local_70 = *(ulong *)(param_1 + 0x18);
      lStack_78 = *(long *)(param_1 + 0x16);
      local_80 = *(long **)(param_1 + 0x14);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      *param_1 = -1;
LAB_077d2b4c:
      plVar8 = local_80;
      lVar2 = lStack_78;
      if (local_80 != (long *)0x0) {
        uVar9 = local_70 & 0xffff;
        lVar2 = *(long *)(DAT_0919a550 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03f95a6c();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03f95a6c(lVar2);
        }
        lVar4 = *plVar8;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == lVar2) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_077d2edc;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar8,lVar2,0);
LAB_077d2edc:
        lVar2 = (*(code *)*puVar3)(plVar8,uVar9,puVar3[1]);
      }
      plVar8 = (long *)(param_1 + 0x1a);
      *plVar8 = lVar2;
      thunk_FUN_03f5d7b8(plVar8);
      if (*plVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(*plVar8 + 0x10) == '\0') goto LAB_077d3398;
      _GAME_BaseGame_GenServerID__ReadIDDetailed(&local_40,*(undefined8 *)(param_1 + 0xc));
      local_90 = local_30;
      lStack_98 = lStack_38;
      lStack_38 = 0;
      local_30 = 0;
      local_a0 = local_40;
      local_40 = (long *)0x0;
      if ((*(byte *)(*(long *)(DAT_091bdd88 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      lStack_38 = lStack_98;
      local_40 = local_a0;
      local_30 = local_90;
      thunk_FUN_03f5d7b8(&local_40,0);
      lStack_78 = lStack_38;
      local_80 = local_40;
      local_70 = local_30;
      uVar9 = FUN_041e5390(&local_80,DAT_0919a558);
      if ((uVar9 & 1) == 0) {
        *param_1 = 3;
        *(long *)(param_1 + 0x16) = lStack_78;
        *(long **)(param_1 + 0x14) = local_80;
        *(ulong *)(param_1 + 0x18) = local_70;
        thunk_FUN_03f5d7b8(param_1 + 0x14,0);
        FUN_04796114(param_1 + 2,&local_80,param_1,DAT_0919a0f0);
        return;
      }
    }
    else {
      if (iVar1 != 3) {
        if (iVar1 != 4) goto LAB_077d2c1c;
        local_70 = *(ulong *)(param_1 + 0x18);
        lStack_78 = *(long *)(param_1 + 0x16);
        local_80 = *(long **)(param_1 + 0x14);
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[0x18] = 0;
        param_1[0x19] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        *param_1 = -1;
LAB_077d29f0:
        plVar8 = local_80;
        lVar2 = lStack_78;
        if (local_80 != (long *)0x0) {
          uVar9 = local_70 & 0xffff;
          lVar2 = *(long *)(DAT_0919a550 + 0x20);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_03f95a6c();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_03f95a6c(lVar2);
          }
          lVar4 = *plVar8;
          uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == lVar2) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_077d33b0;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar8,lVar2,0);
LAB_077d33b0:
          lVar2 = (*(code *)*puVar3)(plVar8,uVar9,puVar3[1]);
        }
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar9 = _GAME_BaseGame_ABIServerIDCommandResult__get_IsSuccess(lVar2);
        if ((uVar9 & 1) == 0) {
          local_a8 = 0;
          lStack_d8 = 0;
          local_d0 = 0;
          local_e0 = (long *)0x0;
          local_60 = local_e0;
          lStack_58 = lStack_d8;
          local_50 = local_d0;
        }
        else {
          uVar7 = *(undefined8 *)(lVar2 + 0x18);
          uVar10 = *(undefined8 *)(param_1 + 0xc);
          if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          _GAME_BaseGame_ABIServerAPI__LinkedTo(&local_40,uVar7,uVar10);
          lStack_d8 = lStack_38;
          local_e0 = local_40;
          local_d0 = local_30;
          local_60 = local_e0;
          lStack_58 = lStack_d8;
          local_50 = local_d0;
        }
        goto LAB_077d3438;
      }
      local_70 = *(ulong *)(param_1 + 0x18);
      lStack_78 = *(long *)(param_1 + 0x16);
      local_80 = *(long **)(param_1 + 0x14);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      *param_1 = -1;
    }
    plVar8 = local_80;
    lVar2 = lStack_78;
    if (local_80 != (long *)0x0) {
      uVar9 = local_70 & 0xffff;
      lVar2 = *(long *)(DAT_0919a550 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c(lVar2);
      }
      lVar4 = *plVar8;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == lVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_077d3074;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar8,lVar2,0);
LAB_077d3074:
      lVar2 = (*(code *)*puVar3)(plVar8,uVar9,puVar3[1]);
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar9 = _GAME_BaseGame_ABIServerIDCommandResult__get_IsSuccess(lVar2);
    if ((uVar9 & 1) != 0) {
      if (*(long *)(param_1 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar9 = System_String__Equals
                        (*(long *)(lVar2 + 0x18),*(undefined8 *)(*(long *)(param_1 + 0x12) + 0x18),0
                        );
      if ((uVar9 & 1) != 0) {
        if (*(long *)(param_1 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar7 = System_String__Concat
                          (DAT_09213a98,*(undefined8 *)(*(long *)(param_1 + 0x12) + 0x18),0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__Log(uVar7,0);
        if (*(long *)(param_1 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x12) + 0x18);
        uVar10 = *(undefined8 *)(param_1 + 0xc);
        if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        _GAME_BaseGame_ABIServerAPI__LinkedTo(&local_40,uVar7,uVar10);
        local_60 = local_40;
        lStack_58 = lStack_38;
        local_50 = local_30;
        goto LAB_077d3438;
      }
    }
    if (*(long *)(param_1 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(param_1 + 0x1a) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x12) + 0x18);
    local_40 = (long *)CONCAT44(local_40._4_4_,*(undefined4 *)(*(long *)(param_1 + 0x1a) + 0x14));
    uVar7 = FUN_03f5c42c(DAT_09535420,&local_40);
    uVar7 = System_String__Format(DAT_09213ac0,uVar10,uVar7,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(uVar7,0);
  }
LAB_077d3398:
  local_60 = (long *)0x0;
  lStack_58 = 0;
  local_50 = 0;
LAB_077d3438:
  *param_1 = -2;
  piVar6 = param_1 + 0x12;
  piVar6[0] = 0;
  piVar6[1] = 0;
  thunk_FUN_03f5d7b8(piVar6,0);
  plVar8 = *(long **)(param_1 + 2);
  if (plVar8 == (long *)0x0) {
    *(long *)(param_1 + 8) = lStack_58;
    *(long **)(param_1 + 6) = local_60;
    *(ulong *)(param_1 + 10) = local_50;
    thunk_FUN_03f5d7b8(param_1 + 6,0);
  }
  else {
    lVar2 = *(long *)(DAT_0919a120 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c(lVar2);
    }
    lVar4 = *plVar8;
    uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar9 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar4 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_077d3504;
        }
        uVar9 = uVar9 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar8,lVar2,2);
LAB_077d3504:
    lStack_38 = lStack_58;
    local_40 = local_60;
    local_30 = local_50;
    (*(code *)*puVar3)(plVar8,&local_40,puVar3[1]);
  }
  return;
}


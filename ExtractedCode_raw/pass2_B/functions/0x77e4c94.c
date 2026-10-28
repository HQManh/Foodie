// rea decompile_all
// name: _GAME.WeeklyContest.WeeklyContestManager.<FetchLeaderboard>d__22$$MoveNext
// address: 0x77e4c94
// body: available
// range: 0x77e4c94-0x77e547f inclusive
// range: 0x77e55e0-0x77e5937 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77e4eb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e5454 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e5458 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e545c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e5460 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e5464 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e5468 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e546c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e5470 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e5474 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e5478 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e547c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_WeeklyContest_WeeklyContestManager_<FetchLeaderboard>d__22__MoveNext(int *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  int *piVar11;
  undefined1 uVar12;
  undefined1 auVar13 [16];
  undefined1 local_e0 [16];
  ulong local_d0;
  undefined4 local_b8;
  undefined1 local_b0 [16];
  ulong local_a0;
  undefined1 local_90 [16];
  ulong local_80;
  undefined1 local_70 [16];
  
  if ((DAT_09523084 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199770);
    FUN_03f5c2a4(&DAT_091998c8);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_0919a4a0);
    FUN_03f5c2a4(&DAT_0919a4a8);
    FUN_03f5c2a4(&DAT_0919df28);
    FUN_03f5c2a4(&DAT_0919df40);
    FUN_03f5c2a4(&DAT_09185080);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_091b1d68);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_0917cce8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba538);
    FUN_03f5c2a4(&DAT_0917e768);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_091bdd18);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_0918ce50);
    FUN_03f5c2a4(&DAT_0918d050);
    DAT_09523084 = 1;
  }
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_90._8_8_ = 0;
  local_90._0_8_ = 0;
  local_80 = 0;
  local_b0._8_8_ = 0;
  local_b0._0_8_ = 0;
  local_a0 = 0;
  iVar3 = *param_1;
  local_b8 = 0;
  if (iVar3 == 0) {
    local_70 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
    goto LAB_077e56e0;
  }
  if (iVar3 - 3U < 0xfffffffe) {
    auVar13 = ZEXT816(0);
    if (*(char *)(*(long *)(DAT_0918d050 + 0xb8) + 8) != '\0') {
      while( true ) {
        local_70 = auVar13;
        if (*(int *)(DAT_0917e768 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar5 = DAT_091ba538;
        lVar8 = *(long *)(DAT_091ba538 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_03f95a6c();
        }
        if (*(int *)(lVar8 + 0xe4) == 0) {
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
        uVar4 = **(undefined8 **)(lVar5 + 0xb8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar6 = UnityEngine_Object__op_Inequality(uVar4,0,0);
        if (((uVar6 & 1) == 0) || (*(char *)(*(long *)(DAT_0918d050 + 0xb8) + 8) == '\0')) break;
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        auVar13 = Cysharp_Threading_Tasks_UniTask__WaitForEndOfFrame(0,0);
        local_e0 = auVar13;
        thunk_FUN_03f5d7b8(local_e0,0);
        local_70 = local_e0;
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
        uVar4 = local_70._0_8_;
        if ((long *)local_70._0_8_ != (long *)0x0) {
          lVar5 = *(long *)local_70._0_8_;
          uVar10 = local_70._8_8_ & 0xffff;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_091868c0) {
                puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
                goto LAB_077e56cc;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_077e56cc:
          iVar3 = (*(code *)*puVar7)(uVar4,uVar10,puVar7[1]);
          if (iVar3 == 0) {
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 0xe) = local_70;
            thunk_FUN_03f5d7b8(param_1 + 0xe,0);
            FUN_047907cc(param_1 + 2,local_70,param_1,DAT_091998c8);
            return;
          }
        }
LAB_077e56e0:
        if (DAT_095162d6 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d6 = '\x01';
        }
        uVar4 = local_70._0_8_;
        auVar13 = local_70;
        if ((long *)local_70._0_8_ != (long *)0x0) {
          lVar5 = *(long *)local_70._0_8_;
          uVar10 = local_70._8_8_ & 0xffff;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == DAT_091868c0) {
                puVar7 = (undefined8 *)(lVar5 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                goto LAB_077e5758;
              }
              uVar6 = uVar6 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar6 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_077e5758:
          (*(code *)*puVar7)(uVar4,uVar10,puVar7[1]);
          auVar13 = local_70;
        }
      }
      uVar12 = 0;
      goto LAB_077e5818;
    }
    if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = _GAME_Bridge_CookOrderBridge__get_UtcNow(0);
    if (*(int *)(DAT_09185080 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = _GAME_Utils_HelperTime__ToUnixTimeSeconds(uVar4,0);
    plVar9 = *(long **)(DAT_0918d050 + 0xb8);
    lVar8 = *plVar9;
    if ((char)param_1[8] != '\0') {
      *(undefined1 *)(plVar9 + 1) = 1;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
LAB_077e4efc:
      param_1[9] = *(int *)(lVar8 + 0x14);
      bVar2 = _GAME_WeeklyContest_WeeklyContestManager__get_IsFinished();
      *(byte *)(param_1 + 10) = bVar2 & 1;
      if (**(long **)(DAT_0918d050 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = *(long *)(**(long **)(DAT_0918d050 + 0xb8) + 0x20);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar6 = FUN_06ef1fe8(lVar5,param_1[9],param_1 + 0xc,DAT_0919df40);
      if ((uVar6 & 1) == 0) {
        lVar5 = thunk_FUN_03f9944c(DAT_0918ce50);
        System_Object___ctor(lVar5,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar1 = param_1[9];
        *(undefined1 *)(lVar5 + 0x14) = 0;
        *(int *)(lVar5 + 0x10) = iVar1;
        uVar4 = thunk_FUN_03f9944c(DAT_0917cce8);
        FUN_057e0400(uVar4,DAT_091b0558);
        *(undefined8 *)(lVar5 + 0x18) = uVar4;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x18),uVar4);
        *(long *)(param_1 + 0xc) = lVar5;
        thunk_FUN_03f5d7b8(param_1 + 0xc,lVar5);
        if (**(long **)(DAT_0918d050 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *(long *)(**(long **)(DAT_0918d050 + 0xb8) + 0x20);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        FUN_06ef050c(lVar5,param_1[9],*(undefined8 *)(param_1 + 0xc),DAT_0919df28);
      }
      goto LAB_077e4ff8;
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (((*(long *)(lVar8 + 0x38) == 0) || (*(int *)(*(long *)(lVar8 + 0x38) + 0x18) < 6)) ||
       (599 < lVar5 - *(long *)(lVar8 + 0x40))) {
      *(undefined1 *)(plVar9 + 1) = 1;
      goto LAB_077e4efc;
    }
  }
  else {
LAB_077e4ff8:
    if (iVar3 == 1) {
      local_70 = *(undefined1 (*) [16])(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
LAB_077e5048:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar4 = local_70._0_8_;
      if ((long *)local_70._0_8_ != (long *)0x0) {
        lVar5 = *(long *)local_70._0_8_;
        uVar10 = local_70._8_8_ & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == DAT_091868c0) {
              puVar7 = (undefined8 *)(lVar5 + (long)(*piVar11 + 2) * 0x10 + 0x138);
              goto LAB_077e51a4;
            }
            uVar6 = uVar6 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar6 != 0);
        }
        puVar7 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_077e51a4:
        (*(code *)*puVar7)(uVar4,uVar10,puVar7[1]);
      }
LAB_077e51b4:
      _GAME_WeeklyContest_WeeklyContestManager__ForceFetchRank
                (local_e0,*(undefined8 *)(param_1 + 0xc));
      local_a0 = local_d0;
      local_b0 = local_e0;
      local_e0._8_8_ = 0;
      local_d0 = 0;
      local_e0._0_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bdd18 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_d0 = local_a0;
      local_e0 = local_b0;
      thunk_FUN_03f5d7b8(local_e0,0);
      local_80 = local_d0;
      local_90 = local_e0;
      uVar6 = FUN_041e5390(local_90,DAT_0919a4a8);
      if ((uVar6 & 1) == 0) {
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 0x12) = local_90;
        *(ulong *)(param_1 + 0x16) = local_80;
        thunk_FUN_03f5d7b8(param_1 + 0x12,0);
        FUN_0479034c(param_1 + 2,local_90,param_1,DAT_09199770);
        return;
      }
    }
    else {
      if (iVar3 != 2) {
        if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = *(long *)(*(long *)(param_1 + 0xc) + 0x18);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar5 + 0x18) < 10) {
          local_e0 = _GAME_WeeklyContest_WeeklyContestManager__TryJoinRace();
          if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          thunk_FUN_03f5d7b8(local_e0,0);
          local_70 = local_e0;
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
          uVar4 = local_70._0_8_;
          if ((long *)local_70._0_8_ != (long *)0x0) {
            lVar5 = *(long *)local_70._0_8_;
            uVar10 = local_70._8_8_ & 0xffff;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 != 0) {
              piVar11 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == DAT_091868c0) {
                  puVar7 = (undefined8 *)(lVar5 + (long)*piVar11 * 0x10 + 0x138);
                  goto LAB_077e5404;
                }
                uVar6 = uVar6 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar6 != 0);
            }
            puVar7 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_077e5404:
            iVar3 = (*(code *)*puVar7)(uVar4,uVar10,puVar7[1]);
            if (iVar3 == 0) {
              *param_1 = 1;
              *(undefined1 (*) [16])(param_1 + 0xe) = local_70;
              thunk_FUN_03f5d7b8(param_1 + 0xe,0);
              FUN_047907cc(param_1 + 2,local_70,param_1,DAT_091998c8);
              return;
            }
          }
          goto LAB_077e5048;
        }
        goto LAB_077e51b4;
      }
      local_80 = *(ulong *)(param_1 + 0x16);
      local_90 = *(undefined1 (*) [16])(param_1 + 0x12);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
    }
    uVar4 = local_90._0_8_;
    lVar5 = local_90._8_8_;
    if ((long *)local_90._0_8_ != (long *)0x0) {
      uVar6 = local_80 & 0xffff;
      lVar5 = *(long *)(DAT_0919a4a0 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c(lVar5);
      }
      lVar8 = *(long *)uVar4;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar5) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_077e5318;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(uVar4,lVar5,0);
LAB_077e5318:
      lVar5 = (*(code *)*puVar7)(uVar4,uVar6,puVar7[1]);
    }
    plVar9 = *(long **)(DAT_0918d050 + 0xb8);
    *(undefined1 *)(plVar9 + 1) = 0;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar5 + 0x18) != 0) {
      lVar5 = *plVar9;
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar5 + 0x14) == param_1[9]) {
        _GAME_WeeklyContest_WeeklyContestManager__HandleSortRank();
        lVar5 = **(long **)(DAT_0918d050 + 0xb8);
        if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = _GAME_Bridge_CookOrderBridge__get_UtcNow(0);
        if (*(int *)(DAT_09185080 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = _GAME_Utils_HelperTime__ToUnixTimeSeconds(uVar4,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined8 *)(lVar5 + 0x40) = uVar4;
        if ((char)param_1[10] != '\0') {
          *(int *)(*(long *)(DAT_0918d050 + 0xb8) + 0xc) = param_1[9];
        }
        uVar12 = 1;
        goto LAB_077e5818;
      }
    }
  }
  uVar12 = 0;
LAB_077e5818:
  *param_1 = -2;
  piVar11 = param_1 + 0xc;
  piVar11[0] = 0;
  piVar11[1] = 0;
  thunk_FUN_03f5d7b8(piVar11,0);
  plVar9 = *(long **)(param_1 + 2);
  if (plVar9 == (long *)0x0) {
    *(undefined1 *)(param_1 + 6) = uVar12;
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
    lVar8 = *plVar9;
    uVar6 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar6 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar5) {
          puVar7 = (undefined8 *)(lVar8 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_077e58cc;
        }
        uVar6 = uVar6 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar6 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(plVar9,lVar5,2);
LAB_077e58cc:
    (*(code *)*puVar7)(plVar9,uVar12,puVar7[1]);
  }
  return;
}


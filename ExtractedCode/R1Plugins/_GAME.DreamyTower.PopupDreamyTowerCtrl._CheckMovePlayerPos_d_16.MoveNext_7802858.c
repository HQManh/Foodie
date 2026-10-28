// rea decompile_all
// name: _GAME.DreamyTower.PopupDreamyTowerCtrl.<CheckMovePlayerPos>d__16$$MoveNext
// address: 0x7802858
// body: available
// range: 0x7802858-0x7803767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7803720 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7803724 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7803728 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780372c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7803730 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7803734 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7803738 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780373c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7803740 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7803744 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7803748 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x780374c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_DreamyTower_PopupDreamyTowerCtrl_<CheckMovePlayerPos>d__16__MoveNext(uint *param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 local_90 [16];
  long *local_80;
  undefined4 local_68;
  undefined1 local_60 [16];
  long local_48;
  undefined1 local_40 [16];
  uint local_24;
  
  if ((DAT_095231c7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c20d8);
    FUN_03f5c2a4(&DAT_09183d80);
    FUN_03f5c2a4(&DAT_091ac788);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095231c7 = 1;
  }
  local_24 = *param_1;
  local_48 = *(long *)(param_1 + 6);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_68 = 0;
  if (local_24 < 5) {
LAB_07802948:
    local_90._8_8_ = &local_24;
    local_80 = &local_48;
    local_90._0_8_ = 0;
    if (1 < (int)local_24) {
      if (local_24 == 2) {
        local_60 = *(undefined1 (*) [16])(param_1 + 8);
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        local_24 = 0xffffffff;
        *param_1 = 0xffffffff;
        goto LAB_078029d4;
      }
      if (local_24 == 3) {
        local_60 = *(undefined1 (*) [16])(param_1 + 8);
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        local_24 = 0xffffffff;
        *param_1 = 0xffffffff;
        goto LAB_07802e70;
      }
      if (local_24 != 4) goto LAB_07802a80;
      local_60 = *(undefined1 (*) [16])(param_1 + 8);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      local_24 = 0xffffffff;
      *param_1 = 0xffffffff;
      goto LAB_07803010;
    }
    if (local_24 == 0) {
      local_60 = *(undefined1 (*) [16])(param_1 + 8);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      local_24 = 0xffffffff;
      *param_1 = 0xffffffff;
LAB_0780314c:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar3 = local_60._0_8_;
      if ((long *)local_60._0_8_ != (long *)0x0) {
        lVar6 = *(long *)local_60._0_8_;
        uVar10 = local_60._8_8_ & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_078031d0;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_078031d0:
        (*(code *)*puVar5)(uVar3,uVar10,puVar5[1]);
      }
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar11 = _GAME_DreamyTower_PopupDreamyTowerCtrl__MoveViewToTargetLevelCheckPoint(0x3e800000);
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_40 = auVar11;
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
      if ((long *)local_60._0_8_ != (long *)0x0) {
        lVar6 = *(long *)local_60._0_8_;
        uVar10 = local_60._8_8_ & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_078032d8;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_078032d8:
        iVar4 = (*(code *)*puVar5)(uVar3,uVar10,puVar5[1]);
        if (iVar4 == 0) {
          local_24 = 1;
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 8) = local_60;
          thunk_FUN_03f5d7b8(param_1 + 8,0);
          FUN_049b2244(param_1 + 2,local_60,param_1,DAT_091c20d8);
LAB_07803460:
          iVar4 = 0xf;
          goto LAB_07803464;
        }
      }
LAB_078032ec:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar3 = local_60._0_8_;
      if ((long *)local_60._0_8_ != (long *)0x0) {
        lVar6 = *(long *)local_60._0_8_;
        uVar10 = local_60._8_8_ & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_07803370;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_07803370:
        (*(code *)*puVar5)(uVar3,uVar10,puVar5[1]);
      }
      iVar4 = 5;
    }
    else {
      if (local_24 == 1) {
        local_60 = *(undefined1 (*) [16])(param_1 + 8);
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        local_24 = 0xffffffff;
        *param_1 = 0xffffffff;
        goto LAB_078032ec;
      }
LAB_07802a80:
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar4 = _GAME_DreamyTower_SODreamyTowerConfig__GetNextLevelCheckPoint
                        (*(undefined4 *)(local_48 + 0x118));
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = *(int *)(local_48 + 0x118);
      if (*(int *)(DAT_09183d80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = **(long **)(DAT_09183d80 + 0xb8);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar6 + 0x20) < iVar1) {
LAB_07802af8:
        if (*(int *)(DAT_09183d80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(long **)(DAT_09183d80 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        _GAME_DreamyTower_DreamyTowerManager__SaveLevelCachePopup
                  (*(undefined4 *)(**(long **)(DAT_09183d80 + 0xb8) + 0x20));
        if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_40 = _GAME_DreamyTower_PopupDreamyTowerCtrl__MovePlayerToCurPos(0x3eb33333);
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
        if ((long *)local_60._0_8_ != (long *)0x0) {
          lVar6 = *(long *)local_60._0_8_;
          uVar10 = local_60._8_8_ & 0xffff;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_091868c0) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_07803138;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_07803138:
          iVar4 = (*(code *)*puVar5)(uVar3,uVar10,puVar5[1]);
          if (iVar4 == 0) {
            local_24 = 0;
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 8) = local_60;
            thunk_FUN_03f5d7b8(param_1 + 8,0);
            FUN_049b2244(param_1 + 2,local_60,param_1,DAT_091c20d8);
            goto LAB_07803460;
          }
        }
        goto LAB_0780314c;
      }
      if (*(int *)(DAT_09183d80 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar6 = **(long **)(DAT_09183d80 + 0xb8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      if (*(int *)(lVar6 + 0x20) < iVar4) goto LAB_07802af8;
      if (*(int *)(DAT_09183d80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _GAME_DreamyTower_DreamyTowerManager__SaveLevelCachePopup(iVar4);
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_40 = _GAME_DreamyTower_PopupDreamyTowerCtrl__MovePlayerToCurPos(0x3eb33333);
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
      if ((long *)local_60._0_8_ != (long *)0x0) {
        lVar6 = *(long *)local_60._0_8_;
        uVar10 = local_60._8_8_ & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_07803410;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_07803410:
        iVar4 = (*(code *)*puVar5)(uVar3,uVar10,puVar5[1]);
        if (iVar4 != 0) goto LAB_078029d4;
        local_24 = 2;
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 8) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 8,0);
        FUN_049b2244(param_1 + 2,local_60,param_1,DAT_091c20d8);
        goto LAB_07803460;
      }
LAB_078029d4:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar3 = local_60._0_8_;
      if ((long *)local_60._0_8_ != (long *)0x0) {
        lVar6 = *(long *)local_60._0_8_;
        uVar10 = local_60._8_8_ & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_07802d20;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_07802d20:
        (*(code *)*puVar5)(uVar3,uVar10,puVar5[1]);
      }
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(local_48 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = FUN_057e0998(*(long *)(local_48 + 0xf0),*(undefined4 *)(local_48 + 0x118),DAT_091ac788
                          );
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_DreamyTower_DreamyTowerLevelUICtrl__CheckAutoClaimReward();
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar11 = Cysharp_Threading_Tasks_UniTask__WaitForSeconds(0x3e99999a,0,8,0,0,0);
      local_40 = auVar11;
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
      if ((long *)local_60._0_8_ != (long *)0x0) {
        lVar6 = *(long *)local_60._0_8_;
        uVar10 = local_60._8_8_ & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_07802e5c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_07802e5c:
        iVar4 = (*(code *)*puVar5)(uVar3,uVar10,puVar5[1]);
        if (iVar4 == 0) {
          local_24 = 3;
          *param_1 = 3;
          *(undefined1 (*) [16])(param_1 + 8) = local_60;
          thunk_FUN_03f5d7b8(param_1 + 8,0);
          FUN_049b2244(param_1 + 2,local_60,param_1,DAT_091c20d8);
          goto LAB_07803460;
        }
      }
LAB_07802e70:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar3 = local_60._0_8_;
      if ((long *)local_60._0_8_ != (long *)0x0) {
        lVar6 = *(long *)local_60._0_8_;
        uVar10 = local_60._8_8_ & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_07802ef4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_07802ef4:
        (*(code *)*puVar5)(uVar3,uVar10,puVar5[1]);
      }
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar11 = _GAME_DreamyTower_PopupDreamyTowerCtrl__MoveViewToTargetLevelCheckPoint(0x3e800000);
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_40 = auVar11;
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
      if ((long *)local_60._0_8_ != (long *)0x0) {
        lVar6 = *(long *)local_60._0_8_;
        uVar10 = local_60._8_8_ & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_07802ffc;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_07802ffc:
        iVar4 = (*(code *)*puVar5)(uVar3,uVar10,puVar5[1]);
        if (iVar4 == 0) {
          local_24 = 4;
          *param_1 = 4;
          *(undefined1 (*) [16])(param_1 + 8) = local_60;
          thunk_FUN_03f5d7b8(param_1 + 8,0);
          FUN_049b2244(param_1 + 2,local_60,param_1,DAT_091c20d8);
          goto LAB_07803460;
        }
      }
LAB_07803010:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar3 = local_60._0_8_;
      if ((long *)local_60._0_8_ != (long *)0x0) {
        lVar6 = *(long *)local_60._0_8_;
        uVar10 = local_60._8_8_ & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_07803094;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_07803094:
        (*(code *)*puVar5)(uVar3,uVar10,puVar5[1]);
      }
      iVar4 = 0x14;
    }
LAB_07803464:
    if ((int)*(uint *)local_90._8_8_ < 0) {
      if (*local_80 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined1 *)(*local_80 + 0xd8) = 0;
    }
    if (local_90._0_8_ != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548();
    }
    if (iVar4 != 0x14) {
      if (iVar4 == 5) goto LAB_07803638;
      if (iVar4 != 0) {
        return;
      }
    }
    if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar11 = _GAME_DreamyTower_PopupDreamyTowerCtrl__CheckMovePlayerPos();
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_90 = auVar11;
    thunk_FUN_03f5d7b8(local_90,0);
    local_60 = local_90;
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
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar6 = *(long *)local_60._0_8_;
      uVar10 = local_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07803590;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_07803590:
      iVar4 = (*(code *)*puVar5)(uVar3,uVar10,puVar5[1]);
      if (iVar4 == 0) {
        local_24 = 5;
        *param_1 = 5;
        *(undefined1 (*) [16])(param_1 + 8) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 8,0);
        FUN_049b2244(param_1 + 2,local_60,param_1,DAT_091c20d8);
        return;
      }
    }
  }
  else {
    if (local_24 != 5) {
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar4 = *(int *)(local_48 + 0x118);
      if (*(int *)(DAT_09183d80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_09183d80 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (iVar4 == *(int *)(**(long **)(DAT_09183d80 + 0xb8) + 0x20)) goto LAB_07803638;
      if (local_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined1 *)(local_48 + 0xd8) = 1;
      goto LAB_07802948;
    }
    local_60 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    local_24 = 0xffffffff;
    *param_1 = 0xffffffff;
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar3 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar6 = *(long *)local_60._0_8_;
    uVar10 = local_60._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_07803628;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_07803628:
    (*(code *)*puVar5)(uVar3,uVar10,puVar5[1]);
  }
LAB_07803638:
  cVar2 = DAT_095162d8;
  *param_1 = 0xfffffffe;
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar9 = *(long **)(param_1 + 2);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091866a8) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_078036c0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091866a8,2);
LAB_078036c0:
    (*(code *)*puVar5)(plVar9,puVar5[1]);
  }
  return;
}


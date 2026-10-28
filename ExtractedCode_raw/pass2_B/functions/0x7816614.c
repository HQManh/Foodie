// rea decompile_all
// name: _GAME.DreamyPass.PopupDreamyPassFinish.<HandleFinish>d__7$$MoveNext
// address: 0x7816614
// body: available
// range: 0x7816614-0x7816863 inclusive
// range: 0x7816890-0x7816af3 inclusive
// range: 0x7816b24-0x7816e2f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7816848 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x781684c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7816850 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7816854 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7816858 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x781685c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7816860 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7816aec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7816af0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7816e1c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7816e20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7816e24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07816e1c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void _GAME_DreamyPass_PopupDreamyPassFinish_<HandleFinish>d__7__MoveNext(uint *param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 local_90 [16];
  long local_80;
  uint local_74;
  undefined1 local_70 [16];
  
  if ((DAT_0952328f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2d28);
    FUN_03f5c2a4(&DAT_09183d58);
    FUN_03f5c2a4(&DAT_091ac718);
    FUN_03f5c2a4(&DAT_091afa60);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d5f10);
    FUN_03f5c2a4(&DAT_091d5f30);
    FUN_03f5c2a4(&DAT_091d5f38);
    FUN_03f5c2a4(&DAT_09189468);
    FUN_03f5c2a4(&DAT_091b8528);
    FUN_03f5c2a4(&DAT_091b8570);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_0952328f = 1;
  }
  local_74 = *param_1;
  local_80 = *(long *)(param_1 + 10);
  local_90._8_8_ = 0;
  local_90._0_8_ = 0;
  if (local_74 < 2) {
LAB_07816748:
    if (local_74 == 0) {
      local_90 = *(undefined1 (*) [16])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      local_74 = 0xffffffff;
      *param_1 = 0xffffffff;
      goto LAB_07816978;
    }
    if (local_74 == 1) {
      local_90 = *(undefined1 (*) [16])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      local_74 = 0xffffffff;
      *param_1 = 0xffffffff;
      goto LAB_07816c14;
    }
    lVar6 = **(long **)(DAT_09183d58 + 0xb8);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar6 + 0x20) != '\0') {
      iVar1 = *(int *)(lVar6 + 0x40);
      lVar6 = _GAME_DreamyPass_SODreamyPassConfig__get_ListLevel();
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar6 + 0x18) <= iVar1) {
        if (*(int *)(DAT_09189468 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar2 = (long *)FUN_04ca5cb8(DAT_091d5f10);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar2 + 0x2c8))(plVar2,*(undefined8 *)(*plVar2 + 0x2d0));
LAB_07816a00:
        lVar6 = *(long *)(DAT_091b8528 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        uVar8 = **(undefined8 **)(lVar6 + 0xb8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar3 = UnityEngine_Object__op_Inequality(uVar8,0,0);
        if ((uVar3 & 1) == 0) goto LAB_07816a60;
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        auVar10 = Cysharp_Threading_Tasks_UniTask__WaitForEndOfFrame(0,0);
        local_70 = auVar10;
        thunk_FUN_03f5d7b8(local_70,0);
        local_90 = local_70;
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
        uVar8 = local_90._0_8_;
        if ((long *)local_90._0_8_ != (long *)0x0) {
          lVar6 = *(long *)local_90._0_8_;
          uVar9 = local_90._8_8_ & 0xffff;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_091868c0) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_07816964;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,0);
LAB_07816964:
          iVar1 = (*(code *)*puVar5)(uVar8,uVar9,puVar5[1]);
          if (iVar1 == 0) goto LAB_07816ab0;
        }
LAB_07816978:
        if (DAT_095162d6 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d6 = '\x01';
        }
        uVar8 = local_90._0_8_;
        if ((long *)local_90._0_8_ != (long *)0x0) {
          lVar6 = *(long *)local_90._0_8_;
          uVar9 = local_90._8_8_ & 0xffff;
          uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar3 != 0) {
            piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_091868c0) {
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
                goto LAB_078169f0;
              }
              uVar3 = uVar3 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar3 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,2);
LAB_078169f0:
          (*(code *)*puVar5)(uVar8,uVar9,puVar5[1]);
        }
        goto LAB_07816a00;
      }
    }
LAB_07816a60:
    lVar6 = _GAME_DreamyPass_DreamyPassManager__ClaimAllReward();
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < *(int *)(lVar6 + 0x18)) {
      if (*(int *)(DAT_09189468 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = FUN_04ca5cb8(DAT_091d5f38);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_DreamyPass_PopupDreamyPassUnclaimedRewardCtrl__Open(lVar4,lVar6);
LAB_07816c9c:
      lVar6 = *(long *)(DAT_091b8570 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      uVar8 = **(undefined8 **)(lVar6 + 0xb8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar3 & 1) == 0) goto LAB_07816cfc;
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      auVar10 = Cysharp_Threading_Tasks_UniTask__WaitForEndOfFrame(0,0);
      local_70 = auVar10;
      thunk_FUN_03f5d7b8(local_70,0);
      local_90 = local_70;
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
      uVar8 = local_90._0_8_;
      if ((long *)local_90._0_8_ != (long *)0x0) {
        lVar6 = *(long *)local_90._0_8_;
        uVar9 = local_90._8_8_ & 0xffff;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_07816c00;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,0);
LAB_07816c00:
        iVar1 = (*(code *)*puVar5)(uVar8,uVar9,puVar5[1]);
        if (iVar1 == 0) goto LAB_07816ddc;
      }
LAB_07816c14:
      if (DAT_095162d6 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d6 = '\x01';
      }
      uVar8 = local_90._0_8_;
      if ((long *)local_90._0_8_ != (long *)0x0) {
        lVar6 = *(long *)local_90._0_8_;
        uVar9 = local_90._8_8_ & 0xffff;
        uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar3 != 0) {
          piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
              goto LAB_07816c8c;
            }
            uVar3 = uVar3 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar3 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,2);
LAB_07816c8c:
        (*(code *)*puVar5)(uVar8,uVar9,puVar5[1]);
      }
      goto LAB_07816c9c;
    }
LAB_07816cfc:
    _GAME_DreamyPass_DreamyPassManager__ResetDataNewSeason();
    if (*(int *)(DAT_09189468 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar2 = (long *)FUN_04ca5cb8(DAT_091d5f30);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar2 + 0x2c8))(plVar2,*(undefined8 *)(*plVar2 + 0x2d0));
    iVar1 = 0x12;
    goto LAB_07816d40;
  }
  if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar2 = *(long **)(local_80 + 0x20);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = (**(code **)(*plVar2 + 0x348))(plVar2,*(undefined8 *)(*plVar2 + 0x350));
  if ((uVar3 & 1) == 0) {
    if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar2 = *(long **)(local_80 + 0x20);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar2 + 0x358))(plVar2,1,*(undefined8 *)(*plVar2 + 0x360));
    goto LAB_07816748;
  }
  goto LAB_07816da8;
LAB_07816ab0:
  local_74 = 0;
  *param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 0xc) = local_90;
  thunk_FUN_03f5d7b8(param_1 + 0xc,0);
  FUN_049c8634(param_1 + 2,local_90,param_1,DAT_091c2d28);
  goto LAB_07816b24;
LAB_07816ddc:
  local_74 = 1;
  *param_1 = 1;
  *(undefined1 (*) [16])(param_1 + 0xc) = local_90;
  thunk_FUN_03f5d7b8(param_1 + 0xc,0);
  FUN_049c8634(param_1 + 2,local_90,param_1,DAT_091c2d28);
LAB_07816b24:
  iVar1 = 0xb;
LAB_07816d40:
  if ((int)local_74 < 0) {
    if ((local_80 == 0) || (plVar2 = *(long **)(local_80 + 0x20), plVar2 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar2 + 0x358))(plVar2,0,*(undefined8 *)(*plVar2 + 0x360));
  }
  if ((iVar1 == 0x12) || (iVar1 == 0)) {
    if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar2 = *(long **)(local_80 + 0x20);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar2 + 0x308))(plVar2,*(undefined8 *)(*plVar2 + 0x310));
LAB_07816da8:
    *param_1 = 0xfffffffe;
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  }
  return;
}


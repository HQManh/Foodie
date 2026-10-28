// rea decompile_all
// name: AnhPD.FoodOrder.TutorialManager.<Play>d__23$$MoveNext
// address: 0x4121ad0
// body: available
// range: 0x4121ad0-0x4121d23 inclusive
// range: 0x4121d58-0x4121df3 inclusive
// range: 0x4121df8-0x41222d7 inclusive
// range: 0x4122414-0x412242f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4121d0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4121d10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4121d14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4121d18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4121d1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4121d20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41222b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41222b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41222b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41222bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41222c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41222c4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_TutorialManager_<Play>d__23__MoveNext(uint *param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 local_d0 [16];
  undefined8 local_c0;
  long local_b0;
  uint *puStack_a8;
  uint **local_a0;
  long local_98;
  uint *local_90;
  long *local_88;
  undefined4 local_78;
  undefined1 local_70 [16];
  long local_60;
  uint local_54;
  uint *local_48;
  
  local_48 = param_1;
  if ((DAT_0951629d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2168);
    FUN_03f5c2a4(&DAT_091a49b8);
    FUN_03f5c2a4(&DAT_091a49c0);
    FUN_03f5c2a4(&DAT_091a49c8);
    FUN_03f5c2a4(&DAT_091b1108);
    FUN_03f5c2a4(&DAT_091b1110);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_0951629d = 1;
  }
  local_54 = *param_1;
  local_60 = *(long *)(param_1 + 6);
  local_70._8_8_ = 0;
  local_70._0_8_ = 0;
  local_78 = 0;
  if (local_54 < 2) {
    local_90 = &local_54;
    local_88 = &local_60;
    local_98 = 0;
LAB_04121c80:
    puStack_a8 = &local_54;
    local_b0 = 0;
    local_a0 = &local_48;
    if (local_54 == 0) {
      local_54 = 0xffffffff;
      local_70 = *(undefined1 (*) [16])(local_48 + 0x16);
      local_48[0x16] = 0;
      local_48[0x17] = 0;
      local_48[0x18] = 0;
      local_48[0x19] = 0;
      *local_48 = 0xffffffff;
      goto LAB_04122068;
    }
    if (local_54 != 1) goto LAB_04121e94;
    local_54 = 0xffffffff;
    local_70 = *(undefined1 (*) [16])(local_48 + 0x16);
    local_48[0x16] = 0;
    local_48[0x17] = 0;
    local_48[0x18] = 0;
    local_48[0x19] = 0;
    *local_48 = 0xffffffff;
    do {
      do {
        if (DAT_095162d6 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d6 = '\x01';
        }
        uVar10 = local_70._0_8_;
        if ((long *)local_70._0_8_ != (long *)0x0) {
          lVar7 = *(long *)local_70._0_8_;
          uVar11 = local_70._8_8_ & 0xffff;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_091868c0) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                goto LAB_04121e70;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_04121e70:
          (*(code *)*puVar4)(uVar10,uVar11,puVar4[1]);
        }
        puVar5 = local_48 + 0x14;
        puVar5[0] = 0;
        puVar5[1] = 0;
        thunk_FUN_03f5d7b8(puVar5,0);
LAB_04121e94:
        do {
          uVar3 = FUN_071bd28c(local_48 + 0xe,DAT_091a49c0);
          if ((uVar3 & 1) == 0) {
            uVar9 = 0x10;
            goto LAB_04121fa0;
          }
          *(undefined8 *)(local_48 + 0x14) = *(undefined8 *)(local_48 + 0x12);
          uVar10 = thunk_FUN_03f5d7b8();
        } while (*(long *)(local_48 + 0x14) == 0);
        if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(local_60 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar12 = AnhPD_FoodOrder_TutorialContext__PrepareTarget
                            (uVar10,*(undefined8 *)(*(long *)(local_48 + 0x14) + 0x18));
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_d0 = auVar12;
        thunk_FUN_03f5d7b8(local_d0,0);
        local_70 = local_d0;
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
        uVar10 = local_70._0_8_;
        if ((long *)local_70._0_8_ != (long *)0x0) {
          lVar7 = *(long *)local_70._0_8_;
          uVar11 = local_70._8_8_ & 0xffff;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_091868c0) {
                puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_04122054;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_04122054:
          iVar2 = (*(code *)*puVar4)(uVar10,uVar11,puVar4[1]);
          if (iVar2 == 0) {
            local_54 = 0;
            *local_48 = 0;
            *(undefined1 (*) [16])(local_48 + 0x16) = local_70;
            thunk_FUN_03f5d7b8(local_48 + 0x16,0);
            FUN_04126a28(local_48 + 2,local_70,local_48,DAT_091c2168);
            goto LAB_041222a8;
          }
        }
LAB_04122068:
        if (DAT_095162d6 == '\0') {
          FUN_03f5c2a4(&DAT_091868c0);
          DAT_095162d6 = '\x01';
        }
        uVar10 = local_70._0_8_;
        if ((long *)local_70._0_8_ != (long *)0x0) {
          lVar7 = *(long *)local_70._0_8_;
          uVar11 = local_70._8_8_ & 0xffff;
          uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar3 != 0) {
            piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == DAT_091868c0) {
                puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                goto LAB_041220e0;
              }
              uVar3 = uVar3 - 1;
              piVar8 = piVar8 + 4;
            } while (uVar3 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,2);
LAB_041220e0:
          (*(code *)*puVar4)(uVar10,uVar11,puVar4[1]);
        }
        if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(local_60 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        AnhPD_FoodOrder_TutorialContext__BeginStep
                  (*(long *)(local_60 + 0x58),*(undefined8 *)(local_48 + 0x14));
        if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        AnhPD_FoodOrder_TutorialManager__ApplyStep(local_60,*(undefined8 *)(local_48 + 0x14));
        if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar6 = *(long **)(local_48 + 0x14);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar12 = (**(code **)(*plVar6 + 0x178))
                            (plVar6,*(undefined8 *)(local_60 + 0x58),
                             *(undefined8 *)(*plVar6 + 0x180));
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_d0 = auVar12;
        thunk_FUN_03f5d7b8(local_d0,0);
        local_70 = local_d0;
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
        uVar10 = local_70._0_8_;
      } while ((long *)local_70._0_8_ == (long *)0x0);
      lVar7 = *(long *)local_70._0_8_;
      uVar11 = local_70._8_8_ & 0xffff;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_04122214;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_70._0_8_,DAT_091868c0,0);
LAB_04122214:
      iVar2 = (*(code *)*puVar4)(uVar10,uVar11,puVar4[1]);
    } while (iVar2 != 0);
    local_54 = 1;
    *local_48 = 1;
    *(undefined1 (*) [16])(local_48 + 0x16) = local_70;
    thunk_FUN_03f5d7b8(local_48 + 0x16,0);
    FUN_04126a28(local_48 + 2,local_70,local_48,DAT_091c2168);
LAB_041222a8:
    uVar9 = 0xe;
LAB_04121fa0:
    if ((int)*puStack_a8 < 0) {
      FUN_071bd288(*local_a0 + 0xe,DAT_091a49b8);
    }
    plVar6 = local_88;
    if (local_b0 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548();
    }
    if ((uVar9 | 0x10) == 0x10) {
      uVar9 = 0x11;
      local_48[0x10] = 0;
      local_48[0x11] = 0;
      local_48[0x12] = 0;
      local_48[0x13] = 0;
      local_48[0xe] = 0;
      local_48[0xf] = 0;
    }
    if ((int)*local_90 < 0) {
      if (*local_88 == 0) {
LAB_041222d4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      AnhPD_FoodOrder_TutorialManager__End();
      if (*plVar6 == 0) goto LAB_041222d4;
      *(undefined1 *)(*plVar6 + 0x60) = 0;
    }
    if (local_98 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548();
    }
    if ((uVar9 != 0x11) && (uVar9 != 0)) {
      return;
    }
    lVar7 = *(long *)(local_48 + 10);
    local_98 = 0;
  }
  else {
    if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(local_60 + 0x60) == '\0') {
      uVar10 = *(undefined8 *)(param_1 + 8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Equality(uVar10,0,0);
      param_1 = local_48;
      if ((uVar3 & 1) == 0) {
        if (*(long *)(local_48 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar7 = *(long *)(*(long *)(local_48 + 8) + 0x20);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar7 + 0x18) != 0) {
          if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(undefined1 *)(local_60 + 0x60) = 1;
          *(uint *)(local_60 + 100) = local_48[0xc];
          AnhPD_FoodOrder_TutorialManager__Begin();
          local_90 = &local_54;
          local_98 = 0;
          local_88 = &local_60;
          if (1 < local_54) {
            if (*(long *)(local_48 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *(long *)(*(long *)(local_48 + 8) + 0x20);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            FUN_057e185c(local_d0,lVar7,DAT_091b1108);
            puStack_a8 = (uint *)local_d0._8_8_;
            local_b0 = local_d0._0_8_;
            local_a0 = (uint **)local_c0;
            *(undefined8 *)(local_48 + 0x10) = local_d0._8_8_;
            *(undefined8 *)(local_48 + 0xe) = local_d0._0_8_;
            *(undefined8 *)(local_48 + 0x12) = local_c0;
            thunk_FUN_03f5d7b8(local_48 + 0xe,0);
          }
          goto LAB_04121c80;
        }
      }
    }
    lVar7 = *(long *)(param_1 + 10);
  }
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
  }
  puVar5 = local_48;
  cVar1 = DAT_095162d8;
  *local_48 = 0xfffffffe;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar6 = *(long **)(puVar5 + 2);
  if (plVar6 != (long *)0x0) {
    lVar7 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar3 != 0) {
      piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091866a8) {
          puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_04121de4;
        }
        uVar3 = uVar3 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar3 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar6,DAT_091866a8,2);
LAB_04121de4:
    (*(code *)*puVar4)(plVar6,puVar4[1]);
  }
  return;
}


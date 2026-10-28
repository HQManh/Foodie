// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$BuildPromoteShift
// address: 0x40e0d8c
// body: available
// range: 0x40e0d8c-0x40e1713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e16c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e16c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e16c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e16cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e16d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e16d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e16d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e16dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e16e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e16e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e16e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e16ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_ConveyorGrid__BuildPromoteShift(long param_1,long param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 *puStack_98;
  ulong local_90;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_09516060 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175ad8);
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a2720);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a2728);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091a2730);
    FUN_03f5c2a4(&DAT_091b22b0);
    FUN_03f5c2a4(&DAT_091abe60);
    FUN_03f5c2a4(&DAT_091abe68);
    FUN_03f5c2a4(&DAT_091abe70);
    FUN_03f5c2a4(&DAT_091abe78);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091abe90);
    FUN_03f5c2a4(&DAT_091abe98);
    FUN_03f5c2a4(&DAT_091abea0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918ede8);
    FUN_03f5c2a4(&DAT_091e6998);
    FUN_03f5c2a4(&DAT_0918ede0);
    DAT_09516060 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x80);
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  local_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  local_90 = 0;
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x18);
    *(undefined4 *)(lVar6 + 0x18) = 0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
    }
    lVar6 = *(long *)(param_1 + 0x78);
    if (lVar6 != 0) {
      iVar1 = *(int *)(lVar6 + 0x18);
      *(undefined4 *)(lVar6 + 0x18) = 0;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
      }
      if (param_2 != 0) {
        FUN_05797d74(&local_b8,param_2,DAT_091adcc0);
        local_70 = local_a8;
        puStack_78 = puStack_b0;
        local_80 = local_b8;
        local_b8 = 0;
        puStack_b0 = &local_80;
LAB_040e0f7c:
        uVar3 = FUN_071ad7a4(&local_80,DAT_091a34d8);
        if ((uVar3 & 1) != 0) {
          lVar6 = AnhPD_FoodOrder_ConveyorGrid__SlotAt(param_1,local_70 & 0xffffffff,0);
          if (lVar6 == 0) {
LAB_040e105c:
            FUN_071ad7a0(&local_80,DAT_091a34d0);
            return 0;
          }
          uVar14 = *(undefined8 *)(lVar6 + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(uVar14,0);
          if ((uVar3 & 1) == 0) goto LAB_040e105c;
          if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(char *)(*(long *)(lVar6 + 0x10) + 0xd1) != '\0') goto LAB_040e105c;
          if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar3 = FUN_057e1004(*(long *)(param_1 + 0x80),lVar6,DAT_091abe70);
          lVar11 = DAT_091abe60;
          if ((uVar3 & 1) == 0) {
            lVar4 = *(long *)(param_1 + 0x80);
            if (lVar4 != 0) {
              lVar7 = *(long *)(lVar4 + 0x10);
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar2 = *(uint *)(lVar4 + 0x18);
                if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                  plVar8 = (long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
                  *plVar8 = lVar6;
                  thunk_FUN_03f5d7b8(plVar8,lVar6);
                }
                else {
                  FUN_057e0c68(lVar4,lVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_040e0f7c;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_040e0f7c;
        }
        FUN_071ad7a0(&local_80,DAT_091a34d0);
        lVar6 = *(long *)(param_1 + 0x80);
        if (lVar6 != 0) {
          if (*(int *)(lVar6 + 0x18) == 0) {
            return 0;
          }
          lVar6 = FUN_057e0998(lVar6,0,DAT_091abea0);
          if ((lVar6 != 0) && (*(long *)(param_1 + 0x80) != 0)) {
            iVar1 = *(int *)(lVar6 + 0x2c);
            FUN_057e185c(&local_b8,*(long *)(param_1 + 0x80),DAT_091abe78);
            local_a0 = local_b8;
            local_b8 = 0;
            puStack_98 = puStack_b0;
            local_90 = local_a8;
            puStack_b0 = &local_a0;
            while (uVar3 = FUN_071bd28c(&local_a0,DAT_091a2728), (uVar3 & 1) != 0) {
              if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(int *)(local_90 + 0x2c) != iVar1) {
                FUN_071bd288(&local_a0,DAT_091a2720);
                return 0;
              }
            }
            FUN_071bd288(&local_a0,DAT_091a2720);
            FUN_05797d74(&local_b8,param_2,DAT_091adcc0);
            local_70 = local_a8;
            puStack_78 = puStack_b0;
            local_80 = local_b8;
            local_b8 = 0;
            puStack_b0 = &local_80;
            while (uVar5 = FUN_071ad7a4(&local_80,DAT_091a34d8), uVar3 = local_70, (uVar5 & 1) != 0)
            {
              if (0 < param_3) {
                iVar12 = 1;
                do {
                  lVar6 = AnhPD_FoodOrder_ConveyorGrid__SlotAt(param_1,uVar3 & 0xffffffff,iVar12);
                  if (lVar6 != 0) {
                    if (*(long *)(param_1 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar5 = FUN_057e1004(*(long *)(param_1 + 0x80),lVar6,DAT_091abe70);
                    if ((uVar5 & 1) == 0) {
                      if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      uVar5 = FUN_057e1004(*(long *)(param_1 + 0x78),lVar6,DAT_091abe70);
                      if ((uVar5 & 1) == 0) {
                        uVar14 = *(undefined8 *)(lVar6 + 0x10);
                        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        uVar5 = UnityEngine_Object__op_Implicit(uVar14,0);
                        lVar11 = DAT_091abe60;
                        if ((uVar5 & 1) == 0) goto LAB_040e105c;
                        if (*(long *)(lVar6 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        if (*(char *)(*(long *)(lVar6 + 0x10) + 0xd1) != '\0') goto LAB_040e105c;
                        lVar4 = *(long *)(param_1 + 0x78);
                        if (lVar4 == 0) {
LAB_040e16dc:
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        lVar7 = *(long *)(lVar4 + 0x10);
                        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                        if (lVar7 == 0) goto LAB_040e16dc;
                        uVar2 = *(uint *)(lVar4 + 0x18);
                        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                          *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                          plVar8 = (long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
                          *plVar8 = lVar6;
                          thunk_FUN_03f5d7b8(plVar8,lVar6);
                        }
                        else {
                          FUN_057e0c68(lVar4,lVar6,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                        }
                      }
                    }
                  }
                  iVar12 = iVar12 + 1;
                } while (iVar12 <= param_3);
              }
            }
            FUN_071ad7a0(&local_80,DAT_091a34d0);
            lVar6 = *(long *)(param_1 + 0x78);
            if (lVar6 != 0) {
              if (*(int *)(lVar6 + 0x18) == 0) {
                return 0;
              }
              if (*(int *)(DAT_0918ede0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              puVar9 = *(undefined8 **)(DAT_0918ede0 + 0xb8);
              lVar11 = puVar9[2];
              if (lVar11 == 0) {
                if (*(int *)(DAT_0918ede0 + 0xe4) == 0) {
                  FUN_03f5c424();
                  puVar9 = *(undefined8 **)(DAT_0918ede0 + 0xb8);
                }
                uVar14 = *puVar9;
                lVar11 = thunk_FUN_03f9944c(DAT_09175ad8);
                FUN_06d4541c(lVar11,uVar14,DAT_091e6998,0);
                plVar8 = (long *)(*(long *)(DAT_0918ede0 + 0xb8) + 0x10);
                *plVar8 = lVar11;
                thunk_FUN_03f5d7b8(plVar8,lVar11);
              }
              FUN_057e280c(lVar6,lVar11,DAT_091abe90);
              if (*(long *)(param_1 + 0x78) != 0) {
                FUN_057e185c(&local_b8,*(long *)(param_1 + 0x78),DAT_091abe78);
                local_90 = local_a8;
                puStack_98 = puStack_b0;
                local_a0 = local_b8;
                local_b8 = 0;
                iVar12 = -0x80000000;
                puStack_b0 = &local_a0;
                while (iVar13 = iVar12, uVar3 = FUN_071bd28c(&local_a0,DAT_091a2728),
                      (uVar3 & 1) != 0) {
                  if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  iVar12 = *(int *)(local_90 + 0x24) + *(int *)(local_90 + 0x2c) + -1;
                  if (iVar12 <= iVar13) {
                    iVar12 = iVar13;
                  }
                }
                FUN_071bd288(&local_a0,DAT_091a2720);
                lVar6 = thunk_FUN_03f9944c(DAT_0918ede8);
                AnhPD_FoodOrder_ConveyorGrid_PromoteShift___ctor();
                if (((*(long *)(param_1 + 0x80) != 0) &&
                    (lVar11 = FUN_057e0998(*(long *)(param_1 + 0x80),0,DAT_091abea0), lVar11 != 0))
                   && (lVar6 != 0)) {
                  *(int *)(lVar6 + 0x20) = *(int *)(lVar11 + 0x24) - iVar1;
                  if (*(long *)(param_1 + 0x78) != 0) {
                    FUN_057e185c(&local_b8,*(long *)(param_1 + 0x78),DAT_091abe78);
                    local_90 = local_a8;
                    puStack_98 = puStack_b0;
                    local_a0 = local_b8;
                    local_b8 = 0;
                    puStack_b0 = &local_a0;
                    while (uVar5 = FUN_071bd28c(&local_a0,DAT_091a2728), uVar3 = local_90,
                          (uVar5 & 1) != 0) {
                      if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      *(int *)(local_90 + 0x24) = *(int *)(local_90 + 0x24) - iVar1;
                      lVar11 = DAT_091abe60;
                      lVar4 = *(long *)(lVar6 + 0x10);
                      if (lVar4 == 0) {
LAB_040e16e4:
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      lVar7 = *(long *)(lVar4 + 0x10);
                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                      if (lVar7 == 0) goto LAB_040e16e4;
                      uVar2 = *(uint *)(lVar4 + 0x18);
                      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                        *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                        puVar10 = (ulong *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
                        *puVar10 = local_90;
                        thunk_FUN_03f5d7b8(puVar10,local_90);
                      }
                      else {
                        FUN_057e0c68(lVar4,local_90,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                      }
                      if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      if (*(long *)(uVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      AnhPD_FoodOrder_IngredientConveyorItem__SetSortingOrder
                                (*(long *)(uVar3 + 0x10),
                                 *(int *)(*(long *)(param_1 + 0x10) + 0xc4) + *(int *)(uVar3 + 0x24)
                                 ,0);
                      if (*(long *)(uVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_03f5c550();
                      }
                      AnhPD_FoodOrder_IngredientConveyorItem__SuspendTap
                                (*(long *)(uVar3 + 0x10),0,0);
                    }
                    FUN_071bd288(&local_a0,DAT_091a2720);
                    if (*(long *)(param_1 + 0x80) != 0) {
                      FUN_057e185c(&local_b8,*(long *)(param_1 + 0x80),DAT_091abe78);
                      iVar1 = (iVar13 - iVar1) + 1;
                      local_90 = local_a8;
                      puStack_98 = puStack_b0;
                      local_a0 = local_b8;
                      local_b8 = 0;
                      puStack_b0 = &local_a0;
                      while (uVar5 = FUN_071bd28c(&local_a0,DAT_091a2728), uVar3 = local_90,
                            (uVar5 & 1) != 0) {
                        if (local_90 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        *(int *)(local_90 + 0x24) = iVar1;
                        if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        if (*(long *)(local_90 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        AnhPD_FoodOrder_IngredientConveyorItem__SetSortingOrder
                                  (*(long *)(local_90 + 0x10),
                                   *(int *)(*(long *)(param_1 + 0x10) + 0xc4) + iVar1,0);
                        if (*(long *)(uVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        AnhPD_FoodOrder_IngredientConveyorItem__SetBusy(*(long *)(uVar3 + 0x10),1,0)
                        ;
                        if (*(long *)(uVar3 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        AnhPD_FoodOrder_IngredientConveyorItem__SuspendTap
                                  (*(long *)(uVar3 + 0x10),1,0);
                        lVar11 = DAT_091abe60;
                        lVar4 = *(long *)(lVar6 + 0x18);
                        if (lVar4 == 0) {
LAB_040e16e8:
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c550();
                        }
                        lVar7 = *(long *)(lVar4 + 0x10);
                        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                        if (lVar7 == 0) goto LAB_040e16e8;
                        uVar2 = *(uint *)(lVar4 + 0x18);
                        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                          *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                          puVar10 = (ulong *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
                          *puVar10 = uVar3;
                          thunk_FUN_03f5d7b8(puVar10,uVar3);
                        }
                        else {
                          FUN_057e0c68(lVar4,uVar3,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                        }
                      }
                      FUN_071bd288(&local_a0,DAT_091a2720);
                      lVar11 = DAT_091b22b0;
                      lVar4 = *(long *)(param_1 + 0x60);
                      if (lVar4 != 0) {
                        lVar7 = *(long *)(lVar4 + 0x10);
                        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                        if (lVar7 != 0) {
                          uVar2 = *(uint *)(lVar4 + 0x18);
                          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                            plVar8 = (long *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
                            *plVar8 = lVar6;
                            thunk_FUN_03f5d7b8(plVar8,lVar6);
                          }
                          else {
                            FUN_057e0c68(lVar4,lVar6,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                          }
                          return 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


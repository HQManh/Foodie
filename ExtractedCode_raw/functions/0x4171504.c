// rea decompile_all
// name: AnhPD.FoodOrder.Autoplay.CookingBotBridge$$AddCustomerOrders
// address: 0x4171504
// body: available
// range: 0x4171504-0x4171b3f inclusive
// range: 0x4171b44-0x4171b57 inclusive
// range: 0x4171b5c-0x4171b6f inclusive
// range: 0x4171b74-0x4171b87 inclusive
// range: 0x4171b8c-0x4171b9f inclusive
// range: 0x4171c24-0x4171d5b inclusive
// range: 0x4171d80-0x4171d83 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4171b3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4171b54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4171b6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4171b84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4171b9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4171d44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4171d58 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4171d80 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_Autoplay_CookingBotBridge__AddCustomerOrders(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 uVar18;
  int iVar19;
  undefined8 local_170;
  undefined8 uStack_168;
  ulong uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_13c;
  int local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  ulong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined8 uStack_f4;
  int local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 *puStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if ((DAT_095165e2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181ea0);
    FUN_03f5c2a4(&DAT_09175ac0);
    FUN_03f5c2a4(&DAT_091c5818);
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a86c0);
    FUN_03f5c2a4(&DAT_091a82b8);
    FUN_03f5c2a4(&DAT_091adc90);
    FUN_03f5c2a4(&DAT_091ab480);
    FUN_03f5c2a4(&DAT_091ab450);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091ab460);
    FUN_03f5c2a4(&DAT_091ac200);
    FUN_03f5c2a4(&DAT_091ac610);
    FUN_03f5c2a4(&DAT_091ab490);
    FUN_03f5c2a4(&DAT_091ac208);
    FUN_03f5c2a4(&DAT_091ac618);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e6a48);
    FUN_03f5c2a4(&DAT_0918ee68);
    DAT_095165e2 = 1;
  }
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_7c = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_84 = 0;
  uStack_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  if ((((*(long *)(param_1 + 0x28) == 0) || (*(long *)(*(long *)(param_1 + 0x28) + 0x10) == 0)) ||
      (*(long *)(param_1 + 0x30) == 0)) || (*(long *)(*(long *)(param_1 + 0x30) + 0x98) == 0)) {
LAB_04171d04:
    if (*(long *)(lVar4 + 0x28) == local_68) {
      return;
    }
  }
  else {
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar6 = AnhPD_FoodOrder_MessyController__get_LineHandle(*(long *)(param_1 + 0x10),0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar7 = UnityEngine_Object__op_Equality(lVar6,0,0);
      if ((uVar7 & 1) != 0) goto LAB_04171d04;
      if ((lVar6 != 0) && (lVar6 = FUN_04a6ac70(lVar6,1,DAT_091c5818), lVar6 != 0)) {
        if ((int)*(ulong *)(lVar6 + 0x18) < 1) {
          iVar19 = -1;
        }
        else {
          uVar7 = 0;
          uVar14 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
          iVar19 = -1;
          do {
            if (uVar14 <= uVar7) {
              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              goto LAB_04171d80;
            }
            lVar17 = *(long *)(lVar6 + uVar7 * 8 + 0x20);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar14 = UnityEngine_Object__op_Equality(lVar17,0,0);
            if ((uVar14 & 1) == 0) {
              if (lVar17 == 0) goto LAB_04171d34;
              uVar14 = AnhPD_FoodOrder_FCustomerLine__get_isShowingCustomer(lVar17,0);
              if ((((uVar14 & 1) != 0) && (*(char *)(lVar17 + 0x40) == '\0')) &&
                 (lVar8 = AnhPD_FoodOrder_FCustomerLine__get_SpawnData(lVar17,0), lVar8 != 0)) {
                lVar8 = AnhPD_FoodOrder_FCustomerLine__get_SpawnData(lVar17,0);
                if (lVar8 == 0) goto LAB_04171d34;
                iVar2 = *(int *)(lVar8 + 0x20);
                if (-1 < iVar2) {
                  if ((*(long *)(param_1 + 0x28) == 0) ||
                     (lVar8 = *(long *)(*(long *)(param_1 + 0x28) + 0x10), lVar8 == 0))
                  goto LAB_04171d34;
                  if (iVar2 < *(int *)(lVar8 + 0x18)) {
                    iVar1 = iVar2;
                    if (iVar2 <= iVar19) {
                      iVar1 = iVar19;
                    }
                    lVar8 = FUN_057e0998(lVar8,iVar2,DAT_091ac208);
                    lVar9 = thunk_FUN_03f9944c(DAT_09181ea0);
                    CookingGraph_BotCustomerOrderState___ctor(lVar9,0);
                    if (lVar9 == 0) goto LAB_04171d34;
                    *(int *)(lVar9 + 0x10) = iVar2;
                    lVar10 = AnhPD_FoodOrder_FCustomerLine__get_SpawnData(lVar17,0);
                    if (lVar10 == 0) goto LAB_04171d34;
                    bVar5 = CakeOrder_InGame_CustomerSpawnData__get_IsCleanDishStaff(lVar10,0);
                    *(byte *)(lVar9 + 0x14) = bVar5 & 1;
                    lVar10 = AnhPD_FoodOrder_FCustomerLine__get_SpawnData(lVar17,0);
                    if (lVar10 == 0) goto LAB_04171d34;
                    bVar5 = CakeOrder_InGame_CustomerSpawnData__get_IsBoss(lVar10,0);
                    *(byte *)(lVar9 + 0x15) = bVar5 & 1;
                    lVar10 = AnhPD_FoodOrder_FCustomerLine__GetOpenOrderIndices(lVar17,0);
                    if (lVar10 != 0) {
                      if (lVar8 == 0) goto LAB_04171d34;
                      if (*(long *)(lVar8 + 0x20) != 0) {
                        if (*(long *)(param_1 + 0x48) == 0) goto LAB_04171d34;
                        FUN_053d74ac(*(long *)(param_1 + 0x48),DAT_091a82b8);
                        if (*(long *)(param_1 + 0x50) == 0) goto LAB_04171d34;
                        FUN_053ebbdc(*(long *)(param_1 + 0x50),DAT_091a86c0);
                        FUN_05797d74(&local_128,lVar10,DAT_091adcc0);
                        local_c0 = local_118;
                        puStack_d8 = &local_d0;
                        uStack_c8 = uStack_120;
                        local_d0 = local_128;
                        local_e0 = 0;
LAB_041718c0:
                        uVar14 = FUN_071ad7a4(&local_d0,DAT_091a34d8);
                        if ((uVar14 & 1) != 0) {
                          AnhPD_FoodOrder_FCustomerLine__GetOrderSpec
                                    (&local_128,lVar17,local_c0 & 0xffffffff,0);
                          iVar19 = local_ec;
                          uStack_a8 = uStack_120;
                          local_b0 = local_128;
                          uStack_98 = uStack_110;
                          local_a0 = local_118;
                          uStack_90 = local_108;
                          uStack_7c = uStack_f4;
                          uStack_88 = uStack_100;
                          local_84 = uStack_fc;
                          uStack_80 = uStack_f8;
                          if (local_ec < 0) {
                            local_134 = local_ec;
                            local_150 = local_108;
                            uStack_168 = uStack_120;
                            local_170 = local_128;
                            uStack_158 = uStack_110;
                            uStack_160 = local_118;
                            local_130 = local_e8;
                            uStack_13c = uStack_f4;
                            lVar11 = AnhPD_FoodOrder_Autoplay_CookingBotBridge__ComposeRandomDish
                                               (param_1,&local_170);
                            lVar10 = DAT_091ab480;
                            if (lVar11 != 0) {
                              lVar12 = *(long *)(lVar9 + 0x18);
                              if (lVar12 != 0) {
                                lVar15 = *(long *)(lVar12 + 0x10);
                                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                if (lVar15 != 0) {
                                  uVar3 = *(uint *)(lVar12 + 0x18);
                                  if (uVar3 < *(uint *)(lVar15 + 0x18)) {
                                    *(uint *)(lVar12 + 0x18) = uVar3 + 1;
                                    plVar13 = (long *)(lVar15 + (long)(int)uVar3 * 8 + 0x20);
                                    *plVar13 = lVar11;
                                    thunk_FUN_03f5d7b8(plVar13);
                                  }
                                  else {
                                    FUN_057e0c68(lVar12,lVar11,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  goto LAB_041718c0;
                                }
                              }
                              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                FUN_03f5c550();
                              }
                              goto LAB_04171d80;
                            }
                            goto LAB_041718c0;
                          }
                          if (*(long *)(lVar8 + 0x20) == 0) {
                            if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            goto LAB_04171d80;
                          }
                          if (*(int *)(*(long *)(lVar8 + 0x20) + 0x18) <= local_ec)
                          goto LAB_041718c0;
                          if (*(long *)(param_1 + 0x48) == 0) {
                            if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                              FUN_03f5c550();
                            }
                            goto LAB_04171d80;
                          }
                          uVar14 = FUN_053d8048(*(long *)(param_1 + 0x48),local_ec,DAT_091a82b0);
                          if ((uVar14 & 1) != 0) {
                            if (*(long *)(lVar8 + 0x20) == 0) {
                              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                FUN_03f5c550();
                              }
                              goto LAB_04171d80;
                            }
                            uVar18 = FUN_057e0998(*(long *)(lVar8 + 0x20),iVar19,DAT_091ac618);
                            lVar11 = AnhPD_FoodOrder_Autoplay_CookingBotBridge__BuildDish
                                               (param_1,uVar18);
                            lVar10 = DAT_091ab480;
                            if (lVar11 != 0) {
                              lVar12 = *(long *)(lVar9 + 0x18);
                              if (lVar12 != 0) {
                                lVar15 = *(long *)(lVar12 + 0x10);
                                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                if (lVar15 != 0) {
                                  uVar3 = *(uint *)(lVar12 + 0x18);
                                  if (uVar3 < *(uint *)(lVar15 + 0x18)) {
                                    *(uint *)(lVar12 + 0x18) = uVar3 + 1;
                                    plVar13 = (long *)(lVar15 + (long)(int)uVar3 * 8 + 0x20);
                                    *plVar13 = lVar11;
                                    thunk_FUN_03f5d7b8(plVar13);
                                  }
                                  else {
                                    FUN_057e0c68(lVar12,lVar11,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  goto LAB_041718c0;
                                }
                              }
                              if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
                                FUN_03f5c550();
                              }
                              goto LAB_04171d80;
                            }
                          }
                          goto LAB_041718c0;
                        }
                        FUN_071ad7a0(&local_d0,DAT_091a34d0);
                      }
                    }
                    lVar17 = DAT_091ab450;
                    if (*(long *)(lVar9 + 0x18) == 0) goto LAB_04171d34;
                    iVar19 = iVar1;
                    if ((0 < *(int *)(*(long *)(lVar9 + 0x18) + 0x18)) ||
                       (*(char *)(lVar9 + 0x14) != '\0')) {
                      if ((param_2 == 0) || (lVar8 = *(long *)(param_2 + 0x58), lVar8 == 0))
                      goto LAB_04171d34;
                      lVar10 = *(long *)(lVar8 + 0x10);
                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                      if (lVar10 == 0) goto LAB_04171d34;
                      uVar3 = *(uint *)(lVar8 + 0x18);
                      if (uVar3 < *(uint *)(lVar10 + 0x18)) {
                        *(uint *)(lVar8 + 0x18) = uVar3 + 1;
                        plVar13 = (long *)(lVar10 + (long)(int)uVar3 * 8 + 0x20);
                        *plVar13 = lVar9;
                        thunk_FUN_03f5d7b8(plVar13,lVar9);
                      }
                      else {
                        FUN_057e0c68(lVar8,lVar9,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                      }
                    }
                  }
                }
              }
            }
            uVar14 = (ulong)*(uint *)(lVar6 + 0x18);
            uVar7 = uVar7 + 1;
          } while ((long)uVar7 < (long)(int)*(uint *)(lVar6 + 0x18));
        }
        if (param_2 != 0) {
          lVar6 = *(long *)(param_2 + 0x58);
          if (*(int *)(DAT_0918ee68 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar16 = *(undefined8 **)(DAT_0918ee68 + 0xb8);
          lVar17 = puVar16[2];
          if (lVar17 == 0) {
            if (*(int *)(DAT_0918ee68 + 0xe4) == 0) {
              FUN_03f5c424();
              puVar16 = *(undefined8 **)(DAT_0918ee68 + 0xb8);
            }
            uVar18 = *puVar16;
            lVar17 = thunk_FUN_03f9944c(DAT_09175ac0);
            FUN_06d4541c(lVar17,uVar18,DAT_091e6a48,0);
            plVar13 = (long *)(*(long *)(DAT_0918ee68 + 0xb8) + 0x10);
            *plVar13 = lVar17;
            thunk_FUN_03f5d7b8(plVar13,lVar17);
          }
          if (lVar6 != 0) {
            FUN_057e280c(lVar6,lVar17,DAT_091ab460);
            AnhPD_FoodOrder_Autoplay_CookingBotBridge__TrackTimedOutCustomers(param_1,param_2);
            if (*(long *)(param_2 + 0x78) != 0) {
              FUN_057973b4(*(long *)(param_2 + 0x78),*(undefined8 *)(param_1 + 0x80),DAT_091adc90);
              AnhPD_FoodOrder_Autoplay_CookingBotBridge__AddPreviewOrders(param_1,param_2,iVar19);
              goto LAB_04171d04;
            }
          }
        }
      }
    }
LAB_04171d34:
    if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_04171d80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


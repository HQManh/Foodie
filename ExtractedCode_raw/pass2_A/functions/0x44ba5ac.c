// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$BeginDishDelivery
// address: 0x44ba5ac
// body: available
// range: 0x44ba5ac-0x44baca7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ba794 to 0x6fd8440 FUN_06fd8440 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44bab7c to 0x44acf90 CookOrder.Cooking.Implement.CookingGameplayPresentation$$PresentAutoDish (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44bac94 to 0x44d4cc8 CookOrder.Cooking.Implement.CookingDishDeliveryMotion$$Play (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44bac98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44baca4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__BeginDishDelivery
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  if ((DAT_0951823b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c5330);
    FUN_03f5c2a4(&DAT_091828a0);
    FUN_03f5c2a4(&DAT_0919d638);
    FUN_03f5c2a4(&DAT_091a0038);
    FUN_03f5c2a4(&DAT_0919f568);
    FUN_03f5c2a4(&DAT_091ca340);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_09178620);
    FUN_03f5c2a4(&DAT_091a8818);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091abbf8);
    FUN_03f5c2a4(&DAT_091ac208);
    FUN_03f5c2a4(&DAT_091ac618);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e6e80);
    FUN_03f5c2a4(&DAT_091e7050);
    FUN_03f5c2a4(&DAT_0918f0a8);
    FUN_03f5c2a4(&DAT_0918f030);
    DAT_0951823b = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918f0a8);
  CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass184_0___ctor(lVar2,0);
  if (lVar2 != 0) {
    plVar8 = (long *)(lVar2 + 0x18);
    *plVar8 = param_5;
    thunk_FUN_03f5d7b8(plVar8,param_5);
    *(long *)(lVar2 + 0x28) = param_4;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x28),param_4);
    if ((*(long *)(param_4 + 0x400) == 0) ||
       (uVar3 = DG_Tweening_TweenExtensions__IsActive(*(long *)(param_4 + 0x400),0),
       (uVar3 & 1) == 0)) {
      lVar6 = *plVar8;
      if (lVar6 != 0) {
        uStack_b8 = *(undefined8 *)(lVar6 + 0x18);
        local_c0 = *(undefined8 *)(lVar6 + 0x10);
        local_b0 = *(undefined8 *)(lVar6 + 0x20);
        uVar4 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DishKey(&local_c0);
        puVar9 = (undefined8 *)(lVar2 + 0x40);
        *puVar9 = uVar4;
        thunk_FUN_03f5d7b8(puVar9,uVar4);
        if (*(long *)(param_4 + 0x338) != 0) {
          uVar3 = FUN_053ec72c(*(long *)(param_4 + 0x338),*puVar9,DAT_091a86b8);
          if ((uVar3 & 1) == 0) {
            return;
          }
          if ((*plVar8 != 0) && (lVar6 = *(long *)(*plVar8 + 0x18), lVar6 != 0)) {
            uVar4 = System_String__Substring(lVar6,9,0);
            uVar1 = System_Int32__Parse(uVar4,0);
            lVar6 = *(long *)(param_4 + 0x308);
            *(undefined4 *)(lVar2 + 0x30) = uVar1;
            if (lVar6 != 0) {
              uVar3 = FUN_06ef1fe8(lVar6,uVar1,lVar2 + 0x10,DAT_0919d638);
              if ((uVar3 & 1) != 0) {
                uVar4 = *(undefined8 *)(lVar2 + 0x10);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
                if ((uVar3 & 1) != 0) {
                  if (*(long *)(param_4 + 0x328) != 0) {
                    uVar3 = FUN_06fd9fbc(*(long *)(param_4 + 0x328),*puVar9,lVar2 + 0x38,
                                         DAT_091a0038);
                    if ((uVar3 & 1) == 0) {
                      lVar6 = *plVar8;
                      if (lVar6 == 0) goto LAB_044bac98;
                      uStack_d8 = *(undefined8 *)(lVar6 + 0x18);
                      local_e0 = *(undefined8 *)(lVar6 + 0x10);
                      local_d0 = *(undefined8 *)(lVar6 + 0x20);
                      uVar3 = CookOrder_Cooking_Implement_CookingGameplayPresentation__TryAnchor
                                        (param_4,&local_e0,lVar2 + 0x38);
                      if ((uVar3 & 1) == 0) {
                        return;
                      }
                    }
                    if (((((*(long *)(param_4 + 0x2e0) != 0) &&
                          (lVar6 = *(long *)(*(long *)(param_4 + 0x2e0) + 0x20), lVar6 != 0)) &&
                         (*(long *)(param_4 + 0x2d8) != 0)) &&
                        ((lVar7 = *(long *)(*(long *)(param_4 + 0x2d8) + 0x120), lVar7 != 0 &&
                         (lVar7 = *(long *)(lVar7 + 0x28), lVar7 != 0)))) &&
                       (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0)) {
                      lVar10 = *(long *)(lVar6 + 0x50);
                      lVar6 = FUN_057e0998(lVar7,*(undefined4 *)(lVar2 + 0x30),DAT_091ac208);
                      if (((lVar6 != 0) && (*plVar8 != 0)) &&
                         ((*(long *)(lVar6 + 0x20) != 0 &&
                          (((lVar6 = FUN_057e0998(*(long *)(lVar6 + 0x20),
                                                  *(undefined4 *)(*plVar8 + 0x20),DAT_091ac618),
                            lVar6 != 0 && (*(long *)(lVar6 + 0x10) != 0)) && (lVar10 != 0)))))) {
                        plVar5 = *(long **)(*(long *)(lVar6 + 0x10) + 0x20);
                        if ((plVar5 != (long *)0x0) && (*plVar5 != DAT_091828a0)) {
                    /* WARNING: Subroutine does not return */
                          FUN_03f5c8d0(plVar5,DAT_091828a0);
                        }
                        uVar1 = FUN_057e1a08(lVar10,plVar5,DAT_091abbf8);
                        *(undefined4 *)(lVar2 + 0x20) = uVar1;
                        if ((*(long *)(lVar2 + 0x38) != 0) &&
                           (lVar6 = FUN_04a6a14c(*(long *)(lVar2 + 0x38),DAT_091c5330), lVar6 != 0))
                        {
                          CookOrder_Cooking_Implement_CookingDishRenderer__StopMerge(lVar6,0);
                          if (*(long *)(lVar2 + 0x38) != 0) {
                            lVar6 = FUN_04a6a14c(*(long *)(lVar2 + 0x38),DAT_091c5330);
                            if (*(long *)(lVar2 + 0x18) != 0) {
                              uVar4 = *(undefined8 *)(param_4 + 0x2e0);
                              uVar1 = *(undefined4 *)(lVar2 + 0x20);
                              uVar11 = *(undefined8 *)(*(long *)(lVar2 + 0x18) + 0x28);
                              if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                                FUN_03f5c424();
                              }
                              puVar9 = *(undefined8 **)(DAT_0918f030 + 0xb8);
                              lVar7 = puVar9[0x2c];
                              if (lVar7 == 0) {
                                if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                                  FUN_03f5c424();
                                  puVar9 = *(undefined8 **)(DAT_0918f030 + 0xb8);
                                }
                                uVar12 = *puVar9;
                                lVar7 = thunk_FUN_03f9944c(DAT_09178620);
                                FUN_053239c8(lVar7,uVar12,DAT_091e6e80,0);
                                lVar10 = *(long *)(DAT_0918f030 + 0xb8);
                                *(long *)(lVar10 + 0x160) = lVar7;
                                thunk_FUN_03f5d7b8(lVar10 + 0x160,lVar7);
                              }
                              uVar11 = FUN_04af6d6c(uVar11,lVar7,DAT_091ca340);
                              uVar11 = FUN_04b0462c(uVar11,DAT_091cae30);
                              if (lVar6 != 0) {
                                CookOrder_Cooking_Implement_CookingDishRenderer__Draw
                                          (lVar6,uVar4,uVar1,uVar11,0,0,1,0,0);
                                lVar6 = *(long *)(lVar2 + 0x38);
                                uVar4 = UnityEngine_Component__get_transform(param_4,0);
                                if (lVar6 != 0) {
                                  UnityEngine_Transform__SetParent(lVar6,uVar4,1,0);
                                  *(int *)(param_4 + 700) = *(int *)(param_4 + 700) + 1;
                                  if ((*(char *)(param_4 + 0x30) != '\0') &&
                                     (*(int *)(lVar2 + 0x30) == *(int *)(param_4 + 0x34))) {
                                    lVar6 = *plVar8;
                                    if (*(long *)(param_4 + 0x60) == 0) {
LAB_044bab04:
                                      uVar11 = *(undefined8 *)(lVar2 + 0x38);
                                      uVar12 = *(undefined8 *)(lVar2 + 0x10);
                                      uVar1 = *(undefined4 *)(lVar2 + 0x20);
                                      uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
                                      System_Action___ctor(uVar4,lVar2,DAT_091e7050,0);
                                      CookOrder_Cooking_Implement_CookingGameplayPresentation__PresentAutoDish
                                                (param_4,uVar11,uVar12,lVar6,uVar1,uVar4);
                                      return;
                                    }
                                    if (lVar6 == 0) goto LAB_044bac98;
                                    if (*(int *)(lVar6 + 0x20) ==
                                        *(int *)(*(long *)(param_4 + 0x60) + 0x38))
                                    goto LAB_044bab04;
                                  }
                                  if (*(long *)(param_4 + 0x90) != 0) {
                                    FUN_053ec72c(*(long *)(param_4 + 0x90),
                                                 *(undefined8 *)(lVar2 + 0x38),DAT_091a8818);
                                    if ((*plVar8 != 0) && (*(long *)(lVar2 + 0x10) != 0)) {
                                      uVar4 = *(undefined8 *)(lVar2 + 0x38);
                                      lVar6 = CookOrder_Cooking_Implement_CookingCustomerView__Target
                                                        (*(long *)(lVar2 + 0x10),
                                                         *(undefined4 *)(*plVar8 + 0x20),0);
                                      if (lVar6 != 0) {
                                        uVar1 = UnityEngine_Transform__get_position(lVar6,0);
                                        if ((*(long *)(param_4 + 0x2e8) != 0) &&
                                           (lVar6 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x58),
                                           lVar6 != 0)) {
                                          uVar13 = *(undefined4 *)(lVar6 + 0x20);
                                          uVar14 = *(undefined4 *)(lVar6 + 0x24);
                                          uVar12 = *(undefined8 *)(lVar6 + 0x28);
                                          uVar11 = thunk_FUN_03f9944c(DAT_09180e78);
                                          System_Action___ctor(uVar11,lVar2,DAT_091e7050,0);
                                          CookOrder_Cooking_Implement_CookingDishDeliveryMotion__Play
                                                    (uVar1,param_2,param_3,uVar13,uVar14,uVar4,
                                                     uVar12,lVar6,uVar11,0);
                                          return;
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
                  goto LAB_044bac98;
                }
              }
              return;
            }
          }
        }
      }
    }
    else {
      lVar2 = *plVar8;
      if (lVar2 != 0) {
        uStack_98 = *(undefined8 *)(lVar2 + 0x18);
        local_a0 = *(undefined8 *)(lVar2 + 0x10);
        local_90 = *(undefined8 *)(lVar2 + 0x20);
        lVar2 = *(long *)(param_4 + 0x420);
        uVar4 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DishKey(&local_a0);
        if (lVar2 != 0) {
          FUN_06fd8440(lVar2,uVar4,*plVar8,DAT_0919f568);
          return;
        }
      }
    }
  }
LAB_044bac98:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$RebuildMovedPlate
// address: 0x44bf45c
// body: available
// range: 0x44bf45c-0x44bf9cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44bf9cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__RebuildMovedPlate
               (long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  if ((DAT_09518251 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5330);
    FUN_03f5c2a4(&DAT_091828a0);
    FUN_03f5c2a4(&DAT_091a0038);
    FUN_03f5c2a4(&DAT_091ca340);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091cb420);
    FUN_03f5c2a4(&DAT_09178620);
    FUN_03f5c2a4(&DAT_09179688);
    FUN_03f5c2a4(&DAT_091a86c8);
    FUN_03f5c2a4(&DAT_091abbf8);
    FUN_03f5c2a4(&DAT_091ac208);
    FUN_03f5c2a4(&DAT_091ac618);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e6f30);
    FUN_03f5c2a4(&DAT_091e6f38);
    FUN_03f5c2a4(&DAT_091e7090);
    FUN_03f5c2a4(&DAT_0918f0e0);
    FUN_03f5c2a4(&DAT_0918f030);
    FUN_03f5c2a4(&DAT_0921a028);
    DAT_09518251 = 1;
  }
  local_68 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0918f0e0);
  CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass226_0___ctor(lVar3,0);
  if (lVar3 != 0) {
    plVar10 = (long *)(lVar3 + 0x10);
    *plVar10 = param_2;
    thunk_FUN_03f5d7b8(plVar10,param_2);
    lVar6 = *plVar10;
    if (lVar6 != 0) {
      uStack_78 = *(undefined8 *)(lVar6 + 0x18);
      local_80 = *(undefined8 *)(lVar6 + 0x10);
      local_70 = *(undefined8 *)(lVar6 + 0x20);
      lVar6 = *(long *)(param_1 + 0x328);
      uVar4 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DishKey(&local_80);
      if (lVar6 != 0) {
        uVar5 = FUN_06fd9fbc(lVar6,uVar4,&local_68,DAT_091a0038);
        lVar6 = local_68;
        if ((uVar5 & 1) != 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = UnityEngine_Object__op_Implicit(lVar6,0);
          if ((uVar5 & 1) != 0) {
            lVar6 = *plVar10;
            if (lVar6 != 0) {
              uStack_98 = *(undefined8 *)(lVar6 + 0x18);
              local_a0 = *(undefined8 *)(lVar6 + 0x10);
              local_90 = *(undefined8 *)(lVar6 + 0x20);
              lVar6 = *(long *)(param_1 + 0x338);
              uVar4 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DishKey(&local_a0);
              if (lVar6 != 0) {
                uVar5 = FUN_053ebc3c(lVar6,uVar4,DAT_091a86c8);
                if ((uVar5 & 1) != 0) {
                  return;
                }
                if (((*plVar10 != 0) && (DAT_0921a028 != 0)) &&
                   (lVar6 = *(long *)(*plVar10 + 0x18), lVar6 != 0)) {
                  uVar4 = System_String__Substring(lVar6,*(undefined4 *)(DAT_0921a028 + 0x10),0);
                  uVar1 = System_Int32__Parse(uVar4,0);
                  if (((((*(long *)(param_1 + 0x2d8) != 0) &&
                        (lVar6 = *(long *)(*(long *)(param_1 + 0x2d8) + 0x120), lVar6 != 0)) &&
                       ((lVar6 = *(long *)(lVar6 + 0x28), lVar6 != 0 &&
                        ((lVar6 = *(long *)(lVar6 + 0x10), lVar6 != 0 &&
                         (lVar6 = FUN_057e0998(lVar6,uVar1,DAT_091ac208), lVar6 != 0)))))) &&
                      (*plVar10 != 0)) &&
                     (((*(long *)(lVar6 + 0x20) != 0 &&
                       (lVar6 = FUN_057e0998(*(long *)(lVar6 + 0x20),
                                             *(undefined4 *)(*plVar10 + 0x20),DAT_091ac618),
                       lVar6 != 0)) && (*(long *)(lVar6 + 0x10) != 0)))) {
                    plVar7 = *(long **)(*(long *)(lVar6 + 0x10) + 0x20);
                    if (plVar7 == (long *)0x0) {
                      plVar7 = (long *)0x0;
                    }
                    else if (*plVar7 != DAT_091828a0) {
                      plVar7 = (long *)0x0;
                    }
                    if (((*(long *)(param_1 + 0x2e0) != 0) &&
                        (lVar6 = *(long *)(*(long *)(param_1 + 0x2e0) + 0x20), lVar6 != 0)) &&
                       ((lVar6 = *(long *)(lVar6 + 0x50), lVar6 != 0 &&
                        (uVar1 = FUN_057e1a08(lVar6,plVar7,DAT_091abbf8), local_68 != 0)))) {
                      lVar6 = FUN_04a6a14c(local_68,DAT_091c5330);
                      if (*plVar10 != 0) {
                        uVar11 = *(undefined8 *)(param_1 + 0x2e0);
                        uVar12 = *(undefined8 *)(*plVar10 + 0x28);
                        uVar4 = thunk_FUN_03f9944c(DAT_09179688);
                        FUN_0533040c(uVar4,lVar3,DAT_091e7090,0);
                        uVar4 = FUN_04b0ce00(uVar12,uVar4,DAT_091cb420);
                        if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                          FUN_03f5c424(DAT_0918f030);
                        }
                        puVar9 = *(undefined8 **)(DAT_0918f030 + 0xb8);
                        lVar3 = puVar9[0x32];
                        if (lVar3 == 0) {
                          if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                            FUN_03f5c424(DAT_0918f030);
                            puVar9 = *(undefined8 **)(DAT_0918f030 + 0xb8);
                          }
                          uVar12 = *puVar9;
                          lVar3 = thunk_FUN_03f9944c(DAT_09178620);
                          FUN_053239c8(lVar3,uVar12,DAT_091e6f30,0);
                          lVar8 = *(long *)(DAT_0918f030 + 0xb8);
                          *(long *)(lVar8 + 400) = lVar3;
                          thunk_FUN_03f5d7b8(lVar8 + 400,lVar3);
                        }
                        uVar4 = FUN_04af6d6c(uVar4,lVar3,DAT_091ca340);
                        uVar4 = FUN_04b0462c(uVar4,DAT_091cae30);
                        if (*plVar10 != 0) {
                          uVar2 = CookingGraph_Execution_CookingAssemblySnapshot__get_Complete
                                            (*plVar10,0);
                          if (*plVar10 != 0) {
                            uVar12 = *(undefined8 *)(*plVar10 + 0x28);
                            if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                              FUN_03f5c424();
                            }
                            puVar9 = *(undefined8 **)(DAT_0918f030 + 0xb8);
                            lVar3 = puVar9[0x33];
                            if (lVar3 == 0) {
                              if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                                FUN_03f5c424();
                                puVar9 = *(undefined8 **)(DAT_0918f030 + 0xb8);
                              }
                              uVar13 = *puVar9;
                              lVar3 = thunk_FUN_03f9944c(DAT_09178620);
                              FUN_053239c8(lVar3,uVar13,DAT_091e6f38,0);
                              lVar8 = *(long *)(DAT_0918f030 + 0xb8);
                              *(long *)(lVar8 + 0x198) = lVar3;
                              thunk_FUN_03f5d7b8(lVar8 + 0x198,lVar3);
                            }
                            uVar12 = FUN_04af6d6c(uVar12,lVar3,DAT_091ca340);
                            uVar12 = FUN_04b0462c(uVar12,DAT_091cae30);
                            if (lVar6 != 0) {
                              CookOrder_Cooking_Implement_CookingDishRenderer__Draw
                                        (lVar6,uVar11,uVar1,uVar4,0,0,uVar2 & 1,uVar12,0);
                              if ((*(long *)(param_1 + 0x2d8) != 0) &&
                                 (lVar3 = *(long *)(*(long *)(param_1 + 0x2d8) + 0x128), lVar3 != 0)
                                 ) {
                                CookOrder_Cooking_Implement_CookingDishRenderer__RenderMerge
                                          (lVar6,*(undefined8 *)(param_1 + 0x2e0),uVar1,*plVar10,
                                           *(undefined1 *)(lVar3 + 0x28),0);
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
            goto LAB_044bf9cc;
          }
        }
        return;
      }
    }
  }
LAB_044bf9cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$OnLevelEvent
// address: 0x44baca8
// body: available
// range: 0x44baca8-0x44bb2cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44bb2bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bb2c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bb2c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bb2c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bb2cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__OnLevelEvent
               (long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  long local_70;
  undefined8 local_60;
  undefined8 *puStack_58;
  long local_50;
  long local_38;
  
  if ((DAT_0951823c & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d638);
    FUN_03f5c2a4(&DAT_0919d620);
    FUN_03f5c2a4(&DAT_0919d648);
    FUN_03f5c2a4(&DAT_091c9fd8);
    FUN_03f5c2a4(&DAT_091cb428);
    FUN_03f5c2a4(&DAT_091a5f60);
    FUN_03f5c2a4(&DAT_091a5f78);
    FUN_03f5c2a4(&DAT_091a5f68);
    FUN_03f5c2a4(&DAT_091a5f80);
    FUN_03f5c2a4(&DAT_091a5f70);
    FUN_03f5c2a4(&DAT_091a5f88);
    FUN_03f5c2a4(&DAT_09178630);
    FUN_03f5c2a4(&DAT_09178628);
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e6f20);
    FUN_03f5c2a4(&DAT_091e7058);
    FUN_03f5c2a4(&DAT_0918f0b0);
    FUN_03f5c2a4(&DAT_0918f030);
    FUN_03f5c2a4(&DAT_091be938);
    FUN_03f5c2a4(&DAT_091be930);
    FUN_03f5c2a4(&DAT_09202d00);
    FUN_03f5c2a4(&DAT_0920d890);
    DAT_0951823c = 1;
  }
  local_38 = 0;
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0918f0b0);
  CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass185_0___ctor(lVar2,0);
  if (lVar2 != 0) {
    plVar7 = (long *)(lVar2 + 0x10);
    *plVar7 = param_2;
    thunk_FUN_03f5d7b8(plVar7,param_2);
    lVar4 = *plVar7;
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + 0x10) == 0xc) {
        if ((*(long *)(param_1 + 0x308) == 0) ||
           (lVar4 = FUN_06ef0310(*(long *)(param_1 + 0x308),DAT_0919d648), lVar4 == 0))
        goto LAB_044bb2bc;
        FUN_0652ce7c(&local_98,lVar4,DAT_091be938);
        puStack_58 = puStack_90;
        local_60 = local_98;
        local_50 = local_88;
        local_98 = 0;
        puStack_90 = &local_60;
        while (uVar3 = FUN_0725662c(&local_60,DAT_091a5f80), lVar4 = local_50, (uVar3 & 1) != 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
          if ((uVar3 & 1) != 0) {
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar3 = CookOrder_Cooking_Implement_CookingCustomerHandle__op_Implicit
                              (*(undefined8 *)(lVar4 + 0xe0),0);
            if ((uVar3 & 1) != 0) {
              if (*(long *)(lVar4 + 0xe0) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              CookOrder_Cooking_Implement_CookingCustomerHandle__HoldAngry
                        (*(long *)(lVar4 + 0xe0),0,0);
            }
          }
        }
        FUN_07256628(&local_60,DAT_091a5f78);
        if ((*(long *)(param_1 + 0x350) == 0) ||
           (lVar4 = FUN_06ef0310(*(long *)(param_1 + 0x350),DAT_0919d620), lVar4 == 0))
        goto LAB_044bb2bc;
        FUN_0652ce7c(&local_98,lVar4,DAT_091be930);
        puStack_78 = puStack_90;
        local_80 = local_98;
        local_70 = local_88;
        local_98 = 0;
        puStack_90 = &local_80;
        while (uVar3 = FUN_0725662c(&local_80,DAT_091a5f68), lVar4 = local_70, (uVar3 & 1) != 0) {
          uVar3 = CookOrder_Cooking_Implement_CookingCustomerHandle__op_Implicit(local_70,0);
          if ((uVar3 & 1) != 0) {
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            CookOrder_Cooking_Implement_CookingCustomerHandle__HoldAngry(lVar4,0,0);
          }
        }
        FUN_07256628(&local_80,DAT_091a5f60);
        lVar4 = *plVar7;
        if (lVar4 == 0) goto LAB_044bb2bc;
      }
      if (*(int *)(lVar4 + 0x10) == 3) {
        uVar1 = *(uint *)(lVar4 + 0x30);
        if (-1 < (int)uVar1) {
          lVar6 = *(long *)(param_1 + 0x1c0);
          if (lVar6 == 0) goto LAB_044bb2bc;
          if ((int)uVar1 < *(int *)(lVar6 + 0x18)) {
            uVar9 = *(undefined8 *)(lVar6 + (ulong)uVar1 * 8 + 0x20);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = UnityEngine_Object__op_Implicit(uVar9,0);
            lVar4 = *plVar7;
            if ((uVar3 & 1) != 0) {
              if ((lVar4 == 0) || (lVar6 = *(long *)(param_1 + 0x1c0), lVar6 == 0))
              goto LAB_044bb2bc;
              if (*(uint *)(lVar6 + 0x18) <= *(uint *)(lVar4 + 0x30)) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar4 = *(long *)(lVar6 + (long)(int)*(uint *)(lVar4 + 0x30) * 8 + 0x20);
              if ((lVar4 == 0) ||
                 (lVar4 = UnityEngine_Component__get_transform(lVar4,0), lVar4 == 0))
              goto LAB_044bb2bc;
              UnityEngine_Transform__get_position(lVar4,0);
              CookOrder_Cooking_Implement_CookingFeedback__Particle(DAT_09202d00,0,0);
              lVar4 = *plVar7;
            }
            if (lVar4 == 0) goto LAB_044bb2bc;
          }
        }
      }
      if (*(int *)(lVar4 + 0x10) == 6) {
        if (*(long *)(param_1 + 0x308) == 0) goto LAB_044bb2bc;
        uVar3 = FUN_06ef1fe8(*(long *)(param_1 + 0x308),*(undefined4 *)(lVar4 + 0x30),&local_38,
                             DAT_0919d638);
        lVar4 = local_38;
        if ((uVar3 & 1) != 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
          if ((uVar3 & 1) != 0) {
            if (local_38 == 0) goto LAB_044bb2bc;
            CookOrder_Cooking_Implement_CookingCustomerView__Timeout(local_38,0);
          }
        }
      }
      lVar4 = *plVar7;
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x10) != 5) {
          return;
        }
        if (*(long *)(param_1 + 0x368) != 0) {
          FUN_053d8048(*(long *)(param_1 + 0x368),*(undefined4 *)(lVar4 + 0x30),DAT_091a82b0);
          if (*plVar7 != 0) {
            uVar3 = System_String__op_Inequality(*(undefined8 *)(*plVar7 + 0x38),DAT_0920d890,0);
            if ((uVar3 & 1) == 0) {
              return;
            }
            if ((((*(long *)(param_1 + 0x2d8) != 0) &&
                 (lVar4 = *(long *)(*(long *)(param_1 + 0x2d8) + 0x118), lVar4 != 0)) &&
                (*(long *)(lVar4 + 0x180) != 0)) &&
               (lVar6 = *(long *)(*(long *)(lVar4 + 0x180) + 0x40), lVar6 != 0)) {
              if (*(int *)(lVar6 + 0x5c) != 1) {
                return;
              }
              if ((*(long *)(lVar4 + 0x178) != 0) &&
                 (lVar4 = CookingGraph_Execution_CookingExecution__ReadSnapshot
                                    (*(long *)(lVar4 + 0x178),0), lVar4 != 0)) {
                uVar8 = *(undefined8 *)(lVar4 + 0x38);
                uVar9 = thunk_FUN_03f9944c(DAT_09178628);
                FUN_05322d94(uVar9,lVar2,DAT_091e7058,0);
                uVar9 = FUN_04b0cafc(uVar8,uVar9,DAT_091cb428);
                if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_0918f030);
                }
                puVar5 = *(undefined8 **)(DAT_0918f030 + 0xb8);
                lVar2 = puVar5[0x2d];
                if (lVar2 == 0) {
                  if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_0918f030);
                    puVar5 = *(undefined8 **)(DAT_0918f030 + 0xb8);
                  }
                  uVar8 = *puVar5;
                  lVar2 = thunk_FUN_03f9944c(DAT_09178630);
                  FUN_053239c8(lVar2,uVar8,DAT_091e6f20,0);
                  lVar4 = *(long *)(DAT_0918f030 + 0xb8);
                  *(long *)(lVar4 + 0x168) = lVar2;
                  thunk_FUN_03f5d7b8(lVar4 + 0x168,lVar2);
                }
                uVar9 = FUN_04aeab54(uVar9,lVar2,DAT_091c9fd8);
                if (((*(long *)(param_1 + 0x2d8) != 0) &&
                    (lVar2 = *(long *)(*(long *)(param_1 + 0x2d8) + 0x118), lVar2 != 0)) &&
                   ((lVar2 = *(long *)(lVar2 + 0x180), lVar2 != 0 &&
                    (lVar2 = *(long *)(lVar2 + 0x40), lVar2 != 0)))) {
                  CookOrder_Cooking_Implement_CookingGameplayPresentation__ScheduleDishDeliveries
                            ((float)*(double *)(lVar2 + 0x20),param_1,uVar9);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_044bb2bc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


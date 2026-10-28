// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation.<>c__DisplayClass184_0$$<BeginDishDelivery>g__Delivered|1
// address: 0x44d950c
// body: available
// range: 0x44d950c-0x44d9acb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d9aa8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d9aac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d9ab0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d9ab4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d9ab8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d9abc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d9ac0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44d9ac8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044d9ac4) */

void CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass184_0__<BeginDishDelivery>g__Delivered_1
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long *local_48;
  
  if ((DAT_09518310 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919f9b8);
    FUN_03f5c2a4(&DAT_091a0030);
    FUN_03f5c2a4(&DAT_091a8828);
    FUN_03f5c2a4(&DAT_091858e8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a298);
    FUN_03f5c2a4(&DAT_0917a8f0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091a95e8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09200bc0);
    DAT_09518310 = 1;
  }
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  local_48 = (long *)0x0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar1 & 1) != 0) {
    if (((*(long *)(param_4 + 0x18) == 0) || (*(long *)(param_4 + 0x10) == 0)) ||
       (lVar2 = CookOrder_Cooking_Implement_CookingCustomerView__Target
                          (*(long *)(param_4 + 0x10),
                           *(undefined4 *)(*(long *)(param_4 + 0x18) + 0x20),0), lVar2 == 0))
    goto LAB_044d9aa8;
    uVar8 = UnityEngine_Transform__get_position(lVar2,0);
    CookOrder_Cooking_Implement_CookingFeedback__Particle(DAT_09200bc0,0,0);
    if (DAT_09518261 == '\0') {
      FUN_03f5c2a4(&DAT_09182d78);
      DAT_09518261 = '\x01';
    }
    plVar7 = (long *)**(undefined8 **)(DAT_09182d78 + 0xb8);
    if (plVar7 != (long *)0x0) {
      lVar2 = *plVar7;
      uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_091858e8) {
            puVar3 = (undefined8 *)(lVar2 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_044d96d4;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_091858e8,4);
LAB_044d96d4:
      (*(code *)*puVar3)(uVar8,param_2,param_3,plVar7,puVar3[1]);
    }
    if (*(long *)(param_4 + 0x10) == 0) goto LAB_044d9aa8;
    CookOrder_Cooking_Implement_CookingCustomerView__CompleteDish
              (*(long *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18),
               *(undefined4 *)(param_4 + 0x20),0);
    lVar2 = *(long *)(param_4 + 0x28);
    if (((lVar2 == 0) || (*(long *)(lVar2 + 0x2d8) == 0)) ||
       (lVar4 = *(long *)(*(long *)(lVar2 + 0x2d8) + 0x118), lVar4 == 0)) goto LAB_044d9aa8;
    uVar8 = *(undefined4 *)(param_4 + 0x30);
    uVar6 = CookingGraph_CookingLevelSimulation__ReadSnapshot(lVar4,0);
    CookOrder_Cooking_Implement_CookingGameplayPresentation__TryLeaveCustomer(lVar2,uVar8,uVar6,0);
  }
  if ((*(long *)(param_4 + 0x28) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_4 + 0x28) + 0x90), lVar2 != 0)) {
    FUN_053ebe0c(lVar2,*(undefined8 *)(param_4 + 0x38),DAT_091a8828);
    uVar6 = *(undefined8 *)(param_4 + 0x38);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_4 + 0x38) == 0) goto LAB_044d9aa8;
      uVar6 = UnityEngine_Component__get_gameObject(*(long *)(param_4 + 0x38),0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      UnityEngine_Object__Destroy(uVar6,0);
    }
    if (((*(long *)(param_4 + 0x28) != 0) && (lVar2 = *(long *)(param_4 + 0x18), lVar2 != 0)) &&
       (lVar4 = *(long *)(*(long *)(param_4 + 0x28) + 0x2f0), lVar4 != 0)) {
      uStack_58 = *(undefined8 *)(lVar2 + 0x18);
      local_60 = *(undefined8 *)(lVar2 + 0x10);
      local_50 = *(undefined8 *)(lVar2 + 0x20);
      CookOrder_Cooking_Implement_CookingSceneBindings__UnbindEndpoint(lVar4,&local_60);
      if ((*(long *)(param_4 + 0x28) != 0) &&
         (lVar2 = *(long *)(*(long *)(param_4 + 0x28) + 0x328), lVar2 != 0)) {
        FUN_06fd9970(lVar2,*(undefined8 *)(param_4 + 0x40),DAT_091a0030);
        if ((*(long *)(param_4 + 0x28) != 0) &&
           (lVar2 = *(long *)(*(long *)(param_4 + 0x28) + 0x330), lVar2 != 0)) {
          FUN_06fcb930(lVar2,*(undefined8 *)(param_4 + 0x40),DAT_0919f9b8);
          lVar2 = *(long *)(param_4 + 0x28);
          if (lVar2 != 0) {
            *(int *)(lVar2 + 700) = *(int *)(lVar2 + 700) + -1;
            CookOrder_Cooking_Implement_CookingGameplayPresentation__ReflowShelves(lVar2,0);
            if (*(long *)(param_4 + 0x28) != 0) {
              uVar6 = *(undefined8 *)(*(long *)(param_4 + 0x28) + 0x2d8);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar1 = UnityEngine_Object__op_Implicit(uVar6,0);
              if ((uVar1 & 1) == 0) {
                return;
              }
              if ((*(long *)(param_4 + 0x28) != 0) &&
                 (lVar2 = *(long *)(*(long *)(param_4 + 0x28) + 0x2d8), lVar2 != 0)) {
                lVar2 = *(long *)(lVar2 + 0x128);
                if (lVar2 == 0) {
                  return;
                }
                lVar2 = *(long *)(lVar2 + 0x20);
                if ((lVar2 != 0) &&
                   (plVar7 = (long *)CookingGraph_Execution_CookingFlightCoordinator__get_Faults
                                               (lVar2,0), plVar7 != (long *)0x0)) {
                  lVar2 = *plVar7;
                  uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
                  if (uVar1 != 0) {
                    piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar5 + -2) == DAT_0917a298) {
                        puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
                        goto LAB_044d98fc;
                      }
                      uVar1 = uVar1 - 1;
                      piVar5 = piVar5 + 4;
                    } while (uVar1 != 0);
                  }
                  puVar3 = (undefined8 *)FUN_03f95da8(plVar7,DAT_0917a298,0);
LAB_044d98fc:
                  local_48 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
                  do {
                    plVar7 = local_48;
                    if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar2 = *local_48;
                    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    if (uVar1 != 0) {
                      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar5 + -2) == DAT_09185b10) {
                          puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
                          goto LAB_044d9978;
                        }
                        uVar1 = uVar1 - 1;
                        piVar5 = piVar5 + 4;
                      } while (uVar1 != 0);
                    }
                    puVar3 = (undefined8 *)FUN_03f95da8(local_48,DAT_09185b10,0);
LAB_044d9978:
                    uVar1 = (*(code *)*puVar3)(plVar7,puVar3[1]);
                    plVar7 = local_48;
                    if ((uVar1 & 1) == 0) {
                      if (local_48 == (long *)0x0) {
                        return;
                      }
                      lVar2 = *local_48;
                      uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
                      if (uVar1 == 0) goto LAB_044d9a60;
                      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                      goto LAB_044d9a48;
                    }
                    if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar2 = *local_48;
                    uVar1 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    if (uVar1 != 0) {
                      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar5 + -2) == DAT_0917a8f0) {
                          puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
                          goto LAB_044d99dc;
                        }
                        uVar1 = uVar1 - 1;
                        piVar5 = piVar5 + 4;
                      } while (uVar1 != 0);
                    }
                    puVar3 = (undefined8 *)FUN_03f95da8(local_48,DAT_0917a8f0,0);
LAB_044d99dc:
                    uVar6 = (*(code *)*puVar3)(plVar7,puVar3[1]);
                    if (*(long *)(param_4 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550(uVar6,uVar6);
                    }
                    lVar2 = *(long *)(*(long *)(param_4 + 0x28) + 0x2d8);
                    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550(uVar6,uVar6);
                    }
                    lVar2 = *(long *)(lVar2 + 0x128);
                    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550(uVar6,uVar6);
                    }
                    lVar2 = *(long *)(lVar2 + 0x20);
                    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550(0,uVar6);
                    }
                    CookingGraph_Execution_CookingFlightCoordinator__Retry(lVar2,uVar6,0);
                  } while( true );
                }
              }
            }
          }
        }
      }
    }
  }
LAB_044d9aa8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar1 = uVar1 - 1;
    piVar5 = piVar5 + 4;
    if (uVar1 == 0) break;
LAB_044d9a48:
    if (*(long *)(piVar5 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_044d9a7c;
    }
  }
LAB_044d9a60:
  puVar3 = (undefined8 *)FUN_03f95da8(local_48,DAT_09185a58,0);
LAB_044d9a7c:
  (*(code *)*puVar3)(plVar7,puVar3[1]);
  return;
}


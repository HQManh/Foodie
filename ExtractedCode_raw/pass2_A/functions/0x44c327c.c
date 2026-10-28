// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayController$$OnApplyBoosterEffect
// address: 0x44c327c
// body: available
// range: 0x44c327c-0x44c3653 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c363c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c3640 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c3644 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c3648 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c364c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c3650 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayController__OnApplyBoosterEffect
               (long *param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined2 local_4c [6];
  undefined4 local_40;
  ulong local_38;
  
  if ((DAT_0951826a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091b6b68);
    FUN_03f5c2a4(&DAT_091b6a48);
    FUN_03f5c2a4(&DAT_091b6b70);
    FUN_03f5c2a4(&DAT_091b6b78);
    FUN_03f5c2a4(&DAT_091e6e28);
    FUN_03f5c2a4(&DAT_0918f010);
    FUN_03f5c2a4(&DAT_091e6e30);
    FUN_03f5c2a4(&DAT_0918f018);
    DAT_0951826a = 1;
  }
  local_38 = 0;
  local_40 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0918f010);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x18) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x18),param_3);
    plVar6 = (long *)(lVar2 + 0x20);
    *plVar6 = param_2;
    thunk_FUN_03f5d7b8(plVar6,param_2);
    *(long *)(lVar2 + 0x28) = (long)param_1;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x28),param_1);
    lVar7 = *plVar6;
    local_4c[0] = 0;
    FUN_05c290f8(local_4c,0,DAT_091b6a48);
    if (lVar7 != 0) {
      *(undefined2 *)(lVar7 + 0x10) = local_4c[0];
      *(undefined1 *)(lVar2 + 0x10) = 0;
      if (*(long *)(lVar2 + 0x20) != 0) {
        uVar3 = (**(code **)(*param_1 + 0x238))
                          (param_1,*(undefined4 *)(*(long *)(lVar2 + 0x20) + 0x14),
                           *(undefined8 *)(*param_1 + 0x240));
        if ((uVar3 & 1) == 0) {
          if (*(char *)(lVar2 + 0x10) == '\0') {
            lVar7 = *(long *)(lVar2 + 0x18);
            *(undefined1 *)(lVar2 + 0x10) = 1;
            if (lVar7 != 0) {
              (**(code **)(lVar7 + 0x18))
                        (*(undefined8 *)(lVar7 + 0x40),*plVar6,*(undefined8 *)(lVar7 + 0x28));
            }
          }
          return;
        }
        if (*plVar6 != 0) {
          if (*(int *)(*plVar6 + 0x14) != 2) {
            local_38 = CookOrder_Cooking_Implement_CookingGameplayController__PackageBooster();
            if ((local_38 & 0xff) == 0) {
              uVar4 = 0;
            }
            else {
              lVar7 = param_1[0x23];
              uVar1 = FUN_05c30b30(&local_38,DAT_091b6b78);
              if (lVar7 == 0) goto LAB_044c363c;
              uVar4 = CookingGraph_CookingLevelSimulation__PlanBooster
                                (lVar7,uVar1,0xffffffff,0xffffffff,0);
            }
            if ((local_38 >> 0x20 == 1) && ((local_38 & 0xff) != 0)) {
              uVar5 = 0;
            }
            else {
              if (param_1[0x25] == 0) goto LAB_044c363c;
              uVar5 = CookingGraph_CookingLevelSession__Hold(param_1[0x25],0);
            }
            *(undefined8 *)(lVar2 + 0x30) = uVar5;
            thunk_FUN_03f5d7b8();
            if (param_1[0x23] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar3 = CookingGraph_CookingLevelSimulation__TryApplyBooster(param_1[0x23],uVar4,0);
            if ((uVar3 & 1) == 0) {
              CookOrder_Cooking_Implement_CookingGameplayController_<>c__DisplayClass53_0__<OnApplyBoosterEffect>g__Complete_1
                        (lVar2);
              return;
            }
            lVar7 = *plVar6;
            local_4c[0] = 0;
            FUN_05c290f8(local_4c,1,DAT_091b6a48);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            *(undefined2 *)(lVar7 + 0x10) = local_4c[0];
            if (param_1[0x1b] != 0) {
              CookOrder_Cooking_Implement_CookingGameplayPresentation__PlayBooster
                        (param_1[0x1b],uVar4,0);
              if ((local_38 >> 0x20 == 1) && ((local_38 & 0xff) != 0)) {
                CookOrder_Cooking_Implement_CookingGameplayController_<>c__DisplayClass53_0__<OnApplyBoosterEffect>g__Complete_1
                          (lVar2);
                return;
              }
              lVar7 = param_1[0x1b];
              uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
              System_Action___ctor(uVar4,lVar2,DAT_091e6e28,0);
              if (lVar7 != 0) {
                CookOrder_Cooking_Implement_CookingGameplayPresentation__CompleteAfterChoreography
                          (lVar7,uVar4,0);
                return;
              }
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar7 = thunk_FUN_03f9944c(DAT_0918f018);
          System_Object___ctor(lVar7,0);
          if (lVar7 != 0) {
            plVar6 = (long *)(lVar7 + 0x18);
            *plVar6 = lVar2;
            thunk_FUN_03f5d7b8(plVar6,lVar2);
            if (*plVar6 != 0) {
              param_1[0x21] = *(long *)(*plVar6 + 0x20);
              thunk_FUN_03f5d7b8(param_1 + 0x21);
              if (param_1[0x25] != 0) {
                lVar2 = CookingGraph_CookingLevelSession__Hold(param_1[0x25],0);
                param_1[0x20] = lVar2;
                thunk_FUN_03f5d7b8(param_1 + 0x20,lVar2);
                *(long *)(lVar7 + 0x10) = param_1[0x20];
                thunk_FUN_03f5d7b8();
                lVar2 = param_1[0x1b];
                uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
                System_Action___ctor(uVar4,lVar7,DAT_091e6e30,0);
                if (lVar2 != 0) {
                  CookOrder_Cooking_Implement_CookingGameplayPresentation__BeginDeepPick
                            (lVar2,uVar4,0);
                  return;
                }
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
            }
          }
        }
      }
    }
  }
LAB_044c363c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


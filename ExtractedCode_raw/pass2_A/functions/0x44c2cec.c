// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayController$$Rescue
// address: 0x44c2cec
// body: available
// range: 0x44c2cec-0x44c2f1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c2f14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c2f18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c2f1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayController__Rescue(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  if ((DAT_09518267 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_091e6e18);
    FUN_03f5c2a4(&DAT_0918f008);
    DAT_09518267 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918f008);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x28) = (long)param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x28),param_1);
    if ((((param_1[0x23] != 0) && (param_1[0x2b] == *(long *)(param_1[0x23] + 0x40))) ||
        ((**(code **)(*param_1 + 0x288))(param_1,0,*(undefined8 *)(*param_1 + 0x290)),
        (int)param_1[10] != 4)) ||
       (((lVar4 = param_1[0x23], lVar4 == 0 || ((char)param_1[0x1c] != '\0')) ||
        ((*(char *)(lVar4 + 0x38) != '\0' || (*(int *)(lVar4 + 0x188) != 2)))))) {
      return;
    }
    plVar6 = (long *)(lVar1 + 0x18);
    *plVar6 = lVar4;
    thunk_FUN_03f5d7b8(plVar6);
    if (*plVar6 != 0) {
      uVar2 = CookingGraph_CookingLevelSimulation__PlanSaveMe(*plVar6,0);
      if (param_1[0x25] != 0) {
        lVar4 = CookingGraph_CookingLevelSession__Hold(param_1[0x25],0);
        plVar7 = (long *)(lVar1 + 0x20);
        *plVar7 = lVar4;
        thunk_FUN_03f5d7b8(plVar7,lVar4);
        if (*(long *)(lVar1 + 0x18) != 0) {
          uVar3 = CookingGraph_CookingLevelSimulation__TryApplySaveMe
                            (*(long *)(lVar1 + 0x18),uVar2,1,0);
          if ((uVar3 & 1) == 0) {
            if (*plVar7 != 0) {
              FUN_039afee4(0,DAT_09185a58);
              if (*plVar6 != 0) {
                CookingGraph_CookingLevelSimulation__DeclineSaveMe(*plVar6,0);
                if (param_1[8] != 0) {
                  *(undefined4 *)(param_1[8] + 0x10) = 1;
                  *(undefined1 *)(param_1 + 0x29) = 1;
                  return;
                }
              }
            }
          }
          else {
            (**(code **)(*param_1 + 0x288))(param_1,1,*(undefined8 *)(*param_1 + 0x290));
            if (*plVar6 != 0) {
              lVar5 = *(long *)(*plVar6 + 0x40);
              lVar4 = param_1[0x1b];
              *(undefined2 *)(param_1 + 0x29) = 0;
              *(undefined1 *)(lVar1 + 0x10) = 0;
              param_1[0x2b] = lVar5;
              if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              CookOrder_Cooking_Implement_CookingGameplayPresentation__PlayRescue(lVar4,uVar2,0);
              lVar4 = param_1[0x1b];
              uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
              System_Action___ctor(uVar2,lVar1,DAT_091e6e18,0);
              if (lVar4 != 0) {
                CookOrder_Cooking_Implement_CookingGameplayPresentation__CompleteAfterChoreography
                          (lVar4,uVar2,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


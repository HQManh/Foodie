// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$TickDrainedRescue
// address: 0x42347d0
// body: available
// range: 0x42347d0-0x4234b13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42349e0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4234b10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GridIngController__TickDrainedRescue(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  int local_44;
  
  if ((DAT_09516ddb & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091adb20);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09213cc8);
    FUN_03f5c2a4(&DAT_09213cc0);
    DAT_09516ddb = 1;
  }
  lVar5 = **(long **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar5,0);
  lVar4 = 0;
  if ((uVar1 & 1) != 0) {
    if (lVar5 == 0) goto LAB_04234b10;
    lVar4 = AnhPD_FoodOrder_MessyController__get_Spawner(lVar5,0);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar5,0);
  lVar6 = 0;
  if ((uVar1 & 1) != 0) {
    if (lVar5 == 0) goto LAB_04234b10;
    lVar6 = AnhPD_FoodOrder_MessyController__get_LineHandle(lVar5,0);
  }
  if ((param_2 & 1) == 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(lVar4,0);
    if ((uVar1 & 1) != 0) {
      if (lVar4 == 0) {
LAB_04234b10:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = AnhPD_FoodOrder_IngredientSpawnerController__get_IsDrained(lVar4,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Implicit(lVar6,0);
        if ((uVar1 & 1) != 0) {
          if (lVar6 == 0) goto LAB_04234b10;
          lVar6 = AnhPD_FoodOrder_FCustomerLineHandle__GetActiveUnservedRecipes(lVar6,0);
          if (((lVar6 != 0) && (0 < *(int *)(lVar6 + 0x18))) &&
             (uVar1 = AnhPD_FoodOrder_GridIngController__AnyGridItemHasMove(), (uVar1 & 1) == 0)) {
            if (2 < *(int *)(param_1 + 0xfc)) {
              return;
            }
            fVar9 = *(float *)(param_1 + 0xf8);
            fVar7 = (float)UnityEngine_Time__get_time(0);
            if (fVar9 < 0.0) {
              *(float *)(param_1 + 0xf8) = fVar7;
              uVar2 = AnhPD_FoodOrder_GridIngController__ReadRescuePlan(param_1,lVar5);
              *(undefined8 *)(param_1 + 0x100) = uVar2;
            }
            else {
              if (fVar7 - *(float *)(param_1 + 0xf8) < 3.0) {
                return;
              }
              uVar2 = AnhPD_FoodOrder_GridIngController__ReadRescuePlan(param_1,lVar5);
              uVar1 = System_String__op_Inequality(uVar2,*(undefined8 *)(param_1 + 0x100),0);
              if ((uVar1 & 1) == 0) {
                *(undefined4 *)(param_1 + 0xf8) = 0xbf800000;
                uVar3 = DAT_09535420;
                if (*(long *)(param_1 + 0x110) != 0) {
                  if (*(int *)(*(long *)(param_1 + 0x110) + 0x18) != 0) {
                    local_44 = *(int *)(param_1 + 0xfc) + 1;
                    *(int *)(param_1 + 0xfc) = local_44;
                    uVar3 = FUN_03f5c42c(uVar3,&local_44);
                    uVar2 = System_String__Format(DAT_09213cc0,uVar3,uVar2,0);
                    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_091835d0);
                    }
                    UnityEngine_Debug__LogWarning(uVar2,0);
                    AnhPD_FoodOrder_IngredientSpawnerController__RefillDrainedBelt
                              (lVar4,*(undefined8 *)(param_1 + 0x110),0);
                    return;
                  }
                  if (*(char *)(param_1 + 0x108) == '\0') {
                    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    UnityEngine_Debug__LogError(DAT_09213cc8,0);
                  }
                  *(undefined1 *)(param_1 + 0x108) = 1;
                  return;
                }
                goto LAB_04234b10;
              }
              uVar8 = UnityEngine_Time__get_time(0);
              *(undefined4 *)(param_1 + 0xf8) = uVar8;
              *(undefined8 *)(param_1 + 0x100) = uVar2;
            }
            thunk_FUN_03f5d7b8(param_1 + 0x100,uVar2);
            return;
          }
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x108) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0xbf800000;
  return;
}


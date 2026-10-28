// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$TickPromoteShifts
// address: 0x40dcea4
// body: available
// range: 0x40dcea4-0x40dd227 inclusive
// range: 0x40dd22c-0x40dd22f inclusive
// range: 0x40dd234-0x40dd237 inclusive
// range: 0x40dd23c-0x40dd23f inclusive
// range: 0x40dd244-0x40dd247 inclusive
// range: 0x40dd24c-0x40dd24f inclusive
// range: 0x40dd254-0x40dd257 inclusive
// range: 0x40dd25c-0x40dd25f inclusive
// range: 0x40dd368-0x40dd397 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40dd224 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dd22c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dd234 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dd23c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dd244 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dd24c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dd254 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dd25c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dd394 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorGrid__TickPromoteShifts
               (float param_1,float param_2,float param_3,long param_4)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  long local_a0;
  
  if ((DAT_09516061 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2720);
    FUN_03f5c2a4(&DAT_091a2728);
    FUN_03f5c2a4(&DAT_091a2730);
    FUN_03f5c2a4(&DAT_091abe78);
    FUN_03f5c2a4(&DAT_091b22c0);
    FUN_03f5c2a4(&DAT_091b22c8);
    FUN_03f5c2a4(&DAT_091b22d0);
    DAT_09516061 = 1;
  }
  local_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  local_a0 = 0;
  if (*(long *)(param_4 + 0x60) != 0) {
    iVar6 = *(int *)(*(long *)(param_4 + 0x60) + 0x18) + -1;
    if (-1 < iVar6) {
      do {
        if ((*(long *)(param_4 + 0x60) == 0) ||
           (lVar3 = FUN_057e0998(*(long *)(param_4 + 0x60),iVar6,DAT_091b22d0), lVar3 == 0))
        goto LAB_040dd394;
        *(float *)(lVar3 + 0x28) = *(float *)(lVar3 + 0x28) + param_1;
        uVar4 = AnhPD_FoodOrder_ConveyorGrid__IsShiftAlive(lVar3,lVar3);
        if (((uVar4 & 1) == 0) || (5.0 < *(float *)(lVar3 + 0x28))) {
LAB_040dcfe0:
          AnhPD_FoodOrder_ConveyorGrid__EndPromoteShift(uVar4,lVar3);
          if (*(long *)(param_4 + 0x60) == 0) goto LAB_040dd394;
          FUN_057e251c(*(long *)(param_4 + 0x60),iVar6,DAT_091b22c0);
        }
        else if (*(char *)(lVar3 + 0x24) == '\0') {
          if (*(long *)(lVar3 + 0x18) == 0) goto LAB_040dd394;
          FUN_057e185c(&local_c8,*(long *)(lVar3 + 0x18),DAT_091abe78);
          local_b0 = local_c8;
          uVar8 = 1;
          local_c8 = 0;
          puStack_a8 = puStack_c0;
          local_a0 = local_b8;
          puStack_c0 = &local_b0;
          while (uVar4 = FUN_071bd28c(&local_b0,DAT_091a2728), lVar7 = local_a0, (uVar4 & 1) != 0) {
            if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(long *)(local_a0 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar5 = UnityEngine_Component__get_transform(*(long *)(local_a0 + 0x10),0);
            fVar9 = (float)AnhPD_FoodOrder_ConveyorGrid__LiftPosition(param_4,lVar3,lVar7);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *(long *)(param_4 + 0x10);
            fVar11 = param_2;
            fVar12 = param_3;
            UnityEngine_Transform__get_position(lVar5,0);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            AnhPD_FoodOrder_IngredientSpawnerController__StepToward(lVar7,0);
            UnityEngine_Transform__set_position(lVar5,0);
            fVar10 = (float)UnityEngine_Transform__get_position(lVar5,0);
            fVar11 = fVar11 - param_2;
            param_3 = fVar12 - param_3;
            param_2 = param_3 * param_3;
            if (0.0001 < param_2 + (fVar10 - fVar9) * (fVar10 - fVar9) + fVar11 * fVar11) {
              uVar8 = 0;
            }
          }
          FUN_071bd288(&local_b0,DAT_091a2720);
          uVar2 = AnhPD_FoodOrder_ConveyorGrid__IsRunSettled(param_4,lVar3);
          if ((uVar2 & uVar8) != 0) {
            *(undefined1 *)(lVar3 + 0x24) = 1;
            if (*(long *)(lVar3 + 0x10) == 0) goto LAB_040dd394;
            FUN_057e185c(&local_c8,*(long *)(lVar3 + 0x10),DAT_091abe78);
            local_b0 = local_c8;
            local_c8 = 0;
            puStack_a8 = puStack_c0;
            local_a0 = local_b8;
            puStack_c0 = &local_b0;
            while (uVar4 = FUN_071bd28c(&local_b0,DAT_091a2728), lVar7 = local_a0, (uVar4 & 1) != 0)
            {
              if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if ((*(int *)(local_a0 + 0x24) == 0) &&
                 (uVar4 = AnhPD_FoodOrder_ConveyorGrid__IsSlotAlive(local_a0), (uVar4 & 1) != 0)) {
                if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                AnhPD_FoodOrder_IngredientConveyorItem__SuspendTap(*(long *)(lVar7 + 0x10),1,0);
              }
            }
            FUN_071bd288(&local_b0,DAT_091a2720);
            if (*(long *)(lVar3 + 0x18) == 0) goto LAB_040dd394;
            FUN_057e185c(&local_c8,*(long *)(lVar3 + 0x18),DAT_091abe78);
            local_b0 = local_c8;
            local_c8 = 0;
            puStack_a8 = puStack_c0;
            local_a0 = local_b8;
            puStack_c0 = &local_b0;
            while (uVar4 = FUN_071bd28c(&local_b0,DAT_091a2728), (uVar4 & 1) != 0) {
              if (local_a0 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              if (*(long *)(local_a0 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              AnhPD_FoodOrder_IngredientConveyorItem__SetBusy(*(long *)(local_a0 + 0x10),0,0);
            }
            FUN_071bd288(&local_b0,DAT_091a2720);
          }
        }
        else {
          uVar4 = AnhPD_FoodOrder_ConveyorGrid__IsSinkSettled(param_4,lVar3);
          if ((uVar4 & 1) != 0) goto LAB_040dcfe0;
        }
        bVar1 = 0 < iVar6;
        iVar6 = iVar6 + -1;
      } while (bVar1);
    }
    return;
  }
LAB_040dd394:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


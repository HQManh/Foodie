// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$MoveVisuals
// address: 0x40dcc18
// body: available
// range: 0x40dcc18-0x40dce17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40dcdfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dce00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dce04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dce08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dce0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dce10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40dce14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorGrid__MoveVisuals
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_0951604c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2720);
    FUN_03f5c2a4(&DAT_091a2728);
    FUN_03f5c2a4(&DAT_091a2730);
    FUN_03f5c2a4(&DAT_091abe78);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951604c = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (*(long *)(param_4 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_98,*(long *)(param_4 + 0x20),DAT_091abe78);
  local_70 = local_88;
  uStack_78 = puStack_90;
  local_80 = local_98;
  local_98 = 0;
  puStack_90 = &local_80;
  while( true ) {
    do {
      do {
        uVar2 = FUN_071bd28c(&local_80,DAT_091a2728);
        lVar1 = local_70;
        if ((uVar2 & 1) == 0) {
          FUN_071bd288(&local_80,DAT_091a2720);
          return;
        }
        if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar4 = *(undefined8 *)(local_70 + 0x10);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
      } while ((uVar2 & 1) == 0);
      lVar3 = *(long *)(lVar1 + 0x10);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    } while (*(char *)(lVar3 + 0xd1) != '\0');
    lVar3 = UnityEngine_Component__get_transform(lVar3,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = *(long *)(param_4 + 0x10);
    uVar6 = UnityEngine_Transform__get_position(lVar3,0);
    uVar8 = param_2;
    uVar9 = param_3;
    uVar7 = AnhPD_FoodOrder_ConveyorGrid__CellCenter(param_4,lVar1);
    if (lVar5 == 0) break;
    AnhPD_FoodOrder_IngredientSpawnerController__StepToward
              (uVar6,param_2,param_3,uVar7,uVar8,uVar9,param_1,lVar5,0);
    UnityEngine_Transform__set_position(lVar3,0);
    if (*(long *)(param_4 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    AnhPD_FoodOrder_IngredientConveyorItem__SetSortingOrder
              (*(long *)(lVar1 + 0x10),
               *(int *)(*(long *)(param_4 + 0x10) + 0xc4) + *(int *)(lVar1 + 0x24),0);
    AnhPD_FoodOrder_ConveyorGrid__RevealIfSettledAtFront(param_4,lVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


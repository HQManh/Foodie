// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorIngredientSource$$TakePendingFromBundle
// address: 0x40e43a4
// body: available
// range: 0x40e43a4-0x40e457b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e4574 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e4578 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_ConveyorIngredientSource__TakePendingFromBundle
          (undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  
  if ((DAT_0951607b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917df80);
    FUN_03f5c2a4(&DAT_091e69b0);
    FUN_03f5c2a4(&DAT_091e69b8);
    FUN_03f5c2a4(&DAT_0918ee00);
    DAT_0951607b = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918ee00);
  AnhPD_FoodOrder_ConveyorIngredientSource_<>c__DisplayClass23_0___ctor(lVar2,0);
  if (lVar2 != 0) {
    puVar8 = (undefined8 *)(lVar2 + 0x10);
    *puVar8 = param_2;
    thunk_FUN_03f5d7b8(puVar8,param_2);
    uVar3 = DAT_0917df80;
    *param_3 = 0;
    *param_4 = 0xffffffff;
    uVar3 = thunk_FUN_03f9944c(uVar3);
    FUN_05d78cfc(uVar3,lVar2,DAT_091e69b0,0);
    lVar4 = AnhPD_FoodOrder_ConveyorIngredientSource__FindFirst(param_1,uVar3);
    plVar7 = (long *)(lVar2 + 0x18);
    *plVar7 = lVar4;
    thunk_FUN_03f5d7b8(plVar7,lVar4);
    if (*plVar7 == 0) {
      return 0;
    }
    uVar1 = AnhPD_FoodOrder_ConveyorIngredientSource__IndexOfId(*plVar7,*puVar8);
    if (*plVar7 != 0) {
      plVar9 = (long *)(*plVar7 + 0x10);
      lVar4 = *plVar9;
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar3 = *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
        lVar4 = AnhPD_FoodOrder_ConveyorIngredientSource__WithoutAt();
        *plVar9 = lVar4;
        thunk_FUN_03f5d7b8(plVar9,lVar4);
        lVar4 = *plVar7;
        if ((lVar4 != 0) && (*(long *)(lVar4 + 0x10) != 0)) {
          lVar6 = *(long *)(*(long *)(lVar4 + 0x10) + 0x18);
          if (lVar6 == 0) {
            uVar5 = thunk_FUN_03f9944c(DAT_0917df80);
            FUN_05d78cfc(uVar5,lVar2,DAT_091e69b8,0);
            AnhPD_FoodOrder_ConveyorIngredientSource__RemoveFirst(param_1,uVar5);
            lVar2 = *(long *)(lVar2 + 0x18);
            if (lVar2 == 0) goto LAB_040e4574;
            *param_3 = *(undefined4 *)(lVar2 + 0x28);
            *param_4 = *(undefined4 *)(lVar2 + 0x38);
          }
          else {
            *(undefined4 *)(lVar4 + 0x20) = 1;
            *(int *)(lVar4 + 0x24) = (int)lVar6;
          }
          return uVar3;
        }
      }
    }
  }
LAB_040e4574:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


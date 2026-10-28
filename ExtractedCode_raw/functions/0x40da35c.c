// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorChainRopeView$$SideAnchorPair
// address: 0x40da35c
// body: available
// range: 0x40da35c-0x40da3cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40da3cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorChainRopeView__SideAnchorPair
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               long param_5,undefined4 *param_6,undefined4 *param_7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_4 != 0) && (param_5 != 0)) {
    iVar1 = *(int *)(param_4 + 0x20);
    iVar2 = *(int *)(param_5 + 0x20);
    uVar3 = AnhPD_FoodOrder_IngredientConveyorItem__SideAnchor
                      (*(undefined8 *)(param_4 + 0x10),iVar1 < iVar2,0);
    *param_6 = uVar3;
    param_6[1] = param_2;
    param_6[2] = param_3;
    uVar3 = AnhPD_FoodOrder_IngredientConveyorItem__SideAnchor
                      (*(undefined8 *)(param_5 + 0x10),iVar2 <= iVar1,0);
    *param_7 = uVar3;
    param_7[1] = param_2;
    param_7[2] = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$NormalScale
// address: 0x422d648
// body: available
// range: 0x422d648-0x422d70b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422d6f0 to 0x4224b28 AnhPD.FoodOrder.ListIngredientBoardView$$FitScale (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x422d708 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
AnhPD_FoodOrder_OrderIngredientList__NormalScale(uint param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar4 [16];
  
  if ((DAT_09516da0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ae388);
    FUN_03f5c2a4(&DAT_091add20);
    DAT_09516da0 = 1;
  }
  uVar2 = AnhPD_FoodOrder_OrderIngredientList__get_UsesSlots(param_2);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_2 + 0x70) != 0) {
      lVar3 = FUN_057e0998(*(long *)(param_2 + 0x70),param_3,DAT_091ae388);
      if ((*(long *)(param_2 + 0x98) != 0) &&
         (uVar1 = FUN_05796eb0(*(long *)(param_2 + 0x98),param_3,DAT_091add20), lVar3 != 0)) {
        AnhPD_FoodOrder_ListIngredientBoardView__FitScale(lVar3,uVar1);
        auVar4._4_4_ = extraout_var;
        auVar4._0_4_ = extraout_s0;
        auVar4._8_8_ = extraout_var_00;
        return auVar4;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return ZEXT416(param_1);
}


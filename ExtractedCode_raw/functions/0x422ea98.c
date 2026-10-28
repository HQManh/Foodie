// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$ResolveInputs
// address: 0x422ea98
// body: available
// range: 0x422ea98-0x422ebeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422ebe8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_OrderIngredientList__ResolveInputs
               (long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((DAT_09516daf & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af048);
    FUN_03f5c2a4(&DAT_091ad858);
    FUN_03f5c2a4(&DAT_091ad848);
    FUN_03f5c2a4(&DAT_091af618);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_0917c460);
    DAT_09516daf = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_0917c460);
  FUN_057808d4(uVar1,DAT_091ad848);
  if (param_1 != 0) {
    uVar2 = AnhPD_FoodOrder_LevelInfo__get_IngredientListShowsRaw(param_1,0);
    if ((uVar2 & 1) != 0) {
      AnhPD_FoodOrder_OrderIngredientList__ExpandToLeaves(param_1,param_2,param_3,uVar1);
    }
    lVar3 = AnhPD_FoodOrder_LevelInfo__GetDisplayConfig(param_1,param_2,0);
    if (param_4 != 0) {
      if ((lVar3 == 0) || (param_2 == 0)) goto LAB_0422ebe8;
      if ((*(int *)(lVar3 + 0x18) == *(int *)(param_2 + 0x18)) &&
         (FUN_057f7f98(param_4,param_3,DAT_091af048), param_5 != 0)) {
        FUN_057813d4(param_5,uVar1,DAT_091ad858);
      }
    }
    return lVar3;
  }
LAB_0422ebe8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


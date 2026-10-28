// rea decompile_all
// name: AnhPD.FoodOrder.RecipeConfigSO$$GetIngredientName
// address: 0x40ba4bc
// body: available
// range: 0x40ba4bc-0x40ba5d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ba5c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ba5cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ba5d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_RecipeConfigSO__GetIngredientName(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if ((DAT_09515f45 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3f80);
    FUN_03f5c2a4(&DAT_091a3f88);
    FUN_03f5c2a4(&DAT_091a3f90);
    FUN_03f5c2a4(&DAT_091af658);
    DAT_09515f45 = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_48,*(long *)(param_1 + 0x18),DAT_091af658);
  do {
    uVar2 = FUN_071bd28c(&local_48,DAT_091a3f88);
    lVar1 = local_38;
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      goto LAB_040ba59c;
    }
    if (local_38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = System_String__op_Equality(*(undefined8 *)(local_38 + 0x10),param_2,0);
  } while ((uVar3 & 1) == 0);
  if (*(long *)(lVar1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = CakeOrder_DataSO_ScriptableObjectWithId__get_LocalizedName(*(long *)(lVar1 + 0x20),0);
LAB_040ba59c:
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  FUN_071bd288(&local_48,DAT_091a3f80);
  return uVar4;
}


// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation.<>c__DisplayClass180_0$$<TryStart>b__1
// address: 0x44d9348
// body: available
// range: 0x44d9348-0x44d93bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44d93bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass180_0__<TryStart>b__1
               (long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  if (param_2 != 0) {
    uStack_28 = *(undefined8 *)(param_2 + 0x18);
    local_30 = *(undefined8 *)(param_2 + 0x10);
    local_20 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DishKey(&local_30,0);
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 != 0) {
      uStack_48 = *(undefined8 *)(lVar4 + 0x60);
      local_50 = *(undefined8 *)(lVar4 + 0x58);
      local_40 = *(undefined8 *)(lVar4 + 0x68);
      uVar3 = CookOrder_Cooking_Implement_CookingGameplayPresentation__DishKey(&local_50,0);
      uVar1 = System_String__op_Equality(uVar2,uVar3,0);
      return uVar1 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


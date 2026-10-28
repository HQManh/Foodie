// rea decompile_all
// name: Datpt.Cook_Order.IngredientItem.<>c__DisplayClass33_0$$<OnAppear>b__0
// address: 0x41ad300
// body: available
// range: 0x41ad300-0x41ad36f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ad36c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_IngredientItem_<>c__DisplayClass33_0__<OnAppear>b__0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    *(undefined4 *)(lVar2 + 0x3c) = 1;
    if (*(long *)(lVar2 + 0x50) != 0) {
      UnityEngine_Rendering_SortingGroup__set_sortingOrder(*(long *)(lVar2 + 0x50),1,0);
      plVar1 = *(long **)(param_1 + 0x10);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x428))(plVar1,1,*(undefined8 *)(*plVar1 + 0x430));
        lVar2 = *(long *)(param_1 + 0x18);
        if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x041ad360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
          return;
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


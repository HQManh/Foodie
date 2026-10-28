// rea decompile_all
// name: CakeOrder.BaseUI.UICurrencyCounterSummaryEndGame$$UpdateVisualAmount
// address: 0x42cff18
// body: available
// range: 0x42cff18-0x42cffa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42cff9c to 0x425a17c CakeOrder.UICurrencyCounter$$UpdateVisualAmount (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42cffa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_UICurrencyCounterSummaryEndGame__UpdateVisualAmount
               (float param_1,long param_2)

{
  long *plVar1;
  
  if ((DAT_09517398 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091f95f0);
    DAT_09517398 = 1;
  }
  if (param_1 == 0.0) {
    plVar1 = *(long **)(param_2 + 0x60);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x042cff80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x558))(plVar1,DAT_091f95f0,*(undefined8 *)(*plVar1 + 0x560));
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CakeOrder_UICurrencyCounter__UpdateVisualAmount(param_1,param_2,0);
  return;
}


// rea decompile_all
// name: AnhPD.FoodOrder.IngCellFinder$$get_HasClaims
// address: 0x4240ef0
// body: available
// range: 0x4240ef0-0x4240f67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4240f64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_IngCellFinder__get_HasClaims(long param_1)

{
  bool bVar1;
  
  if ((DAT_09516e2c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091aac18);
    DAT_09516e2c = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x30) + 0x18) < 1) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_04240f64;
      bVar1 = 0 < *(int *)(*(long *)(param_1 + 0x40) + 0x18);
    }
    else {
      bVar1 = true;
    }
    return bVar1;
  }
LAB_04240f64:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


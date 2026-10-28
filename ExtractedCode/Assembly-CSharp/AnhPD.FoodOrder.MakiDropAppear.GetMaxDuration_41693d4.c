// rea decompile_all
// name: AnhPD.FoodOrder.MakiDropAppear$$GetMaxDuration
// address: 0x41693d4
// body: available
// range: 0x41693d4-0x4169427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4169424 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AnhPD_FoodOrder_MakiDropAppear__GetMaxDuration(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = AnhPD_FoodOrder_MakiDropAppear__get_Drop();
  if ((*(long *)(param_1 + 0x30) != 0) && (lVar2 != 0)) {
    uVar1 = *(int *)(*(long *)(param_1 + 0x30) + 0x18) - 1;
    return *(float *)(lVar2 + 0x24) +
           *(float *)(lVar2 + 0x18) +
           *(float *)(lVar2 + 0x10) * (float)(int)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) + 0.5
    ;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


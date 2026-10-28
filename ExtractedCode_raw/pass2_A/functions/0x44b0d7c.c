// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$ShelfScale
// address: 0x44b0d7c
// body: available
// range: 0x44b0d7c-0x44b0e47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44b0e40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44b0e44 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float CookOrder_Cooking_Implement_CookingGameplayPresentation__ShelfScale
                (float param_1,long param_2,uint param_3)

{
  long lVar1;
  float fVar2;
  
  if (*(long *)(param_2 + 0x1a8) != 0) {
    lVar1 = *(long *)(param_2 + 0x110);
    if ((int)param_3 < *(int *)(*(long *)(param_2 + 0x1a8) + 0x18)) {
      if (lVar1 == 0) goto LAB_044b0e40;
      if (*(uint *)(lVar1 + 0x18) <= param_3) {
LAB_044b0e44:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar1 = lVar1 + (long)(int)param_3 * 0xc;
    }
    else {
      if (lVar1 == 0) goto LAB_044b0e40;
      if (*(int *)(lVar1 + 0x18) == 0) goto LAB_044b0e44;
    }
    fVar2 = *(float *)(lVar1 + 0x20);
    if (DAT_09515cf3 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf3 = '\x01';
    }
    return fVar2 * *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc) * param_1;
  }
LAB_044b0e40:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: FUN_03fd3c78
// address: 0x3fd3c78
// body: available
// range: 0x3fd3c78-0x3fd3d5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd3d5c to 0x89dbde0 <EXTERNAL>::exit (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd3c78(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_03fcb1c4(param_1 << 4);
  DAT_09748758 = 0;
  if (DAT_09535c60 == 0) {
    if (lVar1 == 0) {
      FUN_03fcb048("No space for mark stack\n");
      (*(code *)PTR_FUN_09515620)(0);
                    /* WARNING: Subroutine does not return */
      exit(1);
    }
    DAT_09535c68 = lVar1 + param_1 * 0x10;
    DAT_09535c60 = lVar1;
    DAT_09748708 = param_1;
  }
  else if (lVar1 == 0) {
    (*(code *)PTR_thunk_FUN_03fcb048_09515630)
              ("GC Warning: Failed to grow mark stack to %ld frames\n",param_1);
  }
  else {
    FUN_03fd3e3c(DAT_09535c60,DAT_09748708 << 4);
    DAT_09535c68 = lVar1 + param_1 * 0x10;
    DAT_09535c60 = lVar1;
    DAT_09748708 = param_1;
    if (DAT_09535be0 != 0) {
      FUN_03fcb51c("Grew mark stack to %lu frames\n",param_1);
    }
  }
  DAT_09535c70 = DAT_09535c60 + -0x10;
  return;
}


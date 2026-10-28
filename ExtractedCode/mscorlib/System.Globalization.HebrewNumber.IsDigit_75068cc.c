// rea decompile_all
// name: System.Globalization.HebrewNumber$$IsDigit
// address: 0x75068cc
// body: available
// range: 0x75068cc-0x7506997 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7506990 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7506994 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Globalization_HebrewNumber__IsDigit(ushort param_1)

{
  long *plVar1;
  long lVar2;
  
  if ((DAT_095216b7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185068);
    DAT_095216b7 = 1;
  }
  if (0x5cf < param_1) {
    if (*(int *)(DAT_09185068 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar1 = *(long **)(DAT_09185068 + 0xb8);
    if (param_1 <= *(ushort *)(plVar1 + 1)) {
      if (*(int *)(DAT_09185068 + 0xe4) == 0) {
        FUN_03f5c424();
        plVar1 = *(long **)(DAT_09185068 + 0xb8);
      }
      lVar2 = *plVar1;
      if (lVar2 != 0) {
        if ((uint)((ulong)param_1 - 0x5d0) < *(uint *)(lVar2 + 0x18)) {
          return -1 < *(short *)(lVar2 + ((ulong)param_1 - 0x5d0) * 4 + 0x22);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return param_1 == 0x27 || param_1 == 0x22;
}


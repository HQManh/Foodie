// rea decompile_all
// name: System.Globalization.UmAlQuraCalendar$$RealGetDaysInYear
// address: 0x753ab68
// body: available
// range: 0x753ab68-0x753ac07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x753ac00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x753ac04 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Globalization_UmAlQuraCalendar__RealGetDaysInYear(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  
  if ((DAT_095218c5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c5c0);
    DAT_095218c5 = 1;
  }
  if (*(int *)(DAT_0918c5c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = **(long **)(DAT_0918c5c0 + 0xb8);
  if (lVar4 != 0) {
    if (param_1 - 0x526U < *(uint *)(lVar4 + 0x18)) {
      iVar2 = 0;
      iVar5 = 0xc;
      uVar3 = *(uint *)(lVar4 + (long)(int)(param_1 - 0x526U) * 0x10 + 0x20);
      do {
        uVar1 = uVar3 & 1;
        uVar3 = (int)uVar3 >> 1;
        iVar5 = iVar5 + -1;
        iVar2 = uVar1 + iVar2 + 0x1d;
      } while (iVar5 != 0);
      return iVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


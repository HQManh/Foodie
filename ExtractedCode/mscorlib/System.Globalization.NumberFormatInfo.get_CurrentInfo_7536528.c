// rea decompile_all
// name: System.Globalization.NumberFormatInfo$$get_CurrentInfo
// address: 0x7536528
// body: available
// range: 0x7536528-0x753660f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75365ec to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x753660c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * System_Globalization_NumberFormatInfo__get_CurrentInfo(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((DAT_0952189c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091725c8);
    FUN_03f5c2a4(&DAT_09188a80);
    DAT_0952189c = 1;
  }
  lVar1 = System_Threading_Thread__get_CurrentThread(0);
  if ((lVar1 == 0) ||
     (plVar2 = (long *)System_Threading_Thread__get_CurrentCulture(lVar1,0), plVar2 == (long *)0x0))
  {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((char)plVar2[0x19] == '\0') {
    plVar4 = (long *)plVar2[6];
    thunk_FUN_03f6a5cc();
    if (plVar4 != (long *)0x0) {
      return plVar4;
    }
  }
  uVar3 = DAT_091725c8;
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x278))(plVar2,uVar3,*(undefined8 *)(*plVar2 + 0x280));
  if ((plVar2 != (long *)0x0) && (*plVar2 != DAT_09188a80)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar2);
  }
  return plVar2;
}


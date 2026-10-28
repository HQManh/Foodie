// rea decompile_all
// name: System.Globalization.DateTimeFormatInfo$$get_FullTimeSpanPositivePattern
// address: 0x750443c
// body: available
// range: 0x750443c-0x7504517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7504514 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_Globalization_DateTimeFormatInfo__get_FullTimeSpanPositivePattern(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_0952169e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188a80);
    FUN_03f5c2a4(&DAT_0921a0f8);
    FUN_03f5c2a4(&DAT_091f7cc8);
    DAT_0952169e = 1;
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    return *(long *)(param_1 + 0x148);
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x60) != '\0') {
      lVar3 = System_Globalization_CultureData__GetCultureData(*(undefined8 *)(lVar3 + 0x58),0,0);
    }
    lVar1 = thunk_FUN_03f9944c(DAT_09188a80);
    System_Globalization_NumberFormatInfo___ctor(lVar1,lVar3,0);
    if (lVar1 != 0) {
      uVar2 = System_String__Concat(DAT_0921a0f8,*(undefined8 *)(lVar1 + 0x38),DAT_091f7cc8,0);
      *(undefined8 *)(param_1 + 0x148) = uVar2;
      thunk_FUN_03f5d7b8(param_1 + 0x148,uVar2);
      return *(long *)(param_1 + 0x148);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


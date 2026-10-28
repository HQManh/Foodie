// rea decompile_all
// name: System.Globalization.DateTimeFormatInfo$$InitializeFormatFlags
// address: 0x75046f4
// body: available
// range: 0x75046f4-0x750482f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x750482c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_DateTimeFormatInfo__InitializeFormatFlags(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = System_Globalization_DateTimeFormatInfo__get_MonthNames();
  uVar4 = System_Globalization_DateTimeFormatInfo__internalGetGenitiveMonthNames(param_1,0);
  uVar5 = System_Globalization_DateTimeFormatInfo__get_AbbreviatedMonthNames(param_1);
  uVar6 = System_Globalization_DateTimeFormatInfo__internalGetGenitiveMonthNames(param_1,1);
  uVar7 = System_Globalization_DateTimeFormatInfoScanner__EqualStringArrays(uVar3,uVar4);
  if (((uVar7 & 1) == 0) ||
     (uVar7 = System_Globalization_DateTimeFormatInfoScanner__EqualStringArrays(uVar5,uVar6),
     (uVar7 & 1) == 0)) {
    uVar11 = 1;
  }
  else {
    uVar11 = 0;
  }
  uVar3 = System_Globalization_DateTimeFormatInfo__get_MonthNames(param_1);
  uVar4 = System_Globalization_DateTimeFormatInfo__internalGetGenitiveMonthNames(param_1,0);
  uVar5 = System_Globalization_DateTimeFormatInfo__get_AbbreviatedMonthNames(param_1);
  uVar6 = System_Globalization_DateTimeFormatInfo__internalGetGenitiveMonthNames(param_1,1);
  uVar1 = System_Globalization_DateTimeFormatInfoScanner__GetFormatFlagUseSpaceInMonthNames
                    (uVar3,uVar4,uVar5,uVar6);
  uVar3 = System_Globalization_DateTimeFormatInfo__get_DayNames(param_1);
  uVar4 = System_Globalization_DateTimeFormatInfo__get_AbbreviatedDayNames(param_1);
  uVar7 = System_Globalization_DateTimeFormatInfoScanner__ArrayElementsHaveSpace(uVar3);
  if (((uVar7 & 1) == 0) &&
     (uVar7 = System_Globalization_DateTimeFormatInfoScanner__ArrayElementsHaveSpace(uVar4),
     (uVar7 & 1) == 0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0x10;
  }
  plVar8 = *(long **)(param_1 + 0x78);
  if (plVar8 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
    uVar9 = 10;
    if (iVar2 != 8) {
      uVar9 = 0;
    }
    *(uint *)(param_1 + 0x144) = uVar1 | uVar11 | uVar10 | uVar9;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


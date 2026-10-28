// rea decompile_all
// name: System.Globalization.DateTimeFormatInfo$$InitializeOverridableProperties
// address: 0x7501a08
// body: available
// range: 0x7501a08-0x7501b87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7501b80 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7501b84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_DateTimeFormatInfo__InitializeOverridableProperties
               (long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (*(int *)(param_1 + 0x80) == -1) {
    if (param_2 == 0) goto LAB_07501b84;
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x38);
  }
  if (*(int *)(param_1 + 0x84) == -1) {
    if (param_2 == 0) goto LAB_07501b84;
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x3c);
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    if (param_2 == 0) goto LAB_07501b84;
    *(long *)(param_1 + 0x38) = *(long *)(param_2 + 0x10);
    thunk_FUN_03f5d7b8();
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    if (param_2 == 0) goto LAB_07501b84;
    *(long *)(param_1 + 0x40) = *(long *)(param_2 + 0x18);
    thunk_FUN_03f5d7b8();
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    if (param_2 == 0) goto LAB_07501b84;
    *(long *)(param_1 + 0x60) = *(long *)(param_2 + 0x20);
    thunk_FUN_03f5d7b8();
  }
  plVar3 = (long *)(param_1 + 0x48);
  if (*plVar3 == 0) {
    if (param_2 == 0) goto LAB_07501b84;
    lVar1 = System_Globalization_CultureData__DateSeparator(param_2,param_3,0);
    *plVar3 = lVar1;
    thunk_FUN_03f5d7b8(plVar3,lVar1);
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    uVar2 = System_Globalization_CultureData__get_LongTimes(*(long *)(param_1 + 0x10),0);
    *(undefined8 *)(param_1 + 0x118) = uVar2;
    thunk_FUN_03f5d7b8(param_1 + 0x118,uVar2);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = System_Globalization_CultureData__get_ShortTimes(*(long *)(param_1 + 0x10),0);
      *(undefined8 *)(param_1 + 0x110) = uVar2;
      thunk_FUN_03f5d7b8(param_1 + 0x110,uVar2);
      if (param_2 != 0) {
        uVar2 = System_Globalization_CultureData__LongDates(param_2,param_3,0);
        *(undefined8 *)(param_1 + 0x108) = uVar2;
        thunk_FUN_03f5d7b8(param_1 + 0x108,uVar2);
        uVar2 = System_Globalization_CultureData__ShortDates(param_2,param_3,0);
        *(undefined8 *)(param_1 + 0x100) = uVar2;
        thunk_FUN_03f5d7b8(param_1 + 0x100,uVar2);
        uVar2 = System_Globalization_CultureData__YearMonths(param_2,param_3,0);
        *(undefined8 *)(param_1 + 0xf8) = uVar2;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xf8),uVar2);
        return;
      }
    }
  }
LAB_07501b84:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


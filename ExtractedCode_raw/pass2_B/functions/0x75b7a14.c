// rea decompile_all
// name: System.MemoryExtensions$$EndsWith
// address: 0x75b7a14
// body: available
// range: 0x75b7a14-0x75b7c9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75b7b24 to 0x75cbfc4 System.SpanHelpers$$EndsWithOrdinalIgnoreCaseHelper (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75b7b90 to 0x75c4c9c FUN_075c4c9c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75b7bf0 to 0x75cbd6c System.SpanHelpers$$EndsWithCultureHelper (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75b7c3c to 0x75cbea4 System.SpanHelpers$$EndsWithCultureIgnoreCaseHelper (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75b7c40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75b7c9c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_MemoryExtensions__EndsWith
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_09521d23 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091d2f28);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521d23 = 1;
  }
  if ((int)param_4 == 0) {
    System_String__CheckStringComparison(param_5,0);
    return 1;
  }
  if (2 < param_5) {
    if (param_5 == 3) {
      if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = **(undefined8 **)(DAT_091827f8 + 0xb8);
LAB_075b7c18:
      uVar4 = System_SpanHelpers__EndsWithCultureIgnoreCaseHelper
                        (param_1,param_2,param_3,param_4,uVar4,0);
      return uVar4;
    }
    if (param_5 == 4) {
      uVar4 = FUN_075c4c9c(param_1,param_2,param_3,param_4,DAT_091d2f28);
      return uVar4;
    }
    if (param_5 == 5) {
      uVar4 = System_SpanHelpers__EndsWithOrdinalIgnoreCaseHelper(param_1,param_2,param_3,param_4,0)
      ;
      return uVar4;
    }
LAB_075b7c44:
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar4 = thunk_FUN_03f9944c();
    uVar2 = thunk_FUN_03fc39d4(&DAT_0920ffd0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_09219670);
    System_ArgumentException___ctor(uVar4,uVar2,uVar3,0);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091d2f90);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar2);
  }
  if (param_5 == 0) {
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar1 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
    if (plVar1 == (long *)0x0) goto LAB_075b7c40;
    uVar4 = (**(code **)(*plVar1 + 0x208))(plVar1,*(undefined8 *)(*plVar1 + 0x210));
  }
  else {
    if (param_5 == 1) {
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar1 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
      if (plVar1 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar1 + 0x208))(plVar1,*(undefined8 *)(*plVar1 + 0x210));
        goto LAB_075b7c18;
      }
LAB_075b7c40:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (param_5 != 2) goto LAB_075b7c44;
    if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = **(undefined8 **)(DAT_091827f8 + 0xb8);
  }
  uVar4 = System_SpanHelpers__EndsWithCultureHelper(param_1,param_2,param_3,param_4,uVar4,0);
  return uVar4;
}


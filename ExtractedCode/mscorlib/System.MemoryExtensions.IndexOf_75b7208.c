// rea decompile_all
// name: System.MemoryExtensions$$IndexOf
// address: 0x75b7208
// body: available
// range: 0x75b7208-0x75b7427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75b736c to 0x75cb6c4 System.SpanHelpers$$IndexOfCultureHelper (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75b73f4 to 0x75cb7e8 System.SpanHelpers$$IndexOfCultureIgnoreCaseHelper (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75b7420 to 0x75cb90c System.SpanHelpers$$IndexOfOrdinalHelper (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75b7424 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_MemoryExtensions__IndexOf
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  long *plVar1;
  undefined8 uVar2;
  
  if ((DAT_09521d21 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521d21 = 1;
  }
  System_String__CheckStringComparison(param_5,0);
  if ((int)param_4 == 0) {
    uVar2 = 0;
  }
  else {
    if ((int)param_2 != 0) {
      if (2 < param_5) {
        if (param_5 != 3) {
          if (param_5 == 4) {
            uVar2 = 0;
          }
          else {
            if (param_5 != 5) {
              return 0xffffffff;
            }
            uVar2 = 1;
          }
          uVar2 = System_SpanHelpers__IndexOfOrdinalHelper(param_1,param_2,param_3,param_4,uVar2,0);
          return uVar2;
        }
        if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = **(undefined8 **)(DAT_091827f8 + 0xb8);
LAB_075b73d0:
        uVar2 = System_SpanHelpers__IndexOfCultureIgnoreCaseHelper
                          (param_1,param_2,param_3,param_4,uVar2,0);
        return uVar2;
      }
      if (param_5 == 0) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar1 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
        if (plVar1 == (long *)0x0) goto LAB_075b7424;
        uVar2 = (**(code **)(*plVar1 + 0x208))(plVar1,*(undefined8 *)(*plVar1 + 0x210));
      }
      else {
        if (param_5 == 1) {
          if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          plVar1 = (long *)System_Globalization_CultureInfo__get_CurrentCulture(0);
          if (plVar1 != (long *)0x0) {
            uVar2 = (**(code **)(*plVar1 + 0x208))(plVar1,*(undefined8 *)(*plVar1 + 0x210));
            goto LAB_075b73d0;
          }
LAB_075b7424:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (param_5 != 2) {
          return 0xffffffff;
        }
        if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = **(undefined8 **)(DAT_091827f8 + 0xb8);
      }
      uVar2 = System_SpanHelpers__IndexOfCultureHelper(param_1,param_2,param_3,param_4,uVar2,0);
      return uVar2;
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


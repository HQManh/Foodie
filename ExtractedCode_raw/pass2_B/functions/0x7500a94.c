// rea decompile_all
// name: System.Globalization.CompareInfo$$internal_index_switch
// address: 0x7500a94
// body: available
// range: 0x7500a94-0x7500be7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7500b20 to 0x7435f44 System.String$$IndexOfUnchecked (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7500b74 to 0x7500c9c System.Globalization.CompareInfo$$internal_index_managed (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7500ba4 to 0x7436228 System.String$$LastIndexOfUnchecked (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7500be0 to 0x7500be8 System.Globalization.CompareInfo$$internal_index (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7500be4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Globalization_CompareInfo__internal_index_switch
               (undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,int param_6,uint param_7)

{
  ulong uVar1;
  
  if ((DAT_09521671 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091827f8);
    DAT_09521671 = 1;
  }
  if (param_6 == 0x40000000) {
    if ((param_7 & 1) == 0) {
      if (param_2 != 0) {
        System_String__LastIndexOfUnchecked(param_2,param_5,param_3,param_4,0);
        return;
      }
    }
    else if (param_2 != 0) {
      System_String__IndexOfUnchecked(param_2,param_5,param_3,param_4,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Globalization_CompareInfo__get_UseManagedCollation();
  if ((uVar1 & 1) != 0) {
    System_Globalization_CompareInfo__internal_index_managed
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7 & 1);
    return;
  }
  if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Globalization_CompareInfo__internal_index(param_2,param_3,param_4,param_5,param_7 & 1);
  return;
}


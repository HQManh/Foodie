// rea decompile_all
// name: Newtonsoft.Json.Utilities.DateTimeUtils$$EnsureDateTime
// address: 0x768d2dc
// body: available
// range: 0x768d2dc-0x768d42b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x768d3ac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Utilities_DateTimeUtils__EnsureDateTime(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  
  local_28 = param_1;
  if ((DAT_09522579 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_09183548);
    DAT_09522579 = 1;
  }
  if (param_2 < 2) {
    if (param_2 == 0) {
      if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      param_1 = Newtonsoft_Json_Utilities_DateTimeUtils__SwitchToLocalTime(param_1);
    }
    else {
      if (param_2 != 1) {
LAB_0768d368:
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar1 = thunk_FUN_03f9944c();
        uVar2 = thunk_FUN_03fc39d4(&DAT_09205708);
        System_ArgumentException___ctor(uVar1,uVar2,0);
        uVar2 = thunk_FUN_03fc39d4(&DAT_091c7b20);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar1,uVar2);
      }
      if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      param_1 = Newtonsoft_Json_Utilities_DateTimeUtils__SwitchToUtcTime(param_1);
    }
  }
  else if (param_2 == 2) {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = System_DateTime__get_Ticks(&local_28,0);
    System_DateTime___ctor(&local_28,uVar1,0,0);
    param_1 = local_28;
  }
  else if (param_2 != 3) goto LAB_0768d368;
  return param_1;
}


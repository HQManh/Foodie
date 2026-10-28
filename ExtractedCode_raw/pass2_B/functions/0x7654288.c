// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$ReadAsDouble
// address: 0x7654288
// body: available
// range: 0x7654288-0x765434b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7654344 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7654348 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader__ReadAsDouble(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long *local_50;
  long lStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if ((DAT_095223b6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917dc60);
    DAT_095223b6 = 1;
  }
  plVar2 = (long *)Newtonsoft_Json_JsonTextReader__ReadNumberValue(param_1,8);
  if ((plVar2 == (long *)0x0) || (*plVar2 == *(long *)(DAT_0917dc60 + 0x40))) {
    thunk_FUN_03f9959c(plVar2,DAT_0917dc60,&local_50);
    plVar2 = local_50;
    if (*(long *)(lVar1 + 0x28) == local_38) {
      return;
    }
  }
  else {
    lStack_48 = DAT_0917dc60;
    if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar2,*(long *)(DAT_0917dc60 + 0x40));
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar2,lStack_48);
}


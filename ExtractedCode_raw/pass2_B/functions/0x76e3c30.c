// rea decompile_all
// name: Newtonsoft.Json.Linq.JProperty$$WriteToAsync
// address: 0x76e3c30
// body: available
// range: 0x76e3c30-0x76e3d03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76e3cd8 to 0x76e3d04 Newtonsoft.Json.Linq.JProperty$$WriteValueAsync (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76e3cfc to 0x76e3d50 Newtonsoft.Json.Linq.JProperty$$WriteToAsync (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76e3d00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JProperty__WriteToAsync
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if ((DAT_09522804 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091817a0);
    DAT_09522804 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = (**(code **)(*param_2 + 0x248))
                    (param_2,*(undefined8 *)(param_1 + 0x60),param_3,
                     *(undefined8 *)(*param_2 + 0x250));
  if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091817a0);
  }
  uVar2 = Newtonsoft_Json_Utilities_AsyncUtils__IsCompletedSuccessfully(uVar1,0);
  if ((uVar2 & 1) != 0) {
    Newtonsoft_Json_Linq_JProperty__WriteValueAsync(param_1,param_2,param_3,param_4);
    return;
  }
  Newtonsoft_Json_Linq_JProperty__WriteToAsync(param_1,uVar1,param_2,param_3,param_4);
  return;
}


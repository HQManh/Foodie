// rea decompile_all
// name: Newtonsoft.Json.JsonTextWriter$$WriteValue
// address: 0x766b75c
// body: available
// range: 0x766b75c-0x766b81b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x766b814 to 0x766a12c Newtonsoft.Json.JsonTextWriter$$WriteEscapedString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x766b818 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextWriter__WriteValue(long *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((DAT_0952246a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c918);
    DAT_0952246a = 1;
  }
  if (*(int *)(DAT_0918c918 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Uri__op_Equality(param_2,0,0);
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0766b7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x658))(param_1,*(undefined8 *)(*param_1 + 0x660));
    return;
  }
  Newtonsoft_Json_JsonWriter__InternalWriteValue(param_1,9,0);
  if (param_2 != 0) {
    uVar2 = System_Uri__get_OriginalString(param_2,0);
    Newtonsoft_Json_JsonTextWriter__WriteEscapedString(param_1,uVar2,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


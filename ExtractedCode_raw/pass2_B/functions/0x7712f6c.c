// rea decompile_all
// name: Newtonsoft.Json.Converters.XmlNodeConverter$$WriteGroupedNodes
// address: 0x7712f6c
// body: available
// range: 0x7712f6c-0x7713043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7712fe8 to 0x77101e0 Newtonsoft.Json.Converters.XmlNodeConverter$$SerializeNode (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7713040 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_XmlNodeConverter__WriteGroupedNodes
               (undefined8 param_1,long *param_2,undefined8 param_3,uint param_4,undefined8 param_5,
               undefined8 param_6)

{
  ulong uVar1;
  
  uVar1 = Newtonsoft_Json_Converters_XmlNodeConverter__IsArray(param_1,param_5);
  if ((uVar1 & 1) == 0) {
    Newtonsoft_Json_Converters_XmlNodeConverter__SerializeNode
              (param_1,param_2,param_5,param_3,param_4 & 1);
    return;
  }
  if ((param_4 & 1) == 0) {
    if (param_2 == (long *)0x0) goto LAB_07713040;
  }
  else {
    if (param_2 == (long *)0x0) {
LAB_07713040:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*param_2 + 0x5d8))(param_2,param_6,*(undefined8 *)(*param_2 + 0x5e0));
  }
  (**(code **)(*param_2 + 0x598))(param_2,*(undefined8 *)(*param_2 + 0x5a0));
  Newtonsoft_Json_Converters_XmlNodeConverter__SerializeNode(param_1,param_2,param_5,param_3,0);
                    /* WARNING: Could not recover jumptable at 0x0771303c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x5a8))(param_2,*(undefined8 *)(*param_2 + 0x5b0));
  return;
}


// rea decompile_all
// name: Newtonsoft.Json.Converters.ExpandoObjectConverter$$ReadValue
// address: 0x77078c0
// body: available
// range: 0x77078c0-0x7707a2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7707920 to 0x7707a2c Newtonsoft.Json.Converters.ExpandoObjectConverter$$ReadObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7707938 to 0x7707bfc Newtonsoft.Json.Converters.ExpandoObjectConverter$$ReadList (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x770797c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7707a28 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Converters_ExpandoObjectConverter__ReadValue(undefined8 param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_24;
  
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = Newtonsoft_Json_JsonReader__MoveToContent(param_2,0);
  if ((uVar2 & 1) == 0) {
    uVar3 = thunk_FUN_03fc39d4(&DAT_09211d08);
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if (iVar1 == 2) {
      Newtonsoft_Json_Converters_ExpandoObjectConverter__ReadList(param_1,param_2);
      return;
    }
    if (iVar1 == 1) {
      Newtonsoft_Json_Converters_ExpandoObjectConverter__ReadObject(param_1,param_2);
      return;
    }
    uVar3 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    uVar2 = Newtonsoft_Json_Utilities_JsonTokenUtils__IsPrimitiveToken(uVar3,0);
    if ((uVar2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x07707978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    FUN_039b1d98(param_2);
    local_24 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    uVar4 = thunk_FUN_03fc39d4(&DAT_09187478);
    uVar4 = FUN_03f5c42c(uVar4,&local_24);
    uVar5 = thunk_FUN_03fc39d4(&DAT_09211ee8);
    uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar5,uVar3,uVar4,0);
  }
  uVar3 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar3,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091cbb50);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}


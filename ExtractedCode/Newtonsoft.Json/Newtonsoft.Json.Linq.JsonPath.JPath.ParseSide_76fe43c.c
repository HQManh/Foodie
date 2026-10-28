// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.JPath$$ParseSide
// address: 0x76fe43c
// body: available
// range: 0x76fe43c-0x76fe54b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76fe548 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_Linq_JsonPath_JPath__ParseSide(undefined8 param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_28;
  undefined8 local_18;
  
  if ((DAT_09522928 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187278);
    FUN_03f5c2a4(&DAT_0920a618);
    DAT_09522928 = 1;
  }
  local_18 = 0;
  local_28 = 0;
  Newtonsoft_Json_Linq_JsonPath_JPath__EatWhitespace(param_1);
  uVar2 = Newtonsoft_Json_Linq_JsonPath_JPath__TryParseExpression(param_1,&local_18);
  if ((uVar2 & 1) == 0) {
    uVar2 = Newtonsoft_Json_Linq_JsonPath_JPath__TryParseValue(param_1,&local_28);
    if ((uVar2 & 1) == 0) {
      uVar4 = Newtonsoft_Json_Linq_JsonPath_JPath__CreateUnexpectedCharacterException(param_1);
      uVar3 = thunk_FUN_03fc39d4(&DAT_091d1320);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar3);
    }
    Newtonsoft_Json_Linq_JsonPath_JPath__EatWhitespace(param_1);
    Newtonsoft_Json_Linq_JsonPath_JPath__EnsureLength(param_1,DAT_0920a618);
    uVar4 = local_28;
    uVar3 = thunk_FUN_03f9944c(DAT_09187278);
    uVar1 = Newtonsoft_Json_Linq_JValue__GetValueType(0,uVar4);
    Newtonsoft_Json_Linq_JValue___ctor(uVar3,uVar4,uVar1);
  }
  else {
    Newtonsoft_Json_Linq_JsonPath_JPath__EatWhitespace(param_1);
    Newtonsoft_Json_Linq_JsonPath_JPath__EnsureLength(param_1,DAT_0920a618);
    uVar3 = local_18;
  }
  return uVar3;
}


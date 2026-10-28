// rea decompile_all
// name: AppLovinMax.ThirdParty.MiniJson.Json.Parser$$ParseByToken
// address: 0x737cff4
// body: available
// range: 0x737cff4-0x737d09f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x737d028 to 0x737cc4c AppLovinMax.ThirdParty.MiniJson.Json.Parser$$ParseString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x737d060 to 0x737c960 AppLovinMax.ThirdParty.MiniJson.Json.Parser$$ParseObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x737d06c to 0x737d0a0 AppLovinMax.ThirdParty.MiniJson.Json.Parser$$ParseNumber (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x737d078 to 0x737cec8 AppLovinMax.ThirdParty.MiniJson.Json.Parser$$ParseArray (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AppLovinMax_ThirdParty_MiniJson_Json_Parser__ParseByToken(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  uVar1 = 0;
  if (param_2 < 8) {
    if (param_2 == 1) {
      uVar1 = AppLovinMax_ThirdParty_MiniJson_Json_Parser__ParseObject(param_1);
      return uVar1;
    }
    if (param_2 == 3) {
      uVar1 = AppLovinMax_ThirdParty_MiniJson_Json_Parser__ParseArray(param_1);
      return uVar1;
    }
    if (param_2 == 7) {
      uVar1 = AppLovinMax_ThirdParty_MiniJson_Json_Parser__ParseString(param_1);
      return uVar1;
    }
  }
  else {
    if (param_2 == 8) {
      uVar1 = AppLovinMax_ThirdParty_MiniJson_Json_Parser__ParseNumber(param_1);
      return uVar1;
    }
    if (param_2 == 9) {
      puVar2 = local_4;
      local_4[0] = 1;
    }
    else {
      if (param_2 != 10) {
        return 0;
      }
      puVar2 = local_8;
      local_8[0] = 0;
    }
    uVar1 = FUN_03f5c42c(DAT_09535400,puVar2);
  }
  return uVar1;
}


// rea decompile_all
// name: AppLovinMax.ThirdParty.MiniJson.Json.Serializer$$SerializeValue
// address: 0x737d3e0
// body: available
// range: 0x737d3e0-0x737d57b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x737d490 to 0x737d854 AppLovinMax.ThirdParty.MiniJson.Json.Serializer$$SerializeArray (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x737d4b8 to 0x737d57c AppLovinMax.ThirdParty.MiniJson.Json.Serializer$$SerializeString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x737d4fc to 0x743e010 System.Text.StringBuilder$$Append (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x737d528 to 0x737dc5c AppLovinMax.ThirdParty.MiniJson.Json.Serializer$$SerializeObject (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x737d54c to 0x737e194 AppLovinMax.ThirdParty.MiniJson.Json.Serializer$$SerializeOther (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x737d578 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AppLovinMax_ThirdParty_MiniJson_Json_Serializer__SerializeValue(long param_1,long *param_2)

{
  long lVar1;
  char *pcVar2;
  undefined2 *puVar3;
  undefined8 *puVar4;
  
  if ((DAT_095209dd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09185f80);
    FUN_03f5c2a4(&DAT_09220040);
    FUN_03f5c2a4(&DAT_0921b558);
    FUN_03f5c2a4(&DAT_09224438);
    DAT_095209dd = 1;
  }
  if (param_2 == (long *)0x0) {
    lVar1 = *(long *)(param_1 + 0x10);
    if (lVar1 == 0) {
LAB_0737d578:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar4 = &DAT_09220040;
LAB_0737d4ec:
    System_Text_StringBuilder__Append(lVar1,*puVar4,0);
    return;
  }
  if (*param_2 != DAT_09535468) {
    if (*param_2 == DAT_09535400) {
      lVar1 = *(long *)(param_1 + 0x10);
      pcVar2 = (char *)thunk_FUN_03f99594(param_2);
      if (lVar1 == 0) goto LAB_0737d578;
      puVar4 = &DAT_0921b558;
      if (*pcVar2 != '\0') {
        puVar4 = &DAT_09224438;
      }
      goto LAB_0737d4ec;
    }
    lVar1 = thunk_FUN_03f99350(param_2,DAT_09185f80);
    if (lVar1 != 0) {
      AppLovinMax_ThirdParty_MiniJson_Json_Serializer__SerializeArray(param_1,lVar1);
      return;
    }
    lVar1 = thunk_FUN_03f99350(param_2,DAT_09185a20);
    if (lVar1 != 0) {
      AppLovinMax_ThirdParty_MiniJson_Json_Serializer__SerializeObject(param_1,lVar1);
      return;
    }
    if (*param_2 != DAT_09535460) {
      AppLovinMax_ThirdParty_MiniJson_Json_Serializer__SerializeOther(param_1,param_2);
      return;
    }
    puVar3 = (undefined2 *)FUN_039aef84(param_2);
    param_2 = (long *)System_String__CreateString(0,*puVar3,1,0);
  }
  AppLovinMax_ThirdParty_MiniJson_Json_Serializer__SerializeString(param_1,param_2);
  return;
}


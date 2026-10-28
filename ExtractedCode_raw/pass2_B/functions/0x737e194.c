// rea decompile_all
// name: AppLovinMax.ThirdParty.MiniJson.Json.Serializer$$SerializeOther
// address: 0x737e194
// body: available
// range: 0x737e194-0x737e367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x737e2a4 to 0x737d57c AppLovinMax.ThirdParty.MiniJson.Json.Serializer$$SerializeString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x737e2f8 to 0x743eadc System.Text.StringBuilder$$Append (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x737e364 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AppLovinMax_ThirdParty_MiniJson_Json_Serializer__SerializeOther(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 local_30;
  undefined4 local_24;
  
  if ((DAT_095209e1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b88);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_0920b300);
    DAT_095209e1 = 1;
  }
  local_24 = 0;
  local_30 = 0;
  if (param_2 != (long *)0x0) {
    lVar3 = *param_2;
    if (lVar3 == DAT_09535450) {
      lVar3 = *(long *)(param_1 + 0x10);
      puVar2 = (undefined4 *)thunk_FUN_03f99594(param_2);
      local_24 = *puVar2;
      uVar1 = System_Single__ToString(&local_24,DAT_0920b300,0);
    }
    else {
      if (((((lVar3 == DAT_09535420) || (lVar3 == DAT_09535428)) || (lVar3 == DAT_09535440)) ||
          ((lVar3 == DAT_09535408 || (lVar3 == DAT_095353f0)))) ||
         ((lVar3 == DAT_09535410 || ((lVar3 == DAT_09535418 || (lVar3 == DAT_09535448)))))) {
        if (*(long *)(param_1 + 0x10) != 0) {
          System_Text_StringBuilder__Append(*(long *)(param_1 + 0x10),param_2,0);
          return;
        }
        goto LAB_0737e364;
      }
      if ((lVar3 != DAT_09535458) && (lVar3 != DAT_091837d8)) {
        uVar1 = (**(code **)(lVar3 + 0x168))(param_2,*(undefined8 *)(lVar3 + 0x170));
        AppLovinMax_ThirdParty_MiniJson_Json_Serializer__SerializeString(param_1,uVar1);
        return;
      }
      lVar3 = *(long *)(param_1 + 0x10);
      if (*(int *)(DAT_09182b88 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_30 = System_Convert__ToDouble(param_2,0);
      uVar1 = System_Double__ToString(&local_30,DAT_0920b300,0);
    }
    if (lVar3 != 0) {
      System_Text_StringBuilder__Append(lVar3,uVar1,0);
      return;
    }
  }
LAB_0737e364:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


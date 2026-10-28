// rea decompile_all
// name: Newtonsoft.Json.JsonConvert$$ToString
// address: 0x763ef10
// body: available
// range: 0x763ef10-0x763f70b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x763f048 to 0x763de7c Newtonsoft.Json.JsonConvert$$ToString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x763f0c8 to 0x763e2d0 Newtonsoft.Json.JsonConvert$$ToString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x763f108 to 0x763defc Newtonsoft.Json.JsonConvert$$ToString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x763f158 to 0x763e158 Newtonsoft.Json.JsonConvert$$ToString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x763f1b4 to 0x763ed00 Newtonsoft.Json.JsonConvert$$ToString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x763f204 to 0x763e668 Newtonsoft.Json.JsonConvert$$ToString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x763f254 to 0x763e264 Newtonsoft.Json.JsonConvert$$ToString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x763f2a4 to 0x763e0ec Newtonsoft.Json.JsonConvert$$ToString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x763f2f4 to 0x763d8f4 Newtonsoft.Json.JsonConvert$$ToString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x763f344 to 0x763eba0 Newtonsoft.Json.JsonConvert$$ToString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x763f398 to 0x763db84 Newtonsoft.Json.JsonConvert$$ToString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x763f3ec to 0x763ea60 Newtonsoft.Json.JsonConvert$$ToString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x763f440 to 0x
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8 Newtonsoft_Json_JsonConvert__ToString(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_095222a3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b78);
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_09184f30);
    FUN_03f5c2a4(&DAT_09187300);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918c918);
    DAT_095222a3 = 1;
  }
  if (param_1 != (long *)0x0) {
    uVar2 = System_Object__GetType(param_1,0);
    if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182b90);
    }
    uVar1 = Newtonsoft_Json_Utilities_ConvertUtils__GetTypeCode(uVar2,0);
    switch(uVar1) {
    case 2:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535460 + 0x40)) {
        puVar4 = (undefined2 *)thunk_FUN_03f99594(param_1);
        uVar2 = Newtonsoft_Json_JsonConvert__ToString(*puVar4);
        return uVar2;
      }
      break;
    default:
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar2 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      FUN_039b1d98(param_1);
      uVar7 = System_Object__GetType(param_1,0);
      uVar8 = thunk_FUN_03fc39d4(&DAT_09212718);
      uVar2 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar2,uVar7,0);
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar7 = thunk_FUN_03f9944c();
      System_ArgumentException___ctor(uVar7,uVar2,0);
      uVar2 = thunk_FUN_03fc39d4(&DAT_091d16f0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar2);
    case 4:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535400 + 0x40)) {
        puVar5 = (undefined1 *)thunk_FUN_03f99594(param_1);
        uVar2 = Newtonsoft_Json_JsonConvert__ToString(*puVar5);
        return uVar2;
      }
      break;
    case 6:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535408 + 0x40)) {
        puVar5 = (undefined1 *)thunk_FUN_03f99594(param_1);
        uVar2 = Newtonsoft_Json_JsonConvert__ToString(*puVar5);
        return uVar2;
      }
      break;
    case 8:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535410 + 0x40)) {
        puVar4 = (undefined2 *)thunk_FUN_03f99594(param_1);
        uVar2 = Newtonsoft_Json_JsonConvert__ToString(*puVar4);
        return uVar2;
      }
      break;
    case 10:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535418 + 0x40)) {
        puVar4 = (undefined2 *)thunk_FUN_03f99594(param_1);
        uVar2 = Newtonsoft_Json_JsonConvert__ToString(*puVar4);
        return uVar2;
      }
      break;
    case 0xc:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535420 + 0x40)) {
        puVar3 = (undefined4 *)thunk_FUN_03f99594(param_1);
        uVar2 = Newtonsoft_Json_JsonConvert__ToString(*puVar3);
        return uVar2;
      }
      break;
    case 0xe:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_095353f0 + 0x40)) {
        puVar5 = (undefined1 *)thunk_FUN_03f99594(param_1);
        uVar2 = Newtonsoft_Json_JsonConvert__ToString(*puVar5);
        return uVar2;
      }
      break;
    case 0x10:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535428 + 0x40)) {
        puVar3 = (undefined4 *)thunk_FUN_03f99594(param_1);
        uVar2 = Newtonsoft_Json_JsonConvert__ToString(*puVar3);
        return uVar2;
      }
      break;
    case 0x12:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535440 + 0x40)) {
        puVar6 = (undefined8 *)thunk_FUN_03f99594(param_1);
        uVar2 = Newtonsoft_Json_JsonConvert__ToString(*puVar6);
        return uVar2;
      }
      break;
    case 0x14:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535448 + 0x40)) {
        puVar6 = (undefined8 *)thunk_FUN_03f99594(param_1);
        uVar2 = Newtonsoft_Json_JsonConvert__ToString(*puVar6);
        return uVar2;
      }
      break;
    case 0x16:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535450 + 0x40)) {
        puVar3 = (undefined4 *)thunk_FUN_03f99594(param_1);
        uVar2 = Newtonsoft_Json_JsonConvert__ToString(*puVar3);
        return uVar2;
      }
      break;
    case 0x18:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09535458 + 0x40)) {
        puVar6 = (undefined8 *)thunk_FUN_03f99594(param_1);
        uVar2 = Newtonsoft_Json_JsonConvert__ToString(*puVar6);
        return uVar2;
      }
      break;
    case 0x1a:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09183548 + 0x40)) {
        puVar6 = (undefined8 *)thunk_FUN_03f99594(param_1);
        uVar2 = Newtonsoft_Json_JsonConvert__ToString(*puVar6);
        return uVar2;
      }
      break;
    case 0x1c:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09183590 + 0x40)) {
        puVar6 = (undefined8 *)thunk_FUN_03f99594(param_1);
        uVar2 = Newtonsoft_Json_JsonConvert__ToString(*puVar6,puVar6[1]);
        return uVar2;
      }
      break;
    case 0x1e:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_091837d8 + 0x40)) {
        puVar6 = (undefined8 *)thunk_FUN_03f99594(param_1);
        uVar2 = Newtonsoft_Json_JsonConvert__ToString(*puVar6,puVar6[1]);
        return uVar2;
      }
      break;
    case 0x20:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09184f30 + 0x40)) {
        puVar6 = (undefined8 *)thunk_FUN_03f99594(param_1);
        uVar2 = Newtonsoft_Json_JsonConvert__ToString(*puVar6,puVar6[1]);
        return uVar2;
      }
      break;
    case 0x22:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_0918bd60 + 0x40)) {
        puVar6 = (undefined8 *)thunk_FUN_03f99594(param_1);
        uVar2 = Newtonsoft_Json_JsonConvert__ToString(*puVar6);
        return uVar2;
      }
      break;
    case 0x24:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(*param_1 + 0x40) == *(long *)(DAT_09181b78 + 0x40)) {
        puVar6 = (undefined8 *)thunk_FUN_03f99594(param_1);
        uVar2 = Newtonsoft_Json_JsonConvert__ToStringInternal(*puVar6,puVar6[1]);
        return uVar2;
      }
      break;
    case 0x26:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if ((*(byte *)(DAT_0918c918 + 0x130) <= *(byte *)(*param_1 + 0x130)) &&
         (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(DAT_0918c918 + 0x130) * 8 + -8) ==
          DAT_0918c918)) {
        uVar2 = Newtonsoft_Json_JsonConvert__ToString(param_1);
        return uVar2;
      }
      break;
    case 0x27:
      if (*(int *)(DAT_09187300 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*param_1 == DAT_09535468) {
        uVar2 = Newtonsoft_Json_JsonConvert__ToString(param_1);
        return uVar2;
      }
      break;
    case 0x29:
      goto switchD_0763eff8_caseD_29;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(param_1);
  }
switchD_0763eff8_caseD_29:
  if (*(int *)(DAT_09187300 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  return *(undefined8 *)(*(long *)(DAT_09187300 + 0xb8) + 0x18);
}


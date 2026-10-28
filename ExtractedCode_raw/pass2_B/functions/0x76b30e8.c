// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$Deserialize
// address: 0x76b30e8
// body: available
// range: 0x76b30e8-0x76b3317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76b3234 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b32a8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76b3314 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__Deserialize
          (undefined8 param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (param_2 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_092215e0);
    System_ArgumentNullException___ctor(uVar5,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091d1b20);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar6);
  }
  lVar2 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetContractSafe
                    (param_1,param_3);
  plVar3 = (long *)Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetConverter
                             (param_1,lVar2,0,0,0);
  iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if ((iVar1 == 0) &&
     (uVar4 = Newtonsoft_Json_JsonReader__ReadForType(param_2,lVar2,plVar3 != (long *)0x0,0),
     (uVar4 & 1) == 0)) {
    if ((lVar2 != 0) && (*(char *)(lVar2 + 0x10) == '\0')) {
      lVar7 = thunk_FUN_03fc39d4(&DAT_09182ff8);
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar8 = *(undefined8 *)(lVar2 + 0x60);
      uVar6 = thunk_FUN_03fc39d4(&DAT_092088d0);
      uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar5,uVar8);
      uVar5 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar5,0);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091d1b20);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar6);
    }
    return 0;
  }
  if ((plVar3 == (long *)0x0) ||
     (uVar4 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0)),
     (uVar4 & 1) == 0)) {
    uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateValueInternal
                      (param_1,param_2,param_3,lVar2,0,0,0,0);
  }
  else {
    uVar5 = Newtonsoft_Json_Serialization_JsonSerializerInternalReader__DeserializeConvertable
                      (param_1,plVar3,param_2,param_3,0);
  }
  if ((param_4 & 1) != 0) {
    while (uVar4 = (**(code **)(*param_2 + 0x288))(param_2,*(undefined8 *)(*param_2 + 0x290)),
          (uVar4 & 1) != 0) {
      iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      if (iVar1 != 5) {
        uVar5 = thunk_FUN_03fc39d4(&DAT_091fb560);
        uVar5 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar5,0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091d1b20);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar5,uVar6);
      }
    }
  }
  return uVar5;
}


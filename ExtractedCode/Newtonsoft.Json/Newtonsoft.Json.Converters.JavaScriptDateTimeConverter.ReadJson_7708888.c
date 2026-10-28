// rea decompile_all
// name: Newtonsoft.Json.Converters.JavaScriptDateTimeConverter$$ReadJson
// address: 0x7708888
// body: available
// range: 0x7708888-0x7708bbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7708af4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7708bbc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Converters_JavaScriptDateTimeConverter__ReadJson
          (undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  
  puVar9 = &local_60;
  if ((DAT_09522970 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171468);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09187288);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_092001d8);
    DAT_09522970 = 1;
  }
  local_28 = 0;
  local_38 = 0;
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (iVar1 == 0xb) {
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__IsNullable(param_3,0);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    uVar5 = thunk_FUN_03fc39d4(&DAT_091fdb60);
    uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar5,uVar4,param_3,0);
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if (iVar1 == 3) {
      plVar6 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      uVar4 = 0;
      if (plVar6 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
      }
      uVar3 = System_String__Equals(uVar4,DAT_092001d8,4,0);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(DAT_09187288 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = Newtonsoft_Json_Utilities_JavaScriptUtils__TryGetDateFromConstructorJson
                          (param_2,&local_28,&local_38,0);
        uVar4 = local_38;
        if ((uVar3 & 1) != 0) {
          if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__IsNullableType(param_3,0);
          if ((uVar3 & 1) != 0) {
            param_3 = System_Nullable__GetUnderlyingType(param_3,0);
          }
          uVar4 = DAT_09171468;
          if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
          uVar3 = System_Type__op_Equality(param_3,uVar4,0);
          if ((uVar3 & 1) == 0) {
            local_48 = local_28;
            puVar9 = &local_48;
            uVar4 = DAT_09183548;
          }
          else {
            local_48 = 0;
            uStack_40 = 0;
            System_DateTimeOffset___ctor(&local_48,local_28,0);
            uStack_58 = uStack_40;
            local_60 = local_48;
            uVar4 = DAT_09183590;
          }
          uVar4 = FUN_03f5c42c(uVar4,puVar9);
          return uVar4;
        }
        goto LAB_07708b98;
      }
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    FUN_039b1d98(param_2);
    uVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    local_48 = CONCAT44(local_48._4_4_,uVar2);
    uVar5 = thunk_FUN_03fc39d4(&DAT_09187478);
    uVar5 = FUN_03f5c42c(uVar5,&local_48);
    FUN_039b1d98(param_2);
    uVar7 = (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
    uVar8 = thunk_FUN_03fc39d4(&DAT_09211eb0);
    uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar4,uVar5,uVar7,0);
  }
LAB_07708b98:
  uVar4 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar4,0);
  uVar5 = thunk_FUN_03fc39d4(&DAT_091d15c0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}


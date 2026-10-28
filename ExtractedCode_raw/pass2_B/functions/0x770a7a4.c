// rea decompile_all
// name: Newtonsoft.Json.Converters.StringEnumConverter$$ReadJson
// address: 0x770a7a4
// body: available
// range: 0x770a7a4-0x770ab23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x770aa00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770aa9c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770ab20 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Converters_StringEnumConverter__ReadJson
          (long param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 local_34;
  
  if ((DAT_09522986 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091840e8);
    FUN_03f5c2a4(&DAT_09189d88);
    DAT_09522986 = 1;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (iVar2 == 0xb) {
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = Newtonsoft_Json_Utilities_ReflectionUtils__IsNullableType(param_3,0);
    uVar6 = 0;
    if ((uVar5 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091fdb60);
LAB_0770aa6c:
      uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar7,uVar6,param_3,0);
      uVar6 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar6,0);
      uVar7 = thunk_FUN_03fc39d4(&DAT_091da4d8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,uVar7);
    }
  }
  else {
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__IsNullableType(param_3,0);
    if ((uVar3 & 1) != 0) {
      param_3 = System_Nullable__GetUnderlyingType(param_3,0);
    }
    iVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    lVar10 = *param_2;
    if (iVar2 == 9) {
      plVar8 = (long *)(**(code **)(lVar10 + 0x248))(param_2,*(undefined8 *)(lVar10 + 0x250));
      if (plVar8 == (long *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      }
      uVar4 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(uVar6,0);
      if ((uVar3 & uVar4 & 1) == 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        cVar1 = *(char *)(param_1 + 0x18);
        if (*(int *)(DAT_091840e8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = Newtonsoft_Json_Utilities_EnumUtils__ParseEnum(param_3,uVar7,uVar6,cVar1 == '\0',0);
      }
      else {
        uVar6 = 0;
      }
    }
    else {
      iVar2 = (**(code **)(lVar10 + 0x238))(param_2,*(undefined8 *)(lVar10 + 0x240));
      if (iVar2 != 7) {
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        FUN_039b1d98(param_2);
        local_34 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        uVar7 = thunk_FUN_03fc39d4(&DAT_09187478);
        param_3 = FUN_03f5c42c(uVar7,&local_34);
        uVar7 = thunk_FUN_03fc39d4(&DAT_09211f40);
        goto LAB_0770aa6c;
      }
      if (*(char *)(param_1 + 0x18) == '\0') {
        lVar10 = thunk_FUN_03fc39d4(&DAT_09182ff8);
        if (*(int *)(lVar10 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        uVar7 = (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        uVar9 = thunk_FUN_03fc39d4(&DAT_09204f40);
        uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar9,uVar6,uVar7,0);
        uVar6 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar6,0);
        uVar7 = thunk_FUN_03fc39d4(&DAT_091da4d8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar6,uVar7);
      }
      uVar6 = (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = Newtonsoft_Json_Utilities_ConvertUtils__ConvertOrCast(uVar6,uVar7,param_3,0);
    }
  }
  return uVar6;
}


// rea decompile_all
// name: Newtonsoft.Json.Converters.UnixDateTimeConverter$$ReadJson
// address: 0x770af84
// body: available
// range: 0x770af84-0x770b36b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x770b244 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770b298 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x770b368 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Converters_UnixDateTimeConverter__ReadJson
          (long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_38;
  
  puVar9 = &local_70;
  if ((DAT_09522989 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171468);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918c840);
    DAT_09522989 = 1;
  }
  local_38 = 0;
  local_48 = 0;
  if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = Newtonsoft_Json_Utilities_ReflectionUtils__IsNullable(param_3,0);
  if (param_2 == (long *)0x0) {
LAB_0770b244:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (iVar1 == 0xb) {
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    puVar7 = &DAT_091fdb60;
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    lVar10 = *param_2;
    if (iVar1 == 7) {
      plVar4 = (long *)(**(code **)(lVar10 + 0x248))(param_2,*(undefined8 *)(lVar10 + 0x250));
      if (plVar4 == (long *)0x0) goto LAB_0770b244;
      if (*(long *)(*plVar4 + 0x40) != *(long *)(DAT_09535440 + 0x40)) {
LAB_0770b298:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      plVar4 = (long *)thunk_FUN_03f99594();
      local_38 = *plVar4;
    }
    else {
      iVar1 = (**(code **)(lVar10 + 0x238))(param_2,*(undefined8 *)(lVar10 + 0x240));
      if (iVar1 != 9) {
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        FUN_039b1d98(param_2);
        uVar2 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
        local_58 = CONCAT44(local_58._4_4_,uVar2);
        uVar8 = thunk_FUN_03fc39d4(&DAT_09187478);
        param_3 = FUN_03f5c42c(uVar8,&local_58);
        uVar8 = thunk_FUN_03fc39d4(&DAT_09211ec8);
        goto LAB_0770b338;
      }
      plVar4 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      if ((plVar4 != (long *)0x0) && (*plVar4 != DAT_09535468)) goto LAB_0770b298;
      uVar5 = System_Int64__TryParse(plVar4,&local_38,0);
      if ((uVar5 & 1) == 0) {
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        puVar7 = &DAT_091fdb50;
        goto LAB_0770b32c;
      }
    }
    if ((*(char *)(param_1 + 0x10) != '\0') || (-1 < local_38)) {
      if (*(int *)(DAT_0918c840 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = local_38;
      local_48 = **(undefined8 **)(DAT_0918c840 + 0xb8);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_DateTime__AddSeconds((double)lVar10,&local_48,0);
      if ((uVar3 & 1) != 0) {
        param_3 = System_Nullable__GetUnderlyingType(param_3,0);
      }
      uVar8 = DAT_09171468;
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = System_Type__GetTypeFromHandle(uVar8,0);
      uVar3 = System_Type__op_Equality(param_3,uVar8,0);
      if ((uVar3 & 1) == 0) {
        puVar9 = &local_58;
        lVar10 = DAT_09183548;
        local_58 = uVar6;
      }
      else {
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_58 = 0;
        uStack_50 = 0;
        System_DateTimeOffset___ctor(&local_58,uVar6,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
        uStack_68 = uStack_50;
        local_70 = local_58;
        lVar10 = DAT_09183590;
      }
      uVar6 = FUN_03f5c42c(lVar10,puVar9);
      return uVar6;
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    puVar7 = &DAT_091fdb90;
  }
LAB_0770b32c:
  uVar8 = thunk_FUN_03fc39d4(puVar7);
LAB_0770b338:
  uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar6,param_3,0);
  uVar6 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar6,0);
  uVar8 = thunk_FUN_03fc39d4(&DAT_091ddfa8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar8);
}


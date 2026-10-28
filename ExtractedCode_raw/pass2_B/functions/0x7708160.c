// rea decompile_all
// name: Newtonsoft.Json.Converters.IsoDateTimeConverter$$ReadJson
// address: 0x7708160
// body: available
// range: 0x7708160-0x770868b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77085c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7708684 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7708688 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Converters_IsoDateTimeConverter__ReadJson
          (long param_1,long *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar9 = &local_60;
  if ((DAT_0952296e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171468);
    FUN_03f5c2a4(&DAT_09183590);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09189d88);
    DAT_0952296e = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = Newtonsoft_Json_Utilities_ReflectionUtils__IsNullableType(param_3,0);
  if (param_2 == (long *)0x0) {
LAB_077085c0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar3 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  if (iVar3 == 0xb) {
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar11 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    puVar12 = &DAT_091fdb60;
LAB_07708648:
    uVar13 = thunk_FUN_03fc39d4(puVar12);
    uVar11 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar13,uVar11,param_3,0);
    uVar11 = Newtonsoft_Json_JsonSerializationException__Create(param_2,uVar11,0);
    uVar13 = thunk_FUN_03fc39d4(&DAT_091d11c0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar11,uVar13);
  }
  if ((uVar2 & 1) != 0) {
    param_3 = System_Nullable__GetUnderlyingType(param_3,0);
  }
  iVar3 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
  uVar11 = DAT_09171468;
  if (iVar3 == 0x10) {
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = System_Type__GetTypeFromHandle(uVar11,0);
    uVar5 = System_Type__op_Equality(param_3,uVar11,0);
    plVar6 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
    if ((uVar5 & 1) != 0) {
      if ((plVar6 != (long *)0x0) && (*plVar6 == DAT_09183590)) {
LAB_07708390:
                    /* WARNING: Could not recover jumptable at 0x077083b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
        return uVar11;
      }
      plVar6 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
      local_50._0_8_ = 0;
      local_50._8_8_ = 0;
      if (plVar6 == (long *)0x0) goto LAB_077085c0;
      if (*(long *)(*plVar6 + 0x40) != *(long *)(DAT_09183548 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      puVar7 = (undefined8 *)thunk_FUN_03f99594();
      System_DateTimeOffset___ctor(local_50,*puVar7,0);
      uStack_58 = local_50._8_8_;
      local_60 = local_50._0_8_;
      lVar10 = DAT_09183590;
      goto LAB_077085a8;
    }
    if ((plVar6 == (long *)0x0) || (*plVar6 != DAT_09183590)) goto LAB_07708390;
    puVar9 = (undefined8 *)thunk_FUN_03f99594();
    uStack_38 = puVar9[1];
    local_40 = *puVar9;
    if (*(int *)(DAT_09183590 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = System_DateTimeOffset__get_DateTime(&local_40,0);
    local_50._0_8_ = uVar11;
    lVar10 = DAT_09183548;
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
    if (iVar3 != 9) {
      thunk_FUN_03fc39d4(&DAT_09182ff8);
      FUN_039afb80();
      uVar11 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      FUN_039b1d98(param_2);
      local_50._0_4_ = (**(code **)(*param_2 + 0x238))(param_2,*(undefined8 *)(*param_2 + 0x240));
      uVar13 = thunk_FUN_03fc39d4(&DAT_09187478);
      param_3 = FUN_03f5c42c(uVar13,local_50);
      puVar12 = &DAT_09211ed0;
      goto LAB_07708648;
    }
    plVar6 = (long *)(**(code **)(*param_2 + 0x248))(param_2,*(undefined8 *)(*param_2 + 0x250));
    if (plVar6 == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
    }
    uVar4 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(uVar11,0);
    uVar13 = DAT_09171468;
    if ((uVar2 & uVar4 & 1) != 0) {
      return 0;
    }
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar13 = System_Type__GetTypeFromHandle(uVar13,0);
    uVar5 = System_Type__op_Equality(param_3,uVar13,0);
    uVar8 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x18),0);
    if ((uVar5 & 1) == 0) {
      if ((uVar8 & 1) == 0) {
        uVar14 = *(undefined8 *)(param_1 + 0x18);
        uVar13 = Newtonsoft_Json_Converters_IsoDateTimeConverter__get_Culture(param_1);
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183548);
        }
        uVar11 = System_DateTime__ParseExact(uVar11,uVar14,uVar13,uVar1,0);
        local_50._0_8_ = uVar11;
        lVar10 = DAT_09183548;
      }
      else {
        uVar13 = Newtonsoft_Json_Converters_IsoDateTimeConverter__get_Culture(param_1);
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183548);
        }
        uVar11 = System_DateTime__Parse(uVar11,uVar13,uVar1,0);
        local_50._0_8_ = uVar11;
        lVar10 = DAT_09183548;
      }
    }
    else if ((uVar8 & 1) == 0) {
      uVar14 = *(undefined8 *)(param_1 + 0x18);
      uVar13 = Newtonsoft_Json_Converters_IsoDateTimeConverter__get_Culture(param_1);
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      if (*(int *)(DAT_09183590 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183590);
      }
      local_50 = System_DateTimeOffset__ParseExact(uVar11,uVar14,uVar13,uVar1,0);
      lVar10 = DAT_09183590;
    }
    else {
      uVar13 = Newtonsoft_Json_Converters_IsoDateTimeConverter__get_Culture(param_1);
      uVar1 = *(undefined4 *)(param_1 + 0x10);
      if (*(int *)(DAT_09183590 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183590);
      }
      local_50 = System_DateTimeOffset__Parse(uVar11,uVar13,uVar1,0);
      lVar10 = DAT_09183590;
    }
  }
  puVar9 = (undefined8 *)local_50;
LAB_077085a8:
  uVar11 = FUN_03f5c42c(lVar10,puVar9);
  return uVar11;
}


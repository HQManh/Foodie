// rea decompile_all
// name: System.TimeZoneInfo$$GetIsDaylightSavings
// address: 0x7514174
// body: available
// range: 0x7514174-0x7514543 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_TimeZoneInfo__GetIsDaylightSavings(undefined8 param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  local_58 = param_1;
  if ((DAT_0952170b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_0952170b = 1;
  }
  local_60 = 0;
  if (param_2 == 0) {
    uVar3 = 0;
    goto LAB_07514524;
  }
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = System_DateTime__get_Kind(&local_58,0);
  if (iVar1 == 2) {
    uVar4 = System_TimeZoneInfo_AdjustmentRule__IsStartDateMarkerForBeginningOfYear(param_2);
    if ((uVar4 & 1) == 0) {
      uVar7 = *param_3;
      uVar8 = param_3[2];
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = System_DateTime__op_Addition(uVar7,uVar8,0);
    }
    else {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_DateTime__get_Year(param_3,0);
      local_68 = 0;
      System_DateTime___ctor(&local_68,uVar2,1,1,0,0,0,0);
      uVar7 = local_68;
    }
    uVar4 = System_TimeZoneInfo_AdjustmentRule__IsEndDateMarkerForEndOfYear(param_2);
    if ((uVar4 & 1) == 0) {
      uVar8 = param_3[1];
    }
    else {
LAB_07514398:
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar1 = System_DateTime__get_Year(param_3 + 1,0);
      local_68 = 0;
      System_DateTime___ctor(&local_68,iVar1 + 1,1,1,0,0,0,0);
      local_60 = local_68;
      uVar8 = System_DateTime__AddTicks(&local_60,0xffffffffffffffff,0);
    }
  }
  else {
    puVar10 = (undefined8 *)(param_2 + 0x20);
    uVar7 = *puVar10;
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_TimeSpan__op_GreaterThan(uVar7,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
    uVar5 = System_TimeZoneInfo_AdjustmentRule__IsStartDateMarkerForBeginningOfYear(param_2);
    if ((uVar5 & 1) == 0) {
      uVar7 = *param_3;
      puVar6 = puVar10;
      if ((uVar4 & 1) == 0) {
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar6 = *(undefined8 **)(DAT_0918bd60 + 0xb8);
      }
      uVar8 = *puVar6;
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = System_DateTime__op_Addition(uVar7,uVar8,0);
    }
    else {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_DateTime__get_Year(param_3,0);
      local_68 = 0;
      System_DateTime___ctor(&local_68,uVar2,1,1,0,0,0,0);
      uVar7 = local_68;
    }
    uVar5 = System_TimeZoneInfo_AdjustmentRule__IsEndDateMarkerForEndOfYear(param_2);
    if ((uVar5 & 1) != 0) goto LAB_07514398;
    uVar8 = param_3[1];
    if ((uVar4 & 1) == 0) {
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = **(undefined8 **)(DAT_0918bd60 + 0xb8);
    }
    else {
      uVar9 = *puVar10;
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = System_TimeSpan__op_UnaryNegation(uVar9,0);
    }
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = System_DateTime__op_Addition(uVar8,uVar9,0);
  }
  uVar9 = local_58;
  if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = System_TimeZoneInfo__CheckIsDst(uVar7,uVar9,uVar8,0,param_2);
  uVar3 = 0;
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = System_DateTime__get_Kind(&local_58,0);
    uVar7 = local_58;
    if (iVar1 == 2) {
      uStack_78 = param_3[1];
      local_80 = *param_3;
      local_70 = param_3[2];
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_TimeZoneInfo__GetIsAmbiguousTime(uVar7,param_2,&local_80);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_DateTime__IsAmbiguousDaylightSavingTime(&local_58,0);
        goto LAB_07514524;
      }
    }
    uVar3 = 1;
  }
LAB_07514524:
  return uVar3 & 1;
}


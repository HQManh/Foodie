// rea decompile_all
// name: System.TimeZoneInfo$$GetIsDaylightSavingsFromUtc
// address: 0x75169d0
// body: available
// range: 0x75169d0-0x75170cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75170c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_TimeZoneInfo__GetIsDaylightSavingsFromUtc
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,long param_4,undefined8 param_5,
          byte *param_6,long param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_0952170e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_0952170e = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  local_b0 = 0;
  *param_6 = 0;
  if (param_4 == 0) {
    return 0;
  }
  if (param_7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  System_TimeZoneInfo__GetDaylightTime(&local_d0,param_7,param_2,param_4,param_5);
  uStack_78 = uStack_c8;
  local_80 = local_d0;
  local_70 = local_c0;
  uVar5 = System_TimeZoneInfo__GetDaylightSavingsStartOffsetFromUtc(param_7,param_3,param_4,param_5)
  ;
  uVar6 = System_TimeZoneInfo_AdjustmentRule__IsStartDateMarkerForBeginningOfYear(param_4);
  if ((uVar6 & 1) == 0) {
LAB_07516bac:
    uVar8 = local_80;
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
LAB_07516bcc:
    uVar5 = System_DateTime__op_Subtraction(uVar8,uVar5,0);
    uVar4 = 0;
  }
  else {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = System_DateTime__get_Year(&local_80,0);
    iVar3 = System_DateTime__get_Year(*(long *)(DAT_09183548 + 0xb8) + 0x10,0);
    if (iVar2 <= iVar3) goto LAB_07516bac;
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = System_DateTime__get_Year(&local_80,0);
    local_d0 = 0;
    System_DateTime___ctor(&local_d0,iVar2 + -1,0xc,0x1f,0);
    lVar7 = System_TimeZoneInfo__GetAdjustmentRuleForTime(param_7,local_d0,0,&local_98);
    if ((lVar7 == 0) ||
       (uVar6 = System_TimeZoneInfo_AdjustmentRule__IsEndDateMarkerForEndOfYear(), (uVar6 & 1) == 0)
       ) {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_DateTime__get_Year(&local_80,0);
      local_d0 = 0;
      System_DateTime___ctor(&local_d0,uVar4,1,1,0,0,0,0);
      uVar8 = local_d0;
      goto LAB_07516bcc;
    }
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = System_DateTime__get_Year(&local_80,0);
    System_TimeZoneInfo__GetDaylightTime(&local_d0,param_7,iVar2 + -1,lVar7,local_98);
    uVar5 = System_DateTime__op_Subtraction(local_d0,param_3,0);
    uVar5 = System_DateTime__op_Subtraction(uVar5,*(undefined8 *)(lVar7 + 0x58),0);
    uVar4 = 1;
  }
  uVar8 = System_TimeZoneInfo__GetDaylightSavingsEndOffsetFromUtc(uVar5,param_3,param_4);
  uVar6 = System_TimeZoneInfo_AdjustmentRule__IsEndDateMarkerForEndOfYear(param_4);
  if ((uVar6 & 1) == 0) {
LAB_07516d08:
    uVar9 = uStack_78;
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
  }
  else {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = System_DateTime__get_Year((ulong)&local_80 | 8,0);
    iVar3 = System_DateTime__get_Year(*(long *)(DAT_09183548 + 0xb8) + 0x18,0);
    if (iVar3 <= iVar2) goto LAB_07516d08;
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = System_DateTime__get_Year((ulong)&local_80 | 8,0);
    local_d0 = 0;
    System_DateTime___ctor(&local_d0,iVar2 + 1,1,1,0);
    lVar7 = System_TimeZoneInfo__GetAdjustmentRuleForTime(param_7,local_d0,0,&local_a0);
    if ((lVar7 != 0) &&
       (uVar6 = System_TimeZoneInfo_AdjustmentRule__IsStartDateMarkerForBeginningOfYear(),
       (uVar6 & 1) != 0)) {
      uVar6 = System_TimeZoneInfo_AdjustmentRule__IsEndDateMarkerForEndOfYear(lVar7);
      if ((uVar6 & 1) == 0) {
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar2 = System_DateTime__get_Year((ulong)&local_80 | 8,0);
        System_TimeZoneInfo__GetDaylightTime(&local_d0,param_7,iVar2 + 1,lVar7,local_a0);
      }
      else {
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar2 = System_DateTime__get_Year((ulong)&local_80 | 8,0);
        local_d0 = 0;
        System_DateTime___ctor(&local_d0,iVar2 + 1,0xc,0x1f,0);
        uStack_c8 = local_d0;
      }
      uVar8 = System_DateTime__op_Subtraction(uStack_c8,param_3,0);
      uVar8 = System_DateTime__op_Subtraction(uVar8,*(undefined8 *)(lVar7 + 0x58),0);
      uVar8 = System_DateTime__op_Subtraction(uVar8,*(undefined8 *)(lVar7 + 0x20),0);
      uVar4 = 1;
      goto LAB_07516d38;
    }
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = System_DateTime__get_Year((ulong)&local_80 | 8,0);
    local_d0 = 0;
    System_DateTime___ctor(&local_d0,iVar2 + 1,1,1,0,0,0,0);
    local_a8 = local_d0;
    uVar9 = System_DateTime__AddTicks(&local_a8,0xffffffffffffffff,0);
  }
  uVar8 = System_DateTime__op_Subtraction(uVar9,uVar8,0);
LAB_07516d38:
  if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = local_70;
  if (local_70 < 1) {
    local_88 = uVar5;
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_90 = System_DateTime__op_Subtraction(uVar5,lVar7,0);
  }
  else {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_88 = System_DateTime__op_Subtraction(uVar8,lVar7,0);
    local_90 = uVar8;
  }
  if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918bdc0);
  }
  uVar6 = System_TimeZoneInfo__CheckIsDst(uVar5,param_1,uVar8,uVar4,param_4);
  uVar5 = local_88;
  if ((uVar6 & 1) != 0) {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = System_DateTime__op_GreaterThanOrEqual(param_1,uVar5,0);
    uVar5 = local_90;
    if ((uVar6 & 1) == 0) {
      *param_6 = 0;
    }
    else {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      bVar1 = System_DateTime__op_LessThan(param_1,uVar5,0);
      *param_6 = bVar1 & 1;
      if ((bVar1 & 1) != 0) {
        return 1;
      }
    }
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = System_DateTime__get_Year(&local_88,0);
    iVar3 = System_DateTime__get_Year(&local_90,0);
    if (iVar2 != iVar3) {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_DateTime__AddYears(&local_88,1,0);
      System_DateTime__AddYears(&local_90,1,0);
      uVar6 = System_DateTime__op_GreaterThanOrEqual(param_1,local_88,0);
      uVar5 = local_90;
      if ((uVar6 & 1) == 0) {
        bVar1 = 0;
      }
      else {
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        bVar1 = System_DateTime__op_LessThan(param_1,uVar5,0);
        bVar1 = bVar1 & 1;
      }
      *param_6 = bVar1;
      if (bVar1 == 0) {
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_DateTime__AddYears(&local_88,0xffffffff,0);
        System_DateTime__AddYears(&local_90,0xffffffff,0);
        uVar6 = System_DateTime__op_GreaterThanOrEqual(param_1,local_88,0);
        uVar5 = local_90;
        if ((uVar6 & 1) == 0) {
          bVar1 = 0;
        }
        else {
          if (*(int *)(DAT_09183548 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          bVar1 = System_DateTime__op_LessThan(param_1,uVar5,0);
          bVar1 = bVar1 & 1;
        }
        *param_6 = bVar1;
      }
    }
    return 1;
  }
  return 0;
}


// rea decompile_all
// name: System.TimeZoneInfo$$GetIsAmbiguousTime
// address: 0x751648c
// body: available
// range: 0x751648c-0x75166e7 inclusive
// range: 0x7516750-0x75167bb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_TimeZoneInfo__GetIsAmbiguousTime(undefined8 param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_09521710 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09521710 = 1;
  }
  local_40 = 0;
  local_38 = 0;
  if (param_2 != 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_TimeSpan__op_Equality(uVar6,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
    if ((uVar4 & 1) == 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x20);
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_TimeSpan__op_GreaterThan(uVar6,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
      if ((uVar4 & 1) == 0) {
        uVar4 = System_TimeZoneInfo_AdjustmentRule__IsStartDateMarkerForBeginningOfYear(param_2);
        if ((uVar4 & 1) == 0) {
          uVar5 = *param_3;
          uVar6 = *(undefined8 *)(param_2 + 0x20);
          local_38 = uVar5;
          if (*(int *)(DAT_09183548 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = System_DateTime__op_Addition(uVar5,uVar6,0);
          goto LAB_075165e8;
        }
      }
      else {
        uVar4 = System_TimeZoneInfo_AdjustmentRule__IsEndDateMarkerForEndOfYear(param_2);
        if ((uVar4 & 1) == 0) {
          uVar5 = param_3[1];
          uVar6 = *(undefined8 *)(param_2 + 0x20);
          local_38 = uVar5;
          if (*(int *)(DAT_09183548 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar6 = System_DateTime__op_Subtraction(uVar5,uVar6,0);
LAB_075165e8:
          local_40 = uVar6;
          if (*(int *)(DAT_09183548 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = System_DateTime__op_GreaterThanOrEqual(param_1,uVar6,0);
          if ((uVar4 & 1) != 0) {
            if (*(int *)(DAT_09183548 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = System_DateTime__op_LessThan(param_1,uVar5,0);
            if ((uVar4 & 1) == 0) goto LAB_07516640;
LAB_075166e0:
            uVar3 = 1;
            goto LAB_0751651c;
          }
LAB_07516640:
          if (*(int *)(DAT_09183548 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar1 = System_DateTime__get_Year(&local_38,0);
          iVar2 = System_DateTime__get_Year(&local_40,0);
          if (iVar1 != iVar2) {
            if (*(int *)(DAT_09183548 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = System_DateTime__AddYears(&local_38,1,0);
            uVar5 = System_DateTime__AddYears(&local_40,1,0);
            uVar4 = System_DateTime__op_GreaterThanOrEqual(param_1,uVar5,0);
            if ((uVar4 & 1) != 0) {
              if (*(int *)(DAT_09183548 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar4 = System_DateTime__op_LessThan(param_1,uVar6,0);
              if ((uVar4 & 1) != 0) goto LAB_075166e0;
            }
            if (*(int *)(DAT_09183548 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = System_DateTime__AddYears(&local_38,0xffffffff,0);
            uVar5 = System_DateTime__AddYears(&local_40,0xffffffff,0);
            uVar4 = System_DateTime__op_GreaterThanOrEqual(param_1,uVar5,0);
            if ((uVar4 & 1) != 0) {
              if (*(int *)(DAT_09183548 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar3 = System_DateTime__op_LessThan(param_1,uVar6,0);
              goto LAB_0751651c;
            }
          }
        }
      }
    }
  }
  uVar3 = 0;
LAB_0751651c:
  return uVar3 & 1;
}


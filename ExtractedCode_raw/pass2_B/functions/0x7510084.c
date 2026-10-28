// rea decompile_all
// name: System.TimeZoneInfo$$GetUtcOffsetFromUtc
// address: 0x7510084
// body: available
// range: 0x7510084-0x7510353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7510350 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_TimeZoneInfo__GetUtcOffsetFromUtc
          (undefined8 param_1,long param_2,byte *param_3,undefined1 *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_68;
  undefined8 local_58;
  
  if ((DAT_09521715 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_09521715 = 1;
  }
  local_58 = 0;
  local_68 = 0;
  *param_3 = 0;
  *param_4 = 0;
  if (param_2 != 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = *(undefined8 *)(*(long *)(DAT_0918bdc0 + 0xb8) + 0x10);
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09183548);
    }
    uVar3 = System_DateTime__op_GreaterThan(param_1,uVar7,0);
    if ((uVar3 & 1) == 0) {
      if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar7 = *(undefined8 *)(*(long *)(DAT_0918bdc0 + 0xb8) + 0x18);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09183548);
      }
      uVar3 = System_DateTime__op_LessThan(param_1,uVar7,0);
      if ((uVar3 & 1) == 0) {
        lVar4 = System_TimeZoneInfo__GetAdjustmentRuleForTime(param_2,param_1,1,&local_58);
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183548);
        }
        local_68 = System_DateTime__op_Addition(param_1,uVar6,0);
        uVar2 = System_DateTime__get_Year(&local_68,0);
      }
      else {
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = System_TimeZoneInfo__GetAdjustmentRuleForTime
                          (param_2,*(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x10),0,
                           &local_58);
        uVar2 = 1;
      }
    }
    else {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = System_TimeZoneInfo__GetAdjustmentRuleForTime
                        (param_2,*(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x18),0,&local_58)
      ;
      uVar2 = 9999;
    }
    if (lVar4 != 0) {
      uVar7 = *(undefined8 *)(lVar4 + 0x58);
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_TimeSpan__op_Addition(uVar6,uVar7,0);
      uVar3 = System_TimeZoneInfo_AdjustmentRule__get_HasDaylightSaving(lVar4);
      uVar7 = local_58;
      if ((uVar3 & 1) != 0) {
        uVar8 = *(undefined8 *)(param_2 + 0x30);
        if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        bVar1 = System_TimeZoneInfo__GetIsDaylightSavingsFromUtc
                          (param_1,uVar2,uVar8,lVar4,uVar7,param_4,param_2);
        *param_3 = bVar1 & 1;
        if ((bVar1 & 1) == 0) {
          if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar5 = *(undefined8 **)(DAT_0918bd60 + 0xb8);
        }
        else {
          puVar5 = (undefined8 *)(lVar4 + 0x20);
        }
        uVar7 = *puVar5;
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = System_TimeSpan__op_Addition(uVar6,uVar7,0);
      }
    }
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


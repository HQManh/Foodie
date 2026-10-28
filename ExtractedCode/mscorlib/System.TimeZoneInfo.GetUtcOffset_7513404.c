// rea decompile_all
// name: System.TimeZoneInfo$$GetUtcOffset
// address: 0x7513404
// body: available
// range: 0x7513404-0x75135ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75135a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_TimeZoneInfo__GetUtcOffset(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = param_1;
  if ((DAT_09521712 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918bdc0);
    DAT_09521712 = 1;
  }
  local_40 = 0;
  if (param_2 != 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    lVar2 = System_TimeZoneInfo__GetAdjustmentRuleForTime(param_2,param_1,0,&local_40);
    if (lVar2 != 0) {
      uVar6 = *(undefined8 *)(lVar2 + 0x58);
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_TimeSpan__op_Addition(uVar5,uVar6,0);
      uVar3 = System_TimeZoneInfo_AdjustmentRule__get_HasDaylightSaving(lVar2);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = System_DateTime__get_Year(&local_38,0);
        System_TimeZoneInfo__GetDaylightTime(&local_58,param_2,uVar1,lVar2,local_40);
        uVar6 = local_38;
        uStack_68 = uStack_50;
        local_70 = local_58;
        local_60 = local_48;
        if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_88 = uStack_68;
        local_90 = local_70;
        local_80 = local_60;
        uVar3 = System_TimeZoneInfo__GetIsDaylightSavings(uVar6,lVar2,&local_90);
        if ((uVar3 & 1) == 0) {
          if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          puVar4 = *(undefined8 **)(DAT_0918bd60 + 0xb8);
        }
        else {
          puVar4 = (undefined8 *)(lVar2 + 0x20);
        }
        uVar6 = *puVar4;
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = System_TimeSpan__op_Addition(uVar5,uVar6,0);
      }
    }
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


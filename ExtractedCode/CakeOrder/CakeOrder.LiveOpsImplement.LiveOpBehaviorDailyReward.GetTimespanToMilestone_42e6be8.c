// rea decompile_all
// name: CakeOrder.LiveOpsImplement.LiveOpBehaviorDailyReward$$GetTimespanToMilestone
// address: 0x42e6be8
// body: available
// range: 0x42e6be8-0x42e6dff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e6c84 to 0x7359b98 LiveOpsR1.LiveOpBehaviorDailyRewardAbstract$$GetTimespanToNextDay (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42e6dfc to 0x75ce03c System.TimeSpan$$FromSeconds (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_LiveOpsImplement_LiveOpBehaviorDailyReward__GetTimespanToMilestone
          (long param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined8 local_38;
  
  if ((DAT_0951745a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_0951745a = 1;
  }
  local_38 = 0;
  if (*(int *)(param_1 + 0x48) == param_2) {
    if (*(char *)(param_1 + 0x4c) == '\0') {
      dVar8 = (double)(int)(*(uint *)(param_1 + 0x50) &
                           ((int)*(uint *)(param_1 + 0x50) >> 0x1f ^ 0xffffffffU)) * 60.0;
      if (0.0 < dVar8) {
        lVar6 = *(long *)(param_1 + 0x28);
        if (lVar6 == 0) {
          if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_TimeSpan__FromSeconds(dVar8,0);
          return uVar2;
        }
        uVar2 = LiveOpsR1_LiveOpBehaviorDailyRewardAbstract__GetKeyTimeClaimReward(param_2,0);
        if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188c20);
        }
        uVar3 = EssentialSystemR1_OnlineTimeCheck__get_Now(0);
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918bd60);
        }
        uVar4 = System_TimeSpan__FromDays(0x408f380000000000,0);
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09183548);
        }
        uVar3 = System_DateTime__op_Subtraction(uVar3,uVar4,0);
        uVar2 = LiveOpsR1_LiveOpsDataAccessWrapper__GetDateTimeWallClock(lVar6,uVar2,uVar3,0);
        uVar3 = EssentialSystemR1_OnlineTimeCheck__get_Now(0);
        local_38 = System_DateTime__op_Subtraction(uVar3,uVar2,0);
        dVar7 = (double)System_TimeSpan__get_TotalSeconds(&local_38,0);
        iVar5 = *(int *)(DAT_0918bd60 + 0xe4);
        if (0.0 < dVar8 - dVar7) {
          if (iVar5 == 0) {
            FUN_03f5c424();
          }
          uVar2 = System_TimeSpan__FromSeconds(dVar8 - dVar7,0);
          return uVar2;
        }
        goto LAB_042e6dac;
      }
    }
    else if ((*(char *)(param_1 + 0x4d) != '\0') &&
            (uVar1 = CakeOrder_LiveOpsImplement_LiveOpBehaviorDailyReward__IsFreeClaimedToday
                               (param_1), (uVar1 & 1) != 0)) {
      uVar2 = LiveOpsR1_LiveOpBehaviorDailyRewardAbstract__GetTimespanToNextDay(param_1,0);
      return uVar2;
    }
  }
  iVar5 = *(int *)(DAT_0918bd60 + 0xe4);
LAB_042e6dac:
  if (iVar5 == 0) {
    FUN_03f5c424();
  }
  return **(undefined8 **)(DAT_0918bd60 + 0xb8);
}


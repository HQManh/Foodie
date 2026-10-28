// rea decompile_all
// name: CakeOrder.LiveOpsImplement.LiveOpBehaviorDailyReward$$IsFreeClaimedToday
// address: 0x42e6a48
// body: available
// range: 0x42e6a48-0x42e6be7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CakeOrder_LiveOpsImplement_LiveOpBehaviorDailyReward__IsFreeClaimedToday(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  double dVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if ((DAT_09517459 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09187e98);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09517459 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  local_40 = 0;
  local_38 = 0;
  local_48 = 0;
  if (lVar5 == 0) {
    bVar1 = false;
  }
  else {
    uVar2 = LiveOpsR1_LiveOpBehaviorDailyRewardAbstract__GetKeyTimeClaimReward
                      (*(undefined4 *)(param_1 + 0x48),0);
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
    local_38 = LiveOpsR1_LiveOpsDataAccessWrapper__GetDateTimeWallClock(lVar5,uVar2,uVar3,0);
    local_40 = EssentialSystemR1_OnlineTimeCheck__get_Now(0);
    uVar2 = System_DateTime__get_Date(&local_40,0);
    uVar3 = System_DateTime__get_Date(&local_38,0);
    local_48 = System_DateTime__op_Subtraction(uVar2,uVar3,0);
    dVar6 = (double)System_TimeSpan__get_TotalDays(&local_48,0);
    bVar1 = dVar6 < (double)(1.0 - **(float **)(DAT_09187e98 + 0xb8));
  }
  return bVar1;
}


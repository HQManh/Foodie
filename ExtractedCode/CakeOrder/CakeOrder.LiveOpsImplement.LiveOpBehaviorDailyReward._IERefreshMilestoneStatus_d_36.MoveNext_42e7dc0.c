// rea decompile_all
// name: CakeOrder.LiveOpsImplement.LiveOpBehaviorDailyReward.<IERefreshMilestoneStatus>d__36$$MoveNext
// address: 0x42e7dc0
// body: available
// range: 0x42e7dc0-0x42e7eb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e7eb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_LiveOpsImplement_LiveOpBehaviorDailyReward_<IERefreshMilestoneStatus>d__36__MoveNext
          (long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  
  if ((DAT_09517462 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ce98);
    DAT_09517462 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) goto LAB_042e7eb4;
    iVar1 = CakeOrder_LiveOpsImplement_LiveOpBehaviorDailyReward__CountMilestonesTimeReached(lVar3);
    if (iVar1 != *(int *)(lVar3 + 100)) {
      *(int *)(lVar3 + 100) = iVar1;
      LiveOpsR1_LiveOpBehaviorDailyRewardAbstract__UpdateMilestoneStatus(lVar3,0);
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) {
LAB_042e7eb4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    fVar4 = 1.0;
    if (1.0 <= *(float *)(lVar3 + 0x60)) {
      fVar4 = *(float *)(lVar3 + 0x60);
    }
    uVar2 = thunk_FUN_03f9944c(DAT_0918ce98);
    UnityEngine_WaitForSecondsRealtime___ctor(fVar4,uVar2,0);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),uVar2);
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}


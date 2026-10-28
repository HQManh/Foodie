// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIPopupDailyRewards$$OnClickClaimed
// address: 0x42e9ce0
// body: available
// range: 0x42e9ce0-0x42e9e47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e9df4 to 0x42e99a8 CakeOrder.LiveOpsImplement.UIPopupDailyRewards$$OnClickLocked (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42e9e40 to 0x42d058c CakeOrder.BaseUI.InternetGate$$Check (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42e9e44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIPopupDailyRewards__OnClickClaimed(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  undefined4 uVar7;
  
  if ((DAT_09517471 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174570);
    FUN_03f5c2a4(&DAT_091f1820);
    FUN_03f5c2a4(&DAT_091957a8);
    DAT_09517471 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091957a8);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_1);
    plVar5 = (long *)(lVar1 + 0x18);
    *plVar5 = param_2;
    thunk_FUN_03f5d7b8(plVar5,param_2);
    fVar6 = (float)UnityEngine_Time__get_unscaledTime(0);
    if (fVar6 < *(float *)(param_1 + 0xbc) + 1.0) {
      return;
    }
    uVar7 = UnityEngine_Time__get_unscaledTime(0);
    lVar4 = *plVar5;
    *(undefined4 *)(param_1 + 0xbc) = uVar7;
    if ((lVar4 != 0) && (*(long *)(param_1 + 0xc0) != 0)) {
      uVar2 = LiveOpsR1_LiveOpBehaviorDailyRewardAbstract__ComputeIsClaimable
                        (*(long *)(param_1 + 0xc0),*(undefined4 *)(lVar4 + 0x90),0);
      if ((uVar2 & 1) != 0) {
        if (*(char *)(param_1 + 0x101) != '\0') {
          return;
        }
        *(undefined1 *)(param_1 + 0x101) = 1;
        uVar3 = thunk_FUN_03f9944c(DAT_09174570);
        FUN_070a4758(uVar3,lVar1,DAT_091f1820,0);
        CakeOrder_BaseUI_InternetGate__Check(uVar3,0);
        return;
      }
      if (*(long *)(param_1 + 0xc0) != 0) {
        LiveOpsR1_LiveOpBehaviorDailyRewardAbstract__RefreshMilestoneStatus
                  (*(long *)(param_1 + 0xc0),0);
        CakeOrder_LiveOpsImplement_UIPopupDailyRewards__OnClickLocked(param_1,*plVar5);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: LiveOpsR1.LiveOpBehaviorDailyRewardAbstract$$TakeReward
// address: 0x7359fd4
// body: available
// range: 0x7359fd4-0x735a2e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x735a0f4 to 0x7359948 LiveOpsR1.LiveOpBehaviorDailyRewardAbstract$$UpdateMilestoneStatus (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x735a2d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x735a2d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x735a2e0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void LiveOpsR1_LiveOpBehaviorDailyRewardAbstract__TakeReward(long *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int local_38;
  int local_34;
  
  if ((DAT_095207fc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187a08);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_09226190);
    FUN_03f5c2a4(&DAT_09226170);
    DAT_095207fc = 1;
  }
  if ((param_2 < 0) ||
     (iVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0)),
     iVar1 <= param_2)) {
    if (*(int *)(DAT_09187a08 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = **(long **)(DAT_09187a08 + 0xb8);
    plVar5 = (long *)FUN_03f5c394(DAT_09180318,2);
    if ((param_1[4] != 0) && (plVar5 != (long *)0x0)) {
      lVar8 = *(long *)(param_1[4] + 0x18);
      if ((lVar8 != 0) &&
         (lVar6 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_0735a2d8:
        uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,0);
      }
      if ((int)plVar5[3] != 0) {
        plVar5[4] = lVar8;
        thunk_FUN_03f5d7b8(plVar5 + 4,lVar8);
        local_34 = param_2;
        lVar8 = FUN_03f5c42c(DAT_09535420,&local_34);
        if ((lVar8 != 0) &&
           (lVar6 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
        goto LAB_0735a2d8;
        if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
          plVar5[5] = lVar8;
          thunk_FUN_03f5d7b8(plVar5 + 5,lVar8);
          if (lVar7 != 0) {
            EssentialSystemR1_R1Logger__LogErrorFormat(lVar7,DAT_09226170,plVar5,0);
            return;
          }
          goto LAB_0735a2d0;
        }
      }
LAB_0735a2d4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
  else {
    uVar2 = LiveOpsR1_LiveOpBehaviorDailyRewardAbstract__ComputeIsClaimable(param_1,param_2);
    if ((uVar2 & 1) == 0) {
      if (*(int *)(DAT_09187a08 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = **(long **)(DAT_09187a08 + 0xb8);
      plVar5 = (long *)FUN_03f5c394(DAT_09180318,2);
      if ((param_1[4] != 0) && (plVar5 != (long *)0x0)) {
        lVar8 = *(long *)(param_1[4] + 0x18);
        if ((lVar8 == 0) ||
           (lVar6 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 != 0)) {
          if ((int)plVar5[3] != 0) {
            plVar5[4] = lVar8;
            thunk_FUN_03f5d7b8(plVar5 + 4,lVar8);
            local_38 = param_2;
            lVar8 = FUN_03f5c42c(DAT_09535420,&local_38);
            if ((lVar8 != 0) &&
               (lVar6 = thunk_FUN_03f99350(lVar8,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
            goto LAB_0735a2d8;
            if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
              plVar5[5] = lVar8;
              thunk_FUN_03f5d7b8(plVar5 + 5,lVar8);
              if (lVar7 != 0) {
                EssentialSystemR1_R1Logger__LogErrorFormat(lVar7,DAT_09226190,plVar5,0);
                LiveOpsR1_LiveOpBehaviorDailyRewardAbstract__UpdateMilestoneStatus(param_1);
                return;
              }
              goto LAB_0735a2d0;
            }
          }
          goto LAB_0735a2d4;
        }
        goto LAB_0735a2d8;
      }
    }
    else {
      (**(code **)(*param_1 + 0x1d8))(param_1,param_2,*(undefined8 *)(*param_1 + 0x1e0));
      uVar3 = LiveOpsR1_LiveOpBehaviorDailyRewardAbstract__GetKeyTimeClaimReward(param_2);
      lVar7 = param_1[5];
      if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188c20);
      }
      uVar4 = EssentialSystemR1_OnlineTimeCheck__get_Now(0);
      if ((lVar7 != 0) &&
         (LiveOpsR1_LiveOpsDataAccessWrapper__SetDateTimeWallClock(lVar7,uVar3,uVar4),
         param_1[5] != 0)) {
        LiveOpsR1_LiveOpsDataAccessWrapper__Save();
        LiveOpsR1_LiveOpBehaviorDailyRewardAbstract__UpdateMilestoneStatus(param_1);
        return;
      }
    }
  }
LAB_0735a2d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


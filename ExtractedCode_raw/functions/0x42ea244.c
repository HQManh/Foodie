// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIPopupDailyRewards$$RefreshCountdownViewsInternal
// address: 0x42ea244
// body: available
// range: 0x42ea244-0x42ea3d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ea398 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ea3bc to 0x7359f9c LiveOpsR1.LiveOpBehaviorDailyRewardAbstract$$RefreshMilestoneStatus (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42ea3d4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIPopupDailyRewards__RefreshCountdownViewsInternal(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  if ((DAT_09517475 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918bd60);
    DAT_09517475 = 1;
  }
  plVar3 = *(long **)(param_1 + 0xc0);
  if (plVar3 != (long *)0x0) {
    uVar7 = 0;
    uVar8 = 0;
    do {
      iVar1 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
      if ((long)iVar1 <= (long)uVar7) {
LAB_042ea39c:
        if ((uVar8 & 1) == 0) {
          return;
        }
        if (*(long *)(param_1 + 0xc0) != 0) {
          LiveOpsR1_LiveOpBehaviorDailyRewardAbstract__RefreshMilestoneStatus
                    (*(long *)(param_1 + 0xc0),0);
          return;
        }
        break;
      }
      if (*(long *)(param_1 + 200) == 0) break;
      if ((long)*(int *)(*(long *)(param_1 + 200) + 0x18) <= (long)uVar7) goto LAB_042ea39c;
      if (*(long *)(param_1 + 0xc0) == 0) break;
      uVar4 = CakeOrder_LiveOpsImplement_LiveOpBehaviorDailyReward__GetTimespanToMilestone
                        (*(long *)(param_1 + 0xc0),uVar7 & 0xffffffff);
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918bd60);
      }
      uVar5 = System_TimeSpan__op_LessThanOrEqual(uVar4,**(undefined8 **)(DAT_0918bd60 + 0xb8),0);
      lVar6 = *(long *)(param_1 + 200);
      if ((uVar5 & 1) == 0) {
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_042ea3d4;
        lVar6 = *(long *)(lVar6 + uVar7 * 8 + 0x20);
        uVar4 = CakeOrder_LiveOpsImplement_UIPopupDailyRewards__FormatCountdown(uVar4);
        if (lVar6 == 0) break;
        CakeOrder_LiveOpsImplement_UIItemSlotDailyRewards__SetCountdown(lVar6,uVar4);
      }
      else {
        if (lVar6 == 0) break;
        if (*(uint *)(lVar6 + 0x18) <= uVar7) {
LAB_042ea3d4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar6 = *(long *)(lVar6 + uVar7 * 8 + 0x20);
        if (lVar6 == 0) break;
        CakeOrder_LiveOpsImplement_UIItemSlotDailyRewards__SetCountdown(lVar6,0);
        if (*(long *)(param_1 + 0xc0) == 0) break;
        iVar1 = LiveOpsR1_LiveOpBehaviorDailyRewardAbstract__GetMilestoneStatus
                          (*(long *)(param_1 + 0xc0),uVar7 & 0xffffffff,0);
        if (iVar1 != 1) {
          if (*(long *)(param_1 + 0xc0) == 0) break;
          uVar2 = LiveOpsR1_LiveOpBehaviorDailyRewardAbstract__ComputeIsClaimable
                            (*(long *)(param_1 + 0xc0),uVar7 & 0xffffffff,0);
          uVar8 = uVar2 | uVar8;
        }
      }
      plVar3 = *(long **)(param_1 + 0xc0);
      uVar7 = uVar7 + 1;
    } while (plVar3 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


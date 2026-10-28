// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIPopupDailyRewards$$UpdateSlots
// address: 0x42e963c
// body: available
// range: 0x42e963c-0x42e970b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e96f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42e9708 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_LiveOpsImplement_UIPopupDailyRewards__UpdateSlots(long param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  CakeOrder_LiveOpsImplement_UIPopupDailyRewards__UpdateProgressFill();
  plVar3 = *(long **)(param_1 + 0xc0);
  if (plVar3 != (long *)0x0) {
    uVar5 = 0;
    do {
      iVar1 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
      if ((long)iVar1 <= (long)uVar5) {
        return;
      }
      if (*(long *)(param_1 + 200) == 0) break;
      if ((long)*(int *)(*(long *)(param_1 + 200) + 0x18) <= (long)uVar5) {
        return;
      }
      if (*(long *)(param_1 + 0xc0) == 0) break;
      uVar2 = LiveOpsR1_LiveOpBehaviorDailyRewardAbstract__GetMilestoneStatus
                        (*(long *)(param_1 + 0xc0),uVar5 & 0xffffffff,0);
      lVar4 = *(long *)(param_1 + 200);
      iVar1 = 0;
      if (uVar2 < 3) {
        iVar1 = uVar2 + 1;
      }
      if ((param_2 & 1) == 0) {
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar5) goto LAB_042e9708;
        lVar4 = *(long *)(lVar4 + uVar5 * 8 + 0x20);
        if (lVar4 == 0) break;
        CakeOrder_LiveOpsImplement_UIItemSlotDailyRewards__SetStateImmediate(lVar4,iVar1);
      }
      else {
        if (lVar4 == 0) break;
        if (*(uint *)(lVar4 + 0x18) <= uVar5) {
LAB_042e9708:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*(long *)(lVar4 + uVar5 * 8 + 0x20) == 0) break;
        CakeOrder_LiveOpsImplement_UIItemSlotDailyRewards__ChangeState();
      }
      plVar3 = *(long **)(param_1 + 0xc0);
      uVar5 = uVar5 + 1;
    } while (plVar3 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


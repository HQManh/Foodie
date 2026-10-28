// rea decompile_all
// name: CakeOrder.UI.UIPopupRestaurantUpgradeReward.<SetData>d__4$$MoveNext
// address: 0x42beec4
// body: available
// range: 0x42beec4-0x42bf1a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42bf160 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bf164 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bf168 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bf16c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bf170 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bf174 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bf178 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bf17c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bf180 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bf184 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bf190 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bf19c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIPopupRestaurantUpgradeReward_<SetData>d__4__MoveNext(undefined4 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined4 local_58;
  undefined4 local_54 [3];
  undefined4 local_48;
  undefined8 local_38;
  
  if ((DAT_0951730b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_0919edd0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0921e768);
    DAT_0951730b = 1;
  }
  lVar8 = *(long *)(param_1 + 8);
  local_38 = 0;
  local_48 = 0;
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar9 = *(long **)(lVar8 + 0x188);
  plVar1 = (long *)FUN_03f5c394(DAT_09180318,2);
  if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_54[0] = *(undefined4 *)(*(long *)(param_1 + 10) + 0x10);
  lVar2 = FUN_03f5c42c(DAT_09535420,local_54);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
    uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,0);
  }
  if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar1[4] = lVar2;
  thunk_FUN_03f5d7b8(plVar1 + 4,lVar2);
  if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_58 = *(undefined4 *)(*(long *)(param_1 + 10) + 0x14);
  lVar2 = FUN_03f5c42c(DAT_09535420,&local_58);
  if ((lVar2 != 0) &&
     (lVar3 = thunk_FUN_03f99350(lVar2,*(undefined8 *)(*plVar1 + 0x40)), lVar3 == 0)) {
    uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,0);
  }
  if ((*(uint *)(plVar1 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar1[5] = lVar2;
  thunk_FUN_03f5d7b8(plVar1 + 5,lVar2);
  if (*(int *)(DAT_09182278 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_0921e768,plVar1,0);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x558))(plVar9,uVar4,*(undefined8 *)(*plVar9 + 0x560));
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = *(long *)(*(long *)(param_1 + 10) + 0x18);
    if ((lVar2 == 0) || (uVar5 = FUN_06f3c6f0(lVar2,1,&local_38,DAT_0919edd0), (uVar5 & 1) == 0)) {
      plVar1 = *(long **)(lVar8 + 400);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar1 + 0x558))
                (plVar1,**(undefined8 **)(DAT_09535468 + 0xb8),*(undefined8 *)(*plVar1 + 0x560));
    }
    else {
      plVar1 = *(long **)(lVar8 + 400);
      uVar4 = *(undefined8 *)(lVar8 + 0x198);
      local_54[0] = (undefined4)local_38;
      uVar6 = FUN_03f5c42c(DAT_09535420,local_54);
      local_58 = local_38._4_4_;
      uVar7 = FUN_03f5c42c(DAT_09535420,&local_58);
      uVar4 = System_String__Format(uVar4,uVar6,uVar7,0);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar4,uVar4);
      }
      (**(code **)(*plVar1 + 0x558))(plVar1,uVar4,*(undefined8 *)(*plVar1 + 0x560));
    }
    if (*(long *)(param_1 + 10) != 0) {
      CakeOrder_UI_UIPopupListRewardClaimed__SetReward
                (lVar8,*(undefined8 *)(*(long *)(param_1 + 10) + 0x20));
      *param_1 = 0xfffffffe;
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(uVar4,uVar4);
}


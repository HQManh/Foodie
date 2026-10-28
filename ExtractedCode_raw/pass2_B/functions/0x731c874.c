// rea decompile_all
// name: IapAdsSystem.InAppManager.<LoadPercentageSale>d__76$$MoveNext
// address: 0x731c874
// body: available
// range: 0x731c874-0x731c993 inclusive
// range: 0x731c9a4-0x731cbab inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x731c98c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731c990 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731cb88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731cb8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731cb90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731cb94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731cb98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731cb9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731cba0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731cba4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731cba8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void IapAdsSystem_InAppManager_<LoadPercentageSale>d__76__MoveNext(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined8 local_60;
  float local_54;
  
  if ((DAT_09520572 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1400);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_09209fe0);
    DAT_09520572 = 1;
  }
  lVar7 = *(long *)(param_1 + 10);
  local_54 = 0.0;
  local_60 = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
    goto LAB_0731c9e0;
  }
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar8 = *(long *)(param_1 + 8);
  fVar10 = (float)IapAdsSystem_InAppManager__GetDefaultCostValue
                            (lVar7,*(undefined8 *)(param_1 + 0xc));
  fVar11 = (float)IapAdsSystem_InAppManager__GetDefaultCostValue
                            (lVar7,*(undefined8 *)(param_1 + 0xe));
  local_54 = fVar10 / fVar11 + -1.0;
  uVar4 = System_Single__ToString(&local_54,DAT_09209fe0,0);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar4,uVar4);
  }
  (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),uVar4,*(undefined8 *)(lVar8 + 0x28));
  while (*(char *)(lVar7 + 0x40) == '\0') {
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar8 = System_Threading_Tasks_Task__Delay(500,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_60 = System_Threading_Tasks_Task__GetAwaiter(lVar8,0);
    uVar5 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_60,0);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_0499255c(param_1 + 2,&local_60,param_1,DAT_091c1400);
      return;
    }
LAB_0731c9e0:
    System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_60,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  plVar6 = *(long **)(param_1 + 0xc);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar8 = *(long *)(lVar7 + 0x30);
  uVar4 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550(uVar4,uVar4);
  }
  lVar8 = UnityEngine_Purchasing_StoreController__GetProductById(lVar8,uVar4,0);
  plVar6 = *(long **)(param_1 + 0xe);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar7 = *(long *)(lVar7 + 0x30);
  uVar4 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
  if (lVar7 != 0) {
    lVar7 = UnityEngine_Purchasing_StoreController__GetProductById(lVar7,uVar4,0);
    if ((lVar8 != 0) && (lVar7 != 0)) {
      lVar9 = *(long *)(param_1 + 8);
      lVar8 = UnityEngine_Purchasing_Product__get_metadata(lVar8,0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = *(undefined8 *)(lVar8 + 0x30);
      uVar2 = *(undefined8 *)(lVar8 + 0x38);
      lVar7 = UnityEngine_Purchasing_Product__get_metadata(lVar7,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = *(undefined8 *)(lVar7 + 0x30);
      uVar3 = *(undefined8 *)(lVar7 + 0x38);
      if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091837d8);
      }
      auVar12 = System_Decimal__op_Division(uVar4,uVar2,uVar1,uVar3,0);
      local_54 = (float)System_Decimal__op_Explicit(auVar12._0_8_,auVar12._8_8_,0);
      local_54 = local_54 + -1.0;
      uVar4 = System_Single__ToString(&local_54,DAT_09209fe0,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550(uVar4,uVar4);
      }
      (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),uVar4,*(undefined8 *)(lVar9 + 0x28))
      ;
    }
    lVar7 = DAT_09181780;
    *param_1 = -2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(uVar4,uVar4);
}


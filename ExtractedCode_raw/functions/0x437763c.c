// rea decompile_all
// name: CakeOrder.PopupMinigame.CookOrderPopupMinigameLoader.<PlayMinigameFromPrefab>d__20$$MoveNext
// address: 0x437763c
// body: available
// range: 0x437763c-0x4377a37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4377a08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4377a0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4377a10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4377a14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4377a18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4377a1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4377a20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4377a24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4377a28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4377a2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4377a30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4377a34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_PopupMinigame_CookOrderPopupMinigameLoader_<PlayMinigameFromPrefab>d__20__MoveNext
               (int *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  undefined8 local_48;
  
  if ((DAT_09517913 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174af0);
    FUN_03f5c2a4(&DAT_09174a48);
    FUN_03f5c2a4(&DAT_091c13b0);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091c62c8);
    FUN_03f5c2a4(&DAT_091c62d0);
    FUN_03f5c2a4(&DAT_0919cc30);
    FUN_03f5c2a4(&DAT_0919cc38);
    FUN_03f5c2a4(&DAT_091cd8c8);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c468);
    DAT_09517913 = 1;
  }
  lVar4 = *(long *)(param_1 + 8);
  local_48 = 0;
  if (*param_1 == 0) {
    local_48 = *(undefined8 *)(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = FUN_06fd9fbc(*(long *)(lVar4 + 0x30),*(undefined8 *)(param_1 + 10),param_1 + 0x12,
                         DAT_0919cc38);
    if ((uVar1 & 1) != 0) goto LAB_043778ac;
    if (*(long *)(lVar4 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = *(undefined8 *)(param_1 + 10);
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x68) + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = FUN_04c35338(uVar5,uVar6,DAT_091d4bc0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar5 = FUN_04b7c324(lVar2,DAT_091cd8c8);
    *(undefined8 *)(param_1 + 0x12) = uVar5;
    thunk_FUN_03f5d7b8(param_1 + 0x12);
    if (*(long *)(lVar4 + 0x68) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar3 = *(long **)(param_1 + 0x12);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    fVar8 = (float)*(int *)(lVar4 + 0x60);
    lVar2 = (**(code **)(*plVar3 + 0x188))
                      (*(float *)(lVar4 + 0x48) + *(float *)(lVar4 + 0x54) * fVar8,
                       *(float *)(lVar4 + 0x4c) + *(float *)(lVar4 + 0x58) * fVar8,
                       *(float *)(lVar4 + 0x50) + *(float *)(lVar4 + 0x5c) * fVar8,plVar3,
                       *(undefined8 *)(*(long *)(lVar4 + 0x68) + 0x20),*(undefined8 *)(lVar4 + 0x40)
                       ,*(undefined8 *)(*plVar3 + 400));
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_48 = System_Threading_Tasks_Task__GetAwaiter(lVar2,0);
    uVar1 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_48,0);
    if ((uVar1 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x14) = local_48;
      thunk_FUN_03f5d7b8(param_1 + 0x14,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04992084(param_1 + 2,&local_48,param_1,DAT_091c13b0);
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_48,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar4 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_06fd8454(*(long *)(lVar4 + 0x30),*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0x12)
               ,DAT_0919cc30);
  *(int *)(lVar4 + 0x60) = *(int *)(lVar4 + 0x60) + 1;
LAB_043778ac:
  plVar3 = (long *)(lVar4 + 0x88);
  *plVar3 = *(long *)(param_1 + 0x12);
  thunk_FUN_03f5d7b8(plVar3);
  lVar2 = *(long *)(param_1 + 0xc);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*plVar3,*(undefined8 *)(lVar2 + 0x28))
    ;
  }
  *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(param_1 + 0xe);
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(param_1 + 0x10);
  thunk_FUN_03f5d7b8();
  lVar7 = *(long *)(lVar4 + 0x70);
  lVar2 = thunk_FUN_03f9944c(DAT_0918c468);
  System_Object___ctor(lVar2,0);
  if (*plVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(*plVar3 + 0x20);
  thunk_FUN_03f5d7b8();
  uVar5 = thunk_FUN_03f9944c(DAT_09174af0);
  FUN_070a8c30(uVar5,lVar4,DAT_091c62d0,0);
  uVar6 = thunk_FUN_03f9944c(DAT_09174a48);
  FUN_070a8c30(uVar6,lVar4,DAT_091c62c8,0);
  if (lVar7 != 0) {
    uVar5 = CakeOrder_BaseUI_SceneMainUI__ShowPopupMinigame(lVar7,lVar2,uVar5,uVar6,0);
    Utilities_AsyncExtension__RunWithLogException(uVar5,0);
    *param_1 = -2;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    thunk_FUN_03f5d7b8(param_1 + 0x12,0);
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


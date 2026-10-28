// rea decompile_all
// name: _GAME.StageRace.PopupStageRaceFinishChestAnim.<OpenChest>d__4$$MoveNext
// address: 0x77f0df8
// body: available
// range: 0x77f0df8-0x77f11ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77f1180 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f1184 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f1188 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f118c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f1190 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f1194 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f1198 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f119c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f11a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f11a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f11a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_StageRace_PopupStageRaceFinishChestAnim_<OpenChest>d__4__MoveNext(int *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_28;
  
  if ((DAT_095230f0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2c98);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_091f9bf8);
    FUN_03f5c2a4(&DAT_091f9dd0);
    FUN_03f5c2a4(&DAT_09209dd8);
    DAT_095230f0 = 1;
  }
  iVar1 = *param_1;
  lVar4 = *(long *)(param_1 + 10);
  local_28 = 0;
  if (iVar1 == 0) {
    local_28 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
LAB_077f0f24:
    System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_28,0);
    _GAME_Device_AudioController__PlaySound(0x3f800000,7,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = Spine_Unity_SkeletonGraphic__get_AnimationState(*(long *)(lVar4 + 0x18),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Spine_AnimationState__SetEmptyAnimation(0,lVar2,0,0);
    if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = Spine_Unity_SkeletonGraphic__get_AnimationState(*(long *)(lVar4 + 0x18),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Spine_AnimationState__SetAnimation(lVar2,0,DAT_091f9bf8,0,0);
    if (*(long *)(lVar4 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = Spine_Unity_SkeletonGraphic__get_AnimationState(*(long *)(lVar4 + 0x18),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Spine_AnimationState__AddAnimation(0,lVar4,0,DAT_091f9dd0,1,0);
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = System_Threading_Tasks_Task__Delay(300,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_28 = System_Threading_Tasks_Task__GetAwaiter(lVar4,0);
    uVar3 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_28,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x10) = local_28;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      FUN_049c56b4(param_1 + 2,&local_28,param_1,DAT_091c2c98);
      return;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        local_28 = *(undefined8 *)(param_1 + 0x10);
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        *param_1 = -1;
        goto LAB_077f1078;
      }
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Utils_HelperAnimation__ResetAndSetTrigger(*(undefined8 *)(lVar4 + 0x10),DAT_09209dd8,0);
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = System_Threading_Tasks_Task__Delay(0x19f,0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_28 = System_Threading_Tasks_Task__GetAwaiter(lVar2,0);
      uVar3 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_28,0);
      if ((uVar3 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x10) = local_28;
        thunk_FUN_03f5d7b8(param_1 + 0x10,0);
        FUN_049c56b4(param_1 + 2,&local_28,param_1,DAT_091c2c98);
        return;
      }
      goto LAB_077f0f24;
    }
    local_28 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_28,0);
  lVar4 = *(long *)(param_1 + 0xc);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
  }
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = System_Threading_Tasks_Task__Delay(0x16d,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_28 = System_Threading_Tasks_Task__GetAwaiter(lVar4,0);
  uVar3 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_28,0);
  if ((uVar3 & 1) == 0) {
    *param_1 = 2;
    *(undefined8 *)(param_1 + 0x10) = local_28;
    thunk_FUN_03f5d7b8(param_1 + 0x10,0);
    FUN_049c56b4(param_1 + 2,&local_28,param_1,DAT_091c2c98);
    return;
  }
LAB_077f1078:
  System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_28,0);
  _GAME_Device_AudioController__PlaySound(0x3f800000,4,0);
  lVar4 = *(long *)(param_1 + 0xe);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
  }
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


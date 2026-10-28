// rea decompile_all
// name: _GAME.WeeklyContest.PopupWeeklyContestFinishCtrl.<OpenChest>d__14$$MoveNext
// address: 0x77ded54
// body: available
// range: 0x77ded54-0x77df367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77df308 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77df30c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77df310 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77df314 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77df318 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77df31c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77df320 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77df324 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77df328 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77df32c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77df330 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77df334 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void _GAME_WeeklyContest_PopupWeeklyContestFinishCtrl_<OpenChest>d__14__MoveNext(uint *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_6c;
  undefined8 local_68;
  uint *puStack_60;
  long *local_58;
  undefined4 local_40;
  undefined8 local_38;
  long local_30;
  uint local_24;
  
  if ((DAT_09523044 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2cb8);
    FUN_03f5c2a4(&DAT_091afa60);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_0920d0f8);
    FUN_03f5c2a4(&DAT_091f9e40);
    FUN_03f5c2a4(&DAT_09204650);
    FUN_03f5c2a4(&DAT_091f9de0);
    DAT_09523044 = 1;
  }
  local_24 = *param_1;
  local_30 = *(long *)(param_1 + 10);
  local_38 = 0;
  local_40 = 0;
  if (3 < local_24) {
    if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(local_30 + 0xd8) != '\0') goto LAB_077df2e4;
  }
  puStack_60 = &local_24;
  local_58 = &local_30;
  local_68 = 0;
  if ((int)local_24 < 2) {
    if (local_24 == 0) {
      local_38 = *(undefined8 *)(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      local_24 = 0xffffffff;
      *param_1 = 0xffffffff;
LAB_077def64:
      System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_38,0);
      if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = *(undefined8 *)(local_30 + 0x100);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar3 & 1) != 0) {
        if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(local_30 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = Spine_Unity_SkeletonGraphic__get_AnimationState(*(long *)(local_30 + 0x100),0);
        if (lVar2 != 0) {
          if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(local_30 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar2 = Spine_Unity_SkeletonGraphic__get_AnimationState(*(long *)(local_30 + 0x100),0);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          Spine_AnimationState__SetEmptyAnimation(0,lVar2,0,0);
          if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(local_30 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar2 = Spine_Unity_SkeletonGraphic__get_AnimationState(*(long *)(local_30 + 0x100),0);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          Spine_AnimationState__SetAnimation(lVar2,0,DAT_091f9de0,0,0);
          if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(long *)(local_30 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar2 = Spine_Unity_SkeletonGraphic__get_AnimationState(*(long *)(local_30 + 0x100),0);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          Spine_AnimationState__AddAnimation(0,lVar2,0,DAT_091f9e40,1,0);
        }
      }
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = System_Threading_Tasks_Task__Delay(0x212,0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_38 = System_Threading_Tasks_Task__GetAwaiter(lVar2,0);
      uVar3 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_38,0);
      if ((uVar3 & 1) == 0) {
        local_24 = 1;
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0xc) = local_38;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_049c6088(param_1 + 2,&local_38,param_1,DAT_091c2cb8);
      }
      else {
LAB_077df0a8:
        System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_38,0);
        _GAME_Device_AudioController__PlaySound(0x3f800000,7,0);
        if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = System_Threading_Tasks_Task__Delay(0x78,0);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_38 = System_Threading_Tasks_Task__GetAwaiter(lVar2,0);
        uVar3 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_38,0);
        if ((uVar3 & 1) != 0) goto LAB_077df160;
        local_24 = 2;
        *param_1 = 2;
        *(undefined8 *)(param_1 + 0xc) = local_38;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_049c6088(param_1 + 2,&local_38,param_1,DAT_091c2cb8);
      }
    }
    else {
      if (local_24 == 1) {
        local_38 = *(undefined8 *)(param_1 + 0xc);
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        local_24 = 0xffffffff;
        *param_1 = 0xffffffff;
        goto LAB_077df0a8;
      }
LAB_077dee74:
      if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Utils_HelperTextMeshPro__SetActive(*(undefined8 *)(local_30 + 0xe8),0,0);
      if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Utils_HelperButton__HideScale
                (0x3f800000,0x3f8ccccd,0,*(undefined8 *)(local_30 + 0x118),0);
      if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_Utils_HelperAnimation__ResetAndSetTrigger
                (*(undefined8 *)(local_30 + 0xf8),DAT_09204650,0);
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = System_Threading_Tasks_Task__Delay(900,0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_38 = System_Threading_Tasks_Task__GetAwaiter(lVar2,0);
      uVar3 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_38,0);
      if ((uVar3 & 1) != 0) goto LAB_077def64;
      local_24 = 0;
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_38;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049c6088(param_1 + 2,&local_38,param_1,DAT_091c2cb8);
    }
LAB_077df2cc:
    iVar5 = 10;
  }
  else {
    if (local_24 == 2) {
      local_38 = *(undefined8 *)(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      local_24 = 0xffffffff;
      *param_1 = 0xffffffff;
LAB_077df160:
      System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_38,0);
      if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(local_30 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_6c = *(undefined4 *)(*(long *)(local_30 + 0x130) + 0x18);
      uVar6 = *(undefined8 *)(local_30 + 0x108);
      uVar4 = FUN_03f5c42c(DAT_09535420,&local_6c);
      uVar4 = System_String__Format(DAT_0920d0f8,uVar4,0);
      _GAME_Utils_HelperAnimation__ResetAndSetTrigger(uVar6,uVar4,0);
      if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(local_30 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar5 = *(int *)(*(long *)(local_30 + 0x130) + 0x18);
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = iVar5 - 1;
      lVar2 = System_Threading_Tasks_Task__Delay
                        ((uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)) * 100 + 0x16d,0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_38 = System_Threading_Tasks_Task__GetAwaiter(lVar2,0);
      uVar3 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_38,0);
      if ((uVar3 & 1) == 0) {
        local_24 = 3;
        *param_1 = 3;
        *(undefined8 *)(param_1 + 0xc) = local_38;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_049c6088(param_1 + 2,&local_38,param_1,DAT_091c2cb8);
        goto LAB_077df2cc;
      }
    }
    else {
      if (local_24 != 3) goto LAB_077dee74;
      local_38 = *(undefined8 *)(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      local_24 = 0xffffffff;
      *param_1 = 0xffffffff;
    }
    System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_38,0);
    _GAME_Device_AudioController__PlaySound(0x3f800000,4,0);
    iVar5 = 0x11;
  }
  FUN_03ebf678(&local_68);
  if ((iVar5 != 0) && (iVar5 != 0x11)) {
    return;
  }
LAB_077df2e4:
  *param_1 = 0xfffffffe;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


// rea decompile_all
// name: Newtonsoft.Json.JsonTextWriter.<WriteValueNonNullAsync>d__54$$MoveNext
// address: 0x7671084
// body: available
// range: 0x7671084-0x767151f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76714e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76714e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76714ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76714f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76714f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76714f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76714fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7671500 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7671504 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7671508 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x767150c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7671510 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextWriter_<WriteValueNonNullAsync>d__54__MoveNext(int *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 local_30 [16];
  
  if ((DAT_09522490 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c15c0);
    FUN_03f5c2a4(&DAT_09181780);
    DAT_09522490 = 1;
  }
  iVar1 = *param_1;
  lVar6 = *(long *)(param_1 + 8);
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      local_30 = *(undefined1 (*) [16])(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
LAB_076711ac:
      System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                (local_30,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar4 = *(long **)(lVar6 + 0x68);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = (**(code **)(*plVar4 + 0x2c8))
                        (plVar4,*(undefined2 *)(lVar6 + 0x80),*(undefined8 *)(*plVar4 + 0x2d0));
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar7 = System_Threading_Tasks_Task__ConfigureAwait(lVar2,0,0);
      local_30 = auVar7;
      uVar3 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_30,0);
      if ((uVar3 & 1) == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0xe) = local_30;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_049940fc(param_1 + 2,local_30,param_1,DAT_091c15c0);
        return;
      }
    }
    else {
      if (iVar1 != 1) goto LAB_07671174;
      local_30 = *(undefined1 (*) [16])(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
    }
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_30,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = Newtonsoft_Json_JsonTextWriter__get_Base64Encoder(lVar6,0);
    lVar5 = *(long *)(param_1 + 0xc);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = Newtonsoft_Json_Utilities_Base64Encoder__EncodeAsync
                      (lVar2,lVar5,0,*(undefined4 *)(lVar5 + 0x18),*(undefined8 *)(param_1 + 10),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar7 = System_Threading_Tasks_Task__ConfigureAwait(lVar2,0,0);
    local_30 = auVar7;
    uVar3 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_30,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_30;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_049940fc(param_1 + 2,local_30,param_1,DAT_091c15c0);
      return;
    }
LAB_0767125c:
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_30,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = Newtonsoft_Json_JsonTextWriter__get_Base64Encoder(lVar6,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = Newtonsoft_Json_Utilities_Base64Encoder__FlushAsync
                      (lVar2,*(undefined8 *)(param_1 + 10),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar7 = System_Threading_Tasks_Task__ConfigureAwait(lVar2,0,0);
    local_30 = auVar7;
    uVar3 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_30,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 3;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_30;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_049940fc(param_1 + 2,local_30,param_1,DAT_091c15c0);
      return;
    }
  }
  else {
    if (iVar1 == 2) {
      local_30 = *(undefined1 (*) [16])(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
      goto LAB_0767125c;
    }
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        local_30 = *(undefined1 (*) [16])(param_1 + 0xe);
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        *param_1 = -1;
        goto LAB_076712fc;
      }
LAB_07671174:
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = Newtonsoft_Json_JsonWriter__InternalWriteValueAsync
                        (lVar6,0x11,*(undefined8 *)(param_1 + 10));
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_30 = System_Threading_Tasks_Task__ConfigureAwait(lVar2,0,0);
      uVar3 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_30,0);
      if ((uVar3 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xe) = local_30;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_049940fc(param_1 + 2,local_30,param_1,DAT_091c15c0);
        return;
      }
      goto LAB_076711ac;
    }
    local_30 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_30,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar4 = *(long **)(lVar6 + 0x68);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = (**(code **)(*plVar4 + 0x2c8))
                    (plVar4,*(undefined2 *)(lVar6 + 0x80),*(undefined8 *)(*plVar4 + 0x2d0));
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  auVar7 = System_Threading_Tasks_Task__ConfigureAwait(lVar6,0,0);
  local_30 = auVar7;
  uVar3 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                    (local_30,0);
  if ((uVar3 & 1) == 0) {
    *param_1 = 4;
    *(undefined1 (*) [16])(param_1 + 0xe) = local_30;
    thunk_FUN_03f5d7b8(param_1 + 0xe,0);
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_049940fc(param_1 + 2,local_30,param_1,DAT_091c15c0);
    return;
  }
LAB_076712fc:
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_30,0);
  *param_1 = -2;
  if (*(int *)(DAT_09181780 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


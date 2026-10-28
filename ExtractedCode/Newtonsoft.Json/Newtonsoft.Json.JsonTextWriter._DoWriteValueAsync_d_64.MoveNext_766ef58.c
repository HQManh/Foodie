// rea decompile_all
// name: Newtonsoft.Json.JsonTextWriter.<DoWriteValueAsync>d__64$$MoveNext
// address: 0x766ef58
// body: available
// range: 0x766ef58-0x766f447 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x766f41c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766f420 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766f424 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766f428 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766f42c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766f430 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766f434 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766f438 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766f43c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766f440 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766f444 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextWriter_<DoWriteValueAsync>d__64__MoveNext(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 local_50 [16];
  
  if ((DAT_09522482 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1588);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091817a0);
    FUN_03f5c2a4(&DAT_09183590);
    DAT_09522482 = 1;
  }
  iVar1 = *param_1;
  lVar6 = *(long *)(param_1 + 8);
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      local_50 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
    }
    else {
      if (iVar1 == 1) goto LAB_0766efec;
LAB_0766f010:
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar3 = Newtonsoft_Json_JsonWriter__InternalWriteValueAsync
                        (lVar6,0x10,*(undefined8 *)(param_1 + 10));
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_50 = System_Threading_Tasks_Task__ConfigureAwait(lVar3,0,0);
      uVar4 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_50,0);
      if ((uVar4 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 0x10,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_04993d98(param_1 + 2,local_50,param_1,DAT_091c1588);
        return;
      }
    }
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_50,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = Newtonsoft_Json_Utilities_StringUtils__IsNullOrEmpty(*(undefined8 *)(lVar6 + 0x50),0);
    if ((uVar4 & 1) != 0) {
      uVar2 = Newtonsoft_Json_JsonTextWriter__WriteValueToBuffer
                        (lVar6,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 0xe),0);
      uVar8 = *(undefined8 *)(lVar6 + 0x68);
      uVar9 = *(undefined8 *)(lVar6 + 0x90);
      uVar7 = *(undefined8 *)(param_1 + 10);
      if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = Newtonsoft_Json_Utilities_AsyncUtils__WriteAsync(uVar8,uVar9,0,uVar2,uVar7,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar10 = System_Threading_Tasks_Task__ConfigureAwait(lVar6,0,0);
      local_50 = auVar10;
      uVar4 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_50,0);
      if ((uVar4 & 1) == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 0x10,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_04993d98(param_1 + 2,local_50,param_1,DAT_091c1588);
        return;
      }
      goto LAB_0766f2f0;
    }
    plVar5 = *(long **)(lVar6 + 0x68);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = (**(code **)(*plVar5 + 0x2c8))
                      (plVar5,*(undefined2 *)(lVar6 + 0x80),*(undefined8 *)(*plVar5 + 0x2d0));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar10 = System_Threading_Tasks_Task__ConfigureAwait(lVar3,0,0);
    local_50 = auVar10;
    uVar4 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_50,0);
    if ((uVar4 & 1) == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04993d98(param_1 + 2,local_50,param_1,DAT_091c1588);
      return;
    }
LAB_0766f1f8:
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_50,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar8 = *(undefined8 *)(lVar6 + 0x68);
    uVar9 = *(undefined8 *)(lVar6 + 0x50);
    uVar7 = Newtonsoft_Json_JsonWriter__get_Culture(lVar6);
    if (*(int *)(DAT_09183590 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = System_DateTimeOffset__ToString(param_1 + 0xc,uVar9,uVar7,0);
    uVar9 = *(undefined8 *)(param_1 + 10);
    if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = Newtonsoft_Json_Utilities_AsyncUtils__WriteAsync(uVar8,uVar7,uVar9,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar10 = System_Threading_Tasks_Task__ConfigureAwait(lVar3,0,0);
    local_50 = auVar10;
    uVar4 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_50,0);
    if ((uVar4 & 1) == 0) {
      *param_1 = 3;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04993d98(param_1 + 2,local_50,param_1,DAT_091c1588);
      return;
    }
  }
  else {
    if (iVar1 == 2) {
      local_50 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
      goto LAB_0766f1f8;
    }
    if (iVar1 != 3) {
      if (iVar1 != 4) goto LAB_0766f010;
LAB_0766efec:
      local_50 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
      goto LAB_0766f2f0;
    }
    local_50 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_50,0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar5 = *(long **)(lVar6 + 0x68);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = (**(code **)(*plVar5 + 0x2c8))
                    (plVar5,*(undefined2 *)(lVar6 + 0x80),*(undefined8 *)(*plVar5 + 0x2d0));
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  auVar10 = System_Threading_Tasks_Task__ConfigureAwait(lVar6,0,0);
  local_50 = auVar10;
  uVar4 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                    (local_50,0);
  if ((uVar4 & 1) == 0) {
    *param_1 = 4;
    *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
    thunk_FUN_03f5d7b8(param_1 + 0x10,0);
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04993d98(param_1 + 2,local_50,param_1,DAT_091c1588);
    return;
  }
LAB_0766f2f0:
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_50,0);
  lVar6 = DAT_09181780;
  *param_1 = -2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


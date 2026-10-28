// rea decompile_all
// name: System.IO.StreamWriter.<WriteAsyncInternal>d__57$$MoveNext
// address: 0x7571ad4
// body: available
// range: 0x7571ad4-0x7571c7b inclusive
// range: 0x7571c98-0x7571ca7 inclusive
// range: 0x7571cac-0x7571eab inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7571c6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7571c70 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7571c74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7571c78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7571e88 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7571e8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7571e90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7571e94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7571e98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7571e9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7571ea0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7571ea4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void System_IO_StreamWriter_<WriteAsyncInternal>d__57__MoveNext(int *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  undefined2 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 local_30 [16];
  
  if ((DAT_09521a40 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1630);
    FUN_03f5c2a4(&DAT_09181780);
    DAT_09521a40 = 1;
  }
  local_30._8_8_ = 0;
  iVar3 = *param_1;
  local_30._0_8_ = 0;
  if (iVar3 == 0) {
    local_30 = *(undefined1 (*) [16])(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
LAB_07571b80:
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_30,0);
    uVar8 = 0;
    param_1[8] = 0;
    auVar11 = local_30;
LAB_07571c2c:
    lVar6 = *(long *)(param_1 + 0xc);
    local_30 = auVar11;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    cVar4 = *(char *)((long)param_1 + 0x3a);
    uVar9 = uVar8 + 1;
    *(short *)(lVar6 + (long)(int)uVar8 * 2 + 0x20) = (short)param_1[0xe];
    param_1[8] = uVar9;
    if (cVar4 != '\0') {
      lVar10 = *(long *)(param_1 + 0x10);
      uVar8 = 0;
      param_1[0x18] = 0;
      while( true ) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar10 + 0x18) <= (int)uVar8) break;
        if (uVar9 == param_1[9]) {
          if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = System_IO_StreamWriter__FlushAsyncInternal
                            (*(long *)(param_1 + 10),0,0,lVar6,uVar9,0);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          auVar11 = System_Threading_Tasks_Task__ConfigureAwait(lVar6,0,0);
          local_30 = auVar11;
          uVar7 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                            (local_30,0);
          if ((uVar7 & 1) == 0) {
            *param_1 = 1;
            *(undefined1 (*) [16])(param_1 + 0x14) = local_30;
            thunk_FUN_03f5d7b8(param_1 + 0x14,0);
            if (*(int *)(DAT_09181780 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_04994840(param_1 + 2,local_30,param_1,DAT_091c1630);
            return;
          }
LAB_07571cf4:
          System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                    (local_30,0);
          lVar10 = *(long *)(param_1 + 0x10);
          lVar6 = *(long *)(param_1 + 0xc);
          uVar9 = 0;
          uVar8 = param_1[0x18];
          param_1[8] = 0;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar8) {
LAB_07571e88:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar9) goto LAB_07571e88;
        lVar1 = (long)(int)uVar8;
        lVar2 = (long)(int)uVar9;
        uVar9 = uVar9 + 1;
        uVar8 = uVar8 + 1;
        param_1[8] = uVar9;
        uVar5 = *(undefined2 *)(lVar10 + lVar1 * 2 + 0x20);
        param_1[0x18] = uVar8;
        *(undefined2 *)(lVar6 + lVar2 * 2 + 0x20) = uVar5;
      }
    }
    if ((char)param_1[0x12] == '\0') goto LAB_07571dbc;
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = System_IO_StreamWriter__FlushAsyncInternal(*(long *)(param_1 + 10),1,0,lVar6,uVar9,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar11 = System_Threading_Tasks_Task__ConfigureAwait(lVar6,0,0);
    local_30 = auVar11;
    uVar7 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_30,0);
    if ((uVar7 & 1) == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 0x14) = local_30;
      thunk_FUN_03f5d7b8(param_1 + 0x14,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04994840(param_1 + 2,local_30,param_1,DAT_091c1630);
      return;
    }
  }
  else {
    if (iVar3 == 1) {
      local_30 = *(undefined1 (*) [16])(param_1 + 0x14);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = -1;
      goto LAB_07571cf4;
    }
    if (iVar3 != 2) {
      uVar8 = param_1[8];
      auVar11 = ZEXT816(0);
      if (uVar8 == param_1[9]) {
        if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = System_IO_StreamWriter__FlushAsyncInternal
                          (*(long *)(param_1 + 10),0,0,*(undefined8 *)(param_1 + 0xc),uVar8,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_30 = System_Threading_Tasks_Task__ConfigureAwait(lVar6,0,0);
        uVar7 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                          (local_30,0);
        if ((uVar7 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x14) = local_30;
          thunk_FUN_03f5d7b8(param_1 + 0x14,0);
          if (*(int *)(DAT_09181780 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_04994840(param_1 + 2,local_30,param_1,DAT_091c1630);
          return;
        }
        goto LAB_07571b80;
      }
      goto LAB_07571c2c;
    }
    local_30 = *(undefined1 (*) [16])(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_30,0);
  uVar9 = 0;
  param_1[8] = 0;
LAB_07571dbc:
  lVar6 = DAT_09181780;
  if (*(long *)(param_1 + 10) != 0) {
    *(uint *)(*(long *)(param_1 + 10) + 0x58) = uVar9;
    *param_1 = -2;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


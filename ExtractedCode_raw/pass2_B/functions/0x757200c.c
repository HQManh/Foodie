// rea decompile_all
// name: System.IO.StreamWriter.<WriteAsyncInternal>d__59$$MoveNext
// address: 0x757200c
// body: available
// range: 0x757200c-0x75720d3 inclusive
// range: 0x75720d8-0x75721fb inclusive
// range: 0x7572218-0x757242f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75720d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75721f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75721f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75721f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757240c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7572410 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7572414 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7572418 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x757241c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7572420 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7572424 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7572428 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void System_IO_StreamWriter_<WriteAsyncInternal>d__59__MoveNext(int *param_1)

{
  long lVar1;
  int iVar2;
  undefined2 uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 local_30 [16];
  
  if ((DAT_09521a42 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1638);
    FUN_03f5c2a4(&DAT_09181780);
    DAT_09521a42 = 1;
  }
  local_30._8_8_ = 0;
  iVar7 = *param_1;
  local_30._0_8_ = 0;
  if (iVar7 == 0) {
    local_30 = *(undefined1 (*) [16])(param_1 + 0x18);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *param_1 = -1;
    goto LAB_07572124;
  }
  if (iVar7 == 1) {
    local_30 = *(undefined1 (*) [16])(param_1 + 0x18);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *param_1 = -1;
    goto LAB_07572264;
  }
  if (iVar7 == 2) {
    local_30 = *(undefined1 (*) [16])(param_1 + 0x18);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar7 = *(int *)(*(long *)(param_1 + 8) + 0x10);
    param_1[0x15] = iVar7;
    param_1[0x16] = 0;
    local_30 = ZEXT816(0);
    while (0 < iVar7) {
      iVar5 = param_1[10];
      iVar9 = param_1[0xb];
      if (iVar5 == iVar9) {
        if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar10 = System_IO_StreamWriter__FlushAsyncInternal
                           (*(long *)(param_1 + 0xc),0,0,*(undefined8 *)(param_1 + 0xe),iVar5,0);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar12 = System_Threading_Tasks_Task__ConfigureAwait(lVar10,0,0);
        local_30 = auVar12;
        uVar4 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                          (local_30,0);
        if ((uVar4 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x18) = local_30;
          thunk_FUN_03f5d7b8(param_1 + 0x18,0);
          if (*(int *)(DAT_09181780 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_049948bc(param_1 + 2,local_30,param_1,DAT_091c1638);
          return;
        }
LAB_07572124:
        System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                  (local_30,0);
        iVar9 = param_1[0xb];
        iVar7 = param_1[0x15];
        iVar5 = 0;
        param_1[10] = 0;
      }
      iVar2 = iVar9 - iVar5;
      if (iVar7 <= iVar9 - iVar5) {
        iVar2 = iVar7;
      }
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      System_String__CopyTo
                (*(long *)(param_1 + 8),param_1[0x16],*(undefined8 *)(param_1 + 0xe),iVar5,iVar2,0);
      param_1[10] = param_1[10] + iVar2;
      iVar7 = param_1[0x15] - iVar2;
      param_1[0x15] = iVar7;
      param_1[0x16] = param_1[0x16] + iVar2;
    }
    if ((char)param_1[0x10] != '\0') {
      lVar10 = *(long *)(param_1 + 0x12);
      uVar8 = 0;
      param_1[0x1c] = 0;
      while( true ) {
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar10 + 0x18) <= (int)uVar8) break;
        uVar6 = param_1[10];
        if (uVar6 == param_1[0xb]) {
          if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar10 = System_IO_StreamWriter__FlushAsyncInternal
                             (*(long *)(param_1 + 0xc),0,0,*(undefined8 *)(param_1 + 0xe),uVar6,0);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          auVar12 = System_Threading_Tasks_Task__ConfigureAwait(lVar10,0,0);
          local_30 = auVar12;
          uVar4 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                            (local_30,0);
          if ((uVar4 & 1) == 0) {
            *param_1 = 1;
            *(undefined1 (*) [16])(param_1 + 0x18) = local_30;
            thunk_FUN_03f5d7b8(param_1 + 0x18,0);
            if (*(int *)(DAT_09181780 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_049948bc(param_1 + 2,local_30,param_1,DAT_091c1638);
            return;
          }
LAB_07572264:
          System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                    (local_30,0);
          lVar10 = *(long *)(param_1 + 0x12);
          uVar8 = param_1[0x1c];
          uVar6 = 0;
          param_1[10] = 0;
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar8) {
LAB_0757240c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar11 = *(long *)(param_1 + 0xe);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar11 + 0x18) <= uVar6) goto LAB_0757240c;
        lVar1 = (long)(int)uVar8;
        uVar8 = uVar8 + 1;
        param_1[10] = uVar6 + 1;
        uVar3 = *(undefined2 *)(lVar10 + lVar1 * 2 + 0x20);
        param_1[0x1c] = uVar8;
        *(undefined2 *)(lVar11 + (long)(int)uVar6 * 2 + 0x20) = uVar3;
      }
    }
    if ((char)param_1[0x14] == '\0') goto LAB_07572330;
    if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar10 = System_IO_StreamWriter__FlushAsyncInternal
                       (*(long *)(param_1 + 0xc),1,0,*(undefined8 *)(param_1 + 0xe),param_1[10],0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar12 = System_Threading_Tasks_Task__ConfigureAwait(lVar10,0,0);
    local_30 = auVar12;
    uVar4 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_30,0);
    if ((uVar4 & 1) == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 0x18) = local_30;
      thunk_FUN_03f5d7b8(param_1 + 0x18,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_049948bc(param_1 + 2,local_30,param_1,DAT_091c1638);
      return;
    }
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_30,0);
  param_1[10] = 0;
LAB_07572330:
  if (*(long *)(param_1 + 0xc) != 0) {
    iVar7 = *(int *)(DAT_09181780 + 0xe4);
    *(int *)(*(long *)(param_1 + 0xc) + 0x58) = param_1[10];
    *param_1 = -2;
    if (iVar7 == 0) {
      FUN_03f5c424();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


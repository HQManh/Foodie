// rea decompile_all
// name: System.IO.StreamWriter.<WriteAsyncInternal>d__62$$MoveNext
// address: 0x7572594
// body: available
// range: 0x7572594-0x75727a3 inclusive
// range: 0x75727a8-0x7572813 inclusive
// range: 0x757281c-0x75728bf inclusive
// range: 0x75728f8-0x7572b17 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75727a0 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75727ec to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7572810 to 0x75d75b0 System.ThrowHelper$$ThrowArgumentOutOfRangeException (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75728b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75728bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7572af4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7572af8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7572afc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7572b00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7572b04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7572b08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7572b0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void System_IO_StreamWriter_<WriteAsyncInternal>d__62__MoveNext(int *param_1)

{
  long lVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  
  if ((DAT_09521a44 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1640);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_091b9688);
    FUN_03f5c2a4(&DAT_091b9690);
    FUN_03f5c2a4(&DAT_091b97d0);
    FUN_03f5c2a4(&DAT_091b97e8);
    FUN_03f5c2a4(&DAT_091ba958);
    DAT_09521a44 = 1;
  }
  local_80._8_8_ = 0;
  local_70 = ZEXT816(0);
  iVar11 = *param_1;
  local_80._0_8_ = 0;
  if (iVar11 == 0) {
    local_70 = *(undefined1 (*) [16])(param_1 + 0x1a);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *param_1 = -1;
    goto LAB_07572720;
  }
  if (iVar11 == 1) {
    local_70 = *(undefined1 (*) [16])(param_1 + 0x1a);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *param_1 = -1;
    goto LAB_07572940;
  }
  if (iVar11 == 2) {
    local_70 = *(undefined1 (*) [16])(param_1 + 0x1a);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *param_1 = -1;
  }
  else {
    iVar11 = 0;
    param_1[0x19] = 0;
    while( true ) {
      iVar6 = FUN_05fd73e4(param_1 + 0x10,DAT_091b9688);
      if (iVar6 <= iVar11) break;
      iVar11 = param_1[8];
      iVar6 = param_1[9];
      if (iVar11 == iVar6) {
        if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar9 = System_IO_StreamWriter__FlushAsyncInternal
                          (*(long *)(param_1 + 10),0,0,*(undefined8 *)(param_1 + 0xc),iVar11,
                           *(undefined8 *)(param_1 + 0xe));
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar12 = System_Threading_Tasks_Task__ConfigureAwait(lVar9,0,0);
        local_70 = auVar12;
        uVar7 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                          (local_70,0);
        if ((uVar7 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x1a) = local_70;
          thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
          if (*(int *)(DAT_09181780 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_04994938(param_1 + 2,local_70,param_1,DAT_091c1640);
          return;
        }
LAB_07572720:
        System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                  (local_70,0);
        iVar6 = param_1[9];
        iVar11 = 0;
        param_1[8] = 0;
      }
      iVar4 = FUN_05fd73e4(param_1 + 0x10,DAT_091b9688);
      iVar2 = param_1[0x19];
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Math__Min(iVar6 - iVar11,iVar4 - iVar2,0);
      local_80 = FUN_04a6d894(param_1 + 0x10,DAT_091b9690);
      lVar9 = local_80._0_8_;
      uVar8 = param_1[0x19];
      if ((local_80._8_4_ < uVar8) || (local_80._8_4_ - uVar8 < uVar5)) {
                    /* WARNING: Subroutine does not return */
        System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
      }
      if ((*(ushort *)(*(long *)(DAT_091b97e8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_80._0_8_ = lVar9 + (long)(int)uVar8 * 2;
      lVar9 = *(long *)(param_1 + 0xc);
      uVar8 = param_1[8];
      local_80._8_8_ = ZEXT48(uVar5);
      if (lVar9 == 0) {
        lVar9 = 0;
        uVar7 = 0;
        if (uVar8 != 0 || uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0,0);
        }
      }
      else {
        if ((*(uint *)(lVar9 + 0x18) < uVar8) || (*(uint *)(lVar9 + 0x18) - uVar8 < uVar5)) {
                    /* WARNING: Subroutine does not return */
          System_ThrowHelper__ThrowArgumentOutOfRangeException(0);
        }
        lVar9 = lVar9 + (long)(int)uVar8 * 2 + 0x20;
        uVar7 = local_80._8_8_;
      }
      FUN_05ff6b08(local_80,lVar9,uVar7,DAT_091b97d0);
      iVar11 = param_1[0x19] + uVar5;
      param_1[8] = param_1[8] + uVar5;
      param_1[0x19] = iVar11;
    }
    if ((char)param_1[0x14] != '\0') {
      lVar9 = *(long *)(param_1 + 0x16);
      uVar8 = 0;
      param_1[0x1e] = 0;
      while( true ) {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(int *)(lVar9 + 0x18) <= (int)uVar8) break;
        uVar5 = param_1[8];
        if (uVar5 == param_1[9]) {
          if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = System_IO_StreamWriter__FlushAsyncInternal
                            (*(long *)(param_1 + 10),0,0,*(undefined8 *)(param_1 + 0xc),uVar5,
                             *(undefined8 *)(param_1 + 0xe));
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          auVar12 = System_Threading_Tasks_Task__ConfigureAwait(lVar9,0,0);
          local_70 = auVar12;
          uVar7 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                            (local_70,0);
          if ((uVar7 & 1) == 0) {
            *param_1 = 1;
            *(undefined1 (*) [16])(param_1 + 0x1a) = local_70;
            thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
            if (*(int *)(DAT_09181780 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_04994938(param_1 + 2,local_70,param_1,DAT_091c1640);
            return;
          }
LAB_07572940:
          System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                    (local_70,0);
          lVar9 = *(long *)(param_1 + 0x16);
          uVar8 = param_1[0x1e];
          uVar5 = 0;
          param_1[8] = 0;
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
        }
        if (*(uint *)(lVar9 + 0x18) <= uVar8) {
LAB_07572af4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar10 = *(long *)(param_1 + 0xc);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar10 + 0x18) <= uVar5) goto LAB_07572af4;
        lVar1 = (long)(int)uVar8;
        uVar8 = uVar8 + 1;
        param_1[8] = uVar5 + 1;
        uVar3 = *(undefined2 *)(lVar9 + lVar1 * 2 + 0x20);
        param_1[0x1e] = uVar8;
        *(undefined2 *)(lVar10 + (long)(int)uVar5 * 2 + 0x20) = uVar3;
      }
    }
    if ((char)param_1[0x18] == '\0') goto LAB_07572a08;
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar9 = System_IO_StreamWriter__FlushAsyncInternal
                      (*(long *)(param_1 + 10),1,0,*(undefined8 *)(param_1 + 0xc),param_1[8],
                       *(undefined8 *)(param_1 + 0xe));
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar12 = System_Threading_Tasks_Task__ConfigureAwait(lVar9,0,0);
    local_70 = auVar12;
    uVar7 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_70,0);
    if ((uVar7 & 1) == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 0x1a) = local_70;
      thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04994938(param_1 + 2,local_70,param_1,DAT_091c1640);
      return;
    }
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_70,0);
  param_1[8] = 0;
LAB_07572a08:
  if (*(long *)(param_1 + 10) != 0) {
    iVar11 = *(int *)(DAT_09181780 + 0xe4);
    *(int *)(*(long *)(param_1 + 10) + 0x58) = param_1[8];
    *param_1 = -2;
    if (iVar11 == 0) {
      FUN_03f5c424();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: Newtonsoft.Json.Utilities.JavaScriptUtils.<WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync>d__16$$MoveNext
// address: 0x7697b60
// body: available
// range: 0x7697b60-0x7697e57 inclusive
// range: 0x7697e7c-0x7698003 inclusive
// range: 0x7698034-0x7698053 inclusive
// range: 0x7698058-0x76984ef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7697e4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7697e50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7697e54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7697ffc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7698000 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76984c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76984c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76984c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76984cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76984d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76984d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76984d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_JavaScriptUtils_<WriteDefinitelyEscapedJavaScriptStringWithoutDelimitersAsync>d__16__MoveNext
               (int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 local_70 [16];
  
  if ((DAT_095225ca & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c14d8);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091817a0);
    FUN_03f5c2a4(&DAT_092146f0);
    FUN_03f5c2a4(&DAT_09214678);
    FUN_03f5c2a4(&DAT_09214690);
    FUN_03f5c2a4(&DAT_092146d0);
    FUN_03f5c2a4(&DAT_092145e8);
    FUN_03f5c2a4(&DAT_09214688);
    FUN_03f5c2a4(&DAT_092145f0);
    FUN_03f5c2a4(&DAT_092146b8);
    FUN_03f5c2a4(&DAT_092146e8);
    FUN_03f5c2a4(&DAT_092146e0);
    FUN_03f5c2a4(&DAT_09214658);
    DAT_095225ca = 1;
  }
  iVar11 = *param_1;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  if (iVar11 < 2) {
    if (iVar11 != 0) {
      if (iVar11 == 1) {
        local_70 = *(undefined1 (*) [16])(param_1 + 0x1a);
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        *param_1 = -1;
        goto LAB_07697e7c;
      }
      goto LAB_07697d14;
    }
    local_70 = *(undefined1 (*) [16])(param_1 + 0x1a);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *param_1 = -1;
LAB_07697dd4:
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_70,0);
LAB_07697de0:
    piVar8 = param_1 + 0x18;
    piVar8[0] = 0;
    piVar8[1] = 0;
    *(undefined1 *)(param_1 + 0x17) = 0;
    thunk_FUN_03f5d7b8(piVar8,0);
    iVar11 = param_1[10];
    while( true ) {
      lVar6 = *(long *)(param_1 + 0xe);
      param_1[0x1e] = iVar11;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar6 + 0x10) <= iVar11) break;
      uVar7 = System_String__get_Chars(lVar6,iVar11,0);
      lVar6 = *(long *)(param_1 + 0x14);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar5 = (uint)uVar7;
      uVar1 = uVar5 & 0xffff;
      if ((*(int *)(lVar6 + 0x18) <= (int)uVar1) ||
         (*(char *)(lVar6 + (uVar7 & 0xffff) + 0x20) != '\0')) {
        if (uVar1 < 0x5d) {
          if (uVar1 < 0xb) {
            uVar9 = DAT_09214678;
            if (uVar1 == 8) goto LAB_07698338;
            if (uVar1 == 9) {
              puVar10 = &DAT_092146d0;
            }
            else {
              if (uVar1 != 10) goto LAB_07698124;
              puVar10 = &DAT_09214690;
            }
          }
          else {
            if (uVar1 == 0xb) goto LAB_0769813c;
            if (uVar1 == 0xc) {
              puVar10 = &DAT_09214688;
            }
            else if (uVar1 == 0xd) {
              puVar10 = &DAT_092146b8;
            }
            else {
LAB_07698124:
              if ((uVar5 & 0xffff) != 0x5c) goto LAB_0769813c;
              puVar10 = &DAT_09214658;
            }
          }
          goto LAB_07698334;
        }
        uVar2 = uVar5 & 0xffff;
        uVar9 = DAT_092146e0;
        if (((uVar2 == 0x85) || (uVar9 = DAT_092146e8, uVar2 == 0x2028)) ||
           (uVar9 = DAT_092146f0, uVar2 == 0x2029)) {
LAB_07698338:
          *(undefined8 *)(param_1 + 0x18) = uVar9;
          thunk_FUN_03f5d7b8();
        }
        else {
LAB_0769813c:
          if ((*(int *)(lVar6 + 0x18) <= (int)uVar1) && (param_1[0x16] != 1)) goto LAB_0769817c;
          if ((uVar5 & 0xffff) == 0x22) {
            if (param_1[0x16] != 2) {
              puVar10 = &DAT_092145e8;
              goto LAB_07698334;
            }
          }
          else if (((uVar5 & 0xffff) == 0x27) && (param_1[0x16] != 2)) {
            puVar10 = &DAT_092145f0;
LAB_07698334:
            uVar9 = *puVar10;
            goto LAB_07698338;
          }
          plVar12 = (long *)(param_1 + 8);
          lVar6 = *plVar12;
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(int *)(lVar6 + 0x18) < 6) {
            if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = Newtonsoft_Json_JsonTextWriter__EnsureWriteBuffer
                              (*(long *)(param_1 + 0xc),6,0,0);
            *plVar12 = lVar6;
            thunk_FUN_03f5d7b8(plVar12);
            lVar6 = *plVar12;
          }
          Newtonsoft_Json_Utilities_StringUtils__ToCharAsUnicode(uVar7 & 0xffffffff,lVar6,0);
          *(undefined1 *)(param_1 + 0x17) = 1;
        }
        iVar11 = param_1[0x1e];
        iVar4 = iVar11 - param_1[10];
        if (iVar4 != 0 && param_1[10] <= iVar11) {
          plVar12 = (long *)(param_1 + 8);
          iVar11 = 0;
          if ((char)param_1[0x17] != '\0') {
            iVar11 = 6;
          }
          if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(int *)(*plVar12 + 0x18) < iVar11 + iVar4) {
            if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = Newtonsoft_Json_JsonTextWriter__EnsureWriteBuffer
                              (*(long *)(param_1 + 0xc),iVar11 + iVar4,6,0);
            *plVar12 = lVar6;
            thunk_FUN_03f5d7b8(plVar12);
          }
          if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          System_String__CopyTo
                    (*(long *)(param_1 + 0xe),param_1[10],*(undefined8 *)(param_1 + 8),iVar11,iVar4,
                     0);
          uVar9 = *(undefined8 *)(param_1 + 0x10);
          uVar3 = *(undefined8 *)(param_1 + 0x12);
          uVar13 = *(undefined8 *)(param_1 + 8);
          if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar6 = Newtonsoft_Json_Utilities_AsyncUtils__WriteAsync(uVar9,uVar13,iVar11,iVar4,uVar3);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          auVar14 = System_Threading_Tasks_Task__ConfigureAwait(lVar6,0,0);
          local_70 = auVar14;
          uVar7 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                            (local_70,0);
          if ((uVar7 & 1) == 0) {
            *param_1 = 1;
            *(undefined1 (*) [16])(param_1 + 0x1a) = local_70;
            thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
            if (*(int *)(DAT_09181780 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_049932f0(param_1 + 2,local_70,param_1,DAT_091c14d8);
            return;
          }
LAB_07697e7c:
          System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                    (local_70,0);
          iVar11 = param_1[0x1e];
        }
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        uVar3 = *(undefined8 *)(param_1 + 0x12);
        iVar4 = *(int *)(DAT_091817a0 + 0xe4);
        param_1[10] = iVar11 + 1;
        if ((char)param_1[0x17] == '\0') {
          uVar13 = *(undefined8 *)(param_1 + 0x18);
          if (iVar4 == 0) {
            FUN_03f5c424();
          }
          lVar6 = Newtonsoft_Json_Utilities_AsyncUtils__WriteAsync(uVar9,uVar13,uVar3);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          auVar14 = System_Threading_Tasks_Task__ConfigureAwait(lVar6,0,0);
          local_70 = auVar14;
          uVar7 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                            (local_70,0);
          if ((uVar7 & 1) == 0) {
            *param_1 = 2;
            *(undefined1 (*) [16])(param_1 + 0x1a) = local_70;
            thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
            if (*(int *)(DAT_09181780 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_049932f0(param_1 + 2,local_70,param_1,DAT_091c14d8);
            return;
          }
LAB_07697f44:
          System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                    (local_70,0);
        }
        else {
          uVar13 = *(undefined8 *)(param_1 + 8);
          if (iVar4 == 0) {
            FUN_03f5c424();
          }
          lVar6 = Newtonsoft_Json_Utilities_AsyncUtils__WriteAsync(uVar9,uVar13,0,6,uVar3);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          auVar14 = System_Threading_Tasks_Task__ConfigureAwait(lVar6,0,0);
          local_70 = auVar14;
          uVar7 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                            (local_70,0);
          if ((uVar7 & 1) == 0) {
            *param_1 = 3;
            *(undefined1 (*) [16])(param_1 + 0x1a) = local_70;
            thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
            if (*(int *)(DAT_09181780 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_049932f0(param_1 + 2,local_70,param_1,DAT_091c14d8);
            return;
          }
LAB_07697ef0:
          System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                    (local_70,0);
          *(undefined1 *)(param_1 + 0x17) = 0;
        }
      }
LAB_0769817c:
      iVar11 = param_1[0x1e] + 1;
    }
    iVar11 = *(int *)(lVar6 + 0x10) - param_1[10];
    if (iVar11 == 0) goto LAB_07698268;
    plVar12 = (long *)(param_1 + 8);
    if (*plVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(*plVar12 + 0x18) < iVar11) {
      if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = Newtonsoft_Json_JsonTextWriter__EnsureWriteBuffer(*(long *)(param_1 + 0xc),iVar11,0,0)
      ;
      *plVar12 = lVar6;
      thunk_FUN_03f5d7b8(plVar12);
      lVar6 = *(long *)(param_1 + 0xe);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    System_String__CopyTo(lVar6,param_1[10],*(undefined8 *)(param_1 + 8),0,iVar11,0);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 0x12);
    uVar13 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = Newtonsoft_Json_Utilities_AsyncUtils__WriteAsync(uVar9,uVar13,0,iVar11,uVar3);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar14 = System_Threading_Tasks_Task__ConfigureAwait(lVar6,0,0);
    local_70 = auVar14;
    uVar7 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_70,0);
    if ((uVar7 & 1) == 0) {
      *param_1 = 4;
      *(undefined1 (*) [16])(param_1 + 0x1a) = local_70;
      thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_049932f0(param_1 + 2,local_70,param_1,DAT_091c14d8);
      return;
    }
  }
  else {
    if (iVar11 == 2) {
      local_70 = *(undefined1 (*) [16])(param_1 + 0x1a);
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      *param_1 = -1;
      goto LAB_07697f44;
    }
    if (iVar11 == 3) {
      local_70 = *(undefined1 (*) [16])(param_1 + 0x1a);
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      *param_1 = -1;
      goto LAB_07697ef0;
    }
    if (iVar11 != 4) {
LAB_07697d14:
      plVar12 = (long *)(param_1 + 8);
      if ((*plVar12 == 0) || (iVar11 = param_1[10], *(int *)(*plVar12 + 0x18) < iVar11)) {
        if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = Newtonsoft_Json_JsonTextWriter__EnsureWriteBuffer
                          (*(long *)(param_1 + 0xc),param_1[10],6,0);
        *plVar12 = lVar6;
        thunk_FUN_03f5d7b8(plVar12);
        iVar11 = param_1[10];
      }
      if (iVar11 != 0) {
        if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        System_String__CopyTo(*(long *)(param_1 + 0xe),0,*plVar12,0,iVar11,0);
        uVar9 = *(undefined8 *)(param_1 + 0x10);
        uVar3 = *(undefined8 *)(param_1 + 0x12);
        uVar13 = *(undefined8 *)(param_1 + 8);
        iVar11 = param_1[10];
        if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = Newtonsoft_Json_Utilities_AsyncUtils__WriteAsync(uVar9,uVar13,0,iVar11,uVar3);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_70 = System_Threading_Tasks_Task__ConfigureAwait(lVar6,0,0);
        uVar7 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                          (local_70,0);
        if ((uVar7 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x1a) = local_70;
          thunk_FUN_03f5d7b8(param_1 + 0x1a,0);
          if (*(int *)(DAT_09181780 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_049932f0(param_1 + 2,local_70,param_1,DAT_091c14d8);
          return;
        }
        goto LAB_07697dd4;
      }
      goto LAB_07697de0;
    }
    local_70 = *(undefined1 (*) [16])(param_1 + 0x1a);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *param_1 = -1;
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_70,0);
LAB_07698268:
  piVar8 = param_1 + 0x18;
  piVar8[0] = 0;
  piVar8[1] = 0;
  *param_1 = -2;
  thunk_FUN_03f5d7b8(piVar8,0);
  if (*(int *)(DAT_09181780 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


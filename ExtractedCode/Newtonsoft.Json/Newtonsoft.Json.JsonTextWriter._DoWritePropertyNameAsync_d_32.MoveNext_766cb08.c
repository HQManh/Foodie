// rea decompile_all
// name: Newtonsoft.Json.JsonTextWriter.<DoWritePropertyNameAsync>d__32$$MoveNext
// address: 0x766cb08
// body: available
// range: 0x766cb08-0x766d063 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x766d028 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766d02c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766d030 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766d034 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766d038 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766d03c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766d040 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766d044 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766d048 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766d04c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766d050 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766d054 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextWriter_<DoWritePropertyNameAsync>d__32__MoveNext(int *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09522474 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1550);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091817a0);
    DAT_09522474 = 1;
  }
  iVar3 = *param_1;
  lVar7 = *(long *)(param_1 + 8);
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  if (iVar3 < 3) {
    if (iVar3 == 0) {
      local_40 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
LAB_0766cda4:
      System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                (local_40,0);
      if ((char)param_1[0xe] == '\0') {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(char *)(lVar7 + 0x82) != '\0') {
          plVar6 = *(long **)(lVar7 + 0x68);
          if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = (**(code **)(*plVar6 + 0x2c8))
                            (plVar6,*(undefined2 *)(lVar7 + 0x80),*(undefined8 *)(*plVar6 + 0x2d0));
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          auVar9 = System_Threading_Tasks_Task__ConfigureAwait(lVar4,0,0);
          local_40 = auVar9;
          uVar5 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                            (local_40,0);
          if ((uVar5 & 1) == 0) {
            *param_1 = 2;
            *(undefined1 (*) [16])(param_1 + 0x10) = local_40;
            thunk_FUN_03f5d7b8(param_1 + 0x10,0);
            if (*(int *)(DAT_09181780 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_04993a34(param_1 + 2,local_40,param_1,DAT_091c1550);
            return;
          }
          goto LAB_0766cb94;
        }
LAB_0766cba4:
        uVar1 = *(undefined8 *)(param_1 + 10);
        uVar2 = *(undefined8 *)(param_1 + 0xc);
        uVar8 = *(undefined8 *)(lVar7 + 0x68);
        if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = Newtonsoft_Json_Utilities_AsyncUtils__WriteAsync(uVar8,uVar1,uVar2,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar9 = System_Threading_Tasks_Task__ConfigureAwait(lVar4,0,0);
        local_40 = auVar9;
        uVar5 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                          (local_40,0);
        if ((uVar5 & 1) == 0) {
          *param_1 = 3;
          *(undefined1 (*) [16])(param_1 + 0x10) = local_40;
          thunk_FUN_03f5d7b8(param_1 + 0x10,0);
          if (*(int *)(DAT_09181780 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_04993a34(param_1 + 2,local_40,param_1,DAT_091c1550);
          return;
        }
        goto LAB_0766ccc4;
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = Newtonsoft_Json_JsonTextWriter__WriteEscapedStringAsync
                        (lVar7,*(undefined8 *)(param_1 + 10),*(undefined1 *)(lVar7 + 0x82),
                         *(undefined8 *)(param_1 + 0xc),0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar9 = System_Threading_Tasks_Task__ConfigureAwait(lVar4,0,0);
      local_40 = auVar9;
      uVar5 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_40,0);
      if ((uVar5 & 1) == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0x10) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 0x10,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_04993a34(param_1 + 2,local_40,param_1,DAT_091c1550);
        return;
      }
    }
    else {
      if (iVar3 != 1) {
        if (iVar3 != 2) goto LAB_0766cd70;
        local_40 = *(undefined1 (*) [16])(param_1 + 0x10);
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        *param_1 = -1;
LAB_0766cb94:
        System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                  (local_40,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        goto LAB_0766cba4;
      }
LAB_0766cc80:
      local_40 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
    }
LAB_0766cdf4:
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_40,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
    if (iVar3 != 3) {
      if (iVar3 == 4) goto LAB_0766cc80;
      if (iVar3 == 5) {
        local_40 = *(undefined1 (*) [16])(param_1 + 0x10);
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        *param_1 = -1;
        goto LAB_0766ce44;
      }
LAB_0766cd70:
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = Newtonsoft_Json_JsonWriter__InternalWritePropertyNameAsync
                        (lVar7,*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xc));
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_40 = System_Threading_Tasks_Task__ConfigureAwait(lVar4,0,0);
      uVar5 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_40,0);
      if ((uVar5 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x10) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 0x10,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_04993a34(param_1 + 2,local_40,param_1,DAT_091c1550);
        return;
      }
      goto LAB_0766cda4;
    }
    local_40 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
LAB_0766ccc4:
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_40,0);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar7 + 0x82) != '\0') {
      plVar6 = *(long **)(lVar7 + 0x68);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = (**(code **)(*plVar6 + 0x2c8))
                        (plVar6,*(undefined2 *)(lVar7 + 0x80),*(undefined8 *)(*plVar6 + 0x2d0));
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar9 = System_Threading_Tasks_Task__ConfigureAwait(lVar4,0,0);
      local_40 = auVar9;
      uVar5 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_40,0);
      if ((uVar5 & 1) == 0) {
        *param_1 = 4;
        *(undefined1 (*) [16])(param_1 + 0x10) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 0x10,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_04993a34(param_1 + 2,local_40,param_1,DAT_091c1550);
        return;
      }
      goto LAB_0766cdf4;
    }
  }
  plVar6 = *(long **)(lVar7 + 0x68);
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar7 = (**(code **)(*plVar6 + 0x2c8))(plVar6,0x3a,*(undefined8 *)(*plVar6 + 0x2d0));
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  auVar9 = System_Threading_Tasks_Task__ConfigureAwait(lVar7,0,0);
  local_40 = auVar9;
  uVar5 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                    (local_40,0);
  if ((uVar5 & 1) == 0) {
    *param_1 = 5;
    *(undefined1 (*) [16])(param_1 + 0x10) = local_40;
    thunk_FUN_03f5d7b8(param_1 + 0x10,0);
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04993a34(param_1 + 2,local_40,param_1,DAT_091c1550);
    return;
  }
LAB_0766ce44:
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_40,0);
  *param_1 = -2;
  if (*(int *)(DAT_09181780 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


// rea decompile_all
// name: Newtonsoft.Json.JsonWriter.<<InternalWriteEndAsync>g__AwaitProperty|11_0>d$$MoveNext
// address: 0x7682c30
// body: available
// range: 0x7682c30-0x7682fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7682cb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7682fb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7682fb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7682fbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7682fc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7682fc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7682fc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonWriter_<<InternalWriteEndAsync>g__AwaitProperty_11_0>d__MoveNext
               (int *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined1 local_30 [16];
  
  if ((DAT_0952252d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c15e0);
    FUN_03f5c2a4(&DAT_09181780);
    DAT_0952252d = 1;
  }
  iVar1 = *param_1;
  plVar4 = *(long **)(param_1 + 10);
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      local_30 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
LAB_07682d6c:
      System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                (local_30,0);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (((*(int *)((long)plVar4 + 0x34) == 1) && ((int)plVar4[6] != 2)) && ((int)plVar4[6] != 4))
      {
        lVar2 = (**(code **)(*plVar4 + 0x1b8))
                          (plVar4,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(*plVar4 + 0x1c0));
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar5 = System_Threading_Tasks_Task__ConfigureAwait(lVar2,0,0);
        local_30 = auVar5;
        uVar3 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                          (local_30,0);
        if ((uVar3 & 1) == 0) {
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 0x10) = local_30;
          thunk_FUN_03f5d7b8(param_1 + 0x10,0);
          if (*(int *)(DAT_09181780 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_049942ec(param_1 + 2,local_30,param_1,DAT_091c15e0);
          return;
        }
        goto LAB_07682ca4;
      }
    }
    else {
      if (iVar1 != 1) goto LAB_07682ce0;
      local_30 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
LAB_07682ca4:
      System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                (local_30,0);
      if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    lVar2 = (**(code **)(*plVar4 + 0x1a8))
                      (plVar4,param_1[0xe],*(undefined8 *)(param_1 + 0xc),
                       *(undefined8 *)(*plVar4 + 0x1b0));
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar5 = System_Threading_Tasks_Task__ConfigureAwait(lVar2,0,0);
    local_30 = auVar5;
    uVar3 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_30,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_30;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_049942ec(param_1 + 2,local_30,param_1,DAT_091c15e0);
      return;
    }
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        local_30 = *(undefined1 (*) [16])(param_1 + 0x10);
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        *param_1 = -1;
        goto LAB_07682e8c;
      }
LAB_07682ce0:
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_30 = System_Threading_Tasks_Task__ConfigureAwait(*(long *)(param_1 + 8),0,0);
      uVar3 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_30,0);
      if ((uVar3 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x10) = local_30;
        thunk_FUN_03f5d7b8(param_1 + 0x10,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_049942ec(param_1 + 2,local_30,param_1,DAT_091c15e0);
        return;
      }
      goto LAB_07682d6c;
    }
    local_30 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_30,0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  Newtonsoft_Json_JsonWriter__UpdateCurrentState(plVar4);
  lVar2 = Newtonsoft_Json_JsonWriter__<InternalWriteEndAsync>g__AwaitRemaining_11_3
                    (plVar4,param_1[0xf],*(undefined8 *)(param_1 + 0xc));
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  auVar5 = System_Threading_Tasks_Task__ConfigureAwait(lVar2,0,0);
  local_30 = auVar5;
  uVar3 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                    (local_30,0);
  if ((uVar3 & 1) == 0) {
    *param_1 = 3;
    *(undefined1 (*) [16])(param_1 + 0x10) = local_30;
    thunk_FUN_03f5d7b8(param_1 + 0x10,0);
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_049942ec(param_1 + 2,local_30,param_1,DAT_091c15e0);
    return;
  }
LAB_07682e8c:
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_30,0);
  *param_1 = -2;
  if (*(int *)(DAT_09181780 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


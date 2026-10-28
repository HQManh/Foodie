// rea decompile_all
// name: Newtonsoft.Json.JsonTextWriter.<DoWriteCommentAsync>d__115$$MoveNext
// address: 0x766c0fc
// body: available
// range: 0x766c0fc-0x766c53f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x766c520 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766c524 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766c528 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766c52c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766c530 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766c534 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766c538 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766c53c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextWriter_<DoWriteCommentAsync>d__115__MoveNext(int *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09522470 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1540);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091817a0);
    FUN_03f5c2a4(&DAT_091f8680);
    FUN_03f5c2a4(&DAT_091f9408);
    DAT_09522470 = 1;
  }
  iVar1 = *param_1;
  lVar3 = *(long *)(param_1 + 8);
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      local_40 = *(undefined1 (*) [16])(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
LAB_0766c260:
      System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                (local_40,0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar6 = *(undefined8 *)(lVar3 + 0x68);
      uVar5 = *(undefined8 *)(param_1 + 10);
      if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = Newtonsoft_Json_Utilities_AsyncUtils__WriteAsync(uVar6,DAT_091f9408,uVar5,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar7 = System_Threading_Tasks_Task__ConfigureAwait(lVar4,0,0);
      local_40 = auVar7;
      uVar2 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_40,0);
      if ((uVar2 & 1) == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0xe) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_0499393c(param_1 + 2,local_40,param_1,DAT_091c1540);
        return;
      }
    }
    else {
      if (iVar1 != 1) goto LAB_0766c1c4;
      local_40 = *(undefined1 (*) [16])(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
    }
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_40,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *(long *)(param_1 + 0xc);
    if (lVar4 == 0) {
      lVar4 = **(long **)(DAT_09535468 + 0xb8);
    }
    uVar6 = *(undefined8 *)(lVar3 + 0x68);
    uVar5 = *(undefined8 *)(param_1 + 10);
    if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = Newtonsoft_Json_Utilities_AsyncUtils__WriteAsync(uVar6,lVar4,uVar5,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar7 = System_Threading_Tasks_Task__ConfigureAwait(lVar4,0,0);
    local_40 = auVar7;
    uVar2 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_40,0);
    if ((uVar2 & 1) == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 0xe) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_0499393c(param_1 + 2,local_40,param_1,DAT_091c1540);
      return;
    }
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        local_40 = *(undefined1 (*) [16])(param_1 + 0xe);
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        *param_1 = -1;
        goto LAB_0766c42c;
      }
LAB_0766c1c4:
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = Newtonsoft_Json_JsonWriter__AutoCompleteAsync(lVar3,5,*(undefined8 *)(param_1 + 10));
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_40 = System_Threading_Tasks_Task__ConfigureAwait(lVar4,0,0);
      uVar2 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_40,0);
      if ((uVar2 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xe) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_0499393c(param_1 + 2,local_40,param_1,DAT_091c1540);
        return;
      }
      goto LAB_0766c260;
    }
    local_40 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_40,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar6 = *(undefined8 *)(lVar3 + 0x68);
  uVar5 = *(undefined8 *)(param_1 + 10);
  if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = Newtonsoft_Json_Utilities_AsyncUtils__WriteAsync(uVar6,DAT_091f8680,uVar5,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  auVar7 = System_Threading_Tasks_Task__ConfigureAwait(lVar3,0,0);
  local_40 = auVar7;
  uVar2 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                    (local_40,0);
  if ((uVar2 & 1) == 0) {
    *param_1 = 3;
    *(undefined1 (*) [16])(param_1 + 0xe) = local_40;
    thunk_FUN_03f5d7b8(param_1 + 0xe,0);
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_0499393c(param_1 + 2,local_40,param_1,DAT_091c1540);
    return;
  }
LAB_0766c42c:
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_40,0);
  *param_1 = -2;
  if (*(int *)(DAT_09181780 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


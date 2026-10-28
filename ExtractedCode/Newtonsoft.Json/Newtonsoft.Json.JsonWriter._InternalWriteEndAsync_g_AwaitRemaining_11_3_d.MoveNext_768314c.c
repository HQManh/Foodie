// rea decompile_all
// name: Newtonsoft.Json.JsonWriter.<<InternalWriteEndAsync>g__AwaitRemaining|11_3>d$$MoveNext
// address: 0x768314c
// body: available
// range: 0x768314c-0x7683467 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x768344c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7683450 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7683454 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7683458 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768345c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7683460 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7683464 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonWriter_<<InternalWriteEndAsync>g__AwaitRemaining_11_3>d__MoveNext
               (int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  undefined1 local_40 [16];
  
  if ((DAT_0952252f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c15e8);
    FUN_03f5c2a4(&DAT_09181780);
    DAT_0952252f = 1;
  }
  iVar2 = *param_1;
  plVar5 = *(long **)(param_1 + 8);
  local_40 = ZEXT816(0);
  if (iVar2 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
    goto LAB_07683298;
  }
  if (iVar2 == 1) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
    goto LAB_07683300;
  }
  if (iVar2 != 2) goto LAB_07683220;
  local_40 = *(undefined1 (*) [16])(param_1 + 0xe);
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *param_1 = -1;
  do {
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_40,0);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    Newtonsoft_Json_JsonWriter__UpdateCurrentState(plVar5);
LAB_07683220:
    iVar2 = param_1[0xc];
    param_1[0xc] = iVar2 + -1;
    lVar3 = DAT_09181780;
    if (iVar2 < 1) {
      *param_1 = -2;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
      return;
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = Newtonsoft_Json_JsonWriter__Pop(plVar5);
    iVar2 = Newtonsoft_Json_JsonWriter__GetCloseTokenForType(plVar5,uVar1);
    lVar3 = plVar5[6];
    param_1[0xd] = iVar2;
    if ((int)lVar3 == 1) {
      lVar3 = (**(code **)(*plVar5 + 0x238))
                        (plVar5,*(undefined8 *)(param_1 + 10),*(undefined8 *)(*plVar5 + 0x240));
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar6 = System_Threading_Tasks_Task__ConfigureAwait(lVar3,0,0);
      local_40 = auVar6;
      uVar4 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_40,0);
      if ((uVar4 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xe) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_04994368(param_1 + 2,local_40,param_1,DAT_091c15e8);
        return;
      }
LAB_07683298:
      System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                (local_40,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    if (((*(int *)((long)plVar5 + 0x34) == 1) && ((int)plVar5[6] != 2)) && ((int)plVar5[6] != 4)) {
      lVar3 = (**(code **)(*plVar5 + 0x1b8))
                        (plVar5,*(undefined8 *)(param_1 + 10),*(undefined8 *)(*plVar5 + 0x1c0));
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar6 = System_Threading_Tasks_Task__ConfigureAwait(lVar3,0,0);
      local_40 = auVar6;
      uVar4 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_40,0);
      if ((uVar4 & 1) == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0xe) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_04994368(param_1 + 2,local_40,param_1,DAT_091c15e8);
        return;
      }
LAB_07683300:
      System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                (local_40,0);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    lVar3 = (**(code **)(*plVar5 + 0x1a8))
                      (plVar5,param_1[0xd],*(undefined8 *)(param_1 + 10),
                       *(undefined8 *)(*plVar5 + 0x1b0));
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar6 = System_Threading_Tasks_Task__ConfigureAwait(lVar3,0,0);
    local_40 = auVar6;
    uVar4 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_40,0);
  } while ((uVar4 & 1) != 0);
  *param_1 = 2;
  *(undefined1 (*) [16])(param_1 + 0xe) = local_40;
  thunk_FUN_03f5d7b8(param_1 + 0xe,0);
  if (*(int *)(DAT_09181780 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_04994368(param_1 + 2,local_40,param_1,DAT_091c15e8);
  return;
}


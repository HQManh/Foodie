// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<ReadIntoWrappedTypeObjectAsync>d__43$$MoveNext
// address: 0x7662020
// body: available
// range: 0x7662020-0x766249b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x766246c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7662470 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7662474 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7662478 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766247c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7662480 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7662484 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7662488 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x766248c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7662490 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7662494 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7662498 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<ReadIntoWrappedTypeObjectAsync>d__43__MoveNext(int *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined1 auVar9 [16];
  undefined1 local_40 [16];
  undefined4 local_24;
  
  if ((DAT_09522407 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1520);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_091f7238);
    FUN_03f5c2a4(&DAT_0920df60);
    FUN_03f5c2a4(&DAT_091f7220);
    DAT_09522407 = 1;
  }
  iVar1 = *param_1;
  plVar8 = *(long **)(param_1 + 8);
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  if (iVar1 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
LAB_07662128:
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_40,0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = (**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
    if (lVar5 == 0) goto LAB_076623e4;
    plVar2 = (long *)(**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    uVar4 = System_String__op_Equality(uVar3,DAT_091f7220,0);
    if ((uVar4 & 1) == 0) goto LAB_076623e4;
    lVar5 = Newtonsoft_Json_JsonReader__ReaderReadAndAssertAsync
                      (plVar8,*(undefined8 *)(param_1 + 10),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar9 = System_Threading_Tasks_Task__ConfigureAwait(lVar5,0,0);
    local_40 = auVar9;
    uVar4 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_40,0);
    if ((uVar4 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_0499374c(param_1 + 2,local_40,param_1,DAT_091c1520);
      return;
    }
LAB_076621c0:
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_40,0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = (**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
    if (lVar5 == 0) goto LAB_076623e4;
    plVar2 = (long *)(**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = System_String__StartsWith(lVar5,DAT_0920df60,4,0);
    if ((uVar4 & 1) == 0) goto LAB_076623e4;
    lVar5 = Newtonsoft_Json_JsonReader__ReaderReadAndAssertAsync
                      (plVar8,*(undefined8 *)(param_1 + 10),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar9 = System_Threading_Tasks_Task__ConfigureAwait(lVar5,0,0);
    local_40 = auVar9;
    uVar4 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_40,0);
    if ((uVar4 & 1) == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_0499374c(param_1 + 2,local_40,param_1,DAT_091c1520);
      return;
    }
  }
  else {
    if (iVar1 == 1) {
      local_40 = *(undefined1 (*) [16])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
      goto LAB_076621c0;
    }
    if (iVar1 != 2) {
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = Newtonsoft_Json_JsonReader__ReaderReadAndAssertAsync
                        (plVar8,*(undefined8 *)(param_1 + 10),0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_40 = System_Threading_Tasks_Task__ConfigureAwait(lVar5,0,0);
      uVar4 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_40,0);
      if ((uVar4 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_0499374c(param_1 + 2,local_40,param_1,DAT_091c1520);
        return;
      }
      goto LAB_07662128;
    }
    local_40 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_40,0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar2 = (long *)(**(code **)(*plVar8 + 0x248))(plVar8,*(undefined8 *)(*plVar8 + 0x250));
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
  uVar4 = System_String__op_Equality(uVar3,DAT_091f7238,0);
  if ((uVar4 & 1) != 0) {
    *param_1 = -2;
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
    return;
  }
LAB_076623e4:
  lVar5 = thunk_FUN_03fc39d4(&DAT_09182ff8);
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  local_24 = 1;
  uVar6 = thunk_FUN_03fc39d4(&DAT_09187478);
  uVar6 = FUN_03f5c42c(uVar6,&local_24);
  uVar7 = thunk_FUN_03fc39d4(&DAT_09201978);
  uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar7,uVar3,uVar6,0);
  uVar3 = Newtonsoft_Json_JsonReaderException__Create(plVar8,uVar3,0);
  uVar6 = thunk_FUN_03fc39d4(&DAT_091ec0d8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar6);
}


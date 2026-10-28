// rea decompile_all
// name: Newtonsoft.Json.JsonWriter.<WriteConstructorDateAsync>d__32$$MoveNext
// address: 0x7683bc8
// body: available
// range: 0x7683bc8-0x7684177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7683ff8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7683ffc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684008 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768400c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684010 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684048 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768404c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684054 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684058 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768405c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684064 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684068 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonWriter_<WriteConstructorDateAsync>d__32__MoveNext(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_48;
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  if ((DAT_09522535 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1600);
    FUN_03f5c2a4(&DAT_091c1250);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_091bcba0);
    DAT_09522535 = 1;
  }
  iVar1 = *param_1;
  plVar9 = *(long **)(param_1 + 0xc);
  local_30._0_8_ = 0;
  local_30._8_8_ = 0;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  local_48 = 0;
  if (iVar1 == 0) {
    local_30 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
LAB_07683d0c:
    uVar5 = FUN_06daae34(local_30,DAT_0919b9d8);
    if ((uVar5 & 1) == 0) {
      uVar7 = thunk_FUN_03fc39d4(&DAT_09211d28);
      uVar7 = Newtonsoft_Json_JsonWriterException__Create(plVar9,uVar7,0);
      uVar8 = thunk_FUN_03fc39d4(&DAT_091ec140);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar8);
    }
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
    plVar3 = *(long **)(param_1 + 8);
    if (iVar1 != 7) {
      if (plVar3 != (long *)0x0) {
        uVar2 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
        local_68 = thunk_FUN_03fc39d4(&DAT_09187478);
        uStack_60 = 0xffffffffffffffff;
        local_58 = uVar2;
        uVar7 = System_Enum__ToString(&local_68,0);
        uVar8 = thunk_FUN_03fc39d4(&DAT_09211f28);
        uVar7 = System_String__Concat(uVar8,uVar7,0);
        uVar7 = Newtonsoft_Json_JsonWriterException__Create(plVar9,uVar7,0);
        uVar8 = thunk_FUN_03fc39d4(&DAT_091ec140);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar7,uVar8);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    plVar3 = (long *)(**(code **)(*plVar3 + 0x248))(plVar3,*(undefined8 *)(*plVar3 + 0x250));
    if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(*plVar3 + 0x40) != *(long *)(DAT_09535440 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar3);
    }
    puVar6 = (undefined8 *)thunk_FUN_03f99594(plVar3);
    uVar7 = Newtonsoft_Json_Utilities_DateTimeUtils__ConvertJavaScriptTicksToDateTime(*puVar6);
    plVar3 = *(long **)(param_1 + 8);
    *(undefined8 *)(param_1 + 0xe) = uVar7;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = (**(code **)(*plVar3 + 0x188))
                      (plVar3,*(undefined8 *)(param_1 + 10),*(undefined8 *)(*plVar3 + 400));
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar10 = FUN_062e82b0(lVar4,0,DAT_091bcba0);
    local_30 = auVar10;
    uVar5 = FUN_06daadec(local_30,DAT_0919b9e0);
    if ((uVar5 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_30;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04990a3c(param_1 + 2,local_30,param_1,DAT_091c1250);
      return;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        local_40 = *(undefined1 (*) [16])(param_1 + 0x14);
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        *param_1 = -1;
        local_30 = ZEXT816(0);
        goto LAB_07683e84;
      }
      plVar3 = *(long **)(param_1 + 8);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = (**(code **)(*plVar3 + 0x188))
                        (plVar3,*(undefined8 *)(param_1 + 10),*(undefined8 *)(*plVar3 + 400));
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_30 = FUN_062e82b0(lVar4,0,DAT_091bcba0);
      uVar5 = FUN_06daadec(local_30,DAT_0919b9e0);
      if ((uVar5 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x10) = local_30;
        thunk_FUN_03f5d7b8(param_1 + 0x10,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_04990a3c(param_1 + 2,local_30,param_1,DAT_091c1250);
        return;
      }
      goto LAB_07683d0c;
    }
    local_30 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  uVar5 = FUN_06daae34(local_30,DAT_0919b9d8);
  if ((uVar5 & 1) == 0) {
    uVar7 = thunk_FUN_03fc39d4(&DAT_09211d28);
    uVar7 = Newtonsoft_Json_JsonWriterException__Create(plVar9,uVar7,0);
    uVar8 = thunk_FUN_03fc39d4(&DAT_091ec140);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar7,uVar8);
  }
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
  if (iVar1 != 0xf) {
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x238))(plVar3,*(undefined8 *)(*plVar3 + 0x240));
      local_68 = thunk_FUN_03fc39d4(&DAT_09187478);
      uStack_60 = 0xffffffffffffffff;
      local_58 = uVar2;
      uVar7 = System_Enum__ToString(&local_68,0);
      uVar8 = thunk_FUN_03fc39d4(&DAT_09211f20);
      uVar7 = System_String__Concat(uVar8,uVar7,0);
      uVar7 = Newtonsoft_Json_JsonWriterException__Create(plVar9,uVar7,0);
      uVar8 = thunk_FUN_03fc39d4(&DAT_091ec140);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = (**(code **)(*plVar9 + 0x338))
                    (plVar9,*(undefined8 *)(param_1 + 0xe),*(undefined8 *)(param_1 + 10),
                     *(undefined8 *)(*plVar9 + 0x340));
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_40 = System_Threading_Tasks_Task__ConfigureAwait(lVar4,0,0);
  uVar5 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                    (local_40,0);
  if ((uVar5 & 1) == 0) {
    *param_1 = 2;
    *(undefined1 (*) [16])(param_1 + 0x14) = local_40;
    thunk_FUN_03f5d7b8(param_1 + 0x14,0);
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_049944dc(param_1 + 2,local_40,param_1,DAT_091c1600);
    return;
  }
LAB_07683e84:
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_40,0);
  *param_1 = -2;
  if (*(int *)(DAT_09181780 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


// rea decompile_all
// name: Newtonsoft.Json.JsonWriter.<WriteTokenAsync>d__30$$MoveNext
// address: 0x76843fc
// body: available
// range: 0x76843fc-0x7684523 inclusive
// range: 0x768452c-0x76848db inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7684520 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768486c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684870 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684874 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684878 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768487c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684880 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684884 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684888 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768488c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684890 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684894 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonWriter_<WriteTokenAsync>d__30__MoveNext(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  
  if ((DAT_09522537 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1608);
    FUN_03f5c2a4(&DAT_091c1258);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_091bcba0);
    FUN_03f5c2a4(&DAT_092001d8);
    DAT_09522537 = 1;
  }
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  auVar11 = ZEXT816(0);
  lVar10 = *(long *)(param_1 + 8);
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  if (1 < *param_1) {
    if (*param_1 == 2) {
      local_70 = *(undefined1 (*) [16])(param_1 + 0x16);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = 0xffffffff;
      goto LAB_07684764;
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = Newtonsoft_Json_JsonWriter__CalculateWriteTokenInitialDepth
                      (lVar10,*(undefined8 *)(param_1 + 10),0);
    param_1[0x11] = uVar1;
    goto LAB_0768452c;
  }
  local_60 = *(undefined1 (*) [16])(param_1 + 0x12);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = 0xffffffff;
  local_70 = ZEXT816(0);
LAB_076846bc:
  do {
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_60,0);
    do {
      plVar5 = *(long **)(param_1 + 10);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = param_1[0x11];
      iVar3 = (**(code **)(*plVar5 + 0x268))(plVar5,*(undefined8 *)(*plVar5 + 0x270));
      plVar5 = *(long **)(param_1 + 10);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar4 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
      if (((int)(iVar3 - (uint)(iVar4 - 0xdU < 3)) <= (int)(uVar1 - 1)) ||
         (*(char *)((long)param_1 + 0x41) == '\0')) {
LAB_07684774:
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar7 = Newtonsoft_Json_JsonWriter__IsWriteTokenIncomplete
                          (lVar10,*(undefined8 *)(param_1 + 10),
                           *(undefined1 *)((long)param_1 + 0x41),param_1[0x11],0);
        lVar6 = DAT_09181780;
        if ((uVar7 & 1) == 0) {
          *param_1 = 0xfffffffe;
          if (*(int *)(lVar6 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
          return;
        }
        uVar8 = thunk_FUN_03fc39d4(&DAT_09211d30);
        uVar8 = Newtonsoft_Json_JsonWriterException__Create(lVar10,uVar8,0);
        uVar9 = thunk_FUN_03fc39d4(&DAT_091ec148);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar8,uVar9);
      }
      plVar5 = *(long **)(param_1 + 10);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = (**(code **)(*plVar5 + 0x188))
                        (plVar5,*(undefined8 *)(param_1 + 0xe),*(undefined8 *)(*plVar5 + 400));
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      auVar11 = FUN_062e82b0(lVar6,0,DAT_091bcba0);
      local_70 = auVar11;
      uVar7 = FUN_06daadec(local_70,DAT_0919b9e0);
      auVar11 = local_60;
      if ((uVar7 & 1) == 0) {
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 0x16) = local_70;
        thunk_FUN_03f5d7b8(param_1 + 0x16,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_04990ab8(param_1 + 2,local_70,param_1,DAT_091c1258);
        return;
      }
LAB_07684764:
      local_60 = auVar11;
      uVar7 = FUN_06daae34(local_70,DAT_0919b9d8);
      if ((uVar7 & 1) == 0) goto LAB_07684774;
LAB_0768452c:
      if ((char)param_1[0xc] != '\0') {
        plVar5 = *(long **)(param_1 + 10);
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar3 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
        if (iVar3 == 3) {
          plVar5 = *(long **)(param_1 + 10);
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          plVar5 = (long *)(**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
          uVar8 = 0;
          if (plVar5 != (long *)0x0) {
            uVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
          }
          uVar7 = System_String__Equals(uVar8,DAT_092001d8,4,0);
          if ((uVar7 & 1) != 0) {
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar6 = Newtonsoft_Json_JsonWriter__WriteConstructorDateAsync
                              (lVar10,*(undefined8 *)(param_1 + 10),*(undefined8 *)(param_1 + 0xe),0
                              );
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            auVar11 = System_Threading_Tasks_Task__ConfigureAwait(lVar6,0,0);
            local_60 = auVar11;
            uVar7 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                              (local_60,0);
            if ((uVar7 & 1) == 0) {
              *param_1 = 0;
              *(undefined1 (*) [16])(param_1 + 0x12) = local_60;
              thunk_FUN_03f5d7b8(param_1 + 0x12,0);
              if (*(int *)(DAT_09181780 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              FUN_04994558(param_1 + 2,local_60,param_1,DAT_091c1608);
              return;
            }
            goto LAB_076846bc;
          }
        }
      }
      if ((char)param_1[0x10] != '\0') break;
      plVar5 = *(long **)(param_1 + 10);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar3 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    } while (iVar3 == 5);
    plVar5 = *(long **)(param_1 + 10);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    plVar5 = *(long **)(param_1 + 10);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar8 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = Newtonsoft_Json_JsonWriter__WriteTokenAsync
                      (lVar10,uVar2,uVar8,*(undefined8 *)(param_1 + 0xe),0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar11 = System_Threading_Tasks_Task__ConfigureAwait(lVar6,0,0);
    local_60 = auVar11;
    uVar7 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_60,0);
    if ((uVar7 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x12) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0x12,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04994558(param_1 + 2,local_60,param_1,DAT_091c1608);
      return;
    }
  } while( true );
}


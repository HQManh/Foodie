// rea decompile_all
// name: Newtonsoft.Json.JsonWriter.<WriteTokenSyncReadingAsync>d__31$$MoveNext
// address: 0x7684aa8
// body: available
// range: 0x7684aa8-0x7684b9f inclusive
// range: 0x7684ba8-0x7684e23 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7684b9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684dc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684dc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684dc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684dcc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684dd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684dd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684dd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684ddc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684de0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684de4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7684de8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonWriter_<WriteTokenSyncReadingAsync>d__31__MoveNext(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 local_60 [16];
  
  if ((DAT_09522539 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1260);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_091bcba0);
    FUN_03f5c2a4(&DAT_092001d8);
    DAT_09522539 = 1;
  }
  lVar10 = *(long *)(param_1 + 8);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
    goto LAB_07684d08;
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = Newtonsoft_Json_JsonWriter__CalculateWriteTokenInitialDepth
                    (lVar10,*(undefined8 *)(param_1 + 10),0);
  param_1[0xe] = iVar1;
  do {
    plVar5 = *(long **)(param_1 + 10);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    if (iVar1 == 3) {
      plVar5 = *(long **)(param_1 + 10);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar5 = (long *)(**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
      uVar9 = 0;
      if (plVar5 != (long *)0x0) {
        uVar9 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      }
      uVar6 = System_String__Equals(uVar9,DAT_092001d8,4,0);
      if ((uVar6 & 1) == 0) goto LAB_07684c28;
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Newtonsoft_Json_JsonWriter__WriteConstructorDate(lVar10,*(undefined8 *)(param_1 + 10),0);
    }
    else {
LAB_07684c28:
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
      uVar9 = (**(code **)(*plVar5 + 0x248))(plVar5,*(undefined8 *)(*plVar5 + 0x250));
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Newtonsoft_Json_JsonWriter__WriteToken(lVar10,uVar2,uVar9,0);
    }
    plVar5 = *(long **)(param_1 + 10);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = param_1[0xe];
    iVar3 = (**(code **)(*plVar5 + 0x268))(plVar5,*(undefined8 *)(*plVar5 + 0x270));
    plVar5 = *(long **)(param_1 + 10);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar4 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
    if ((int)(iVar3 - (uint)(iVar4 - 0xdU < 3)) <= iVar1 + -1) break;
    plVar5 = *(long **)(param_1 + 10);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = (**(code **)(*plVar5 + 0x188))
                      (plVar5,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(*plVar5 + 400));
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar11 = FUN_062e82b0(lVar7,0,DAT_091bcba0);
    local_60 = auVar11;
    uVar6 = FUN_06daadec(local_60,DAT_0919b9e0);
    if ((uVar6 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04990b34(param_1 + 2,local_60,param_1,DAT_091c1260);
      return;
    }
LAB_07684d08:
    uVar6 = FUN_06daae34(local_60,DAT_0919b9d8);
  } while ((uVar6 & 1) != 0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = param_1[0xe];
  iVar3 = Newtonsoft_Json_JsonWriter__CalculateWriteTokenFinalDepth
                    (lVar10,*(undefined8 *)(param_1 + 10),0);
  lVar7 = DAT_09181780;
  if (iVar3 <= iVar1) {
    *param_1 = -2;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
    return;
  }
  uVar9 = thunk_FUN_03fc39d4(&DAT_09211d30);
  uVar9 = Newtonsoft_Json_JsonWriterException__Create(lVar10,uVar9,0);
  uVar8 = thunk_FUN_03fc39d4(&DAT_091ec150);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar9,uVar8);
}


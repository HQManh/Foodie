// rea decompile_all
// name: Newtonsoft.Json.Linq.JContainer.<ReadTokenFromAsync>d__0$$MoveNext
// address: 0x76deb88
// body: available
// range: 0x76deb88-0x76def8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76dee40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dee6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dee98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76dee9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76deea0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76deea4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76deea8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76deeac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76deec4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76deedc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76def34 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76def8c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JContainer_<ReadTokenFromAsync>d__0__MoveNext(int *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_095227ca & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c14b8);
    FUN_03f5c2a4(&DAT_091c1200);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_091bcba0);
    FUN_03f5c2a4(&DAT_092215e0);
    DAT_095227ca = 1;
  }
  local_40._8_8_ = 0;
  lVar8 = *(long *)(param_1 + 0xc);
  local_50._8_8_ = 0;
  local_40._0_8_ = 0;
  local_50._0_8_ = 0;
  if (*param_1 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0x12);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_50 = *(undefined1 (*) [16])(param_1 + 0x16);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = -1;
      local_40 = ZEXT816(0);
      goto LAB_076ded44;
    }
    Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull
              (*(undefined8 *)(param_1 + 8),DAT_092215e0,0);
    plVar3 = *(long **)(param_1 + 8);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = (**(code **)(*plVar3 + 0x268))(plVar3,*(undefined8 *)(*plVar3 + 0x270));
    plVar3 = *(long **)(param_1 + 8);
    param_1[0x10] = iVar1;
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
    local_40 = FUN_062e82b0(lVar4,0,DAT_091bcba0);
    uVar2 = FUN_06daadec(local_40,DAT_0919b9e0);
    if ((uVar2 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x12) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0x12,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_04990564(param_1 + 2,local_40,param_1,DAT_091c1200);
      return;
    }
  }
  uVar2 = FUN_06daae34(local_40,DAT_0919b9d8);
  if ((uVar2 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_1 + 8);
    lVar4 = thunk_FUN_03fc39d4(&DAT_09182ff8);
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    if (lVar8 != 0) {
      plVar3 = (long *)System_Object__GetType(lVar8,0);
      if (plVar3 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
        uVar7 = thunk_FUN_03fc39d4(&DAT_092019d0);
        uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar7,uVar5,uVar6,0);
        uVar9 = Newtonsoft_Json_JsonReaderException__Create(uVar9,uVar5,0);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091ebeb8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar9,uVar5);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = Newtonsoft_Json_Linq_JContainer__ReadContentFromAsync
                    (lVar8,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xe),
                     *(undefined8 *)(param_1 + 10));
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_50 = System_Threading_Tasks_Task__ConfigureAwait(lVar4,0,0);
  uVar2 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                    (local_50,0);
  if ((uVar2 & 1) == 0) {
    *param_1 = 1;
    *(undefined1 (*) [16])(param_1 + 0x16) = local_50;
    thunk_FUN_03f5d7b8(param_1 + 0x16,0);
    if (*(int *)(DAT_09181780 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04993100(param_1 + 2,local_50,param_1,DAT_091c14b8);
    return;
  }
LAB_076ded44:
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_50,0);
  plVar3 = *(long **)(param_1 + 8);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = (**(code **)(*plVar3 + 0x268))(plVar3,*(undefined8 *)(*plVar3 + 0x270));
  lVar4 = DAT_09181780;
  if (iVar1 <= param_1[0x10]) {
    *param_1 = -2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
    return;
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  lVar4 = thunk_FUN_03fc39d4(&DAT_09182ff8);
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  if (lVar8 != 0) {
    plVar3 = (long *)System_Object__GetType(lVar8,0);
    if (plVar3 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
      uVar7 = thunk_FUN_03fc39d4(&DAT_09211c90);
      uVar5 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar7,uVar5,uVar6,0);
      uVar9 = Newtonsoft_Json_JsonReaderException__Create(uVar9,uVar5,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091ebeb8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar9,uVar5);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


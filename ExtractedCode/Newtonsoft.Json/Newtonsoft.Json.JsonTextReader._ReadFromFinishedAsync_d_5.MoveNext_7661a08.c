// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<ReadFromFinishedAsync>d__5$$MoveNext
// address: 0x7661a08
// body: available
// range: 0x7661a08-0x7661e63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7661d90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7661d94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7661d98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7661d9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7661da0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7661da4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7661da8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7661dac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7661dd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7661ddc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7661e5c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7661e60 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<ReadFromFinishedAsync>d__5__MoveNext(int *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined2 local_24 [2];
  
  if ((DAT_09522405 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091984c8);
    FUN_03f5c2a4(&DAT_091983e8);
    FUN_03f5c2a4(&DAT_091985d0);
    FUN_03f5c2a4(&DAT_091751c8);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_091bcba0);
    DAT_09522405 = 1;
  }
  local_40._8_8_ = 0;
  iVar1 = *param_1;
  lVar8 = *(long *)(param_1 + 8);
  local_50._8_8_ = 0;
  local_40._0_8_ = 0;
  auVar9 = ZEXT816(0);
  local_50._0_8_ = 0;
  if (iVar1 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
LAB_07661b60:
    uVar3 = FUN_06daae34(local_40,DAT_0919b9d8);
    if ((uVar3 & 1) == 0) {
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Newtonsoft_Json_JsonReader__SetToken(lVar8,0,0);
      uVar7 = 0;
      goto LAB_07661c6c;
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = Newtonsoft_Json_JsonTextReader__EatWhitespaceAsync
                      (lVar8,*(undefined8 *)(param_1 + 10),0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_50 = System_Threading_Tasks_Task__ConfigureAwait(lVar2,0,0);
    uVar3 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_50,0);
    auVar9 = local_40;
    if ((uVar3 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_045d7870(param_1 + 2,local_50,param_1,DAT_091984c8);
      return;
    }
LAB_07661bb0:
    local_40 = auVar9;
    System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
              (local_50,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar8 + 0x98) != '\0') {
      Newtonsoft_Json_JsonReader__SetToken(lVar8,0,0);
      uVar7 = 0;
      goto LAB_07661c6c;
    }
    lVar2 = *(long *)(lVar8 + 0x80);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(lVar2 + 0x18) <= *(uint *)(lVar8 + 0x8c)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    if (*(short *)(lVar2 + (long)(int)*(uint *)(lVar8 + 0x8c) * 2 + 0x20) != 0x2f) {
      lVar2 = thunk_FUN_03fc39d4(&DAT_09182ff8);
      if (*(int *)(lVar2 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      lVar2 = *(long *)(lVar8 + 0x80);
      if (lVar2 != 0) {
        if (*(uint *)(lVar2 + 0x18) <= *(uint *)(lVar8 + 0x8c)) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        local_24[0] = *(undefined2 *)(lVar2 + (long)(int)*(uint *)(lVar8 + 0x8c) * 2 + 0x20);
        uVar5 = FUN_03f5c42c(DAT_09535460,local_24);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091fb558);
        uVar4 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar4,uVar5,0);
        uVar4 = Newtonsoft_Json_JsonReaderException__Create(lVar8,uVar4,0);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091ec0d0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,uVar5);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar8 = Newtonsoft_Json_JsonTextReader__ParseCommentAsync
                      (lVar8,1,*(undefined8 *)(param_1 + 10),0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar9 = System_Threading_Tasks_Task__ConfigureAwait(lVar8,0,0);
    local_50 = auVar9;
    uVar3 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                      (local_50,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_045d7870(param_1 + 2,local_50,param_1,DAT_091984c8);
      return;
    }
  }
  else {
    if (iVar1 == 1) {
      local_50 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
      goto LAB_07661bb0;
    }
    if (iVar1 != 2) {
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = Newtonsoft_Json_JsonTextReader__EnsureCharsAsync
                        (lVar8,0,0,*(undefined8 *)(param_1 + 10),0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_40 = FUN_062e82b0(lVar2,0,DAT_091bcba0);
      uVar3 = FUN_06daadec(local_40,DAT_0919b9e0);
      if ((uVar3 & 1) == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_045d3870(param_1 + 2,local_40,param_1,DAT_091983e8);
        return;
      }
      goto LAB_07661b60;
    }
    local_50 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
    local_40 = ZEXT816(0);
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_50,0);
  uVar7 = 1;
LAB_07661c6c:
  iVar1 = *(int *)(DAT_091751c8 + 0xe4);
  *param_1 = -2;
  if (iVar1 == 0) {
    FUN_03f5c424();
  }
  FUN_069f2e3c(param_1 + 2,uVar7,DAT_091985d0);
  return;
}


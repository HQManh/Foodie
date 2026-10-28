// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader.<ParsePropertyAsync>d__31$$MoveNext
// address: 0x765e6ac
// body: available
// range: 0x765e6ac-0x765ebe7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x765ea60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765ea64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765ea68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765ea6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765ea70 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765ea9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765eaa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765eaa4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765eaa8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765eaac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765ead8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x765eadc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader_<ParsePropertyAsync>d__31__MoveNext(uint *param_1)

{
  short sVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 local_40 [16];
  undefined2 local_24 [2];
  
  if ((DAT_095223f3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091984b8);
    FUN_03f5c2a4(&DAT_091985d0);
    FUN_03f5c2a4(&DAT_091751c8);
    DAT_095223f3 = 1;
  }
  lVar9 = *(long *)(param_1 + 8);
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  if (*param_1 < 2) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = 0xffffffff;
  }
  else {
    if (*param_1 == 2) {
      local_40 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = 0xffffffff;
      goto LAB_0765e8b4;
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar4 = *(long *)(lVar9 + 0x80);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = *(uint *)(lVar9 + 0x8c);
    if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    sVar1 = *(short *)(lVar4 + (long)(int)uVar2 * 2 + 0x20);
    if ((sVar1 == 0x22) || (sVar1 == 0x27)) {
      *(uint *)(lVar9 + 0x8c) = uVar2 + 1;
      *(short *)(param_1 + 0xc) = sVar1;
      Newtonsoft_Json_JsonTextReader__ShiftBufferIfNeeded(lVar9,0);
      lVar4 = Newtonsoft_Json_JsonTextReader__ReadStringIntoBufferAsync
                        (lVar9,(short)param_1[0xc],*(undefined8 *)(param_1 + 10),0);
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
        if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_045d73e0(param_1 + 2,local_40,param_1,DAT_091984b8);
        return;
      }
    }
    else {
      uVar5 = Newtonsoft_Json_JsonTextReader__ValidIdentifierChar(lVar9,sVar1,0);
      if ((uVar5 & 1) == 0) {
        lVar4 = thunk_FUN_03fc39d4(&DAT_09182ff8);
        if (*(int *)(lVar4 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        lVar4 = *(long *)(lVar9 + 0x80);
        if (lVar4 != 0) {
          if (*(uint *)(lVar4 + 0x18) <= *(uint *)(lVar9 + 0x8c)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          local_24[0] = *(undefined2 *)(lVar4 + (long)(int)*(uint *)(lVar9 + 0x8c) * 2 + 0x20);
          uVar7 = FUN_03f5c42c(DAT_09535460,local_24);
          uVar8 = thunk_FUN_03fc39d4(&DAT_092059e8);
          uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar6,uVar7,0);
          uVar6 = Newtonsoft_Json_JsonReaderException__Create(lVar9,uVar6,0);
          uVar7 = thunk_FUN_03fc39d4(&DAT_091ec0b0);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar6,uVar7);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined2 *)(param_1 + 0xc) = 0;
      Newtonsoft_Json_JsonTextReader__ShiftBufferIfNeeded(lVar9,0);
      lVar4 = Newtonsoft_Json_JsonTextReader__ParseUnquotedPropertyAsync
                        (lVar9,*(undefined8 *)(param_1 + 10),0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_40 = System_Threading_Tasks_Task__ConfigureAwait(lVar4,0,0);
      uVar5 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                        (local_40,0);
      if ((uVar5 & 1) == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0x10) = local_40;
        thunk_FUN_03f5d7b8(param_1 + 0x10,0);
        if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_045d73e0(param_1 + 2,local_40,param_1,DAT_091984b8);
        return;
      }
    }
  }
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_40,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar3 = *(long **)(lVar9 + 200);
  if (plVar3 == (long *)0x0) {
    uVar6 = Newtonsoft_Json_Utilities_StringReference__ToString(lVar9 + 0xb0,0);
    *(undefined8 *)(param_1 + 0xe) = uVar6;
    thunk_FUN_03f5d7b8();
  }
  else {
    lVar4 = (**(code **)(*plVar3 + 0x178))
                      (plVar3,*(undefined8 *)(lVar9 + 0xb0),*(undefined4 *)(lVar9 + 0xb8),
                       *(undefined4 *)(lVar9 + 0xbc),*(undefined8 *)(*plVar3 + 0x180));
    if (lVar4 == 0) {
      lVar4 = Newtonsoft_Json_Utilities_StringReference__ToString(lVar9 + 0xb0);
    }
    *(long *)(param_1 + 0xe) = lVar4;
    thunk_FUN_03f5d7b8();
  }
  lVar4 = Newtonsoft_Json_JsonTextReader__EatWhitespaceAsync(lVar9,*(undefined8 *)(param_1 + 10),0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  auVar10 = System_Threading_Tasks_Task__ConfigureAwait(lVar4,0,0);
  local_40 = auVar10;
  uVar5 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                    (local_40,0);
  if ((uVar5 & 1) == 0) {
    *param_1 = 2;
    *(undefined1 (*) [16])(param_1 + 0x10) = local_40;
    thunk_FUN_03f5d7b8(param_1 + 0x10,0);
    if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_045d73e0(param_1 + 2,local_40,param_1,DAT_091984b8);
    return;
  }
LAB_0765e8b4:
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_40,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = *(long *)(lVar9 + 0x80);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = *(uint *)(lVar9 + 0x8c);
  if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  if (*(short *)(lVar4 + (long)(int)uVar2 * 2 + 0x20) == 0x3a) {
    *(uint *)(lVar9 + 0x8c) = uVar2 + 1;
    Newtonsoft_Json_JsonReader__SetToken(lVar9,4,*(undefined8 *)(param_1 + 0xe),0);
    *(short *)(lVar9 + 0x20) = (short)param_1[0xc];
    Newtonsoft_Json_JsonTextReader__ClearRecentString(lVar9,0);
    *param_1 = 0xfffffffe;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    thunk_FUN_03f5d7b8(param_1 + 0xe,0);
    if (*(int *)(DAT_091751c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_069f2e3c(param_1 + 2,1,DAT_091985d0);
    return;
  }
  lVar4 = thunk_FUN_03fc39d4(&DAT_09182ff8);
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  lVar4 = *(long *)(lVar9 + 0x80);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= *(uint *)(lVar9 + 0x8c)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    local_24[0] = *(undefined2 *)(lVar4 + (long)(int)*(uint *)(lVar9 + 0x8c) * 2 + 0x20);
    uVar7 = FUN_03f5c42c(DAT_09535460,local_24);
    uVar8 = thunk_FUN_03fc39d4(&DAT_09205650);
    uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar6,uVar7,0);
    uVar6 = Newtonsoft_Json_JsonReaderException__Create(lVar9,uVar6,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091ec0b0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


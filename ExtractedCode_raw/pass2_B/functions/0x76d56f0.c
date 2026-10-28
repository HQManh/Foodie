// rea decompile_all
// name: Newtonsoft.Json.Linq.JArray.<LoadAsync>d__2$$MoveNext
// address: 0x76d56f0
// body: available
// range: 0x76d56f0-0x76d5c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76d5848 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d5b38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d5b6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d5b70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d5b74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d5b78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d5b7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d5b80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d5b84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d5b88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d5b8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76d5c00 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JArray_<LoadAsync>d__2__MoveNext(int *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined4 local_24;
  
  if ((DAT_09522782 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09198bf8);
    FUN_03f5c2a4(&DAT_09198bf0);
    FUN_03f5c2a4(&DAT_09198c18);
    FUN_03f5c2a4(&DAT_09175250);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_09187200);
    FUN_03f5c2a4(&DAT_091bcba0);
    DAT_09522782 = 1;
  }
  iVar1 = *param_1;
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (iVar1 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
LAB_076d57f8:
    uVar4 = FUN_06daae34(local_40,DAT_0919b9d8);
    if ((uVar4 & 1) == 0) {
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar8 = thunk_FUN_03fc39d4(&DAT_09201908);
      uVar8 = Newtonsoft_Json_JsonReaderException__Create(uVar9,uVar8,0);
      uVar9 = thunk_FUN_03fc39d4(&DAT_091ebe98);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar8,uVar9);
    }
LAB_076d5868:
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = Newtonsoft_Json_JsonReader__MoveToContentAsync
                      (*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 10),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar10 = FUN_062e82b0(lVar3,0,DAT_091bcba0);
    local_40 = auVar10;
    uVar4 = FUN_06daadec(local_40,DAT_0919b9e0);
    if ((uVar4 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      if (*(int *)(DAT_09175250 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_045de1e0(param_1 + 2,local_40,param_1,DAT_09198bf0);
      return;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        local_50 = *(undefined1 (*) [16])(param_1 + 0x14);
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        *param_1 = -1;
        local_40 = ZEXT816(0);
        goto LAB_076d5984;
      }
      plVar2 = *(long **)(param_1 + 8);
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar1 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      if (iVar1 == 0) {
        plVar2 = *(long **)(param_1 + 8);
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = (**(code **)(*plVar2 + 0x188))
                          (plVar2,*(undefined8 *)(param_1 + 10),*(undefined8 *)(*plVar2 + 400));
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_40 = FUN_062e82b0(lVar3,0,DAT_091bcba0);
        uVar4 = FUN_06daadec(local_40,DAT_0919b9e0);
        if ((uVar4 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x10) = local_40;
          thunk_FUN_03f5d7b8(param_1 + 0x10,0);
          if (*(int *)(DAT_09175250 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_045de1e0(param_1 + 2,local_40,param_1,DAT_09198bf0);
          return;
        }
        goto LAB_076d57f8;
      }
      goto LAB_076d5868;
    }
    local_40 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  FUN_06daae34(local_40,DAT_0919b9d8);
  plVar2 = *(long **)(param_1 + 8);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
  if (iVar1 != 2) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    lVar3 = thunk_FUN_03fc39d4(&DAT_09182ff8);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    plVar2 = *(long **)(param_1 + 8);
    if (plVar2 != (long *)0x0) {
      local_24 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
      uVar6 = thunk_FUN_03fc39d4(&DAT_09187478);
      uVar6 = FUN_03f5c42c(uVar6,&local_24);
      uVar7 = thunk_FUN_03fc39d4(&DAT_09201910);
      uVar9 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar7,uVar9,uVar6,0);
      uVar8 = Newtonsoft_Json_JsonReaderException__Create(uVar8,uVar9,0);
      uVar9 = thunk_FUN_03fc39d4(&DAT_091ebe98);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar8,uVar9);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09187200);
  Newtonsoft_Json_Linq_JArray___ctor();
  plVar2 = (long *)(param_1 + 0xe);
  *plVar2 = lVar3;
  thunk_FUN_03f5d7b8(plVar2,lVar3);
  lVar3 = *(long *)(param_1 + 0xe);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar9 = *(undefined8 *)(param_1 + 0xc);
  uVar8 = thunk_FUN_03f99350(*(undefined8 *)(param_1 + 8),DAT_09185f18);
  Newtonsoft_Json_Linq_JToken__SetLineInfo(lVar3,uVar8,uVar9,0);
  if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = Newtonsoft_Json_Linq_JContainer__ReadTokenFromAsync
                    (*plVar2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xc),
                     *(undefined8 *)(param_1 + 10),0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_50 = System_Threading_Tasks_Task__ConfigureAwait(lVar3,0,0);
  uVar4 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                    (local_50,0);
  if ((uVar4 & 1) == 0) {
    *param_1 = 2;
    *(undefined1 (*) [16])(param_1 + 0x14) = local_50;
    thunk_FUN_03f5d7b8(param_1 + 0x14,0);
    if (*(int *)(DAT_09175250 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_045f1880(param_1 + 2,local_50,param_1,DAT_09198bf8);
    return;
  }
LAB_076d5984:
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_50,0);
  *param_1 = -2;
  piVar5 = param_1 + 0xe;
  uVar8 = *(undefined8 *)piVar5;
  piVar5[0] = 0;
  piVar5[1] = 0;
  thunk_FUN_03f5d7b8(piVar5,0);
  if (*(int *)(DAT_09175250 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_069f7d10(param_1 + 2,uVar8,DAT_09198c18);
  return;
}


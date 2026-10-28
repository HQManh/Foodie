// rea decompile_all
// name: Newtonsoft.Json.Linq.JProperty.<LoadAsync>d__4$$MoveNext
// address: 0x76e4dc4
// body: available
// range: 0x76e4dc4-0x76e531b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76e4f1c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e5248 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e5278 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e527c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e5280 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e5284 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e5288 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e528c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e5290 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e5298 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e529c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76e52a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JProperty_<LoadAsync>d__4__MoveNext(int *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined4 local_24;
  
  if ((DAT_09522811 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09198cd0);
    FUN_03f5c2a4(&DAT_09198cc8);
    FUN_03f5c2a4(&DAT_09198cf0);
    FUN_03f5c2a4(&DAT_09175268);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_09187230);
    FUN_03f5c2a4(&DAT_091bcba0);
    DAT_09522811 = 1;
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
LAB_076e4ecc:
    uVar4 = FUN_06daae34(local_40,DAT_0919b9d8);
    if ((uVar4 & 1) == 0) {
      uVar9 = *(undefined8 *)(param_1 + 8);
      uVar8 = thunk_FUN_03fc39d4(&DAT_09201938);
      uVar8 = Newtonsoft_Json_JsonReaderException__Create(uVar9,uVar8,0);
      uVar9 = thunk_FUN_03fc39d4(&DAT_091ebed8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar8,uVar9);
    }
LAB_076e4f3c:
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
      if (*(int *)(DAT_09175268 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_045de8b8(param_1 + 2,local_40,param_1,DAT_09198cc8);
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
        goto LAB_076e5094;
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
          if (*(int *)(DAT_09175268 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_045de8b8(param_1 + 2,local_40,param_1,DAT_09198cc8);
          return;
        }
        goto LAB_076e4ecc;
      }
      goto LAB_076e4f3c;
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
  plVar2 = *(long **)(param_1 + 8);
  if (iVar1 != 4) {
    lVar3 = thunk_FUN_03fc39d4(&DAT_09182ff8);
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    plVar6 = *(long **)(param_1 + 8);
    if (plVar6 != (long *)0x0) {
      local_24 = (**(code **)(*plVar6 + 0x238))(plVar6,*(undefined8 *)(*plVar6 + 0x240));
      uVar9 = thunk_FUN_03fc39d4(&DAT_09187478);
      uVar9 = FUN_03f5c42c(uVar9,&local_24);
      uVar7 = thunk_FUN_03fc39d4(&DAT_09201940);
      uVar8 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar7,uVar8,uVar9,0);
      uVar8 = Newtonsoft_Json_JsonReaderException__Create(plVar2,uVar8,0);
      uVar9 = thunk_FUN_03fc39d4(&DAT_091ebed8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar8,uVar9);
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(*plVar2 + 0x250));
  lVar3 = thunk_FUN_03f9944c(DAT_09187230);
  if ((plVar2 != (long *)0x0) && (*plVar2 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0(plVar2);
  }
  Newtonsoft_Json_Linq_JProperty___ctor(lVar3,plVar2);
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
  Newtonsoft_Json_Linq_JToken__SetLineInfo(lVar3,uVar8,uVar9);
  if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = Newtonsoft_Json_Linq_JContainer__ReadTokenFromAsync
                    (*plVar2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xc),
                     *(undefined8 *)(param_1 + 10));
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
    if (*(int *)(DAT_09175268 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_045f1f58(param_1 + 2,local_50,param_1,DAT_09198cd0);
    return;
  }
LAB_076e5094:
  System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
            (local_50,0);
  *param_1 = -2;
  piVar5 = param_1 + 0xe;
  uVar8 = *(undefined8 *)piVar5;
  piVar5[0] = 0;
  piVar5[1] = 0;
  thunk_FUN_03f5d7b8(piVar5,0);
  if (*(int *)(DAT_09175268 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_069f7d10(param_1 + 2,uVar8,DAT_09198cf0);
  return;
}


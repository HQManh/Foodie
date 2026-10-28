// rea decompile_all
// name: Newtonsoft.Json.Linq.JContainer.<ReadContentFromAsync>d__1$$MoveNext
// address: 0x76de10c
// body: available
// range: 0x76de10c-0x76de2ab inclusive
// range: 0x76de2b4-0x76de943 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76de820 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76de824 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76de828 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76de82c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76de830 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76de834 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76de838 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76de83c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76de840 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76de844 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76de848 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76de84c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JContainer_<ReadContentFromAsync>d__1__MoveNext(int *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auVar11 [16];
  undefined4 local_94 [3];
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  
  if ((DAT_095227c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c14b0);
    FUN_03f5c2a4(&DAT_091c11f8);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_0919b908);
    FUN_03f5c2a4(&DAT_0919b9d8);
    FUN_03f5c2a4(&DAT_0919b9e0);
    FUN_03f5c2a4(&DAT_09185f18);
    FUN_03f5c2a4(&DAT_09187200);
    FUN_03f5c2a4(&DAT_09187208);
    FUN_03f5c2a4(&DAT_09187220);
    FUN_03f5c2a4(&DAT_09187230);
    FUN_03f5c2a4(&DAT_09187278);
    FUN_03f5c2a4(&DAT_091bcba0);
    DAT_095227c8 = 1;
  }
  local_70._8_8_ = 0;
  plVar10 = *(long **)(param_1 + 10);
  local_80._8_8_ = 0;
  local_70._0_8_ = 0;
  local_80._0_8_ = 0;
  local_88 = 0;
  if (*param_1 == 0) {
    local_70 = *(undefined1 (*) [16])(param_1 + 0x14);
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    *param_1 = -1;
    local_80 = ZEXT816(0);
    goto LAB_076de7c8;
  }
  if (*param_1 != 1) {
    uVar8 = *(undefined8 *)(param_1 + 8);
    uVar7 = thunk_FUN_03f99350(uVar8,DAT_09185f18);
    uVar6 = DAT_09185f18;
    *(undefined8 *)(param_1 + 0x10) = uVar7;
    uVar6 = thunk_FUN_03f99350(uVar8,uVar6);
    thunk_FUN_03f5d7b8(param_1 + 0x10,uVar6);
    *(long **)(param_1 + 0x12) = plVar10;
    thunk_FUN_03f5d7b8(param_1 + 0x12,plVar10);
    goto LAB_076de2b4;
  }
  local_80 = *(undefined1 (*) [16])(param_1 + 0x18);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *param_1 = -1;
  local_70 = ZEXT816(0);
  while( true ) {
    uVar3 = FUN_06daae34(local_80,DAT_0919b9d8);
    if ((uVar3 & 1) == 0) break;
LAB_076de2b4:
    plVar2 = (long *)(param_1 + 0x12);
    plVar9 = (long *)*plVar2;
    if (plVar9 != (long *)0x0) {
      if ((*(byte *)(DAT_09187230 + 0x130) <= *(byte *)(*plVar9 + 0x130)) &&
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)*(byte *)(DAT_09187230 + 0x130) * 8 + -8) ==
          DAT_09187230)) {
        if (plVar9[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(plVar9[0xb] + 0x10) != 0) {
          if (plVar9 == plVar10) break;
          *plVar2 = plVar9[2];
          thunk_FUN_03f5d7b8(plVar2);
        }
      }
    }
    plVar9 = *(long **)(param_1 + 8);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
    switch(uVar1) {
    case 0:
      break;
    case 1:
      lVar5 = thunk_FUN_03f9944c(DAT_09187220);
      Newtonsoft_Json_Linq_JObject___ctor();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Newtonsoft_Json_Linq_JToken__SetLineInfo
                (lVar5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xc));
      plVar9 = (long *)*plVar2;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar9 + 0x6e8))(plVar9,lVar5,*(undefined8 *)(*plVar9 + 0x6f0));
      *plVar2 = lVar5;
      thunk_FUN_03f5d7b8(plVar2,lVar5);
      break;
    case 2:
      lVar5 = thunk_FUN_03f9944c(DAT_09187200);
      Newtonsoft_Json_Linq_JArray___ctor(lVar5,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Newtonsoft_Json_Linq_JToken__SetLineInfo
                (lVar5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xc));
      plVar9 = (long *)*plVar2;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar9 + 0x6e8))(plVar9,lVar5,*(undefined8 *)(*plVar9 + 0x6f0));
      *plVar2 = lVar5;
      thunk_FUN_03f5d7b8(plVar2,lVar5);
      break;
    case 3:
      plVar9 = *(long **)(param_1 + 8);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar9 = (long *)(**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
      lVar5 = thunk_FUN_03f9944c(DAT_09187208);
      Newtonsoft_Json_Linq_JConstructor___ctor(lVar5,uVar6);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Newtonsoft_Json_Linq_JToken__SetLineInfo
                (lVar5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xc));
      plVar9 = (long *)*plVar2;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar9 + 0x6e8))(plVar9,lVar5,*(undefined8 *)(*plVar9 + 0x6f0));
      *plVar2 = lVar5;
      thunk_FUN_03f5d7b8(plVar2,lVar5);
      break;
    case 4:
      lVar5 = Newtonsoft_Json_Linq_JContainer__ReadProperty
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0xc),
                         *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x12));
      if (lVar5 == 0) {
        if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar5 = Newtonsoft_Json_JsonReader__SkipAsync(*(long *)(param_1 + 8),0,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        auVar11 = System_Threading_Tasks_Task__ConfigureAwait(lVar5,0,0);
        local_70 = auVar11;
        uVar3 = System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__get_IsCompleted
                          (local_70,0);
        if ((uVar3 & 1) == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 0x14) = local_70;
          thunk_FUN_03f5d7b8(param_1 + 0x14,0);
          if (*(int *)(DAT_09181780 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          FUN_04993084(param_1 + 2,local_70,param_1,DAT_091c14b0);
          return;
        }
LAB_076de7c8:
        System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter__GetResult
                  (local_70,0);
      }
      else {
        *plVar2 = lVar5;
        thunk_FUN_03f5d7b8(plVar2);
      }
      break;
    case 5:
      if ((*(long *)(param_1 + 0xc) != 0) && (*(int *)(*(long *)(param_1 + 0xc) + 0x10) == 1)) {
        plVar9 = *(long **)(param_1 + 8);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        plVar9 = (long *)(**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar6 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        lVar5 = Newtonsoft_Json_Linq_JValue__CreateComment(uVar6,0);
        if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        Newtonsoft_Json_Linq_JToken__SetLineInfo
                  (lVar5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xc));
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar2 + 0x6e8))(plVar2,lVar5,*(undefined8 *)(*plVar2 + 0x6f0));
      }
      break;
    default:
      lVar5 = thunk_FUN_03fc39d4(&DAT_09182ff8);
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      plVar10 = *(long **)(param_1 + 8);
      if (plVar10 != (long *)0x0) {
        local_94[0] = (**(code **)(*plVar10 + 0x238))(plVar10,*(undefined8 *)(*plVar10 + 0x240));
        uVar7 = thunk_FUN_03fc39d4(&DAT_09187478);
        uVar7 = FUN_03f5c42c(uVar7,local_94);
        uVar8 = thunk_FUN_03fc39d4(&DAT_0920ed58);
        uVar6 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar8,uVar6,uVar7,0);
        thunk_FUN_03fc39d4(&DAT_091870e0);
        uVar7 = thunk_FUN_03f9944c();
        System_InvalidOperationException___ctor(uVar7,uVar6,0);
        uVar6 = thunk_FUN_03fc39d4(&DAT_091ebeb0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar7,uVar6);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    case 7:
    case 8:
    case 9:
    case 10:
    case 0x10:
    case 0x11:
      plVar9 = *(long **)(param_1 + 8);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar6 = (**(code **)(*plVar9 + 0x248))(plVar9,*(undefined8 *)(*plVar9 + 0x250));
      lVar5 = thunk_FUN_03f9944c(DAT_09187278);
      Newtonsoft_Json_Linq_JValue___ctor(lVar5,uVar6,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Newtonsoft_Json_Linq_JToken__SetLineInfo
                (lVar5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xc));
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar2 + 0x6e8))(plVar2,lVar5,*(undefined8 *)(*plVar2 + 0x6f0));
      break;
    case 0xb:
      lVar5 = Newtonsoft_Json_Linq_JValue__CreateNull(0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Newtonsoft_Json_Linq_JToken__SetLineInfo
                (lVar5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xc));
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar2 + 0x6e8))(plVar2,lVar5,*(undefined8 *)(*plVar2 + 0x6f0));
      break;
    case 0xc:
      lVar5 = Newtonsoft_Json_Linq_JValue__CreateUndefined(0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      Newtonsoft_Json_Linq_JToken__SetLineInfo
                (lVar5,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0xc));
      plVar2 = (long *)*plVar2;
      if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar2 + 0x6e8))(plVar2,lVar5,*(undefined8 *)(*plVar2 + 0x6f0));
      break;
    case 0xd:
      plVar9 = (long *)*plVar2;
      if (plVar9 == plVar10) goto LAB_076de404;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *plVar2 = plVar9[2];
      thunk_FUN_03f5d7b8(plVar2);
      break;
    case 0xe:
      plVar9 = (long *)*plVar2;
      if (plVar9 == plVar10) goto LAB_076de404;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *plVar2 = plVar9[2];
      thunk_FUN_03f5d7b8(plVar2);
      break;
    case 0xf:
      plVar9 = (long *)*plVar2;
      if (plVar9 == plVar10) goto LAB_076de404;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *plVar2 = plVar9[2];
      thunk_FUN_03f5d7b8(plVar2);
    }
    plVar2 = *(long **)(param_1 + 8);
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar5 = (**(code **)(*plVar2 + 0x188))
                      (plVar2,*(undefined8 *)(param_1 + 0xe),*(undefined8 *)(*plVar2 + 400));
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar11 = FUN_062e82b0(lVar5,0,DAT_091bcba0);
    local_80 = auVar11;
    uVar3 = FUN_06daadec(local_80,DAT_0919b9e0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x18) = local_80;
      thunk_FUN_03f5d7b8(param_1 + 0x18,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_049904e8(param_1 + 2,local_80,param_1,DAT_091c11f8);
      return;
    }
  }
LAB_076de404:
  *param_1 = -2;
  piVar4 = param_1 + 0x10;
  piVar4[0] = 0;
  piVar4[1] = 0;
  thunk_FUN_03f5d7b8(piVar4,0);
  piVar4 = param_1 + 0x12;
  piVar4[0] = 0;
  piVar4[1] = 0;
  thunk_FUN_03f5d7b8(piVar4,0);
  if (*(int *)(DAT_09181780 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


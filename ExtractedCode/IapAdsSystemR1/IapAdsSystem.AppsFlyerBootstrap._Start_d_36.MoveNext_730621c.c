// rea decompile_all
// name: IapAdsSystem.AppsFlyerBootstrap.<Start>d__36$$MoveNext
// address: 0x730621c
// body: available
// range: 0x730621c-0x7306743 inclusive
// range: 0x73067b8-0x7306a37 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7306730 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7306734 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7306738 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730673c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7306740 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7306a1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7306a20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7306a24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7306a28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7306a2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7306a30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7306a34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void IapAdsSystem_AppsFlyerBootstrap_<Start>d__36__MoveNext(uint *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined4 local_7c [5];
  undefined4 local_68;
  undefined8 local_60;
  long local_58;
  
  if ((DAT_09520491 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_091bff98);
    FUN_03f5c2a4(&DAT_091bffa0);
    FUN_03f5c2a4(&DAT_091bffa8);
    FUN_03f5c2a4(&DAT_091814e8);
    FUN_03f5c2a4(&DAT_091c2a08);
    FUN_03f5c2a4(&DAT_091c29f8);
    FUN_03f5c2a4(&DAT_0919a458);
    FUN_03f5c2a4(&DAT_09181970);
    FUN_03f5c2a4(&DAT_0919a570);
    FUN_03f5c2a4(&DAT_0919a578);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09184208);
    FUN_03f5c2a4(&DAT_09202fd0);
    FUN_03f5c2a4(&DAT_09213af8);
    FUN_03f5c2a4(&DAT_091f9f00);
    DAT_09520491 = 1;
  }
  uVar1 = *param_1;
  lVar7 = *(long *)(param_1 + 10);
  local_60 = 0;
  local_58 = 0;
  local_68 = 0;
  if (6 < uVar1) {
    uVar3 = thunk_FUN_03f9944c(DAT_09184208);
    System_EventHandler___ctor(uVar3,lVar7,DAT_091bffa8,0);
    if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AppsFlyerSDK_AppsFlyer__add_OnSessionReady(uVar3,0);
  }
  if ((int)uVar1 < 3) {
    if (uVar1 == 0) {
      local_58 = *(long *)(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = 0xffffffff;
      if (local_58 == 0) {
        local_58 = 0;
        goto LAB_07306a1c;
      }
LAB_0730649c:
      UnityEngine_Awaitable__PropagateExceptionAndRelease(local_58,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      cVar2 = *(char *)(lVar7 + 0x48);
      if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = AppsFlyerSDK_AppsFlyer__enableDebug(cVar2 != '\0',0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_58 = UnityEngine_Awaitable__GetAwaiter(lVar6,0);
      uVar5 = UnityEngine_Awaitable_Awaiter__get_IsCompleted(&local_58,0);
      if ((uVar5 & 1) == 0) {
        *param_1 = 1;
        *(long *)(param_1 + 0xe) = local_58;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        FUN_049b9100(param_1 + 2,&local_58,param_1,DAT_091c2a08);
        return;
      }
LAB_07306538:
      if (local_58 == 0) goto LAB_07306a1c;
      UnityEngine_Awaitable__PropagateExceptionAndRelease(local_58,0);
      uVar3 = thunk_FUN_03f9944c(DAT_09174980);
      FUN_070a8c30(uVar3,lVar7,DAT_091bffa0,0);
      uVar4 = thunk_FUN_03f9944c(DAT_09174980);
      FUN_070a8c30(uVar4,lVar7,DAT_091bff98,0);
      if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = AppsFlyerSDK_AppsFlyer__registerConversionListener(uVar3,uVar4,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_58 = UnityEngine_Awaitable__GetAwaiter(lVar6,0);
      uVar5 = UnityEngine_Awaitable_Awaiter__get_IsCompleted(&local_58,0);
      if ((uVar5 & 1) == 0) {
        *param_1 = 2;
        *(long *)(param_1 + 0xe) = local_58;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        FUN_049b9100(param_1 + 2,&local_58,param_1,DAT_091c2a08);
        return;
      }
    }
    else {
      if (uVar1 == 1) {
        local_58 = *(long *)(param_1 + 0xe);
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        *param_1 = 0xffffffff;
        goto LAB_07306538;
      }
      if (uVar1 != 2) goto LAB_07306440;
      local_58 = *(long *)(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = 0xffffffff;
    }
    if (local_58 == 0) goto LAB_07306a1c;
    UnityEngine_Awaitable__PropagateExceptionAndRelease(local_58,0);
    if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = AppsFlyerSDK_AppsFlyer__registerSessionReadyListener(0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_58 = UnityEngine_Awaitable__GetAwaiter(lVar6,0);
    uVar5 = UnityEngine_Awaitable_Awaiter__get_IsCompleted(&local_58,0);
    if ((uVar5 & 1) == 0) {
      *param_1 = 3;
      *(long *)(param_1 + 0xe) = local_58;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_049b9100(param_1 + 2,&local_58,param_1,DAT_091c2a08);
      return;
    }
LAB_07306620:
    if (local_58 == 0) {
LAB_07306a1c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Awaitable__PropagateExceptionAndRelease(local_58,0);
    fVar8 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    param_1[0xc] = (uint)(fVar8 + 10.0);
    while( true ) {
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((*(char *)(lVar7 + 0x21) != '\0') ||
         (fVar8 = (float)UnityEngine_Time__get_realtimeSinceStartup(0), (float)param_1[0xc] <= fVar8
         )) break;
      if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = AppsFlyerSDK_AppsFlyer__isSessionReady(0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_60 = FUN_06b43204(lVar6,DAT_0919a458);
      uVar5 = FUN_06b63324(&local_60,DAT_0919a578);
      if ((uVar5 & 1) == 0) {
        *param_1 = 4;
        *(undefined8 *)(param_1 + 0x10) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0x10,0);
        FUN_049b885c(param_1 + 2,&local_60,param_1,DAT_091c29f8);
        return;
      }
LAB_073067b8:
      uVar5 = FUN_06b63348(&local_60,DAT_0919a570);
      if ((uVar5 & 1) != 0) {
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        break;
      }
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = UnityEngine_MonoBehaviour__get_destroyCancellationToken(lVar7,0);
      if (*(int *)(DAT_09181970 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = FUN_0730da08(0x3f000000,uVar3,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_58 = UnityEngine_Awaitable__GetAwaiter(lVar6,0);
      uVar5 = UnityEngine_Awaitable_Awaiter__get_IsCompleted(&local_58,0);
      if ((uVar5 & 1) == 0) {
        *param_1 = 5;
        *(long *)(param_1 + 0xe) = local_58;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        FUN_049b9100(param_1 + 2,&local_58,param_1,DAT_091c2a08);
        return;
      }
LAB_07306820:
      if (local_58 == 0) goto LAB_07306a1c;
      UnityEngine_Awaitable__PropagateExceptionAndRelease(local_58,0);
    }
    if (*(char *)(lVar7 + 0x21) != '\0') goto LAB_07306974;
    fVar8 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
    if ((float)param_1[0xc] <= fVar8) {
      local_7c[0] = 0x41200000;
      uVar3 = FUN_03f5c42c(DAT_09535450,local_7c);
      uVar3 = System_String__Format(DAT_09213af8,uVar3,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogWarning(uVar3,0);
    }
    lVar7 = IapAdsSystem_AppsFlyerBootstrap__StartSdk(lVar7);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_58 = UnityEngine_Awaitable__GetAwaiter(lVar7,0);
    uVar5 = UnityEngine_Awaitable_Awaiter__get_IsCompleted(&local_58,0);
    if ((uVar5 & 1) == 0) {
      *param_1 = 6;
      *(long *)(param_1 + 0xe) = local_58;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_049b9100(param_1 + 2,&local_58,param_1,DAT_091c2a08);
      return;
    }
    if (local_58 == 0) goto LAB_07306a1c;
  }
  else {
    if ((int)uVar1 < 5) {
      if (uVar1 != 3) {
        if (uVar1 == 4) {
          local_60 = *(undefined8 *)(param_1 + 0x10);
          param_1[0x10] = 0;
          param_1[0x11] = 0;
          *param_1 = 0xffffffff;
          goto LAB_073067b8;
        }
        goto LAB_07306440;
      }
      local_58 = *(long *)(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = 0xffffffff;
      goto LAB_07306620;
    }
    if (uVar1 == 5) {
      local_58 = *(long *)(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = 0xffffffff;
      goto LAB_07306820;
    }
    if (uVar1 != 6) {
LAB_07306440:
      if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = AppsFlyerSDK_AppsFlyer__init(DAT_09202fd0,DAT_091f9f00,lVar7,0);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_58 = UnityEngine_Awaitable__GetAwaiter(lVar6,0);
      uVar5 = UnityEngine_Awaitable_Awaiter__get_IsCompleted(&local_58,0);
      if ((uVar5 & 1) == 0) {
        *param_1 = 0;
        *(long *)(param_1 + 0xe) = local_58;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        FUN_049b9100(param_1 + 2,&local_58,param_1,DAT_091c2a08);
        return;
      }
      if (local_58 == 0) goto LAB_07306a1c;
      goto LAB_0730649c;
    }
    local_58 = *(long *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = 0xffffffff;
    if (local_58 == 0) {
      local_58 = 0;
      goto LAB_07306a1c;
    }
  }
  UnityEngine_Awaitable__PropagateExceptionAndRelease(local_58,0);
LAB_07306974:
  *param_1 = 0xfffffffe;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


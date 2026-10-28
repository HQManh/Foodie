// rea decompile_all
// name: EssentialSystemR1.OnlineTimeCheck.<FetchGlobalTime>d__42$$MoveNext
// address: 0x4581990
// body: available
// range: 0x4581990-0x4581f03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4581e94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4581e98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4581e9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4581ea0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4581ea4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4581ea8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4581eac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4581eb0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4581eb4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4581eb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4581ec4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4581ec8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8 EssentialSystemR1_OnlineTimeCheck_<FetchGlobalTime>d__42__MoveNext(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long *local_40;
  undefined8 local_38;
  long local_28;
  
  local_28 = param_1;
  if ((DAT_0951893e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_092001d8);
    FUN_03f5c2a4(&DAT_0921fe08);
    FUN_03f5c2a4(&DAT_0921cfe8);
    FUN_03f5c2a4(&DAT_091fd468);
    FUN_03f5c2a4(&DAT_092214a0);
    FUN_03f5c2a4(&DAT_09201808);
    FUN_03f5c2a4(&DAT_09203728);
    DAT_0951893e = 1;
  }
  local_40 = &local_28;
  local_48 = 0;
  local_38 = 0;
  if (*(int *)(param_1 + 0x10) != 1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar3 = UnityEngine_Networking_UnityWebRequest__Head(DAT_0921cfe8,0);
    *(undefined8 *)(local_28 + 0x28) = uVar3;
    thunk_FUN_03f5d7b8();
    *(undefined4 *)(local_28 + 0x10) = 0xfffffffd;
    if (*(long *)(local_28 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Networking_UnityWebRequest__SetRequestHeader
              (*(long *)(local_28 + 0x28),DAT_091fd468,DAT_0921fe08,0);
    if (*(long *)(local_28 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_Networking_UnityWebRequest__set_timeout(*(long *)(local_28 + 0x28),10,0);
    if (*(long *)(local_28 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(*(long *)(local_28 + 0x28),0);
    *(undefined8 *)(local_28 + 0x18) = uVar3;
    thunk_FUN_03f5d7b8();
    *(undefined4 *)(local_28 + 0x10) = 1;
    return 1;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar2 = UnityEngine_Networking_UnityWebRequest__get_result(*(long *)(param_1 + 0x28),0);
  if (iVar2 != 2) {
    if (*(long *)(local_28 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar2 = UnityEngine_Networking_UnityWebRequest__get_result(*(long *)(local_28 + 0x28),0);
    if (iVar2 != 3) {
      if (*(long *)(local_28 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar3 = UnityEngine_Networking_UnityWebRequest__GetResponseHeader
                        (*(long *)(local_28 + 0x28),DAT_092001d8,0);
      uVar7 = System_String__IsNullOrEmpty(uVar3,0);
      if ((uVar7 & 1) == 0) {
        if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = System_Globalization_CultureInfo__get_InvariantCulture(0);
        if (*(int *)(DAT_09183548 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_DateTime__ParseExact(uVar3,DAT_092214a0,uVar8,0x10,0);
        uVar8 = System_DateTime__get_UtcNow(0);
        local_38 = System_DateTime__op_Subtraction(uVar3,uVar8,0);
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918bd60);
        }
        uVar8 = System_TimeSpan__get_TotalSeconds(&local_38,0);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        *(undefined8 *)(lVar1 + 0x20) = uVar8;
        uVar8 = System_DateTime__get_Now(0);
        local_38 = System_DateTime__op_Subtraction(uVar3,uVar8,0);
        uVar8 = System_TimeSpan__get_TotalSeconds(&local_38,0);
        *(undefined8 *)(lVar1 + 0x28) = uVar8;
        *(undefined1 *)(lVar1 + 0x30) = 1;
        plVar4 = (long *)FUN_03f5c394(DAT_09180318,3);
        local_50 = uVar3;
        lVar5 = FUN_03f5c42c(DAT_09183548,&local_50);
        if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
          uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar3,0);
        }
        if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar4[4] = lVar5;
        thunk_FUN_03f5d7b8(plVar4 + 4,lVar5);
        if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_58 = EssentialSystemR1_OnlineTimeCheck__get_Now();
        lVar5 = FUN_03f5c42c(DAT_09183548,&local_58);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
          uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar3,0);
        }
        if ((*(uint *)(plVar4 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar4[5] = lVar5;
        thunk_FUN_03f5d7b8(plVar4 + 5,lVar5);
        local_60 = EssentialSystemR1_OnlineTimeCheck__get_UtcNow();
        lVar5 = FUN_03f5c42c(DAT_09183548,&local_60);
        if ((lVar5 != 0) &&
           (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
          uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar3,0);
        }
        if (*(uint *)(plVar4 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar4[6] = lVar5;
        thunk_FUN_03f5d7b8(plVar4 + 6,lVar5);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogFormat(DAT_09203728,plVar4,0);
      }
      goto LAB_04581bf4;
    }
  }
  plVar4 = (long *)FUN_03f5c394(DAT_09180318,1);
  if (*(long *)(local_28 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = UnityEngine_Networking_UnityWebRequest__get_error(*(long *)(local_28 + 0x28),0);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((lVar5 != 0) &&
     (lVar6 = thunk_FUN_03f99350(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
    uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,0);
  }
  if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar4[4] = lVar5;
  thunk_FUN_03f5d7b8(plVar4 + 4,lVar5);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__LogErrorFormat(DAT_09201808,plVar4,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined1 *)(lVar1 + 0x30) = 0;
LAB_04581bf4:
  EssentialSystemR1_OnlineTimeCheck_<FetchGlobalTime>d__42__<>m__Finally1(local_28);
  *(undefined8 *)(local_28 + 0x28) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(local_28 + 0x28),0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x40) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x40),0);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


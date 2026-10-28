// rea decompile_all
// name: AppLovinMax.Internal.MaxWebRequest.<SendInternal>d__8$$MoveNext
// address: 0x737fbd4
// body: available
// range: 0x737fbd4-0x737ff8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x737fca8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737ff64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737ff68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737ff6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737ff70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737ff74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737ff78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737ff7c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737ff80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737ff84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737ff88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x737ff8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


undefined8 AppLovinMax_Internal_MaxWebRequest_<SendInternal>d__8__MoveNext(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  int local_3c [3];
  long *plStack_30;
  long local_28;
  
  local_28 = param_1;
  if ((DAT_095209f3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ce90);
    FUN_03f5c2a4(&DAT_0918cfe8);
    FUN_03f5c2a4(&DAT_092131e0);
    FUN_03f5c2a4(&DAT_09201a78);
    FUN_03f5c2a4(&DAT_092025f8);
    FUN_03f5c2a4(&DAT_092131d8);
    DAT_095209f3 = 1;
  }
  iVar6 = *(int *)(param_1 + 0x10);
  lVar8 = *(long *)(param_1 + 0x20);
  plStack_30 = &local_28;
  local_3c[1] = 0;
  local_3c[2] = 0;
  if (iVar6 == 2) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    iVar6 = *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x38) = iVar6;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
LAB_0737fd3c:
    if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(*(long *)(lVar8 + 0x10) + 0x48) < iVar6) {
      AppLovinMax_Internal_MaxWebRequest_<SendInternal>d__8__<>m__Finally1(param_1);
      return 0;
    }
    uVar3 = AppLovinMax_Internal_MaxWebRequest__CreateWebRequest(lVar8);
    *(undefined8 *)(local_28 + 0x40) = uVar3;
    thunk_FUN_03f5d7b8();
    *(undefined4 *)(local_28 + 0x10) = 0xfffffffc;
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(local_28 + 0x40);
    thunk_FUN_03f5d7b8();
    lVar9 = *(long *)(local_28 + 0x30);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar9 = (**(code **)(lVar9 + 0x18))
                      (*(undefined8 *)(lVar9 + 0x40),*(undefined8 *)(local_28 + 0x40),
                       *(undefined8 *)(lVar9 + 0x28));
    param_1 = local_28;
    if (lVar9 != 0) {
      *(long *)(local_28 + 0x18) = lVar9;
      thunk_FUN_03f5d7b8((long *)(local_28 + 0x18));
      uVar7 = 1;
      goto LAB_0737ff48;
    }
  }
  else {
    if (iVar6 != 1) {
      if (iVar6 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(lVar8 + 0x20) == '\0') {
        if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x10),0);
        if ((uVar2 & 1) != 0) {
          cVar5 = *(char *)(lVar8 + 0x20);
          goto LAB_0737fcc8;
        }
      }
      else {
        cVar5 = '\x01';
LAB_0737fcc8:
        puVar1 = &DAT_092131e0;
        if (cVar5 != '\0') {
          puVar1 = &DAT_092131d8;
        }
        MaxSdkLogger__E(*puVar1);
        lVar9 = *(long *)(local_28 + 0x28);
        uVar3 = thunk_FUN_03f9944c(DAT_0918cfe8);
        AppLovinMax_Internal_WebResponse___ctor(uVar3,0);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(lVar9 + 0x18))
                  (*(undefined8 *)(lVar9 + 0x40),uVar3,*(undefined8 *)(lVar9 + 0x28));
      }
      iVar6 = 1;
      *(undefined1 *)(lVar8 + 0x20) = 1;
      *(undefined4 *)(local_28 + 0x10) = 0xfffffffd;
      *(undefined4 *)(local_28 + 0x38) = 1;
      param_1 = local_28;
      goto LAB_0737fd3c;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  lVar9 = thunk_FUN_03f9944c(DAT_0918cfe8);
  AppLovinMax_Internal_WebResponse___ctor(lVar9,uVar3);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(char *)(lVar9 + 0x10) != '\0') {
    lVar8 = *(long *)(local_28 + 0x28);
    if (lVar8 != 0) {
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),lVar9,*(undefined8 *)(lVar8 + 0x28))
      ;
      AppLovinMax_Internal_MaxWebRequest_<SendInternal>d__8__<>m__Finally2(local_28);
      AppLovinMax_Internal_MaxWebRequest_<SendInternal>d__8__<>m__Finally1(local_28);
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar8 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_3c[0] = *(int *)(*(long *)(lVar8 + 0x10) + 0x48);
  if (*(int *)(local_28 + 0x38) < local_3c[0]) {
    if (*(long *)(local_28 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = UnityEngine_Networking_UnityWebRequest__get_error(*(long *)(local_28 + 0x40),0);
    local_3c[0] = *(int *)(local_28 + 0x38);
    uVar4 = FUN_03f5c42c(DAT_09535420,local_3c);
    System_String__Format(DAT_09201a78,uVar3,uVar4,0);
    MaxSdkLogger__UserWarning();
  }
  else {
    uVar3 = FUN_03f5c42c(DAT_09535420,local_3c);
    System_String__Format(DAT_092025f8,uVar3,0);
    MaxSdkLogger__UserError();
    lVar8 = *(long *)(local_28 + 0x28);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),lVar9,*(undefined8 *)(lVar8 + 0x28));
  }
  AppLovinMax_Internal_MaxWebRequest_<SendInternal>d__8__<>m__Finally2(local_28);
  *(undefined8 *)(local_28 + 0x40) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(local_28 + 0x40),0);
  uVar3 = thunk_FUN_03f9944c(DAT_0918ce90);
  UnityEngine_WaitForSeconds___ctor(0x3f800000,uVar3,0);
  *(undefined8 *)(local_28 + 0x18) = uVar3;
  thunk_FUN_03f5d7b8((undefined8 *)(local_28 + 0x18),uVar3);
  uVar7 = 2;
LAB_0737ff48:
  *(undefined4 *)(local_28 + 0x10) = uVar7;
  return 1;
}


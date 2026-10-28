// rea decompile_all
// name: CakeOrder.InGame.BoosterAndSaveMeRemoteConfig$$UpdateRemoteConfigBooster
// address: 0x4382f68
// body: available
// range: 0x4382f68-0x438346b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4383060 to 0x85f7548 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4383330 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43833e8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43833ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43833f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43833f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4383400 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4383404 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4383408 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x438340c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4383410 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4383414 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the 
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_BoosterAndSaveMeRemoteConfig__UpdateRemoteConfigBooster
               (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  
  if ((DAT_0951797e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0270);
    FUN_03f5c2a4(&DAT_0917fc48);
    FUN_03f5c2a4(&DAT_09181e78);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091fcdc8);
    FUN_03f5c2a4(&DAT_0920b9c8);
    FUN_03f5c2a4(&DAT_0920b9d8);
    FUN_03f5c2a4(&DAT_091fcdd0);
    DAT_0951797e = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(param_2,0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(DAT_0920b9d8,0);
    return;
  }
  lVar2 = CakeOrder_InGame_BoosterAndSaveMeRemoteConfig__ImportData(uVar1,param_2);
  lVar8 = DAT_091c0270;
  if (lVar2 == 0) {
    lVar2 = *(long *)(DAT_091c0270 + 0x38);
    if (lVar2 == 0) {
      FUN_03f95ac8(DAT_091c0270);
      lVar2 = *(long *)(lVar8 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_03f95a6c();
    }
    uVar5 = **(undefined8 **)(lVar8 + 0xb8);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogWarningFormat(DAT_0920b9c8,uVar5,0);
    return;
  }
  plVar6 = (long *)(param_1 + 0x30);
  lVar8 = *plVar6;
  if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = FUN_03f5c394(DAT_0917fc48,*(undefined4 *)(*(long *)(param_1 + 0x28) + 0x18));
  *plVar6 = lVar3;
  thunk_FUN_03f5d7b8(plVar6);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    uVar1 = 0;
    lVar9 = 0x20;
    do {
      if ((long)*(int *)(lVar3 + 0x18) <= (long)uVar1) {
        return;
      }
      if ((long)uVar1 < (long)(int)*(uint *)(lVar2 + 0x18)) {
        if (*(uint *)(lVar2 + 0x18) <= uVar1) {
LAB_043833e8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar7 = (long *)*plVar6;
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar3 = *(long *)(lVar2 + lVar9);
        if ((lVar3 != 0) &&
           (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
          uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar5,0);
        }
        if (*(uint *)(plVar7 + 3) <= uVar1) goto LAB_043833e8;
        *(long *)((long)plVar7 + lVar9) = lVar3;
        thunk_FUN_03f5d7b8((long)plVar7 + lVar9,lVar3);
      }
      else {
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((long)uVar1 < (long)*(int *)(lVar8 + 0x18)) {
          plVar7 = (long *)FUN_03f5c394(DAT_09180318,1);
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (*(long *)(lVar3 + lVar9) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar3 = UnityEngine_Object__GetName(*(long *)(lVar3 + lVar9),0);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
            uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar5,0);
          }
          if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar7[4] = lVar3;
          thunk_FUN_03f5d7b8(plVar7 + 4,lVar3);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogWarningFormat(DAT_091fcdd0,plVar7,0);
          if (*(uint *)(lVar8 + 0x18) <= uVar1) {
LAB_043833f0:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar7 = (long *)*plVar6;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar3 = *(long *)(lVar8 + lVar9);
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
            uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar5,0);
          }
          if (*(uint *)(plVar7 + 3) <= uVar1) goto LAB_043833f0;
          *(long *)((long)plVar7 + lVar9) = lVar3;
          thunk_FUN_03f5d7b8((long)plVar7 + lVar9,lVar3);
        }
        else {
          plVar7 = (long *)FUN_03f5c394(DAT_09180318,1);
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(uint *)(lVar3 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (*(long *)(lVar3 + lVar9) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar3 = UnityEngine_Object__GetName(*(long *)(lVar3 + lVar9),0);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if ((lVar3 != 0) &&
             (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar7 + 0x40)), lVar4 == 0)) {
            uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar5,0);
          }
          if ((int)plVar7[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar7[4] = lVar3;
          thunk_FUN_03f5d7b8(plVar7 + 4,lVar3);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogWarningFormat(DAT_091fcdc8,plVar7,0);
          plVar7 = (long *)*plVar6;
          lVar3 = thunk_FUN_03f9944c(DAT_09181e78);
          *(undefined1 *)(lVar3 + 0x18) = 1;
          *(undefined8 *)(lVar3 + 0x24) = 0x3e700000064;
          *(undefined8 *)(lVar3 + 0x1c) = 0x100000001;
          System_Object___ctor(lVar3,0);
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar7 + 0x40));
          if (lVar4 == 0) {
            uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar5,0);
          }
          if (*(uint *)(plVar7 + 3) <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          *(long *)((long)plVar7 + lVar9) = lVar3;
          thunk_FUN_03f5d7b8((long)plVar7 + lVar9,lVar3);
        }
      }
      lVar3 = *(long *)(param_1 + 0x28);
      uVar1 = uVar1 + 1;
      lVar9 = lVar9 + 8;
    } while (lVar3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


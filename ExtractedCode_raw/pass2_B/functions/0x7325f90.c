// rea decompile_all
// name: IapAdsSystem.RemoteConfigManager$$OnDoneInitFirebase
// address: 0x7325f90
// body: available
// range: 0x7325f90-0x73265e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x732659c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73265a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73265a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73265a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73265ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73265b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73265b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73265b8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73265bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73265c8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73265d4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x73265e0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void IapAdsSystem_RemoteConfigManager__OnDoneInitFirebase(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 *puStack_110;
  long local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 *puStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 *puStack_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 *puStack_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_095205d9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091749a8);
    FUN_03f5c2a4(&DAT_0919fed0);
    FUN_03f5c2a4(&DAT_0919fa00);
    FUN_03f5c2a4(&DAT_0919f6a0);
    FUN_03f5c2a4(&DAT_0919fb98);
    FUN_03f5c2a4(&DAT_0919fb58);
    FUN_03f5c2a4(&DAT_09176b80);
    FUN_03f5c2a4(&DAT_091a6888);
    FUN_03f5c2a4(&DAT_091a6798);
    FUN_03f5c2a4(&DAT_091a66a8);
    FUN_03f5c2a4(&DAT_091a67a0);
    FUN_03f5c2a4(&DAT_091a6890);
    FUN_03f5c2a4(&DAT_091a66b0);
    FUN_03f5c2a4(&DAT_091a66b8);
    FUN_03f5c2a4(&DAT_091a6898);
    FUN_03f5c2a4(&DAT_091a67a8);
    FUN_03f5c2a4(&DAT_091846c8);
    FUN_03f5c2a4(&DAT_091a98e8);
    FUN_03f5c2a4(&DAT_091a9828);
    FUN_03f5c2a4(&DAT_091a97b8);
    FUN_03f5c2a4(&DAT_091a97c0);
    FUN_03f5c2a4(&DAT_091a98f0);
    FUN_03f5c2a4(&DAT_091a9830);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091d7378);
    FUN_03f5c2a4(&DAT_09189e88);
    FUN_03f5c2a4(&DAT_09200e78);
    FUN_03f5c2a4(&DAT_09202ad0);
    FUN_03f5c2a4(&DAT_09200e70);
    FUN_03f5c2a4(&DAT_09200e68);
    DAT_095205d9 = 1;
  }
  local_70 = 0;
  local_a0 = 0;
  local_d0 = 0;
  puStack_e8 = (undefined8 *)0x0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  if (*(char *)(param_1 + 0x5c) != '\0') {
    return;
  }
  if (*(int *)(DAT_09189e88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09189e88 + 0xb8) != 0) {
    EssentialSystemR1_R1Logger__Log(**(long **)(DAT_09189e88 + 0xb8),DAT_09202ad0,0);
    *(undefined4 *)(param_1 + 0x58) = 1;
    lVar1 = thunk_FUN_03f9944c(DAT_09176b80);
    FUN_06fd76bc(lVar1,DAT_0919fb58);
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_06fd1954(&local_118,*(long *)(param_1 + 0x20),DAT_0919fa00);
      puStack_88 = puStack_110;
      local_90 = local_118;
      uStack_78 = uStack_100;
      local_80 = local_108;
      local_70 = local_f8;
      puStack_110 = &local_90;
      local_118 = 0;
LAB_07326218:
      do {
        uVar2 = FUN_07273fa0(&local_90,DAT_091a67a0);
        lVar6 = local_80;
        if ((uVar2 & 1) == 0) goto LAB_073262d4;
        local_120 = uStack_78;
        uVar3 = FUN_03f5c42c(DAT_09535440,&local_120);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = FUN_06fda034(lVar1,lVar6,uVar3,DAT_0919fb98);
        if ((uVar2 & 1) == 0) {
          if (*(int *)(DAT_09189e88 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar8 = **(long **)(DAT_09189e88 + 0xb8);
          plVar4 = (long *)FUN_03f5c394(DAT_09180318,1);
          if (plVar4 != (long *)0x0) {
            if ((lVar6 != 0) &&
               (lVar5 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
              uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar3,0);
            }
            if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar4[4] = lVar6;
            thunk_FUN_03f5d7b8(plVar4 + 4,lVar6);
            if (lVar8 != 0) {
              EssentialSystemR1_R1Logger__LogWarningFormat(lVar8,DAT_09200e70,plVar4,0);
              goto LAB_07326218;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      } while( true );
    }
  }
  goto LAB_073265e4;
LAB_073262d4:
  FUN_072740c0(&local_90,DAT_091a6798);
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_06fc709c(&local_118,*(long *)(param_1 + 0x28),DAT_0919f6a0);
    puStack_b8 = puStack_110;
    local_c0 = local_118;
    local_a8 = uStack_100;
    local_b0 = local_108;
    local_a0 = local_f8;
    local_118 = 0;
    puStack_110 = &local_c0;
LAB_07326330:
    do {
      uVar2 = FUN_07272778(&local_c0,DAT_091a66b0);
      lVar6 = local_b0;
      if ((uVar2 & 1) == 0) goto LAB_073263f0;
      local_120 = local_a8;
      uVar3 = FUN_03f5c42c(DAT_09535458,&local_120);
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = FUN_06fda034(lVar1,lVar6,uVar3,DAT_0919fb98);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(DAT_09189e88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar8 = **(long **)(DAT_09189e88 + 0xb8);
        plVar4 = (long *)FUN_03f5c394(DAT_09180318,1);
        if (plVar4 != (long *)0x0) {
          if ((lVar6 != 0) &&
             (lVar5 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
            uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar3,0);
          }
          if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar4[4] = lVar6;
          thunk_FUN_03f5d7b8(plVar4 + 4,lVar6);
          if (lVar8 != 0) {
            EssentialSystemR1_R1Logger__LogWarningFormat(lVar8,DAT_09200e68,plVar4,0);
            goto LAB_07326330;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    } while( true );
  }
  goto LAB_073265e4;
LAB_073264f4:
  FUN_072754f4(&local_f0,DAT_091a6888);
  if (*(int *)(DAT_091846c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = Firebase_RemoteConfig_FirebaseRemoteConfig__get_DefaultInstance(0);
  if (lVar6 != 0) {
    uVar3 = Firebase_RemoteConfig_FirebaseRemoteConfig__SetDefaultsAsync(lVar6,lVar1,0);
    uVar7 = thunk_FUN_03f9944c(DAT_091749a8);
    FUN_070a8c30(uVar7,param_1,DAT_091d7378,0);
    Firebase_Extensions_TaskExtension__ContinueWithOnMainThread(uVar3,uVar7,0);
    return;
  }
  goto LAB_073265e4;
LAB_073263f0:
  FUN_072728a4(&local_c0,DAT_091a66a8);
  if (*(long *)(param_1 + 0x30) != 0) {
    FUN_06fd8888(&local_118,*(long *)(param_1 + 0x30),DAT_0919fed0);
    puStack_e8 = puStack_110;
    local_f0 = local_118;
    uStack_d8 = uStack_100;
    local_e0 = local_108;
    local_d0 = local_f8;
    local_118 = 0;
    puStack_110 = &local_f0;
LAB_0732644c:
    do {
      uVar2 = FUN_072753d4(&local_f0,DAT_091a6890);
      lVar6 = local_e0;
      if ((uVar2 & 1) == 0) goto LAB_073264f4;
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = FUN_06fda034(lVar1,local_e0,uStack_d8,DAT_0919fb98);
      if ((uVar2 & 1) == 0) {
        if (*(int *)(DAT_09189e88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar8 = **(long **)(DAT_09189e88 + 0xb8);
        plVar4 = (long *)FUN_03f5c394(DAT_09180318,1);
        if (plVar4 != (long *)0x0) {
          if ((lVar6 != 0) &&
             (lVar5 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
            uVar3 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar3,0);
          }
          if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar4[4] = lVar6;
          thunk_FUN_03f5d7b8(plVar4 + 4,lVar6);
          if (lVar8 != 0) {
            EssentialSystemR1_R1Logger__LogWarningFormat(lVar8,DAT_09200e78,plVar4,0);
            goto LAB_0732644c;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    } while( true );
  }
LAB_073265e4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


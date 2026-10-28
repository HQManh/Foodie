// rea decompile_all
// name: IapAdsSystem.GoogleMobileAdsControlAppOpen.<ReloadAds>d__27$$MoveNext
// address: 0x730e874
// body: available
// range: 0x730e874-0x730e9bf inclusive
// range: 0x730e9c8-0x730ec0f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x730e9b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730e9bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730ebfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730ec00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730ec04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730ec08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730ec0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_GoogleMobileAdsControlAppOpen_<ReloadAds>d__27__MoveNext(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_48;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  
  if ((DAT_095204ee & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2c58);
    FUN_03f5c2a4(&DAT_091c2de8);
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_09196218);
    DAT_095204ee = 1;
  }
  local_34[0] = 0;
  local_38[0] = 0;
  iVar1 = *param_1;
  local_48 = 0;
  lVar5 = *(long *)(param_1 + 10);
  if (iVar1 == 0) {
    local_34[0] = (undefined1)param_1[0xc];
    *(undefined1 *)(param_1 + 0xc) = 0;
    *param_1 = -1;
    goto LAB_0730ea18;
  }
  if (iVar1 == 1) {
    local_48 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
LAB_0730eadc:
    System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_48,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    IapAdsSystem_GoogleMobileAdsControlAppOpen__LoadAd(lVar5,0);
  }
  else {
    if (iVar1 == 2) {
      local_48 = *(undefined8 *)(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
    }
    else {
      if (DAT_095173ff == '\0') {
        FUN_03f5c2a4(&DAT_091886f0);
        DAT_095173ff = '\x01';
      }
      if (**(long **)(DAT_091886f0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      EssentialSystemR1_NetworkCheck__RequestCheckConnection(**(long **)(DAT_091886f0 + 0xb8),0,0);
      while( true ) {
        if (DAT_095173ff == '\0') {
          FUN_03f5c2a4(&DAT_091886f0);
          DAT_095173ff = '\x01';
        }
        if (**(long **)(DAT_091886f0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar3 = EssentialSystemR1_NetworkCheck__get_IsCheckingConnection
                          (**(long **)(DAT_091886f0 + 0xb8),0);
        if ((uVar3 & 1) == 0) break;
        if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_38[0] = System_Threading_Tasks_Task__Yield(0);
        local_34[0] = System_Runtime_CompilerServices_YieldAwaitable__GetAwaiter(local_38,0);
        if (*(int *)(DAT_09196218 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter__get_IsCompleted
                          (local_34,0);
        if ((uVar3 & 1) == 0) {
          *param_1 = 0;
          uVar2 = DAT_091c2de8;
          *(undefined1 *)(param_1 + 0xc) = local_34[0];
          FUN_049cc0bc(param_1 + 2,local_34,param_1,uVar2);
          return;
        }
LAB_0730ea18:
        if (*(int *)(DAT_09196218 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Runtime_CompilerServices_YieldAwaitable_YieldAwaiter__GetResult(local_34,0);
      }
      if (DAT_095173ff == '\0') {
        FUN_03f5c2a4(&DAT_091886f0);
        DAT_095173ff = '\x01';
      }
      if (**(long **)(DAT_091886f0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(**(long **)(DAT_091886f0 + 0xb8) + 0x40) != '\0') {
        if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = System_Threading_Tasks_Task__Delay(100,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_48 = System_Threading_Tasks_Task__GetAwaiter(lVar4,0);
        uVar3 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_48,0);
        if ((uVar3 & 1) == 0) {
          *param_1 = 1;
          *(undefined8 *)(param_1 + 0xe) = local_48;
          thunk_FUN_03f5d7b8(param_1 + 0xe,0);
          FUN_049c4308(param_1 + 2,&local_48,param_1,DAT_091c2c58);
          return;
        }
        goto LAB_0730eadc;
      }
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = System_Threading_Tasks_Task__Delay(2000,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_48 = System_Threading_Tasks_Task__GetAwaiter(lVar4,0);
      uVar3 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_48,0);
      if ((uVar3 & 1) == 0) {
        *param_1 = 2;
        *(undefined8 *)(param_1 + 0xe) = local_48;
        thunk_FUN_03f5d7b8(param_1 + 0xe,0);
        FUN_049c4308(param_1 + 2,&local_48,param_1,DAT_091c2c58);
        return;
      }
    }
    System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_48,0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    IapAdsSystem_GoogleMobileAdsControlAppOpen__ReloadAds(lVar5,0);
  }
  *param_1 = -2;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
  return;
}


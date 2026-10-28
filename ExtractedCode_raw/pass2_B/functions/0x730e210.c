// rea decompile_all
// name: IapAdsSystem.GoogleMobileAdsControlAppOpen.<>c__DisplayClass33_0.<<RegisterEventHandlers>g__DelayReloadAd|6>d$$MoveNext
// address: 0x730e210
// body: available
// range: 0x730e210-0x730e3cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x730e3c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730e3c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x730e3cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_GoogleMobileAdsControlAppOpen_<>c__DisplayClass33_0_<<RegisterEventHandlers>g__DelayReloadAd_6>d__MoveNext
               (int *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  undefined8 local_38;
  double local_28;
  
  if ((DAT_095204ec & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2cd8);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095204ec = 1;
  }
  lVar4 = *(long *)(param_1 + 10);
  local_38 = 0;
  if (*param_1 == 0) {
    local_38 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (DAT_09515cf4 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09515cf4 = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    dVar5 = modf(5000.0,&local_28);
    dVar6 = 5000.0;
    if ((dVar5 == 0.5) && (dVar6 = local_28, ((long)local_28 & 1U) != 0)) {
      dVar6 = local_28 + 1.0;
    }
    iVar1 = -0x80000000;
    if (dVar6 != INFINITY) {
      iVar1 = (int)dVar6;
    }
    if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = System_Threading_Tasks_Task__Delay(iVar1,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_38 = System_Threading_Tasks_Task__GetAwaiter(lVar2,0);
    uVar3 = System_Runtime_CompilerServices_TaskAwaiter__get_IsCompleted(&local_38,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xc) = local_38;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_049c6a58(param_1 + 2,&local_38,param_1,DAT_091c2cd8);
      return;
    }
  }
  System_Runtime_CompilerServices_TaskAwaiter__GetResult(&local_38,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = *(long *)(lVar4 + 0x18);
  if (lVar4 != 0) {
    IapAdsSystem_GoogleMobileAdsControlAppOpen__LoadAd(lVar4,0);
    *param_1 = -2;
    System_Runtime_CompilerServices_AsyncVoidMethodBuilder__SetResult(param_1 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


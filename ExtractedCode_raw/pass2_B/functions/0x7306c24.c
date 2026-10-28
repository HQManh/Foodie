// rea decompile_all
// name: IapAdsSystem.AppsFlyerBootstrap.<StartSdk>d__39$$MoveNext
// address: 0x7306c24
// body: available
// range: 0x7306c24-0x7306dbb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7306dac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7306db0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7306db4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7306db8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AppsFlyerBootstrap_<StartSdk>d__39__MoveNext(int *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long local_28;
  
  if ((DAT_09520492 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bffa8);
    FUN_03f5c2a4(&DAT_091814e8);
    FUN_03f5c2a4(&DAT_091e5ec0);
    FUN_03f5c2a4(&DAT_09184208);
    DAT_09520492 = 1;
  }
  lVar4 = *(long *)(param_1 + 6);
  local_28 = 0;
  if (*param_1 == 0) {
    local_28 = *(long *)(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(lVar4 + 0x21) != '\0') goto LAB_07306d50;
    *(undefined1 *)(lVar4 + 0x21) = 1;
    uVar1 = thunk_FUN_03f9944c(DAT_09184208);
    System_EventHandler___ctor(uVar1,lVar4,DAT_091bffa8,0);
    if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AppsFlyerSDK_AppsFlyer__remove_OnSessionReady(uVar1,0);
    lVar2 = AppsFlyerSDK_AppsFlyer__start(0,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_28 = UnityEngine_Awaitable__GetAwaiter(lVar2,0);
    uVar3 = UnityEngine_Awaitable_Awaiter__get_IsCompleted(&local_28,0);
    if ((uVar3 & 1) == 0) {
      *param_1 = 0;
      *(long *)(param_1 + 8) = local_28;
      thunk_FUN_03f5d7b8(param_1 + 8,0);
      FUN_04e87624(param_1 + 2,&local_28,param_1,DAT_091e5ec0);
      return;
    }
  }
  if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  UnityEngine_Awaitable__PropagateExceptionAndRelease(local_28,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined1 *)(lVar4 + 0x20) = 1;
LAB_07306d50:
  *param_1 = -2;
  FUN_0406b130(param_1 + 2,0);
  return;
}


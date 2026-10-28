// rea decompile_all
// name: IapAdsSystem.MaxAdsControlInterstitial$$Destroy
// address: 0x731fb6c
// body: available
// range: 0x731fb6c-0x731fd23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_MaxAdsControlInterstitial__Destroy(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_09520598 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174e58);
    FUN_03f5c2a4(&DAT_09174e60);
    FUN_03f5c2a4(&DAT_09174f78);
    FUN_03f5c2a4(&DAT_091d2bd0);
    FUN_03f5c2a4(&DAT_091d2bd8);
    FUN_03f5c2a4(&DAT_091d2be0);
    FUN_03f5c2a4(&DAT_091d2be8);
    FUN_03f5c2a4(&DAT_091d2bf0);
    DAT_09520598 = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_09174e58);
  FUN_071cd244(uVar1,param_1,DAT_091d2bf0,0);
  MaxSdkCallbacks_Interstitial__remove_OnAdLoadedEvent(uVar1,0);
  uVar1 = thunk_FUN_03f9944c(DAT_09174e60);
  FUN_071cd244(uVar1,param_1,DAT_091d2be8,0);
  MaxSdkCallbacks_Interstitial__remove_OnAdLoadFailedEvent(uVar1,0);
  uVar1 = thunk_FUN_03f9944c(DAT_09174e58);
  FUN_071cd244(uVar1,param_1,DAT_091d2bd0,0);
  MaxSdkCallbacks_Interstitial__remove_OnAdDisplayedEvent(uVar1,0);
  uVar1 = thunk_FUN_03f9944c(DAT_09174e58);
  FUN_071cd244(uVar1,param_1,DAT_091d2be0,0);
  MaxSdkCallbacks_Interstitial__remove_OnAdHiddenEvent(uVar1,0);
  uVar1 = thunk_FUN_03f9944c(DAT_09174f78);
  FUN_071cfdac(uVar1,param_1,DAT_091d2bd8,0);
  MaxSdkCallbacks_Interstitial__remove_OnAdDisplayFailedEvent(uVar1,0);
  *(undefined2 *)(param_1 + 0x10) = 0;
  return;
}


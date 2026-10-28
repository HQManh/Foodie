// rea decompile_all
// name: IapAdsSystem.AdmobManager$$.ctor
// address: 0x72f81e0
// body: available
// range: 0x72f81e0-0x72f8377 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x72f8374 to 0x865f230 UnityEngine.MonoBehaviour$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AdmobManager___ctor(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_09520426 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184ce8);
    FUN_03f5c2a4(&DAT_09184cf0);
    FUN_03f5c2a4(&DAT_09184cf8);
    FUN_03f5c2a4(&DAT_09184d00);
    DAT_09520426 = 1;
  }
  uVar1 = DAT_09184cf8;
  *(undefined8 *)(param_1 + 0x44) = 0x40c0000040800000;
  *(undefined8 *)(param_1 + 0x3c) = 0x400000003f800000;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  IapAdsSystem_GoogleMobileAdsControlInterstitial___ctor(uVar1,0);
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09184cf8);
  IapAdsSystem_GoogleMobileAdsControlInterstitial___ctor(uVar1,0);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09184ce8);
  IapAdsSystem_GoogleMobileAdsControlAppOpen___ctor();
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x60),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09184d00);
  IapAdsSystem_GoogleMobileAdsControlRewardAds___ctor(uVar1,0);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x68),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09184cf0);
  IapAdsSystem_GoogleMobileAdsControlBanner___ctor(uVar1,0);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x70),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09184cf0);
  IapAdsSystem_GoogleMobileAdsControlBanner___ctor(uVar1,0);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x78),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09184cf0);
  IapAdsSystem_GoogleMobileAdsControlBanner___ctor(uVar1,0);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x80),uVar1);
  UnityEngine_MonoBehaviour___ctor(param_1,0);
  return;
}


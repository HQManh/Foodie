// rea decompile_all
// name: IapAdsSystem.GoogleMobileAdsControlAppOpen$$LoadAd
// address: 0x730cd90
// body: available
// range: 0x730cd90-0x730cec7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x730ce34 to 0x85f6aa8 UnityEngine.Debug$$Log (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x730cec4 to 0x72e20b0 GoogleMobileAds.Api.AppOpenAd$$Load (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_GoogleMobileAdsControlAppOpen__LoadAd(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((DAT_095204d5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174bf8);
    FUN_03f5c2a4(&DAT_09180f10);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091cdf58);
    FUN_03f5c2a4(&DAT_09208e80);
    DAT_095204d5 = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x10),0);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(DAT_09208e80,0);
    return;
  }
  plVar4 = (long *)(param_1 + 0x20);
  if (*plVar4 != 0) {
    GoogleMobileAds_Api_AppOpenAd__Destroy(*plVar4,0);
    *plVar4 = 0;
    thunk_FUN_03f5d7b8(plVar4,0);
  }
  uVar2 = thunk_FUN_03f9944c(DAT_09180f10);
  GoogleMobileAds_Api_AdRequest___ctor(uVar2,0);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = thunk_FUN_03f9944c(DAT_09174bf8);
  FUN_071cd244(uVar3,param_1,DAT_091cdf58,0);
  GoogleMobileAds_Api_AppOpenAd__Load(uVar5,uVar2,uVar3,0);
  return;
}


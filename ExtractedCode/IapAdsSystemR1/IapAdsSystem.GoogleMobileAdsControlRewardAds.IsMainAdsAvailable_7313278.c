// rea decompile_all
// name: IapAdsSystem.GoogleMobileAdsControlRewardAds$$IsMainAdsAvailable
// address: 0x7313278
// body: available
// range: 0x7313278-0x7313303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 IapAdsSystem_GoogleMobileAdsControlRewardAds__IsMainAdsAvailable(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((DAT_0952051b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a2a8);
    DAT_0952051b = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x10),0);
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(DAT_0918a2a8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = GoogleMobileAds_Api_RewardedAdPreloader__IsAdAvailable(uVar2,0);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
    GoogleMobileAds_Api_RewardedAd__PollAd(*(undefined8 *)(param_1 + 0x10),0);
  }
  return 0;
}


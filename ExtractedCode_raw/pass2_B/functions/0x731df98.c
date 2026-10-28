// rea decompile_all
// name: IapAdsSystem.MaxAdsControlAppOpen$$OnAppOpenAdRevenuePaidEvent
// address: 0x731df98
// body: available
// range: 0x731df98-0x731e05f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x731e058 to 0x72fced4 IapAdsSystem.AdsDataTracking$$AppsFlyerRevenueAdsMax (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x731e05c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_MaxAdsControlAppOpen__OnAppOpenAdRevenuePaidEvent
               (long param_1,undefined8 param_2,long param_3)

{
  if ((DAT_09520584 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09211780);
    DAT_09520584 = 1;
  }
  if ((param_3 != 0) && (*(long *)(param_1 + 0x38) != 0)) {
    IapAdsSystem_AdsDataTracking__RevenueABI
              (*(undefined8 *)(param_3 + 0x40),*(long *)(param_1 + 0x38),2,4,
               *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
               *(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x18),DAT_09211780,0);
    if (*(long *)(param_1 + 0x38) != 0) {
      IapAdsSystem_AdsDataTracking__RevenueDefault
                (*(undefined8 *)(param_3 + 0x40),*(long *)(param_1 + 0x38),2,4,
                 *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
                 *(undefined8 *)(param_3 + 0x30),*(undefined8 *)(param_3 + 0x18),DAT_09211780,0);
      if (*(long *)(param_1 + 0x38) != 0) {
        IapAdsSystem_AdsDataTracking__AppsFlyerRevenueAdsMax
                  (*(undefined8 *)(param_3 + 0x40),*(long *)(param_1 + 0x38),
                   *(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x30),
                   *(undefined8 *)(param_3 + 0x18),DAT_09211780,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: IapAdsSystem.DataTrackingManager$$get_RetentionDay
// address: 0x730b51c
// body: available
// range: 0x730b51c-0x730b597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x730b584 to 0x732aeac IapAdsSystem.UserAnalyticsState$$RetentionDay (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 IapAdsSystem_DataTrackingManager__get_RetentionDay(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((DAT_095204b5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188c20);
    DAT_095204b5 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = EssentialSystemR1_OnlineTimeCheck__get_UtcNowWithoutCheatOffset(0);
    uVar1 = IapAdsSystem_UserAnalyticsState__RetentionDay(lVar2,uVar1,0);
    return uVar1;
  }
  return 0;
}


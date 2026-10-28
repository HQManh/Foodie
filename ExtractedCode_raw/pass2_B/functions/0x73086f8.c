// rea decompile_all
// name: IapAdsSystem.DataTrackingManager$$SetUpUserProperties
// address: 0x73086f8
// body: available
// range: 0x73086f8-0x730883f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7308838 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x730883c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_DataTrackingManager__SetUpUserProperties(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  if ((DAT_095204a1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_09217568);
    DAT_095204a1 = 1;
  }
  if (*(char *)(param_1 + 0x34) == '\0') {
    uVar1 = UnityEngine_PlayerPrefs__HasKey(DAT_09217568,0);
    if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188c20);
    }
    uVar2 = EssentialSystemR1_OnlineTimeCheck__get_UtcNowWithoutCheatOffset(0);
    lVar3 = IapAdsSystem_UserAnalyticsState__LoadOrCreate(uVar2,0);
    plVar4 = (long *)(param_1 + 0x28);
    *plVar4 = lVar3;
    thunk_FUN_03f5d7b8(plVar4,lVar3);
    if ((uVar1 & 1) != 0) {
      lVar3 = *plVar4;
      if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = EssentialSystemR1_OnlineTimeCheck__get_UtcNowWithoutCheatOffset(0);
      if (lVar3 == 0) goto LAB_0730883c;
      IapAdsSystem_UserAnalyticsState__RecordAppOpen(lVar3,uVar2,0);
    }
    if (*plVar4 == 0) {
LAB_0730883c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    IapAdsSystem_UserAnalyticsState__Save(*plVar4,1,0);
    *(undefined1 *)(param_1 + 0x34) = 1;
  }
  IapAdsSystem_DataTrackingManager__SyncUserProperties(param_1);
  if (*(long *)(param_1 + 0x38) != 0) {
    return;
  }
  uVar2 = IapAdsSystem_DataTrackingManager__CounterTime(param_1);
  uVar2 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar2,0);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x38));
  return;
}


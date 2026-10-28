// rea decompile_all
// name: IapAdsSystem.MaxAdsControlRewardAds$$ShowAds
// address: 0x7321e20
// body: available
// range: 0x7321e20-0x7322013 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7321ff4 to 0x85f6aa8 UnityEngine.Debug$$Log (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7322010 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_MaxAdsControlRewardAds__ShowAds(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((DAT_095205ab & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09187f20);
    FUN_03f5c2a4(&DAT_09213ee8);
    FUN_03f5c2a4(&DAT_09213f18);
    DAT_095205ab = 1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = 0;
    goto LAB_07321ed8;
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
LAB_07321ebc:
    lVar3 = *(long *)(param_1 + 0x50);
  }
  else {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_07322010;
    if (*(char *)(*(long *)(param_1 + 0x18) + 0x21) != '\0') {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_07322010;
      uVar1 = IapAdsSystem_MulticallAdsLoader__UseAvailableId(*(long *)(param_1 + 0x48),0);
      uVar2 = System_String__IsNullOrEmpty(uVar1,0);
      if ((uVar2 & 1) == 0) goto LAB_07321ed8;
      goto LAB_07321ebc;
    }
    lVar3 = *(long *)(param_1 + 0x40);
  }
  if (lVar3 == 0) {
LAB_07322010:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = IapAdsSystem_MulticallAdsLoader__UseAvailableId(lVar3,0);
LAB_07321ed8:
  uVar2 = System_String__IsNullOrEmpty(uVar1,0);
  if ((uVar2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),param_2);
    *(long *)(param_1 + 0x38) = param_3;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x38),param_3);
    if (*(int *)(DAT_09187f20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    MaxSdkAndroid__ShowRewardedAd(uVar1,0,0,0);
    uVar1 = System_String__Concat(DAT_09213f18,uVar1,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__Log(uVar1,0);
    return;
  }
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__LogError(DAT_09213ee8,0);
  *(undefined8 *)(param_1 + 0x38) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),0);
  *(undefined8 *)(param_1 + 0x20) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),0);
  if (param_3 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x07321f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x18))
            (*(undefined8 *)(param_3 + 0x40),param_2,2,*(undefined8 *)(param_3 + 0x28));
  return;
}


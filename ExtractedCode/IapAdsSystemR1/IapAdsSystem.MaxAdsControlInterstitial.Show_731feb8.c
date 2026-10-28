// rea decompile_all
// name: IapAdsSystem.MaxAdsControlInterstitial$$ShowAds
// address: 0x731feb8
// body: available
// range: 0x731feb8-0x731febb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_MaxAdsControlInterstitial__ShowAds(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  if ((DAT_09520599 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09187f20);
    FUN_03f5c2a4(&DAT_09213f10);
    FUN_03f5c2a4(&DAT_09213ee0);
    DAT_09520599 = 1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x11) == '\0') {
LAB_0731ff58:
      lVar3 = *(long *)(param_1 + 0x50);
    }
    else {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_073200c8;
      if (*(char *)(*(long *)(param_1 + 0x18) + 0x21) != '\0') {
        if (*(long *)(param_1 + 0x48) == 0) goto LAB_073200c8;
        uVar1 = IapAdsSystem_MulticallAdsLoader__UseAvailableId(*(long *)(param_1 + 0x48),0);
        uVar2 = System_String__IsNullOrEmpty(uVar1,0);
        if ((uVar2 & 1) == 0) goto LAB_0731ff80;
        goto LAB_0731ff58;
      }
      lVar3 = *(long *)(param_1 + 0x40);
    }
    if (lVar3 == 0) goto LAB_073200c8;
    uVar1 = IapAdsSystem_MulticallAdsLoader__UseAvailableId(lVar3,0);
  }
LAB_0731ff80:
  uVar2 = System_String__IsNullOrEmpty(uVar1,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_09213ee0,0);
    *(undefined8 *)(param_1 + 0x38) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),0);
    *(undefined8 *)(param_1 + 0x20) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),0);
    if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x07320000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_3 + 0x18))
                (*(undefined8 *)(param_3 + 0x40),param_2,1,*(undefined8 *)(param_3 + 0x28));
      return;
    }
    return;
  }
  *(long *)(param_1 + 0x20) = param_2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x20),param_2);
  *(long *)(param_1 + 0x38) = param_3;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x38),param_3);
  if (*(int *)(DAT_09187f20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  MaxSdkAndroid__ShowInterstitial(uVar1,0,0,0);
  uVar1 = System_String__Concat(DAT_09213f10,uVar1,0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835d0);
  }
  UnityEngine_Debug__Log(uVar1,0);
  if ((param_2 != 0) && (*(long *)(param_1 + 0x58) != 0)) {
    IapAdsSystem_AdsDataTracking__InterDisplay
              (*(long *)(param_1 + 0x58),*(undefined4 *)(param_2 + 0x28),0);
    return;
  }
LAB_073200c8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


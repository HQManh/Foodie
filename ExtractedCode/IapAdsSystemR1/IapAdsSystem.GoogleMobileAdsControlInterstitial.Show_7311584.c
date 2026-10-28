// rea decompile_all
// name: IapAdsSystem.GoogleMobileAdsControlInterstitial$$ShowAd
// address: 0x7311584
// body: available
// range: 0x7311584-0x7311587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_GoogleMobileAdsControlInterstitial__ShowAd
               (long param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((DAT_09520505 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09187060);
    FUN_03f5c2a4(&DAT_0921f078);
    FUN_03f5c2a4(&DAT_0920d120);
    FUN_03f5c2a4(&DAT_09208bd0);
    FUN_03f5c2a4(&DAT_09217d40);
    FUN_03f5c2a4(&DAT_0920d118);
    FUN_03f5c2a4(&DAT_09208bd8);
    FUN_03f5c2a4(&DAT_09208ae0);
    DAT_09520505 = 1;
  }
  uVar1 = IapAdsSystem_GoogleMobileAdsControlInterstitial__IsMainAdsAvailable(param_1);
  if ((uVar1 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(DAT_09187060 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = GoogleMobileAds_Api_InterstitialAdPreloader__DequeueAd(uVar5,0);
    uVar5 = DAT_0920d120;
    if (lVar2 != 0) {
      if (param_2 == (long *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
      }
      uVar5 = System_String__Concat(uVar5,uVar3,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__Log(uVar5,0);
      *(long *)(param_1 + 0x28) = (long)param_2;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x28),param_2);
      *(long *)(param_1 + 0x48) = param_3;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x48),param_3);
      puVar4 = &DAT_0921f078;
      goto LAB_07311888;
    }
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_09208bd8,0);
  }
  uVar1 = IapAdsSystem_GoogleMobileAdsControlInterstitial__IsBackFillAdsAvailable(param_1);
  if ((uVar1 & 1) != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(DAT_09187060 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = GoogleMobileAds_Api_InterstitialAdPreloader__DequeueAd(uVar5,0);
    uVar5 = DAT_0920d118;
    if (lVar2 != 0) {
      if (param_2 == (long *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
      }
      uVar5 = System_String__Concat(uVar5,uVar3,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__Log(uVar5,0);
      *(long *)(param_1 + 0x28) = (long)param_2;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x28),param_2);
      *(long *)(param_1 + 0x48) = param_3;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x48),param_3);
      puVar4 = &DAT_09217d40;
LAB_07311888:
      IapAdsSystem_GoogleMobileAdsControlInterstitial__RegisterEventHandlers(param_1,lVar2,*puVar4);
      GoogleMobileAds_Api_InterstitialAd__Show(lVar2,0);
      return;
    }
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_09208bd0,0);
  }
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Debug__LogError(DAT_09208ae0,0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),0);
  *(undefined8 *)(param_1 + 0x28) = 0;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x28),0);
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x073117a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x18))
              (*(undefined8 *)(param_3 + 0x40),param_2,1,*(undefined8 *)(param_3 + 0x28));
    return;
  }
  return;
}


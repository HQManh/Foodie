// rea decompile_all
// name: IapAdsSystem.GoogleMobileAdsControlInterstitial.<IEInitForPreload>d__36$$MoveNext
// address: 0x7312854
// body: available
// range: 0x7312854-0x7312aeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7312ae8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
IapAdsSystem_GoogleMobileAdsControlInterstitial_<IEInitForPreload>d__36__MoveNext(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  float fVar9;
  
  if ((DAT_09520511 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_09174d98);
    FUN_03f5c2a4(&DAT_09174e10);
    FUN_03f5c2a4(&DAT_09180f10);
    FUN_03f5c2a4(&DAT_09187060);
    FUN_03f5c2a4(&DAT_091894e0);
    FUN_03f5c2a4(&DAT_091ea5c8);
    FUN_03f5c2a4(&DAT_091ea5d0);
    FUN_03f5c2a4(&DAT_091ea5d8);
    FUN_03f5c2a4(&DAT_09190e78);
    DAT_09520511 = 1;
  }
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar1 = thunk_FUN_03f9944c(DAT_09190e78);
    System_Object___ctor(lVar1,0);
    plVar3 = (long *)(param_1 + 0x40);
    *plVar3 = lVar1;
    thunk_FUN_03f5d7b8(plVar3,lVar1);
    if (*plVar3 == 0) goto LAB_07312ae8;
    *(undefined8 *)(*plVar3 + 0x10) = *(undefined8 *)(param_1 + 0x20);
    thunk_FUN_03f5d7b8();
    uVar8 = UnityEngine_Time__get_realtimeSinceStartup(0);
    *(undefined4 *)(param_1 + 0x48) = uVar8;
  }
  fVar9 = (float)UnityEngine_Time__get_realtimeSinceStartup(0);
  if (fVar9 - *(float *)(param_1 + 0x48) < *(float *)(param_1 + 0x28)) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091894e0);
  GoogleMobileAds_Api_PreloadConfiguration___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x30);
    thunk_FUN_03f5d7b8();
    uVar2 = thunk_FUN_03f9944c(DAT_09180f10);
    GoogleMobileAds_Api_AdRequest___ctor(uVar2,0);
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20),uVar2);
    uVar2 = DAT_09174e10;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(param_1 + 0x38);
    uVar2 = thunk_FUN_03f9944c(uVar2);
    FUN_071cd244(uVar2,uVar5,DAT_091ea5d0,0);
    uVar6 = *(undefined8 *)(param_1 + 0x40);
    uVar5 = thunk_FUN_03f9944c(DAT_09174d98);
    FUN_071cd244(uVar5,uVar6,DAT_091ea5c8,0);
    uVar7 = *(undefined8 *)(param_1 + 0x40);
    uVar6 = thunk_FUN_03f9944c(DAT_09174980);
    FUN_070a8c30(uVar6,uVar7,DAT_091ea5d8,0);
    if (*(int *)(DAT_09187060 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    GoogleMobileAds_Api_InterstitialAdPreloader__Preload(uVar4,lVar1,uVar2,uVar5,uVar6,0);
    return 0;
  }
LAB_07312ae8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


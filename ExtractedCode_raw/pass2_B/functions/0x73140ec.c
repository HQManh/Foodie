// rea decompile_all
// name: IapAdsSystem.GoogleMobileAdsControlRewardAds.<>c__DisplayClass47_0$$<RegisterEventHandlers>b__0
// address: 0x73140ec
// body: available
// range: 0x73140ec-0x731436b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7314368 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_GoogleMobileAdsControlRewardAds_<>c__DisplayClass47_0__<RegisterEventHandlers>b__0
               (long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  if ((DAT_09520525 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180ec8);
    FUN_03f5c2a4(&DAT_09180fe0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0920c000);
    DAT_09520525 = 1;
  }
  if (param_2 != 0) {
    local_68 = *(undefined8 *)(param_2 + 0x18);
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = FUN_03f5c42c(DAT_09535440,&local_68);
    uVar2 = System_String__Format(DAT_0920c000,uVar8,uVar2,*(undefined8 *)(param_2 + 0x20),0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__Log(uVar2,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar2 = GoogleMobileAds_Api_RewardedAd__GetAdUnitID(*(long *)(param_1 + 0x18),0);
      if ((((*(long *)(param_1 + 0x18) != 0) &&
           (lVar3 = GoogleMobileAds_Api_RewardedAd__GetResponseInfo(*(long *)(param_1 + 0x18),0),
           lVar3 != 0)) &&
          (lVar3 = GoogleMobileAds_Api_ResponseInfo__GetLoadedAdapterResponseInfo(lVar3,0),
          lVar3 != 0)) &&
         (lVar3 = GoogleMobileAds_Api_AdapterResponseInfo__get_AdapterClassName(lVar3,0), lVar3 != 0
         )) {
        iVar1 = System_String__LastIndexOf(lVar3,0x2e,0);
        if (iVar1 != -1) {
          lVar3 = System_String__Substring(lVar3,iVar1 + 1,0);
        }
        if ((*(long *)(param_1 + 0x20) != 0) &&
           (lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar6 != 0)) {
          local_68 = DAT_09180fe0;
          local_58 = *(undefined4 *)(lVar6 + 0x28);
          lVar6 = *(long *)(param_2 + 0x18);
          uStack_60 = 0xffffffffffffffff;
          uVar8 = System_Enum__ToString(&local_68,0);
          local_80 = DAT_09180ec8;
          uStack_78 = 0xffffffffffffffff;
          local_70 = 2;
          uVar4 = System_Enum__ToString(&local_80,0);
          if ((*(long *)(param_1 + 0x20) != 0) &&
             (lVar5 = *(long *)(*(long *)(param_1 + 0x20) + 0x50), lVar5 != 0)) {
            uVar7 = *(undefined8 *)(param_2 + 0x20);
            dVar9 = (double)lVar6 / 1000000.0;
            IapAdsSystem_AdsDataTracking__RevenueDefault
                      (dVar9,lVar5,1,3,lVar3,uVar2,uVar8,uVar4,uVar7,0);
            if ((*(long *)(param_1 + 0x20) != 0) &&
               (lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x50), lVar6 != 0)) {
              IapAdsSystem_AdsDataTracking__RevenueABI
                        (dVar9,lVar6,1,3,lVar3,uVar2,uVar8,uVar4,uVar7,0);
              if ((*(long *)(param_1 + 0x20) != 0) &&
                 (lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x50), lVar3 != 0)) {
                IapAdsSystem_AdsDataTracking__AppsFlyerRevenueAdsAdmob
                          (dVar9,lVar3,uVar2,uVar8,uVar4,uVar7,0);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


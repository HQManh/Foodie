// rea decompile_all
// name: IapAdsSystem.GoogleMobileAdsControlAppOpen.<>c__DisplayClass33_0$$<RegisterEventHandlers>b__0
// address: 0x730dcbc
// body: available
// range: 0x730dcbc-0x730df1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x730df18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_GoogleMobileAdsControlAppOpen_<>c__DisplayClass33_0__<RegisterEventHandlers>b__0
               (long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  if ((DAT_095204e7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180ec8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091fbc28);
    DAT_095204e7 = 1;
  }
  if (param_2 != 0) {
    local_58 = *(undefined8 *)(param_2 + 0x18);
    uVar2 = FUN_03f5c42c(DAT_09535440,&local_58);
    uVar2 = System_String__Format(DAT_091fbc28,uVar2,*(undefined8 *)(param_2 + 0x20),0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__Log(uVar2,0);
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar2 = GoogleMobileAds_Api_AppOpenAd__GetAdUnitID(*(long *)(param_1 + 0x10),0);
      if ((((*(long *)(param_1 + 0x10) != 0) &&
           (lVar3 = GoogleMobileAds_Api_AppOpenAd__GetResponseInfo(*(long *)(param_1 + 0x10),0),
           lVar3 != 0)) &&
          (lVar3 = GoogleMobileAds_Api_ResponseInfo__GetLoadedAdapterResponseInfo(lVar3,0),
          lVar3 != 0)) &&
         (lVar3 = GoogleMobileAds_Api_AdapterResponseInfo__get_AdapterClassName(lVar3,0), lVar3 != 0
         )) {
        iVar1 = System_String__LastIndexOf(lVar3,0x2e,0);
        if (iVar1 != -1) {
          lVar3 = System_String__Substring(lVar3,iVar1 + 1,0);
        }
        if ((*(long *)(param_1 + 0x18) != 0) &&
           (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x28), lVar5 != 0)) {
          lVar8 = *(long *)(param_2 + 0x18);
          uVar7 = *(undefined8 *)(lVar5 + 0x20);
          local_58 = DAT_09180ec8;
          local_48 = 5;
          uStack_50 = 0xffffffffffffffff;
          uVar4 = System_Enum__ToString(&local_58,0);
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x38), lVar5 != 0)) {
            uVar6 = *(undefined8 *)(param_2 + 0x20);
            dVar9 = (double)lVar8 / 1000000.0;
            IapAdsSystem_AdsDataTracking__RevenueDefault
                      (dVar9,lVar5,1,4,lVar3,uVar2,uVar7,uVar4,uVar6,0);
            if ((*(long *)(param_1 + 0x18) != 0) &&
               (lVar5 = *(long *)(*(long *)(param_1 + 0x18) + 0x38), lVar5 != 0)) {
              IapAdsSystem_AdsDataTracking__RevenueABI
                        (dVar9,lVar5,1,4,lVar3,uVar2,uVar7,uVar4,uVar6,0);
              if ((*(long *)(param_1 + 0x18) != 0) &&
                 (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x38), lVar3 != 0)) {
                IapAdsSystem_AdsDataTracking__AppsFlyerRevenueAdsAdmob
                          (dVar9,lVar3,uVar2,uVar7,uVar4,uVar6,0);
                if ((*(long *)(param_1 + 0x18) != 0) &&
                   (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x28), lVar3 != 0)) {
                  IapAdsSystem_AppOpenAdsData__TriggerClosed(lVar3,0);
                  return;
                }
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


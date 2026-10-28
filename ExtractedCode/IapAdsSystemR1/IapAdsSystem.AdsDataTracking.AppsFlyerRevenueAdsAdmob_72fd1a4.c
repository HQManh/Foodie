// rea decompile_all
// name: IapAdsSystem.AdsDataTracking$$AppsFlyerRevenueAdsAdmob
// address: 0x72fd1a4
// body: available
// range: 0x72fd1a4-0x72fd473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x72fd454 to 0x4056ec4 AppsFlyerSDK.AppsFlyer$$logAdRevenue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x72fd470 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AdsDataTracking__AppsFlyerRevenueAdsAdmob
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_0952044e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dd8);
    FUN_03f5c2a4(&DAT_091814e8);
    FUN_03f5c2a4(&DAT_0919feb8);
    FUN_03f5c2a4(&DAT_0919fe90);
    FUN_03f5c2a4(&DAT_09176c28);
    FUN_03f5c2a4(&DAT_09217148);
    FUN_03f5c2a4(&DAT_091fb5f8);
    FUN_03f5c2a4(&DAT_092173a8);
    FUN_03f5c2a4(&DAT_09219b70);
    FUN_03f5c2a4(&DAT_09211768);
    FUN_03f5c2a4(&DAT_09217140);
    FUN_03f5c2a4(&DAT_091f9758);
    FUN_03f5c2a4(&DAT_09220d28);
    DAT_0952044e = 1;
  }
  uVar1 = IapAdsSystem_IapAdsGlobalConfig__get_IsAllowAdsTracking(0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (*(long *)(param_2 + 0x30) != 0) {
    if ((*(int *)(*(long *)(param_2 + 0x30) + 0x30) != 2) ||
       (uVar1 = IapAdsSystem_IapAdsGlobalConfig__get_IsAllowTrackingData(0), (uVar1 & 1) == 0)) {
      if (DAT_095204e1 == '\0') {
        FUN_03f5c2a4(&DAT_09183318);
        DAT_095204e1 = '\x01';
      }
      if (*(int *)(DAT_09183318 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_09183318 + 0xb8) == 0) goto LAB_072fd470;
      if (*(char *)(**(long **)(DAT_09183318 + 0xb8) + 0x18) == '\0') {
        return;
      }
    }
    lVar2 = thunk_FUN_03f9944c(DAT_09176c28);
    FUN_06fd76bc(lVar2,DAT_0919fe90);
    if (lVar2 != 0) {
      FUN_06fd8454(lVar2,DAT_09219b70,DAT_09211768,DAT_0919feb8);
      FUN_06fd8454(lVar2,DAT_09217148,param_3,DAT_0919feb8);
      FUN_06fd8454(lVar2,DAT_09217140,param_5,DAT_0919feb8);
      FUN_06fd8454(lVar2,DAT_09220d28,param_4,DAT_0919feb8);
      FUN_06fd8454(lVar2,DAT_092173a8,DAT_091f9758,DAT_0919feb8);
      if (*(long *)(param_2 + 0x30) != 0) {
        if (*(int *)(*(long *)(param_2 + 0x30) + 0x30) != 2) {
          return;
        }
        uVar1 = IapAdsSystem_IapAdsGlobalConfig__get_IsAllowTrackingData(0);
        if ((uVar1 & 1) == 0) {
          return;
        }
        uVar3 = thunk_FUN_03f9944c(DAT_09180dd8);
        AppsFlyerSDK_AFAdRevenueData___ctor(param_1,uVar3,DAT_091fb5f8,1,param_6,0);
        if (*(int *)(DAT_091814e8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AppsFlyerSDK_AppsFlyer__logAdRevenue(uVar3,lVar2,0);
        return;
      }
    }
  }
LAB_072fd470:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


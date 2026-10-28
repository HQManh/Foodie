// rea decompile_all
// name: IapAdsSystem.GoogleMobileAdsControlRewardAds$$SetUp
// address: 0x7312f5c
// body: available
// range: 0x7312f5c-0x73130eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73130e4 to 0x865e458 UnityEngine.MonoBehaviour$$StartCoroutine (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x73130e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_GoogleMobileAdsControlRewardAds__SetUp
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if ((DAT_09520518 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0921f078);
    FUN_03f5c2a4(&DAT_09218780);
    FUN_03f5c2a4(&DAT_09217d40);
    DAT_09520518 = 1;
  }
  plVar4 = (long *)(param_1 + 0x20);
  *plVar4 = param_2;
  thunk_FUN_03f5d7b8(plVar4,param_2);
  puVar7 = (undefined8 *)(param_1 + 0x10);
  *puVar7 = param_3;
  thunk_FUN_03f5d7b8(puVar7,param_3);
  puVar5 = (undefined8 *)(param_1 + 0x18);
  *puVar5 = param_4;
  thunk_FUN_03f5d7b8(puVar5,param_4);
  *(undefined8 *)(param_1 + 0x50) = param_5;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),param_5);
  uVar1 = System_String__IsNullOrEmpty(*puVar7,0);
  if ((uVar1 & 1) == 0) {
    uVar1 = IapAdsSystem_IapAdsGlobalConfig__get_IsUseTestAdsId();
    if ((uVar1 & 1) != 0) {
      *puVar7 = DAT_09218780;
      thunk_FUN_03f5d7b8(puVar7);
    }
    lVar3 = *plVar4;
    if (lVar3 == 0) goto LAB_073130e8;
    lVar6 = *(long *)(lVar3 + 0x20);
    uVar2 = IapAdsSystem_GoogleMobileAdsControlRewardAds__IEInitForPreload
                      (param_1,*(undefined8 *)(param_1 + 0x10),DAT_0921f078,
                       *(undefined4 *)(lVar3 + 0x18));
    if (lVar6 == 0) goto LAB_073130e8;
    UnityEngine_MonoBehaviour__StartCoroutine(lVar6,uVar2,0);
  }
  uVar1 = System_String__IsNullOrEmpty(*puVar5,0);
  if (((uVar1 & 1) != 0) ||
     (uVar1 = IapAdsSystem_IapAdsGlobalConfig__get_IsUseTestAdsId(), (uVar1 & 1) != 0)) {
    return;
  }
  lVar3 = *plVar4;
  if (lVar3 != 0) {
    lVar6 = *(long *)(lVar3 + 0x20);
    uVar2 = IapAdsSystem_GoogleMobileAdsControlRewardAds__IEInitForPreload
                      (param_1,*(undefined8 *)(param_1 + 0x18),DAT_09217d40,
                       *(undefined4 *)(lVar3 + 0x1c));
    if (lVar6 != 0) {
      UnityEngine_MonoBehaviour__StartCoroutine(lVar6,uVar2,0);
      return;
    }
  }
LAB_073130e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


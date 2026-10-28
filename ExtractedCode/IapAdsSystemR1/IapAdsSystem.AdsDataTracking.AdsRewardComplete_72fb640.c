// rea decompile_all
// name: IapAdsSystem.AdsDataTracking$$AdsRewardComplete
// address: 0x72fb640
// body: available
// range: 0x72fb640-0x72fb9fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x72fb9f4 to 0x72fa4c8 IapAdsSystem.AdsDataTracking$$RecordCompletedAd (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x72fb9f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AdsDataTracking__AdsRewardComplete(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  
  if ((DAT_0952043b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183318);
    FUN_03f5c2a4(&DAT_091b4928);
    FUN_03f5c2a4(&DAT_091b4930);
    FUN_03f5c2a4(&DAT_09180358);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_092186b8);
    FUN_03f5c2a4(&DAT_09225370);
    FUN_03f5c2a4(&DAT_09221b60);
    FUN_03f5c2a4(&DAT_0921e6b0);
    FUN_03f5c2a4(&DAT_092172b8);
    FUN_03f5c2a4(&DAT_09220d28);
    DAT_0952043b = 1;
  }
  uVar3 = IapAdsSystem_IapAdsGlobalConfig__get_IsAllowAdsTracking(0);
  if (((((uVar3 & 1) == 0) || (uVar3 = FUN_05a8eda4(DAT_091b4930), param_2 == 0)) ||
      ((uVar3 & 1) == 0)) || (*(char *)(param_2 + 0x4d) != '\0')) {
    return;
  }
  lVar4 = *(long *)(DAT_091b4928 + 0x20);
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  if ((lVar4 == 0) || (lVar9 = *(long *)(lVar4 + 0x20), lVar9 == 0)) {
LAB_072fb9f8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((*(char *)(lVar9 + 0x38) != '\0') && (*(int *)(param_2 + 0x58) == *(int *)(lVar9 + 0x3c))) {
    *(int *)(lVar9 + 0x40) = *(int *)(lVar9 + 0x40) + 1;
  }
  uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_2 + 0x38),0);
  if ((uVar3 & 1) == 0) {
    uVar5 = *(undefined8 *)(param_2 + 0x38);
  }
  else {
    uVar5 = IapAdsSystem_AdsDataTracking__PlacementOf(*(undefined4 *)(param_2 + 0x28));
  }
  lVar6 = FUN_03f5c394(DAT_09180358,5);
  uVar10 = DAT_0921e6b0;
  uVar2 = DAT_092172b8;
  lVar11 = *(long *)(param_2 + 0x50);
  if ((lVar11 == 0) && (lVar11 = *(long *)(lVar9 + 0x18), lVar11 == 0)) {
    lVar11 = **(long **)(DAT_09535468 + 0xb8);
  }
  uVar7 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(uVar7,uVar10,lVar11,0);
  if (lVar6 == 0) goto LAB_072fb9f8;
  FUN_039b0da0(lVar6,uVar7);
  FUN_039af17c(lVar6,0,uVar7);
  puVar12 = (undefined8 *)(param_2 + 0x30);
  uVar3 = System_String__IsNullOrEmpty(*puVar12,0);
  uVar10 = DAT_092186b8;
  if ((uVar3 & 1) != 0) {
    puVar12 = (undefined8 *)(param_2 + 0x10);
    uVar3 = System_String__IsNullOrEmpty(*puVar12,0);
    uVar7 = uVar5;
    if ((uVar3 & 1) != 0) goto LAB_072fb8a4;
  }
  uVar7 = *puVar12;
LAB_072fb8a4:
  uVar8 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(uVar8,uVar10,uVar7,0);
  FUN_039b0da0(lVar6,uVar8);
  FUN_039af17c(lVar6,1,uVar8);
  uVar10 = *(undefined8 *)(param_2 + 0x40);
  if (*(int *)(DAT_09183318 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar10 = IapAdsSystem_DataTrackingManager__NormalizeCurrencyName(uVar10);
  uVar7 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(uVar7,DAT_09221b60,uVar10,0);
  FUN_039b0da0(lVar6,uVar7);
  FUN_039af17c(lVar6,2,uVar7);
  iVar1 = *(int *)(param_2 + 0x48);
  uVar10 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(uVar10,DAT_09225370,(long)iVar1,0);
  FUN_039b0da0(lVar6,uVar10);
  FUN_039af17c(lVar6,3,uVar10);
  uVar10 = thunk_FUN_03f9944c(DAT_09188e48);
  Firebase_Analytics_Parameter___ctor(uVar10,DAT_09220d28,uVar5,0);
  FUN_039b0da0(lVar6,uVar10);
  FUN_039af17c(lVar6,4,uVar10);
  IapAdsSystem_DataTrackingManager__LogEvent(lVar4,uVar2,lVar6);
  IapAdsSystem_AdsDataTracking__RecordCompletedAd(3);
  return;
}


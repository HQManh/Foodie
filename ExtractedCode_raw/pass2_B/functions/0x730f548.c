// rea decompile_all
// name: IapAdsSystem.GoogleMobileAdsControlBanner$$<Show>g__CreateAutoRefreshBanner|34_0
// address: 0x730f548
// body: available
// range: 0x730f548-0x730fb23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x730fb20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long IapAdsSystem_GoogleMobileAdsControlBanner__<Show>g__CreateAutoRefreshBanner_34_0
               (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double local_80 [2];
  undefined4 local_70;
  undefined4 local_64;
  
  if ((DAT_095204f7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180f10);
    FUN_03f5c2a4(&DAT_09180f18);
    FUN_03f5c2a4(&DAT_09181a30);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919feb8);
    FUN_03f5c2a4(&DAT_09190e70);
    FUN_03f5c2a4(&DAT_09218458);
    FUN_03f5c2a4(&DAT_0921f740);
    FUN_03f5c2a4(&DAT_0921f3b0);
    FUN_03f5c2a4(&DAT_0921f748);
    FUN_03f5c2a4(&DAT_0921f368);
    FUN_03f5c2a4(&DAT_091ff808);
    FUN_03f5c2a4(&DAT_091f9df0);
    FUN_03f5c2a4(&DAT_09218ee8);
    FUN_03f5c2a4(&DAT_091f9ec0);
    DAT_095204f7 = 1;
  }
  local_64 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_09180f10);
  GoogleMobileAds_Api_AdRequest___ctor(lVar2,0);
  if (*(long *)(param_3 + 0x20) == 0) goto LAB_0730fb20;
  if (*(int *)(*(long *)(param_3 + 0x20) + 0x18) == 1) {
    fVar11 = (float)IapAdsSystem_GoogleMobileAdsControlBanner__CalculateScreenPosMrec();
    if (*(char *)(param_3 + 0x48) == '\0') {
      if (DAT_09515cf4 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09515cf4 = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar13 = (double)fVar11;
      dVar12 = modf(dVar13,local_80);
      if (0.0 <= fVar11) {
        if (dVar12 == 0.5) {
          dVar12 = 1.0;
          goto LAB_0730f76c;
        }
        dVar13 = (double)(long)(dVar13 + 0.5);
      }
      else if (dVar12 == -0.5) {
        dVar12 = -1.0;
LAB_0730f76c:
        dVar13 = local_80[0];
        if (((long)local_80[0] & 1U) != 0) {
          dVar13 = local_80[0] + dVar12;
        }
      }
      else {
        dVar13 = (double)(long)(dVar13 + -0.5);
      }
      iVar6 = -0x80000000;
      if (dVar13 != INFINITY) {
        iVar6 = (int)dVar13;
      }
      if (*(char *)(param_3 + 0x48) != '\0') goto LAB_0730f7b4;
      if (DAT_09515cf4 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09515cf4 = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar13 = (double)param_2;
      dVar12 = modf(dVar13,local_80);
      if (0.0 <= param_2) {
        if (dVar12 == 0.5) {
          dVar12 = 1.0;
          goto LAB_0730fadc;
        }
        local_80[0] = (double)(long)(dVar13 + 0.5);
      }
      else if (dVar12 == -0.5) {
        dVar12 = -1.0;
LAB_0730fadc:
        if (((long)local_80[0] & 1U) != 0) {
          local_80[0] = local_80[0] + dVar12;
        }
      }
      else {
        local_80[0] = (double)(long)(dVar13 + -0.5);
      }
      iVar7 = -0x80000000;
      if (local_80[0] != INFINITY) {
        iVar7 = (int)local_80[0];
      }
    }
    else {
      iVar6 = *(int *)(param_3 + 0x4c);
LAB_0730f7b4:
      iVar7 = *(int *)(param_3 + 0x50);
    }
    if (*(long *)(param_3 + 0x20) == 0) goto LAB_0730fb20;
    if (*(char *)(*(long *)(param_3 + 0x20) + 0x39) == '\0') {
      uVar5 = *(undefined8 *)(param_3 + 0x18);
      if (*(int *)(DAT_09180f18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = *(undefined8 *)(param_3 + 0x10);
      uVar9 = *(undefined8 *)(*(long *)(DAT_09180f18 + 0xb8) + 0x10);
      lVar4 = thunk_FUN_03f9944c(DAT_09181a30);
      IapAdsSystem_BannerRefreshView___ctor(lVar4,uVar5,uVar9,iVar6,iVar7,uVar10,0);
    }
    else {
      uVar1 = GoogleMobileAds_Api_MobileAds_Utils__GetDeviceSafeWidth(0);
      lVar3 = thunk_FUN_03f9944c(DAT_09180f18);
      GoogleMobileAds_Api_AdSize___ctor(lVar3,uVar1,0xfa,0);
      uVar5 = *(undefined8 *)(param_3 + 0x10);
      uVar9 = *(undefined8 *)(param_3 + 0x18);
      lVar4 = thunk_FUN_03f9944c(DAT_09181a30);
      IapAdsSystem_BannerRefreshView___ctor(lVar4,uVar9,lVar3,0,iVar7,uVar5,0);
      if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) goto LAB_0730fb20;
      FUN_06fd8454(*(long *)(lVar2 + 0x20),DAT_0921f748,DAT_091f9df0,DAT_0919feb8);
      if ((*(long *)(lVar2 + 0x20) == 0) ||
         (FUN_06fd8454(*(long *)(lVar2 + 0x20),DAT_0921f740,DAT_091f9ec0,DAT_0919feb8), lVar3 == 0))
      goto LAB_0730fb20;
      local_64 = *(undefined4 *)(lVar3 + 0x18);
      lVar8 = *(long *)(lVar2 + 0x20);
      uVar5 = System_Int32__ToString(&local_64,0);
      if (lVar8 == 0) goto LAB_0730fb20;
      FUN_06fd8454(lVar8,DAT_0921f3b0,uVar5,DAT_0919feb8);
      local_64 = *(undefined4 *)(lVar3 + 0x1c);
      lVar3 = *(long *)(lVar2 + 0x20);
      uVar5 = System_Int32__ToString(&local_64,0);
      if (lVar3 == 0) goto LAB_0730fb20;
      FUN_06fd8454(lVar3,DAT_0921f368,uVar5,DAT_0919feb8);
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_3 + 0x18);
    if (*(int *)(DAT_09180f18 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = GoogleMobileAds_Api_AdSize__GetCurrentOrientationAnchoredAdaptiveBannerAdSizeWithWidth
                      (*(undefined4 *)(*(long *)(DAT_09180f18 + 0xb8) + 0x30),0);
    uVar10 = *(undefined8 *)(param_3 + 0x10);
    lVar4 = thunk_FUN_03f9944c(DAT_09181a30);
    IapAdsSystem_BannerRefreshView___ctor(lVar4,uVar5,uVar9,1,uVar10,0);
  }
  IapAdsSystem_GoogleMobileAdsControlBanner__RegisterEventHandlers(param_3,lVar4);
  if (*(long *)(param_3 + 0x20) != 0) {
    if (*(int *)(*(long *)(param_3 + 0x20) + 0x18) == 2) {
      if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) goto LAB_0730fb20;
      FUN_06fd8454(*(long *)(lVar2 + 0x20),DAT_09218ee8,DAT_09218458,DAT_0919feb8);
    }
    if (lVar4 != 0) {
      IapAdsSystem_BannerRefreshView__LoadAd(lVar4,lVar2,0);
      if (*(long *)(param_3 + 0x20) != 0) {
        local_80[0] = DAT_09190e70;
        local_70 = *(undefined4 *)(*(long *)(param_3 + 0x20) + 0x18);
        local_80[1] = -NAN;
        uVar5 = System_Enum__ToString(local_80,0);
        uVar5 = System_String__Concat(DAT_091ff808,uVar5,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835d0);
        }
        UnityEngine_Debug__Log(uVar5,0);
        return lVar4;
      }
    }
  }
LAB_0730fb20:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: IapAdsSystem.GoogleMobileAdsControlBanner$$<Show>g__CreateNormalBanner|34_1
// address: 0x730fb24
// body: available
// range: 0x730fb24-0x73100e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73100e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long IapAdsSystem_GoogleMobileAdsControlBanner__<Show>g__CreateNormalBanner_34_1
               (undefined1 param_1 [16],float param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double local_78 [2];
  undefined4 local_68;
  undefined4 local_54;
  
  if ((DAT_095204f8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180f10);
    FUN_03f5c2a4(&DAT_09180f18);
    FUN_03f5c2a4(&DAT_09181a38);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919feb8);
    FUN_03f5c2a4(&DAT_09190e70);
    FUN_03f5c2a4(&DAT_09218458);
    FUN_03f5c2a4(&DAT_0921f740);
    FUN_03f5c2a4(&DAT_0921f3b0);
    FUN_03f5c2a4(&DAT_0921f748);
    FUN_03f5c2a4(&DAT_0921f368);
    FUN_03f5c2a4(&DAT_091f9df0);
    FUN_03f5c2a4(&DAT_09218ee8);
    FUN_03f5c2a4(&DAT_091ff810);
    FUN_03f5c2a4(&DAT_091f9ec0);
    DAT_095204f8 = 1;
  }
  local_54 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_09180f10);
  GoogleMobileAds_Api_AdRequest___ctor(lVar2,0);
  if (*(long *)(param_3 + 0x20) == 0) goto LAB_073100e0;
  if (*(int *)(*(long *)(param_3 + 0x20) + 0x18) == 1) {
    fVar10 = (float)IapAdsSystem_GoogleMobileAdsControlBanner__CalculateScreenPosMrec();
    if (*(char *)(param_3 + 0x48) == '\0') {
      if (DAT_09515cf4 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09515cf4 = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar12 = (double)fVar10;
      dVar11 = modf(dVar12,local_78);
      if (0.0 <= fVar10) {
        if (dVar11 == 0.5) {
          dVar11 = 1.0;
          goto LAB_0730fd3c;
        }
        dVar12 = (double)(long)(dVar12 + 0.5);
      }
      else if (dVar11 == -0.5) {
        dVar11 = -1.0;
LAB_0730fd3c:
        dVar12 = local_78[0];
        if (((long)local_78[0] & 1U) != 0) {
          dVar12 = local_78[0] + dVar11;
        }
      }
      else {
        dVar12 = (double)(long)(dVar12 + -0.5);
      }
      iVar5 = -0x80000000;
      if (dVar12 != INFINITY) {
        iVar5 = (int)dVar12;
      }
      if (*(char *)(param_3 + 0x48) != '\0') goto LAB_0730fd84;
      if (DAT_09515cf4 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09515cf4 = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      dVar12 = (double)param_2;
      dVar11 = modf(dVar12,local_78);
      if (0.0 <= param_2) {
        if (dVar11 == 0.5) {
          dVar11 = 1.0;
          goto LAB_0731009c;
        }
        local_78[0] = (double)(long)(dVar12 + 0.5);
      }
      else if (dVar11 == -0.5) {
        dVar11 = -1.0;
LAB_0731009c:
        if (((long)local_78[0] & 1U) != 0) {
          local_78[0] = local_78[0] + dVar11;
        }
      }
      else {
        local_78[0] = (double)(long)(dVar12 + -0.5);
      }
      iVar6 = -0x80000000;
      if (local_78[0] != INFINITY) {
        iVar6 = (int)local_78[0];
      }
    }
    else {
      iVar5 = *(int *)(param_3 + 0x4c);
LAB_0730fd84:
      iVar6 = *(int *)(param_3 + 0x50);
    }
    if (*(long *)(param_3 + 0x20) == 0) goto LAB_073100e0;
    if (*(char *)(*(long *)(param_3 + 0x20) + 0x39) == '\0') {
      uVar8 = *(undefined8 *)(param_3 + 0x18);
      if (*(int *)(DAT_09180f18 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = *(undefined8 *)(*(long *)(DAT_09180f18 + 0xb8) + 0x10);
      lVar4 = thunk_FUN_03f9944c(DAT_09181a38);
      GoogleMobileAds_Api_BannerView___ctor(lVar4,uVar8,uVar9,iVar5,iVar6,0);
    }
    else {
      uVar1 = GoogleMobileAds_Api_MobileAds_Utils__GetDeviceSafeWidth(0);
      lVar3 = thunk_FUN_03f9944c(DAT_09180f18);
      GoogleMobileAds_Api_AdSize___ctor(lVar3,uVar1,0xfa,0);
      uVar8 = *(undefined8 *)(param_3 + 0x18);
      lVar4 = thunk_FUN_03f9944c(DAT_09181a38);
      GoogleMobileAds_Api_BannerView___ctor(lVar4,uVar8,lVar3,0,iVar6,0);
      if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) goto LAB_073100e0;
      FUN_06fd8454(*(long *)(lVar2 + 0x20),DAT_0921f748,DAT_091f9df0,DAT_0919feb8);
      if ((*(long *)(lVar2 + 0x20) == 0) ||
         (FUN_06fd8454(*(long *)(lVar2 + 0x20),DAT_0921f740,DAT_091f9ec0,DAT_0919feb8), lVar3 == 0))
      goto LAB_073100e0;
      local_54 = *(undefined4 *)(lVar3 + 0x18);
      lVar7 = *(long *)(lVar2 + 0x20);
      uVar8 = System_Int32__ToString(&local_54,0);
      if (lVar7 == 0) goto LAB_073100e0;
      FUN_06fd8454(lVar7,DAT_0921f3b0,uVar8,DAT_0919feb8);
      local_54 = *(undefined4 *)(lVar3 + 0x1c);
      lVar3 = *(long *)(lVar2 + 0x20);
      uVar8 = System_Int32__ToString(&local_54,0);
      if (lVar3 == 0) goto LAB_073100e0;
      FUN_06fd8454(lVar3,DAT_0921f368,uVar8,DAT_0919feb8);
    }
  }
  else {
    uVar8 = *(undefined8 *)(param_3 + 0x18);
    if (*(int *)(DAT_09180f18 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = GoogleMobileAds_Api_AdSize__GetCurrentOrientationAnchoredAdaptiveBannerAdSizeWithWidth
                      (*(undefined4 *)(*(long *)(DAT_09180f18 + 0xb8) + 0x30),0);
    lVar4 = thunk_FUN_03f9944c(DAT_09181a38);
    GoogleMobileAds_Api_BannerView___ctor(lVar4,uVar8,uVar9,1,0);
  }
  IapAdsSystem_GoogleMobileAdsControlBanner__RegisterEventHandlers(param_3,lVar4);
  if (*(long *)(param_3 + 0x20) != 0) {
    if (*(int *)(*(long *)(param_3 + 0x20) + 0x18) == 2) {
      if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) goto LAB_073100e0;
      FUN_06fd8454(*(long *)(lVar2 + 0x20),DAT_09218ee8,DAT_09218458,DAT_0919feb8);
    }
    if (lVar4 != 0) {
      GoogleMobileAds_Api_BannerView__LoadAd(lVar4,lVar2,0);
      if (*(long *)(param_3 + 0x20) != 0) {
        local_78[0] = DAT_09190e70;
        local_68 = *(undefined4 *)(*(long *)(param_3 + 0x20) + 0x18);
        local_78[1] = -NAN;
        uVar8 = System_Enum__ToString(local_78,0);
        uVar8 = System_String__Concat(DAT_091ff810,uVar8,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835d0);
        }
        UnityEngine_Debug__Log(uVar8,0);
        return lVar4;
      }
    }
  }
LAB_073100e0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


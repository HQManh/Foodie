// rea decompile_all
// name: IapAdsSystem.AdmobManager.<>c__DisplayClass58_0$$<InitializeGoogleMobileAds>b__0
// address: 0x72f8aa8
// body: available
// range: 0x72f8aa8-0x72f92ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x72f92f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x72f92fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_AdmobManager_<>c__DisplayClass58_0__<InitializeGoogleMobileAds>b__0
               (long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined8 local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  
  if ((DAT_09520428 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09190e90);
    FUN_03f5c2a4(&DAT_09190e50);
    FUN_03f5c2a4(&DAT_09190eb8);
    FUN_03f5c2a4(&DAT_09190e68);
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919f3b8);
    FUN_03f5c2a4(&DAT_091a65d0);
    FUN_03f5c2a4(&DAT_091a65d8);
    FUN_03f5c2a4(&DAT_091a65e0);
    FUN_03f5c2a4(&DAT_091a9750);
    FUN_03f5c2a4(&DAT_091a9758);
    FUN_03f5c2a4(&DAT_09204f90);
    FUN_03f5c2a4(&DAT_091f6648);
    FUN_03f5c2a4(&DAT_091fc940);
    FUN_03f5c2a4(&DAT_0920c028);
    FUN_03f5c2a4(&DAT_091fb4a0);
    FUN_03f5c2a4(&DAT_09203770);
    FUN_03f5c2a4(&DAT_091fbc50);
    FUN_03f5c2a4(&DAT_092187a0);
    FUN_03f5c2a4(&DAT_091feb48);
    FUN_03f5c2a4(&DAT_09208230);
    FUN_03f5c2a4(&DAT_09218798);
    FUN_03f5c2a4(&DAT_091fb188);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_091f6700);
    DAT_09520428 = 1;
  }
  local_70 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  if (param_2 == 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_09203770,0);
    lVar4 = *(long *)(param_1 + 0x10);
    if (lVar4 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x072f8df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
    return;
  }
  lVar4 = GoogleMobileAds_Api_InitializationStatus__getAdapterStatusMap(param_2,0);
  if (lVar4 == 0) goto LAB_072f92f8;
  FUN_06fd8888(&local_b8,lVar4,DAT_0919f3b8);
  local_70 = local_98;
  puStack_88 = puStack_b0;
  local_90 = local_b8;
  local_78 = lStack_a0;
  local_80 = local_a8;
  local_b8 = 0;
  puStack_b0 = &local_90;
  while (uVar5 = FUN_072753d4(&local_90,DAT_091a65d8), (uVar5 & 1) != 0) {
    if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(local_78 + 0x10) == 0) {
      uVar6 = System_String__Concat(DAT_091fb4a0,local_80,DAT_091f6700,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__Log(uVar6,0);
    }
    else if (*(int *)(local_78 + 0x10) == 1) {
      uVar6 = System_String__Concat(DAT_091fb4a0,local_80,DAT_091f6648,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__Log(uVar6,0);
    }
  }
  FUN_072754f4(&local_90,DAT_091a65d0);
  if (*(int *)(param_1 + 0x18) == 1) {
    uVar13 = 0;
    uVar6 = DAT_091f5700;
    uVar9 = DAT_091f5700;
    uVar12 = DAT_091f5700;
  }
  else if (*(int *)(param_1 + 0x18) == 2) {
    if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar3 = UnityEngine_Application__get_platform(0);
    if (iVar3 == 0xb) {
      puVar8 = &DAT_092187a0;
    }
    else {
      if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar3 = UnityEngine_Application__get_platform(0);
      uVar13 = 0;
      uVar6 = 0;
      uVar9 = 0;
      uVar12 = 0;
      if (iVar3 != 8) goto LAB_072f8e7c;
      puVar8 = &DAT_09218798;
    }
    uVar6 = 0;
    uVar13 = DAT_091f5700;
    uVar9 = DAT_091f5700;
    uVar12 = *puVar8;
  }
  else {
    uVar13 = 0;
    uVar6 = 0;
    uVar9 = 0;
    uVar12 = 0;
  }
LAB_072f8e7c:
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x50);
    lVar4 = thunk_FUN_03f9944c(DAT_09190e90);
    IapAdsSystem_GoogleMobileAdsControlInterstitial_AdsConfig___ctor(lVar4,0);
    if (lVar4 != 0) {
      *(undefined8 *)(lVar4 + 0x10) = DAT_09204f90;
      thunk_FUN_03f5d7b8();
      lVar7 = *(long *)(param_1 + 0x20);
      if ((lVar7 != 0) && (*(long *)(lVar7 + 0x20) != 0)) {
        uVar11 = *(undefined8 *)(*(long *)(lVar7 + 0x20) + 0x10);
        *(long *)(lVar4 + 0x20) = lVar7;
        *(undefined8 *)(lVar4 + 0x18) = uVar11;
        thunk_FUN_03f5d7b8();
        lVar7 = *(long *)(param_1 + 0x20);
        if ((lVar7 != 0) &&
           (*(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar7 + 0x44), lVar10 != 0)) {
          IapAdsSystem_GoogleMobileAdsControlInterstitial__SetUp
                    (lVar10,lVar4,uVar12,uVar6,*(undefined8 *)(lVar7 + 0x90),0);
          if (*(long *)(param_1 + 0x20) != 0) {
            lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x68);
            lVar4 = thunk_FUN_03f9944c(DAT_09190eb8);
            IapAdsSystem_GoogleMobileAdsControlRewardAds_AdsConfig___ctor(lVar4,0);
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 0x10) = DAT_0920c028;
              thunk_FUN_03f5d7b8();
              lVar7 = *(long *)(param_1 + 0x20);
              if ((lVar7 != 0) && (*(long *)(lVar7 + 0x20) != 0)) {
                uVar12 = *(undefined8 *)(*(long *)(lVar7 + 0x20) + 0x18);
                *(long *)(lVar4 + 0x20) = lVar7;
                *(undefined8 *)(lVar4 + 0x18) = uVar12;
                thunk_FUN_03f5d7b8();
                lVar7 = *(long *)(param_1 + 0x20);
                if ((lVar7 != 0) &&
                   (*(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar7 + 0x40), lVar10 != 0)) {
                  IapAdsSystem_GoogleMobileAdsControlRewardAds__SetUp
                            (lVar10,lVar4,uVar9,uVar6,*(undefined8 *)(lVar7 + 0x90),0);
                  if (*(long *)(param_1 + 0x20) != 0) {
                    lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x60);
                    lVar4 = thunk_FUN_03f9944c(DAT_09190e50);
                    *(undefined4 *)(lVar4 + 0x18) = 2;
                    *(undefined4 *)(lVar4 + 0x28) = 0x3f800000;
                    System_Object___ctor(lVar4,0);
                    *(undefined8 *)(lVar4 + 0x10) = DAT_091fbc50;
                    thunk_FUN_03f5d7b8();
                    lVar10 = *(long *)(param_1 + 0x20);
                    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x20) != 0)) {
                      uVar1 = *(undefined4 *)(*(long *)(lVar10 + 0x20) + 0x20);
                      *(long *)(lVar4 + 0x20) = lVar10;
                      *(undefined4 *)(lVar4 + 0x18) = uVar1;
                      thunk_FUN_03f5d7b8();
                      lVar10 = *(long *)(param_1 + 0x20);
                      if ((lVar10 != 0) &&
                         (*(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar10 + 0x3c), lVar7 != 0
                         )) {
                        IapAdsSystem_GoogleMobileAdsControlAppOpen__SetUp
                                  (lVar7,uVar13,lVar4,*(undefined8 *)(lVar10 + 0x90));
                        if (*(long *)(param_1 + 0x20) != 0) {
                          lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x58);
                          lVar4 = thunk_FUN_03f9944c(DAT_09190e90);
                          IapAdsSystem_GoogleMobileAdsControlInterstitial_AdsConfig___ctor(lVar4,0);
                          if (lVar4 != 0) {
                            *(undefined8 *)(lVar4 + 0x10) = DAT_091fb188;
                            thunk_FUN_03f5d7b8();
                            lVar7 = *(long *)(param_1 + 0x20);
                            if ((lVar7 != 0) && (*(long *)(lVar7 + 0x20) != 0)) {
                              uVar1 = *(undefined4 *)(*(long *)(lVar7 + 0x20) + 0x24);
                              *(long *)(lVar4 + 0x20) = lVar7;
                              *(undefined4 *)(lVar4 + 0x18) = uVar1;
                              thunk_FUN_03f5d7b8();
                              lVar7 = *(long *)(param_1 + 0x20);
                              if ((lVar7 != 0) &&
                                 (*(undefined4 *)(lVar4 + 0x28) = *(undefined4 *)(lVar7 + 0x48),
                                 lVar10 != 0)) {
                                IapAdsSystem_GoogleMobileAdsControlInterstitial__SetUp
                                          (lVar10,lVar4,uVar13,0,*(undefined8 *)(lVar7 + 0x90),0);
                                if (*(long *)(param_1 + 0x20) != 0) {
                                  lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x70);
                                  lVar4 = thunk_FUN_03f9944c(DAT_09190e68);
                                  IapAdsSystem_GoogleMobileAdsControlBanner_AdsConfig___ctor
                                            (lVar4,0);
                                  if (lVar4 != 0) {
                                    *(undefined8 *)(lVar4 + 0x10) = DAT_091fc940;
                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10));
                                    *(undefined4 *)(lVar4 + 0x18) = 0;
                                    if ((*(long *)(param_1 + 0x20) != 0) &&
                                       (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x20),
                                       lVar7 != 0)) {
                                      uVar13 = *(undefined8 *)(lVar7 + 0x28);
                                      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(lVar7 + 0x30);
                                      *(undefined8 *)(lVar4 + 0x1c) = uVar13;
                                      thunk_FUN_03f5d7b8();
                                      if ((*(long *)(param_1 + 0x20) != 0) &&
                                         (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x20),
                                         lVar7 != 0)) {
                                        *(undefined8 *)(lVar4 + 0x30) =
                                             *(undefined8 *)(lVar7 + 0x38);
                                        thunk_FUN_03f5d7b8();
                                        lVar7 = *(long *)(param_1 + 0x20);
                                        if (lVar7 != 0) {
                                          uVar2 = *(undefined1 *)(lVar7 + 0x28);
                                          *(undefined1 *)(lVar4 + 0x3a) = 1;
                                          *(undefined1 *)(lVar4 + 0x38) = uVar2;
                                          if (lVar10 != 0) {
                                            IapAdsSystem_GoogleMobileAdsControlBanner__SetUp
                                                      (lVar10,uVar6,lVar4,
                                                       *(undefined8 *)(lVar7 + 0x90),0);
                                            if (*(long *)(param_1 + 0x20) != 0) {
                                              lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x78);
                                              lVar4 = thunk_FUN_03f9944c(DAT_09190e68);
                                              IapAdsSystem_GoogleMobileAdsControlBanner_AdsConfig___ctor
                                                        (lVar4,0);
                                              if (lVar4 != 0) {
                                                *(undefined8 *)(lVar4 + 0x10) = DAT_09208230;
                                                thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10));
                                                *(undefined4 *)(lVar4 + 0x18) = 1;
                                                if ((*(long *)(param_1 + 0x20) != 0) &&
                                                   (lVar7 = *(long *)(*(long *)(param_1 + 0x20) +
                                                                     0x20), lVar7 != 0)) {
                                                  uVar13 = *(undefined8 *)(lVar7 + 0x40);
                                                  *(undefined8 *)(lVar4 + 0x28) =
                                                       *(undefined8 *)(lVar7 + 0x48);
                                                  *(undefined8 *)(lVar4 + 0x1c) = uVar13;
                                                  thunk_FUN_03f5d7b8();
                                                  if ((*(long *)(param_1 + 0x20) != 0) &&
                                                     (lVar7 = *(long *)(*(long *)(param_1 + 0x20) +
                                                                       0x20), lVar7 != 0)) {
                                                    *(undefined8 *)(lVar4 + 0x30) =
                                                         *(undefined8 *)(lVar7 + 0x50);
                                                    thunk_FUN_03f5d7b8();
                                                    lVar7 = *(long *)(param_1 + 0x20);
                                                    if (lVar7 != 0) {
                                                      *(undefined1 *)(lVar4 + 0x38) =
                                                           *(undefined1 *)(lVar7 + 0x28);
                                                      if ((*(long *)(lVar7 + 0x20) != 0) &&
                                                         (*(bool *)(lVar4 + 0x39) =
                                                               *(int *)(*(long *)(lVar7 + 0x20) +
                                                                       0x58) == 1, lVar10 != 0)) {
                                                                                                                
                                                  IapAdsSystem_GoogleMobileAdsControlBanner__SetUp
                                                            (lVar10,uVar6,lVar4,
                                                             *(undefined8 *)(lVar7 + 0x90),0);
                                                  if (*(long *)(param_1 + 0x20) != 0) {
                                                    lVar10 = *(long *)(*(long *)(param_1 + 0x20) +
                                                                      0x80);
                                                    lVar4 = thunk_FUN_03f9944c(DAT_09190e68);
                                                                                                        
                                                  IapAdsSystem_GoogleMobileAdsControlBanner_AdsConfig___ctor
                                                            (lVar4,0);
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) = DAT_091feb48;
                                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10))
                                                    ;
                                                    *(undefined4 *)(lVar4 + 0x18) = 2;
                                                    if ((*(long *)(param_1 + 0x20) != 0) &&
                                                       (lVar10 != 0)) {
                                                                                                            
                                                  IapAdsSystem_GoogleMobileAdsControlBanner__SetUp
                                                            (lVar10,0,lVar4,
                                                             *(undefined8 *)
                                                              (*(long *)(param_1 + 0x20) + 0x90),0);
                                                  if (*(long *)(param_1 + 0x20) != 0) {
                                                    *(undefined1 *)
                                                     (*(long *)(param_1 + 0x20) + 0x38) = 1;
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_072f92f8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


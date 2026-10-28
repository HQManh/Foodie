// rea decompile_all
// name: IapAdsSystem.MaxAdsControlInterstitial$$SetUp
// address: 0x731eef8
// body: available
// range: 0x731eef8-0x731fa7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x731f69c to 0x85f6aa8 UnityEngine.Debug$$Log (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x731fa78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x731fa7c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_MaxAdsControlInterstitial__SetUp(long param_1,long param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  
  if ((DAT_09520597 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174e58);
    FUN_03f5c2a4(&DAT_09174e60);
    FUN_03f5c2a4(&DAT_09174f78);
    FUN_03f5c2a4(&DAT_09192b60);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09196a38);
    FUN_03f5c2a4(&DAT_09196a40);
    FUN_03f5c2a4(&DAT_091d2bd0);
    FUN_03f5c2a4(&DAT_091d2bd8);
    FUN_03f5c2a4(&DAT_091d2be0);
    FUN_03f5c2a4(&DAT_091d2be8);
    FUN_03f5c2a4(&DAT_091d2bf0);
    FUN_03f5c2a4(&DAT_091d2bf8);
    FUN_03f5c2a4(&DAT_09187f00);
    FUN_03f5c2a4(&DAT_091d2c50);
    FUN_03f5c2a4(&DAT_091d2c60);
    FUN_03f5c2a4(&DAT_09188520);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_0921f388);
    FUN_03f5c2a4(&DAT_0921f370);
    FUN_03f5c2a4(&DAT_0921f378);
    FUN_03f5c2a4(&DAT_09213ed0);
    FUN_03f5c2a4(&DAT_091f8768);
    FUN_03f5c2a4(&DAT_091f86d8);
    FUN_03f5c2a4(&DAT_09213ec8);
    FUN_03f5c2a4(&DAT_09213ed8);
    FUN_03f5c2a4(&DAT_0921f380);
    FUN_03f5c2a4(&DAT_09214720);
    DAT_09520597 = 1;
  }
  plVar8 = (long *)(param_1 + 0x18);
  *plVar8 = param_2;
  thunk_FUN_03f5d7b8(plVar8,param_2);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),param_3);
  if (*plVar8 != 0) {
    bVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(*plVar8 + 0x10),0);
    *(byte *)(param_1 + 0x10) = (bVar2 ^ 0xff) & 1;
    if ((bVar2 & 1) != 0) {
      return;
    }
    uVar3 = thunk_FUN_03f9944c(DAT_09174e58);
    FUN_071cd244(uVar3,param_1,DAT_091d2bf0,0);
    MaxSdkCallbacks_Interstitial__add_OnAdLoadedEvent(uVar3,0);
    uVar3 = thunk_FUN_03f9944c(DAT_09174e60);
    FUN_071cd244(uVar3,param_1,DAT_091d2be8,0);
    MaxSdkCallbacks_Interstitial__add_OnAdLoadFailedEvent(uVar3,0);
    uVar3 = thunk_FUN_03f9944c(DAT_09174e58);
    FUN_071cd244(uVar3,param_1,DAT_091d2bd0,0);
    MaxSdkCallbacks_Interstitial__add_OnAdDisplayedEvent(uVar3,0);
    uVar3 = thunk_FUN_03f9944c(DAT_09174e58);
    FUN_071cd244(uVar3,param_1,DAT_091d2be0,0);
    MaxSdkCallbacks_Interstitial__add_OnAdHiddenEvent(uVar3,0);
    uVar3 = thunk_FUN_03f9944c(DAT_09174f78);
    FUN_071cfdac(uVar3,param_1,DAT_091d2bd8,0);
    MaxSdkCallbacks_Interstitial__add_OnAdDisplayFailedEvent(uVar3,0);
    uVar3 = thunk_FUN_03f9944c(DAT_09174e58);
    FUN_071cd244(uVar3,param_1,DAT_091d2bf8,0);
    MaxSdkCallbacks_Interstitial__add_OnAdRevenuePaidEvent(uVar3,0);
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 != 0) {
      if (((*(char *)(lVar4 + 0x20) == '\0') || (*(long *)(lVar4 + 0x18) == 0)) ||
         (lVar6 = *(long *)(*(long *)(lVar4 + 0x18) + 0x18), lVar6 == 0)) {
        lVar4 = thunk_FUN_03f9944c(DAT_09192b60);
        IapAdsSystem_MulticallAdsLoader_Config___ctor(lVar4,0);
        if (lVar4 != 0) {
          *(undefined8 *)(lVar4 + 0x10) = DAT_0921f380;
          thunk_FUN_03f5d7b8();
          lVar6 = FUN_03f5c394(DAT_091805f8,1);
          if ((*plVar8 != 0) && (lVar6 != 0)) {
            if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0731fa7c;
            *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(*plVar8 + 0x10);
            thunk_FUN_03f5d7b8();
            *(long *)(lVar4 + 0x18) = lVar6;
            thunk_FUN_03f5d7b8((long *)(lVar4 + 0x18),lVar6);
            if (*plVar8 != 0) {
              *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(*plVar8 + 0x30);
              thunk_FUN_03f5d7b8();
              if (*plVar8 != 0) {
                uVar12 = *(undefined4 *)(*plVar8 + 0x28);
                *(undefined4 *)(lVar4 + 0x28) = uVar12;
                *(undefined4 *)(lVar4 + 0x2c) = uVar12;
                uVar3 = thunk_FUN_03f9944c(DAT_09196a38);
                IapAdsSystem_MulticallAdsLoader_Config_DelegateIsReady___ctor
                          (uVar3,0,DAT_091d2c50,0);
                *(undefined8 *)(lVar4 + 0x30) = uVar3;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x30),uVar3);
                uVar3 = thunk_FUN_03f9944c(DAT_09196a40);
                IapAdsSystem_MulticallAdsLoader_Config_DelegateLoad___ctor(uVar3,0,DAT_091d2c60,0);
                *(undefined8 *)(lVar4 + 0x38) = uVar3;
                thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x38),uVar3);
                uVar3 = DAT_09188520;
                if (*plVar8 != 0) {
                  *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(*plVar8 + 0x38);
                  uVar3 = thunk_FUN_03f9944c(uVar3);
                  IapAdsSystem_MulticallAdsLoader___ctor(uVar3,lVar4,0);
                  *(undefined8 *)(param_1 + 0x50) = uVar3;
                  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),uVar3);
                  if (*(long *)(param_1 + 0x18) != 0) {
                    uVar3 = System_String__Concat
                                      (DAT_09213ec8,
                                       *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),0);
                    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_091835d0);
                    }
                    UnityEngine_Debug__Log(uVar3,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      else {
        cVar1 = *(char *)(lVar4 + 0x21);
        *(undefined1 *)(param_1 + 0x11) = 1;
        if (cVar1 == '\0') {
          lVar4 = FUN_03f5c394(DAT_091805f8,(int)lVar6 + 1);
          lVar6 = *plVar8;
          if (lVar6 != 0) {
            lVar10 = 4;
            lVar11 = 0x20;
            while (lVar7 = *(long *)(lVar6 + 0x18), lVar7 != 0) {
              uVar9 = lVar10 - 4;
              if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar9) {
                if (lVar4 != 0) {
                  if (*(uint *)(lVar4 + 0x18) == 0) goto LAB_0731fa7c;
                  lVar10 = (long)(((ulong)*(uint *)(lVar4 + 0x18) << 0x20) + -0x100000000) >> 0x1d;
                  *(undefined8 *)(lVar4 + lVar10 + 0x20) = *(undefined8 *)(lVar6 + 0x10);
                  thunk_FUN_03f5d7b8(lVar4 + 0x20 + lVar10);
                  lVar6 = thunk_FUN_03f9944c(DAT_09192b60);
                  IapAdsSystem_MulticallAdsLoader_Config___ctor(lVar6,0);
                  if (lVar6 != 0) {
                    *(undefined8 *)(lVar6 + 0x10) = DAT_0921f388;
                    thunk_FUN_03f5d7b8();
                    *(long *)(lVar6 + 0x18) = lVar4;
                    thunk_FUN_03f5d7b8((long *)(lVar6 + 0x18),lVar4);
                    if (*plVar8 != 0) {
                      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(*plVar8 + 0x30);
                      thunk_FUN_03f5d7b8();
                      uVar3 = DAT_09196a38;
                      if (*plVar8 != 0) {
                        *(undefined8 *)(lVar6 + 0x28) = *(undefined8 *)(*plVar8 + 0x24);
                        uVar3 = thunk_FUN_03f9944c(uVar3);
                        IapAdsSystem_MulticallAdsLoader_Config_DelegateIsReady___ctor
                                  (uVar3,0,DAT_091d2c50,0);
                        *(undefined8 *)(lVar6 + 0x30) = uVar3;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x30),uVar3);
                        uVar3 = thunk_FUN_03f9944c(DAT_09196a40);
                        IapAdsSystem_MulticallAdsLoader_Config_DelegateLoad___ctor
                                  (uVar3,0,DAT_091d2c60,0);
                        *(undefined8 *)(lVar6 + 0x38) = uVar3;
                        thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x38),uVar3);
                        uVar3 = DAT_09188520;
                        if (*plVar8 != 0) {
                          *(undefined4 *)(lVar6 + 0x40) = *(undefined4 *)(*plVar8 + 0x38);
                          uVar3 = thunk_FUN_03f9944c(uVar3);
                          IapAdsSystem_MulticallAdsLoader___ctor(uVar3,lVar6,0);
                          *(undefined8 *)(param_1 + 0x40) = uVar3;
                          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),uVar3);
                          lVar4 = FUN_03f5c394(DAT_091805f8,5);
                          if (lVar4 != 0) {
                            if (*(int *)(lVar4 + 0x18) == 0) goto LAB_0731fa7c;
                            puVar5 = &DAT_09213ed0;
                            goto LAB_0731f894;
                          }
                        }
                      }
                    }
                  }
                }
                break;
              }
              if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_0731fa7c;
              if (lVar4 == 0) break;
              if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_0731fa7c;
              *(undefined8 *)(lVar4 + lVar10 * 8) = *(undefined8 *)(lVar7 + lVar10 * 8);
              thunk_FUN_03f5d7b8(lVar4 + lVar11);
              lVar6 = *plVar8;
              lVar10 = lVar10 + 1;
              lVar11 = lVar11 + 8;
              if (lVar6 == 0) break;
            }
          }
        }
        else {
          lVar4 = thunk_FUN_03f9944c(DAT_09192b60);
          IapAdsSystem_MulticallAdsLoader_Config___ctor(lVar4,0);
          if (lVar4 != 0) {
            *(undefined8 *)(lVar4 + 0x10) = DAT_0921f370;
            thunk_FUN_03f5d7b8();
            lVar6 = FUN_03f5c394(DAT_091805f8,1);
            if ((*plVar8 != 0) && (lVar6 != 0)) {
              if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0731fa7c;
              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(*plVar8 + 0x10);
              thunk_FUN_03f5d7b8();
              *(long *)(lVar4 + 0x18) = lVar6;
              thunk_FUN_03f5d7b8((long *)(lVar4 + 0x18),lVar6);
              if (*plVar8 != 0) {
                *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(*plVar8 + 0x30);
                thunk_FUN_03f5d7b8();
                if (*plVar8 != 0) {
                  uVar12 = *(undefined4 *)(*plVar8 + 0x28);
                  *(undefined4 *)(lVar4 + 0x28) = uVar12;
                  *(undefined4 *)(lVar4 + 0x2c) = uVar12;
                  uVar3 = thunk_FUN_03f9944c(DAT_09196a38);
                  IapAdsSystem_MulticallAdsLoader_Config_DelegateIsReady___ctor
                            (uVar3,0,DAT_091d2c50,0);
                  *(undefined8 *)(lVar4 + 0x30) = uVar3;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x30),uVar3);
                  uVar3 = thunk_FUN_03f9944c(DAT_09196a40);
                  IapAdsSystem_MulticallAdsLoader_Config_DelegateLoad___ctor(uVar3,0,DAT_091d2c60,0)
                  ;
                  *(undefined8 *)(lVar4 + 0x38) = uVar3;
                  thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x38),uVar3);
                  uVar3 = DAT_09188520;
                  if (*plVar8 != 0) {
                    *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(*plVar8 + 0x38);
                    uVar3 = thunk_FUN_03f9944c(uVar3);
                    IapAdsSystem_MulticallAdsLoader___ctor(uVar3,lVar4,0);
                    *(undefined8 *)(param_1 + 0x50) = uVar3;
                    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),uVar3);
                    lVar4 = thunk_FUN_03f9944c(DAT_09192b60);
                    IapAdsSystem_MulticallAdsLoader_Config___ctor(lVar4,0);
                    if (lVar4 != 0) {
                      *(undefined8 *)(lVar4 + 0x10) = DAT_0921f378;
                      thunk_FUN_03f5d7b8();
                      if (*plVar8 != 0) {
                        *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)(*plVar8 + 0x18);
                        thunk_FUN_03f5d7b8();
                        if (*plVar8 != 0) {
                          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(*plVar8 + 0x30);
                          thunk_FUN_03f5d7b8();
                          uVar3 = DAT_09196a38;
                          if (*plVar8 != 0) {
                            uVar12 = *(undefined4 *)(*plVar8 + 0x24);
                            *(undefined4 *)(lVar4 + 0x28) = uVar12;
                            *(undefined4 *)(lVar4 + 0x2c) = uVar12;
                            uVar3 = thunk_FUN_03f9944c(uVar3);
                            IapAdsSystem_MulticallAdsLoader_Config_DelegateIsReady___ctor
                                      (uVar3,0,DAT_091d2c50,0);
                            *(undefined8 *)(lVar4 + 0x30) = uVar3;
                            thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x30),uVar3);
                            uVar3 = thunk_FUN_03f9944c(DAT_09196a40);
                            IapAdsSystem_MulticallAdsLoader_Config_DelegateLoad___ctor
                                      (uVar3,0,DAT_091d2c60,0);
                            *(undefined8 *)(lVar4 + 0x38) = uVar3;
                            thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x38),uVar3);
                            uVar3 = DAT_09188520;
                            if (*plVar8 != 0) {
                              *(undefined4 *)(lVar4 + 0x40) = *(undefined4 *)(*plVar8 + 0x3c);
                              uVar3 = thunk_FUN_03f9944c(uVar3);
                              IapAdsSystem_MulticallAdsLoader___ctor(uVar3,lVar4,0);
                              *(undefined8 *)(param_1 + 0x48) = uVar3;
                              thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),uVar3);
                              lVar4 = FUN_03f5c394(DAT_091805f8,5);
                              if (lVar4 != 0) {
                                if (*(int *)(lVar4 + 0x18) != 0) {
                                  puVar5 = &DAT_09213ed8;
LAB_0731f894:
                                  *(undefined8 *)(lVar4 + 0x20) = *puVar5;
                                  thunk_FUN_03f5d7b8();
                                  if (*plVar8 == 0) goto LAB_0731fa78;
                                  if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) != 0) {
                                    *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(*plVar8 + 0x10);
                                    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x28));
                                    if (2 < *(uint *)(lVar4 + 0x18)) {
                                      *(undefined8 *)(lVar4 + 0x30) = DAT_091f8768;
                                      thunk_FUN_03f5d7b8();
                                      if (*plVar8 == 0) goto LAB_0731fa78;
                                      uVar3 = System_String__Join(DAT_091f86d8,
                                                                  *(undefined8 *)(*plVar8 + 0x18),0)
                                      ;
                                      if ((*(uint *)(lVar4 + 0x18) & 0xfffffffc) != 0) {
                                        *(undefined8 *)(lVar4 + 0x38) = uVar3;
                                        thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x38),uVar3);
                                        if (4 < *(uint *)(lVar4 + 0x18)) {
                                          *(undefined8 *)(lVar4 + 0x40) = DAT_09214720;
                                          thunk_FUN_03f5d7b8();
                                          uVar3 = System_String__Concat(lVar4,0);
                                          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
                                            FUN_03f5c424(DAT_091835d0);
                                          }
                                          UnityEngine_Debug__Log(uVar3,0);
                                          lVar4 = FUN_03f5c394(DAT_091805f8,1);
                                          if ((*plVar8 != 0) && (lVar4 != 0)) {
                                            if (*(int *)(lVar4 + 0x18) == 0) goto LAB_0731fa7c;
                                            *(undefined8 *)(lVar4 + 0x20) =
                                                 *(undefined8 *)(*plVar8 + 0x10);
                                            thunk_FUN_03f5d7b8();
                                            if (*(int *)(DAT_09187f00 + 0xe4) == 0) {
                                              FUN_03f5c424();
                                            }
                                            IapAdsSystem_MaxAdsManager__DisableAutoRetries(lVar4);
                                            lVar4 = *plVar8;
                                            if (lVar4 != 0) {
                                              uVar9 = 0;
                                              while (*(long *)(lVar4 + 0x18) != 0) {
                                                if ((long)*(int *)(*(long *)(lVar4 + 0x18) + 0x18)
                                                    <= (long)uVar9) {
                                                  return;
                                                }
                                                lVar4 = FUN_03f5c394(DAT_091805f8,1);
                                                if ((*plVar8 == 0) ||
                                                   (lVar6 = *(long *)(*plVar8 + 0x18), lVar6 == 0))
                                                break;
                                                if (*(uint *)(lVar6 + 0x18) <= uVar9)
                                                goto LAB_0731fa7c;
                                                if (lVar4 == 0) break;
                                                if (*(int *)(lVar4 + 0x18) == 0) goto LAB_0731fa7c;
                                                *(undefined8 *)(lVar4 + 0x20) =
                                                     *(undefined8 *)(lVar6 + uVar9 * 8 + 0x20);
                                                thunk_FUN_03f5d7b8();
                                                if (*(int *)(DAT_09187f00 + 0xe4) == 0) {
                                                  FUN_03f5c424();
                                                }
                                                IapAdsSystem_MaxAdsManager__DisableAutoRetries
                                                          (lVar4);
                                                lVar4 = *plVar8;
                                                uVar9 = uVar9 + 1;
                                                if (lVar4 == 0) break;
                                              }
                                            }
                                          }
                                          goto LAB_0731fa78;
                                        }
                                      }
                                    }
                                  }
                                }
LAB_0731fa7c:
                    /* WARNING: Subroutine does not return */
                                FUN_03f5c558();
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
LAB_0731fa78:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


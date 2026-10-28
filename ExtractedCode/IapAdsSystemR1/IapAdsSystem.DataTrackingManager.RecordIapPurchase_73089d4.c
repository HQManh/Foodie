// rea decompile_all
// name: IapAdsSystem.DataTrackingManager$$RecordIapPurchase
// address: 0x73089d4
// body: available
// range: 0x73089d4-0x7309153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7309140 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7309144 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7309150 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
IapAdsSystem_DataTrackingManager__RecordIapPurchase
          (long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((DAT_095204a4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091837d8);
    FUN_03f5c2a4(&DAT_09180358);
    FUN_03f5c2a4(&DAT_09188e48);
    FUN_03f5c2a4(&DAT_092208b0);
    FUN_03f5c2a4(&DAT_09221138);
    FUN_03f5c2a4(&DAT_09224328);
    FUN_03f5c2a4(&DAT_09224f00);
    FUN_03f5c2a4(&DAT_09225370);
    FUN_03f5c2a4(&DAT_09223838);
    FUN_03f5c2a4(&DAT_0921c7a0);
    FUN_03f5c2a4(&DAT_0921e6b0);
    FUN_03f5c2a4(&DAT_09219f40);
    FUN_03f5c2a4(&DAT_0921b508);
    FUN_03f5c2a4(&DAT_092208a8);
    FUN_03f5c2a4(&DAT_09221300);
    FUN_03f5c2a4(&DAT_0921d0d8);
    FUN_03f5c2a4(&DAT_0921d0a8);
    FUN_03f5c2a4(&DAT_09220d28);
    DAT_095204a4 = 1;
  }
  if ((param_2 == 0) ||
     (uVar2 = IapAdsSystem_IapAdsGlobalConfig__get_IsAllowIapTracking(0), (uVar2 & 1) == 0)) {
    return 0;
  }
  if ((param_4 & 1) != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x58);
    lVar3 = UnityEngine_Purchasing_Product__get_definition(param_2,0);
    if (lVar3 == 0) goto LAB_07309140;
    uVar2 = System_String__Equals(uVar7,*(undefined8 *)(lVar3 + 0x18),4,0);
    if ((uVar2 & 1) == 0) {
      lVar3 = UnityEngine_Purchasing_Product__get_definition(param_2,0);
      if (lVar3 != 0) {
        IapAdsSystem_DataTrackingManager__TrackIapEvent
                  (param_1,*(undefined8 *)(lVar3 + 0x18),DAT_0921b508,DAT_0921c7a0);
        return 0;
      }
      goto LAB_07309140;
    }
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 == 0) {
    IapAdsSystem_DataTrackingManager__SetUpUserProperties(param_1);
    lVar3 = *(long *)(param_1 + 0x28);
  }
  lVar4 = UnityEngine_Purchasing_Product__get_metadata(param_2,0);
  if (lVar4 != 0) {
    uVar7 = *(undefined8 *)(lVar4 + 0x30);
    uVar8 = *(undefined8 *)(lVar4 + 0x38);
    lVar4 = UnityEngine_Purchasing_Product__get_metadata(param_2,0);
    if ((lVar4 != 0) && (lVar3 != 0)) {
      uVar2 = IapAdsSystem_UserAnalyticsState__RecordIap
                        (lVar3,param_3,uVar7,uVar8,*(undefined8 *)(lVar4 + 0x28),0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      if (*(long *)(param_1 + 0x28) != 0) {
        IapAdsSystem_UserAnalyticsState__Save(*(long *)(param_1 + 0x28),1,0);
        IapAdsSystem_DataTrackingManager__SyncUserProperties(param_1);
        lVar3 = UnityEngine_Purchasing_Product__get_definition(param_2,0);
        if (lVar3 != 0) {
          IapAdsSystem_DataTrackingManager__TrackIapEvent
                    (param_1,*(undefined8 *)(lVar3 + 0x18),DAT_09223838,0);
          uVar7 = *(undefined8 *)(param_1 + 0x40);
          lVar3 = UnityEngine_Purchasing_Product__get_definition(param_2,0);
          if (lVar3 != 0) {
            uVar2 = System_String__Equals(uVar7,*(undefined8 *)(lVar3 + 0x18),4,0);
            plVar5 = (long *)FUN_03f5c394(DAT_09180358,5);
            uVar8 = DAT_0921e6b0;
            uVar7 = DAT_0921d0a8;
            if (*(long *)(param_1 + 0x20) != 0) {
              lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
              if (lVar3 == 0) {
                lVar3 = **(long **)(DAT_09535468 + 0xb8);
              }
              lVar4 = thunk_FUN_03f9944c(DAT_09188e48);
              Firebase_Analytics_Parameter___ctor(lVar4,uVar8,lVar3,0);
              if (plVar5 != (long *)0x0) {
                if ((lVar4 != 0) &&
                   (lVar3 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0))
                goto LAB_07309148;
                if ((int)plVar5[3] == 0) goto LAB_07309144;
                plVar5[4] = lVar4;
                thunk_FUN_03f5d7b8(plVar5 + 4,lVar4);
                lVar3 = UnityEngine_Purchasing_Product__get_definition(param_2,0);
                if (lVar3 == 0) goto LAB_07309140;
                uVar8 = *(undefined8 *)(lVar3 + 0x18);
                lVar3 = thunk_FUN_03f9944c(DAT_09188e48);
                Firebase_Analytics_Parameter___ctor(lVar3,DAT_092208a8,uVar8,0);
                if ((lVar3 != 0) &&
                   (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0))
                {
LAB_07309148:
                  uVar7 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c414(uVar7,0);
                }
                if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
                  plVar5[5] = lVar3;
                  thunk_FUN_03f5d7b8(plVar5 + 5,lVar3);
                  uVar8 = DAT_092208b0;
                  if ((uVar2 & 1) == 0) {
                    lVar3 = UnityEngine_Purchasing_Product__get_definition(param_2,0);
                    if (lVar3 == 0) goto LAB_07309140;
                    puVar6 = (undefined8 *)(lVar3 + 0x18);
                  }
                  else {
                    puVar6 = (undefined8 *)(param_1 + 0x48);
                  }
                  uVar9 = *puVar6;
                  lVar3 = thunk_FUN_03f9944c(DAT_09188e48);
                  Firebase_Analytics_Parameter___ctor(lVar3,uVar8,uVar9,0);
                  if ((lVar3 != 0) &&
                     (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar5 + 0x40)), lVar4 == 0)
                     ) goto LAB_07309148;
                  if (2 < *(uint *)(plVar5 + 3)) {
                    plVar5[6] = lVar3;
                    thunk_FUN_03f5d7b8(plVar5 + 6,lVar3);
                    uVar8 = DAT_09220d28;
                    puVar6 = (undefined8 *)(param_1 + 0x50);
                    if ((uVar2 & 1) == 0) {
                      puVar6 = &DAT_09224f00;
                    }
                    uVar9 = *puVar6;
                    lVar3 = thunk_FUN_03f9944c(DAT_09188e48);
                    Firebase_Analytics_Parameter___ctor(lVar3,uVar8,uVar9,0);
                    if ((lVar3 != 0) &&
                       (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar5 + 0x40)),
                       lVar4 == 0)) goto LAB_07309148;
                    if ((*(uint *)(plVar5 + 3) & 0xfffffffc) != 0) {
                      plVar5[7] = lVar3;
                      thunk_FUN_03f5d7b8(plVar5 + 7,lVar3);
                      if (*(long *)(param_1 + 0x28) == 0) goto LAB_07309140;
                      iVar1 = *(int *)(*(long *)(param_1 + 0x28) + 0x98);
                      lVar3 = thunk_FUN_03f9944c(DAT_09188e48);
                      Firebase_Analytics_Parameter___ctor(lVar3,DAT_0921d0d8,(long)iVar1,0);
                      if ((lVar3 != 0) &&
                         (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar5 + 0x40)),
                         lVar4 == 0)) goto LAB_07309148;
                      if (4 < *(uint *)(plVar5 + 3)) {
                        plVar5[8] = lVar3;
                        thunk_FUN_03f5d7b8(plVar5 + 8,lVar3);
                        IapAdsSystem_DataTrackingManager__LogEvent(param_1,uVar7,plVar5);
                        plVar5 = (long *)FUN_03f5c394(DAT_09180358,4);
                        uVar2 = System_String__IsNullOrEmpty(param_3,0);
                        uVar9 = DAT_09224328;
                        uVar8 = DAT_09221300;
                        uVar7 = DAT_09224f00;
                        if ((uVar2 & 1) == 0) {
                          uVar7 = param_3;
                        }
                        lVar3 = thunk_FUN_03f9944c(DAT_09188e48);
                        Firebase_Analytics_Parameter___ctor(lVar3,uVar9,uVar7,0);
                        if (plVar5 == (long *)0x0) goto LAB_07309140;
                        if ((lVar3 != 0) &&
                           (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar5 + 0x40)),
                           lVar4 == 0)) goto LAB_07309148;
                        if ((int)plVar5[3] != 0) {
                          plVar5[4] = lVar3;
                          thunk_FUN_03f5d7b8(plVar5 + 4,lVar3);
                          lVar3 = UnityEngine_Purchasing_Product__get_metadata(param_2,0);
                          if (lVar3 == 0) goto LAB_07309140;
                          uVar7 = *(undefined8 *)(lVar3 + 0x28);
                          lVar3 = thunk_FUN_03f9944c(DAT_09188e48);
                          Firebase_Analytics_Parameter___ctor(lVar3,DAT_09219f40,uVar7,0);
                          if ((lVar3 != 0) &&
                             (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar5 + 0x40)),
                             lVar4 == 0)) goto LAB_07309148;
                          if ((*(uint *)(plVar5 + 3) & 0xfffffffe) != 0) {
                            plVar5[5] = lVar3;
                            thunk_FUN_03f5d7b8(plVar5 + 5,lVar3);
                            lVar3 = UnityEngine_Purchasing_Product__get_metadata(param_2,0);
                            if (lVar3 == 0) goto LAB_07309140;
                            uVar7 = *(undefined8 *)(lVar3 + 0x30);
                            uVar9 = *(undefined8 *)(lVar3 + 0x38);
                            if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
                              FUN_03f5c424(DAT_091837d8);
                            }
                            uVar7 = System_Decimal__op_Explicit(uVar7,uVar9,0);
                            lVar3 = thunk_FUN_03f9944c(DAT_09188e48);
                            Firebase_Analytics_Parameter___ctor(uVar7,lVar3,DAT_09225370,0);
                            if ((lVar3 != 0) &&
                               (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar5 + 0x40)),
                               lVar4 == 0)) goto LAB_07309148;
                            if (2 < *(uint *)(plVar5 + 3)) {
                              plVar5[6] = lVar3;
                              thunk_FUN_03f5d7b8(plVar5 + 6,lVar3);
                              lVar3 = UnityEngine_Purchasing_Product__get_definition(param_2,0);
                              if (lVar3 == 0) goto LAB_07309140;
                              uVar7 = *(undefined8 *)(lVar3 + 0x18);
                              lVar3 = thunk_FUN_03f9944c(DAT_09188e48);
                              Firebase_Analytics_Parameter___ctor(lVar3,DAT_09221138,uVar7,0);
                              if ((lVar3 != 0) &&
                                 (lVar4 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar5 + 0x40)),
                                 lVar4 == 0)) goto LAB_07309148;
                              if ((*(uint *)(plVar5 + 3) & 0xfffffffc) != 0) {
                                plVar5[7] = lVar3;
                                thunk_FUN_03f5d7b8(plVar5 + 7,lVar3);
                                IapAdsSystem_DataTrackingManager__LogEvent(param_1,uVar8,plVar5);
                                IapAdsSystem_DataTrackingManager__TrackAppsFlyerPurchase
                                          (param_1,param_2);
                                *(undefined8 *)(param_1 + 0x40) = 0;
                                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),0);
                                *(undefined8 *)(param_1 + 0x48) = 0;
                                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x48),0);
                                *(undefined8 *)(param_1 + 0x50) = 0;
                                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),0);
                                return 1;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
LAB_07309144:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
            }
          }
        }
      }
    }
  }
LAB_07309140:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


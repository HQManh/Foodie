// rea decompile_all
// name: IapAdsSystem.DataTrackingManager$$SyncUserProperties
// address: 0x730822c
// body: available
// range: 0x730822c-0x73086d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73086d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IapAdsSystem_DataTrackingManager__SyncUserProperties(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 local_14;
  
  if ((DAT_095204a9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_09218810);
    FUN_03f5c2a4(&DAT_0921f448);
    FUN_03f5c2a4(&DAT_0921e228);
    FUN_03f5c2a4(&DAT_09218328);
    FUN_03f5c2a4(&DAT_0921d0d0);
    FUN_03f5c2a4(&DAT_092253d8);
    FUN_03f5c2a4(&DAT_092253d0);
    FUN_03f5c2a4(&DAT_0921fe38);
    FUN_03f5c2a4(&DAT_092182e0);
    FUN_03f5c2a4(&DAT_092172c0);
    FUN_03f5c2a4(&DAT_09206d18);
    FUN_03f5c2a4(&DAT_09225238);
    FUN_03f5c2a4(&DAT_09218808);
    FUN_03f5c2a4(&DAT_0921b758);
    FUN_03f5c2a4(&DAT_09225240);
    FUN_03f5c2a4(&DAT_092172a8);
    DAT_095204a9 = 1;
  }
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x30) != 2) {
    return;
  }
  uVar1 = IapAdsSystem_IapAdsGlobalConfig__get_IsAllowTrackingData(0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x28);
  if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = EssentialSystemR1_OnlineTimeCheck__get_UtcNowWithoutCheatOffset(0);
  if (lVar5 != 0) {
    local_14 = IapAdsSystem_UserAnalyticsState__RetentionDay(lVar5,uVar2,0);
    uVar2 = DAT_09225238;
    uVar3 = System_Int32__ToString(&local_14,0);
    IapAdsSystem_DataTrackingManager__SetUserProperty(param_1,uVar2,uVar3);
    uVar2 = DAT_09206d18;
    if (*(long *)(param_1 + 0x28) != 0) {
      local_14 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x30);
      uVar3 = System_Int32__ToString(&local_14,0);
      IapAdsSystem_DataTrackingManager__SetUserProperty(param_1,uVar2,uVar3);
      uVar2 = DAT_0921d0d0;
      if (*(long *)(param_1 + 0x28) != 0) {
        local_14 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x98);
        uVar3 = System_Int32__ToString(&local_14,0);
        IapAdsSystem_DataTrackingManager__SetUserProperty(param_1,uVar2,uVar3);
        uVar2 = DAT_092172c0;
        if (*(long *)(param_1 + 0x28) != 0) {
          local_14 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x84);
          uVar3 = System_Int32__ToString(&local_14,0);
          IapAdsSystem_DataTrackingManager__SetUserProperty(param_1,uVar2,uVar3);
          uVar2 = DAT_092172a8;
          if (*(long *)(param_1 + 0x28) != 0) {
            local_14 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0x88);
            uVar3 = System_Int32__ToString(&local_14,0);
            IapAdsSystem_DataTrackingManager__SetUserProperty(param_1,uVar2,uVar3);
            if (*(long *)(param_1 + 0x28) != 0) {
              uVar2 = System_Int64__ToString(*(long *)(param_1 + 0x28) + 0xb0,0);
              IapAdsSystem_DataTrackingManager__SetUserProperty(param_1,DAT_092253d0,uVar2);
              if (*(long *)(param_1 + 0x28) != 0) {
                uVar2 = System_Int64__ToString(*(long *)(param_1 + 0x28) + 0xb8,0);
                IapAdsSystem_DataTrackingManager__SetUserProperty(param_1,DAT_092253d8,uVar2);
                uVar2 = DAT_092182e0;
                if (*(long *)(param_1 + 0x28) != 0) {
                  local_14 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0xc0);
                  uVar3 = System_Int32__ToString(&local_14,0);
                  IapAdsSystem_DataTrackingManager__SetUserProperty(param_1,uVar2,uVar3);
                  uVar2 = DAT_09218328;
                  if (*(long *)(param_1 + 0x28) != 0) {
                    local_14 = *(undefined4 *)(*(long *)(param_1 + 0x28) + 0xc4);
                    uVar3 = System_Int32__ToString(&local_14,0);
                    IapAdsSystem_DataTrackingManager__SetUserProperty(param_1,uVar2,uVar3);
                    if (*(long *)(param_1 + 0x28) != 0) {
                      lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 0x18);
                      if (lVar5 == 0) {
                        lVar5 = **(long **)(DAT_09535468 + 0xb8);
                      }
                      IapAdsSystem_DataTrackingManager__SetUserProperty(param_1,DAT_0921b758,lVar5);
                      if (*(long *)(param_1 + 0x28) != 0) {
                        uVar1 = System_String__IsNullOrEmpty
                                          (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28),0);
                        lVar5 = *(long *)(param_1 + 0x28);
                        if ((uVar1 & 1) == 0) {
                          if (lVar5 == 0) goto LAB_073086d0;
                          puVar4 = (undefined8 *)(lVar5 + 0x28);
                        }
                        else {
                          if (lVar5 == 0) goto LAB_073086d0;
                          puVar4 = (undefined8 *)(lVar5 + 0x18);
                        }
                        IapAdsSystem_DataTrackingManager__SetUserProperty
                                  (param_1,DAT_0921e228,*puVar4);
                        if (*(long *)(param_1 + 0x28) != 0) {
                          uVar1 = System_String__IsNullOrEmpty
                                            (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38),0);
                          if ((uVar1 & 1) == 0) {
                            if (*(long *)(param_1 + 0x28) == 0) goto LAB_073086d0;
                            puVar4 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x38);
                          }
                          else {
                            puVar4 = &DAT_0921fe38;
                          }
                          IapAdsSystem_DataTrackingManager__SetUserProperty
                                    (param_1,DAT_09218810,*puVar4);
                          if (*(long *)(param_1 + 0x28) != 0) {
                            uVar1 = System_String__IsNullOrEmpty
                                              (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x40),0);
                            if ((uVar1 & 1) == 0) {
                              if (*(long *)(param_1 + 0x28) == 0) goto LAB_073086d0;
                              puVar4 = (undefined8 *)(*(long *)(param_1 + 0x28) + 0x40);
                            }
                            else {
                              puVar4 = &DAT_0921fe38;
                            }
                            IapAdsSystem_DataTrackingManager__SetUserProperty
                                      (param_1,DAT_09218808,*puVar4);
                            if (*(long *)(param_1 + 0x28) != 0) {
                              uVar1 = System_String__IsNullOrEmpty
                                                (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48),0
                                                );
                              if ((uVar1 & 1) == 0) {
                                if (*(long *)(param_1 + 0x28) == 0) goto LAB_073086d0;
                                IapAdsSystem_DataTrackingManager__SetUserProperty
                                          (param_1,DAT_0921f448,
                                           *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x48));
                              }
                              if (*(long *)(param_1 + 0x28) != 0) {
                                uVar1 = System_String__IsNullOrEmpty
                                                  (*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50)
                                                   ,0);
                                if ((uVar1 & 1) == 0) {
                                  if (*(long *)(param_1 + 0x28) == 0) goto LAB_073086d0;
                                  IapAdsSystem_DataTrackingManager__SetUserProperty
                                            (param_1,DAT_09225240,
                                             *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50));
                                }
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
LAB_073086d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


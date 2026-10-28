// rea decompile_all
// name: CakeOrder.CakeOrderSubsystem.GameProgressScenario$$<Awake>g__OnRemoteValueAvailable|64_0
// address: 0x42f8f68
// body: available
// range: 0x42f8f68-0x42f96cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42f96c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42f96c8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_CakeOrderSubsystem_GameProgressScenario__<Awake>g__OnRemoteValueAvailable_64_0
               (long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  undefined4 local_54;
  
  if ((DAT_0951750f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09172308);
    FUN_03f5c2a4(&DAT_091b4aa8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09221b58);
    FUN_03f5c2a4(&DAT_092024d0);
    FUN_03f5c2a4(&DAT_09202518);
    FUN_03f5c2a4(&DAT_0921f178);
    FUN_03f5c2a4(&DAT_0921f420);
    FUN_03f5c2a4(&DAT_09202508);
    FUN_03f5c2a4(&DAT_0921b3c0);
    FUN_03f5c2a4(&DAT_09223090);
    FUN_03f5c2a4(&DAT_0920b9d0);
    FUN_03f5c2a4(&DAT_0920b9d8);
    FUN_03f5c2a4(&DAT_09221190);
    FUN_03f5c2a4(&DAT_09202528);
    FUN_03f5c2a4(&DAT_09202538);
    DAT_0951750f = 1;
  }
  lVar2 = *(long *)(DAT_091b4aa8 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_042f96c4;
  uVar3 = IapAdsSystem_RemoteConfigManager__GetString(**(long **)(lVar2 + 0xb8),DAT_0921f420,0);
  uVar4 = System_String__IsNullOrEmpty(uVar3,0);
  if ((uVar4 & 1) == 0) {
    lVar2 = CakeOrder_CakeOrderSubsystem_GameProgressScenario__ImportDataMechanicFeatures
                      (uVar4,uVar3);
    if (lVar2 == 0) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar7 = &DAT_09202508;
      goto LAB_042f9130;
    }
    *(long *)(param_1 + 0x28) = lVar2;
    thunk_FUN_03f5d7b8();
  }
  else {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar7 = &DAT_0920b9d8;
LAB_042f9130:
    UnityEngine_Debug__LogWarning(*puVar7,0);
  }
  lVar2 = *(long *)(DAT_091b4aa8 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_042f96c4;
  uVar3 = IapAdsSystem_RemoteConfigManager__GetString(**(long **)(lVar2 + 0xb8),DAT_09221190,0);
  uVar4 = System_String__IsNullOrEmpty(uVar3,0);
  if ((uVar4 & 1) == 0) {
    lVar2 = CakeOrder_CakeOrderSubsystem_GameProgressScenario__ImportDataProgressScenario
                      (uVar4,uVar3);
    if (lVar2 == 0) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar7 = &DAT_09202518;
      goto LAB_042f9200;
    }
    *(long *)(param_1 + 0x30) = lVar2;
    thunk_FUN_03f5d7b8();
  }
  else {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar7 = &DAT_0920b9d8;
LAB_042f9200:
    UnityEngine_Debug__LogWarning(*puVar7,0);
  }
  lVar2 = *(long *)(DAT_091b4aa8 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_042f96c4;
  uVar3 = IapAdsSystem_RemoteConfigManager__GetString(**(long **)(lVar2 + 0xb8),DAT_09221b58,0);
  uVar4 = System_String__IsNullOrEmpty(uVar3,0);
  if ((uVar4 & 1) == 0) {
    lVar2 = CakeOrder_CakeOrderSubsystem_GameProgressScenario__ImportDataRewardConfig(uVar4,uVar3);
    if (lVar2 == 0) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar7 = &DAT_09202528;
      goto LAB_042f92d0;
    }
    *(long *)(param_1 + 0x38) = lVar2;
    thunk_FUN_03f5d7b8();
  }
  else {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar7 = &DAT_0920b9d8;
LAB_042f92d0:
    UnityEngine_Debug__LogWarning(*puVar7,0);
  }
  lVar2 = *(long *)(DAT_091b4aa8 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    uVar3 = IapAdsSystem_RemoteConfigManager__GetString(**(long **)(lVar2 + 0xb8),DAT_09223090,0);
    uVar4 = System_String__IsNullOrEmpty(uVar3,0);
    if ((uVar4 & 1) == 0) {
      lVar2 = CakeOrder_CakeOrderSubsystem_GameProgressScenario__ImportDataSpeedUpConfig
                        (uVar4,uVar3);
      if (lVar2 == 0) {
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Debug__LogWarning(DAT_09202538,0);
      }
      else {
        *(long *)(param_1 + 0x40) = lVar2;
        thunk_FUN_03f5d7b8();
      }
    }
    lVar2 = *(long *)(DAT_091b4aa8 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (**(long **)(lVar2 + 0xb8) != 0) {
      uVar3 = IapAdsSystem_RemoteConfigManager__GetString(**(long **)(lVar2 + 0xb8),DAT_0921b3c0,0);
      uVar4 = System_String__IsNullOrEmpty(uVar3,0);
      if ((uVar4 & 1) == 0) {
        lVar2 = CakeOrder_CakeOrderSubsystem_GameProgressScenario__ImportDataExtraLevelConfig
                          (uVar4,uVar3);
        if (lVar2 == 0) {
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogWarning(DAT_092024d0,0);
        }
        else {
          *(long *)(param_1 + 0x50) = lVar2;
          thunk_FUN_03f5d7b8();
        }
      }
      lVar2 = *(long *)(DAT_091b4aa8 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      if (**(long **)(lVar2 + 0xb8) != 0) {
        uVar3 = IapAdsSystem_RemoteConfigManager__GetString
                          (**(long **)(lVar2 + 0xb8),DAT_0921f178,0);
        uVar4 = System_String__IsNullOrEmpty(uVar3,0);
        if ((uVar4 & 1) == 0) {
          lVar2 = CakeOrder_CakeOrderSubsystem_GameProgressScenario__ImportMapMetadata(uVar4,uVar3);
          if (lVar2 == 0) goto LAB_042f96c4;
          if (*(long *)(lVar2 + 0x18) != 0) {
            plVar8 = (long *)(param_1 + 0x20);
            *plVar8 = lVar2;
            thunk_FUN_03f5d7b8(plVar8);
            uVar3 = *(undefined8 *)(param_1 + 0x58);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
            if ((uVar4 & 1) != 0) {
              lVar2 = *plVar8;
              if (lVar2 == 0) goto LAB_042f96c4;
              uVar1 = *(uint *)(lVar2 + 0x18);
              if (0 < (int)uVar1) {
                uVar9 = 0;
                do {
                  if (uVar1 <= uVar9) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  lVar10 = *(long *)(lVar2 + (long)(int)uVar9 * 8 + 0x20);
                  if ((lVar10 == 0) || (*(long *)(param_1 + 0x58) == 0)) goto LAB_042f96c4;
                  lVar5 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO
                                    (*(long *)(param_1 + 0x58),*(undefined8 *)(lVar10 + 0x10),0);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_09188ad0);
                  }
                  uVar4 = UnityEngine_Object__op_Inequality(lVar5,0,0);
                  if ((uVar4 & 1) != 0) {
                    if (0 < *(int *)(lVar10 + 0x18)) {
                      if (lVar5 == 0) goto LAB_042f96c4;
                      *(int *)(lVar5 + 0x4c) = *(int *)(lVar10 + 0x18);
                    }
                    if (0 < *(int *)(lVar10 + 0x1c)) {
                      if (lVar5 == 0) goto LAB_042f96c4;
                      *(int *)(lVar5 + 0x50) = *(int *)(lVar10 + 0x1c);
                    }
                    uVar3 = DAT_09172308;
                    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
                    local_54 = *(undefined4 *)(lVar10 + 0x2c);
                    uVar6 = FUN_03f5c42c(DAT_09535420,&local_54);
                    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
                      FUN_03f5c424(DAT_09535470);
                    }
                    uVar4 = System_Enum__IsDefined(uVar3,uVar6,0);
                    if (((uVar4 & 1) != 0) && (*(int *)(lVar10 + 0x2c) != 0)) {
                      if (lVar5 == 0) goto LAB_042f96c4;
                      *(int *)(lVar5 + 0x54) = *(int *)(lVar10 + 0x2c);
                    }
                  }
                  uVar1 = *(uint *)(lVar2 + 0x18);
                  uVar9 = uVar9 + 1;
                } while ((int)uVar9 < (int)uVar1);
              }
            }
            uVar3 = *(undefined8 *)(param_1 + 0x60);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Inequality(uVar3,0,0);
            if ((uVar4 & 1) != 0) {
              if (*(long *)(param_1 + 0x60) == 0) goto LAB_042f96c4;
              uVar4 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__get_IsDataAvailable
                                (*(long *)(param_1 + 0x60),0);
              if ((uVar4 & 1) != 0) {
                if (*(long *)(param_1 + 0x60) == 0) goto LAB_042f96c4;
                CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__ValidateAllLevelUnlockStatus
                          (*(long *)(param_1 + 0x60),0);
              }
            }
          }
        }
        else {
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogWarning(DAT_0920b9d0,0);
        }
        uVar3 = CakeOrder_CakeOrderSubsystem_GameProgressScenario__IEApplyInitCurrency(param_1);
        UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar3,0);
        return;
      }
    }
  }
LAB_042f96c4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


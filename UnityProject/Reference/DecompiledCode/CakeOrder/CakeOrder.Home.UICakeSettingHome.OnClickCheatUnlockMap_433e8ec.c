// rea decompile_all
// name: CakeOrder.Home.UICakeSettingHome$$OnClickCheatUnlockMap
// address: 0x433e8ec
// body: available
// range: 0x433e8ec-0x433ed13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x433ed10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UICakeSettingHome__OnClickCheatUnlockMap(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  int local_24;
  
  if ((DAT_0951773f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918eaa8);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b80);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951773f = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x110);
  local_24 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x110) != 0) {
    uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(*(long *)(param_1 + 0x110) + 0x20),0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x110) != 0) {
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x110) + 0x20);
      lVar3 = *(long *)(DAT_091b4a58 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = **(long **)(lVar3 + 0xb8);
      if (lVar3 != 0) {
        uVar2 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__IsMapUnlocked(lVar3,uVar7,0)
        ;
        if ((uVar2 & 1) != 0) {
          return;
        }
        lVar4 = *(long *)(DAT_091b4b60 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        if (**(long **)(lVar4 + 0xb8) != 0) {
          iVar1 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapIndexById
                            (**(long **)(lVar4 + 0xb8),uVar7,0);
          if (0 < iVar1) {
            lVar4 = *(long *)(DAT_091b4b60 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_03f95a6c();
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_03f95a6c();
            }
            if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_0433ed10;
            uVar5 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapId
                              (**(long **)(lVar4 + 0xb8),iVar1 + -1,0);
            lVar4 = *(long *)(DAT_091b4b60 + 0x20);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_03f95a6c(lVar4);
            }
            lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
              lVar4 = FUN_03f95a6c();
            }
            if ((**(long **)(lVar4 + 0xb8) == 0) ||
               (lVar4 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetMapSO
                                  (**(long **)(lVar4 + 0xb8),uVar5,0), lVar4 == 0))
            goto LAB_0433ed10;
            if ((0 < *(int *)(lVar4 + 0x50)) &&
               (CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__CheatWinToLevel
                          (lVar3,uVar5,*(int *)(lVar4 + 0x50) + -1,3,&local_24,0), 0 < local_24)) {
              lVar4 = *(long *)(DAT_091b4b48 + 0x20);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_03f95a6c();
              }
              lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
              if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                lVar4 = FUN_03f95a6c();
              }
              lVar6 = *(long *)(DAT_091b4b60 + 0x20);
              lVar4 = **(long **)(lVar4 + 0xb8);
              if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_03f95a6c(lVar6);
              }
              lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
              if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
                lVar6 = FUN_03f95a6c();
              }
              if (((**(long **)(lVar6 + 0xb8) == 0) ||
                  (lVar6 = *(long *)(**(long **)(lVar6 + 0xb8) + 0x50), lVar6 == 0)) || (lVar4 == 0)
                 ) goto LAB_0433ed10;
              CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                        (lVar4,*(undefined8 *)(lVar6 + 0x18),local_24,0,0,0);
            }
          }
          CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__UnlockMap(lVar3,uVar7,0);
          CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__UnlockLevel(lVar3,uVar7,0,0);
          CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__SaveData(lVar3,0);
          lVar3 = *(long *)(DAT_091b4b48 + 0x20);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03f95a6c();
          }
          lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
            lVar3 = FUN_03f95a6c();
          }
          if (**(long **)(lVar3 + 0xb8) != 0) {
            CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(**(long **)(lVar3 + 0xb8),0);
            lVar3 = CakeOrderSubsystem_Base_CakeOrderSessionState__get_Instance(0);
            lVar4 = thunk_FUN_03f9944c(DAT_0918eaa8);
            CakeOrderSubsystem_Base_CakeOrderSessionState_LastPlayData___ctor(lVar4,0);
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 0x10) = uVar7;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x10),uVar7);
              *(undefined4 *)(lVar4 + 0x18) = 0;
              if (lVar3 != 0) {
                *(long *)(lVar3 + 0x38) = lVar4;
                thunk_FUN_03f5d7b8((long *)(lVar3 + 0x38),lVar4);
                lVar3 = *(long *)(DAT_091b4b80 + 0x20);
                if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_03f95a6c();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
                if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_03f95a6c();
                }
                if (**(long **)(lVar3 + 0xb8) != 0) {
                  CakeOrder_CakeOrderSceneLoader__LoadHome(**(long **)(lVar3 + 0xb8),0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0433ed10:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: CakeOrder.Home.UIItemToolDetails$$OnClickUpgrade
// address: 0x4347ed8
// body: available
// range: 0x4347ed8-0x4348353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4348200 to 0x4257cd0 CakeOrder.AudioManagerCakeOrder$$Play (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x434833c to 0x4347830 CakeOrder.Home.UIItemToolDetails$$Refresh (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4348340 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4348344 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4348350 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIItemToolDetails__OnClickUpgrade(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_09517777 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091b4a58);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4cf8);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_09224070);
    FUN_03f5c2a4(&DAT_09224128);
    DAT_09517777 = 1;
  }
  if (*(int *)(param_1 + 0x98) < 0) {
    return;
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    lVar3 = CakeOrder_MapToolConfig__GetToolSO(*(long *)(param_1 + 0x90),*(int *)(param_1 + 0x98),0)
    ;
    lVar6 = *(long *)(DAT_091b4a58 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c(lVar6);
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    if ((lVar3 != 0) && (**(long **)(lVar6 + 0xb8) != 0)) {
      iVar1 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__GetToolLevel
                        (**(long **)(lVar6 + 0xb8),*(undefined8 *)(param_1 + 0x88),
                         *(undefined8 *)(lVar3 + 0x18),0);
      iVar2 = CakeOrder_Home_UIItemToolDetails__GetMaxLevel(param_1);
      if (iVar2 <= iVar1 + 1) {
        return;
      }
      iVar1 = CakeOrder_Home_UIItemToolDetails__GetUpgradeCost(param_1,iVar1 + 1);
      lVar6 = *(long *)(DAT_091b4b60 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c(lVar6);
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      if (**(long **)(lVar6 + 0xb8) != 0) {
        lVar7 = *(long *)(**(long **)(lVar6 + 0xb8) + 0x48);
        lVar6 = *(long *)(DAT_091b4b48 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_03f95a6c();
        }
        if ((lVar7 != 0) && (lVar6 = **(long **)(lVar6 + 0xb8), lVar6 != 0)) {
          iVar2 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                            (lVar6,*(undefined8 *)(lVar7 + 0x18),0);
          if (iVar2 < iVar1) {
            lVar3 = *(long *)(DAT_091b4cf8 + 0x20);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03f95a6c();
            }
            lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
              lVar3 = FUN_03f95a6c();
            }
            lVar6 = **(long **)(lVar3 + 0xb8);
            plVar4 = (long *)FUN_03f5c394(DAT_09180318,1);
            lVar3 = CakeOrder_DataSO_ScriptableObjectWithId__get_LocalizedName(lVar7,0);
            if (plVar4 != (long *)0x0) {
              if ((lVar3 != 0) &&
                 (lVar7 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar4 + 0x40)), lVar7 == 0)) {
                uVar5 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar5,0);
              }
              if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              plVar4[4] = lVar3;
              thunk_FUN_03f5d7b8(plVar4 + 4,lVar3);
              if (*(int *)(DAT_09182278 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar5 = CakeOrder_Localization_CakeLocalization__TrFormat(DAT_09224070,plVar4,0);
              if (lVar6 != 0) {
                CakeOrder_BaseUI_SceneMainUI__ShowToast(0x40000000,0,lVar6,uVar5,0);
                lVar3 = *(long *)(DAT_091b48d0 + 0x20);
                if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_03f95a6c();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
                if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_03f95a6c();
                }
                if (**(long **)(lVar3 + 0xb8) != 0) {
                  CakeOrder_AudioManagerCakeOrder__Play(**(long **)(lVar3 + 0xb8),0,0);
                  return;
                }
              }
            }
          }
          else {
            CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                      (lVar6,*(undefined8 *)(lVar7 + 0x18),-iVar1,DAT_09224128,0,0);
            lVar7 = *(long *)(DAT_091b4a58 + 0x20);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03f95a6c();
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x10);
            if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
              lVar7 = FUN_03f95a6c();
            }
            if (**(long **)(lVar7 + 0xb8) != 0) {
              CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__UpgradeToolLevel
                        (**(long **)(lVar7 + 0xb8),*(undefined8 *)(param_1 + 0x88),
                         *(undefined8 *)(lVar3 + 0x18),0);
              CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(lVar6,0);
              lVar3 = *(long *)(DAT_091b4a58 + 0x20);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03f95a6c();
              }
              lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
              if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                lVar3 = FUN_03f95a6c();
              }
              if (**(long **)(lVar3 + 0xb8) != 0) {
                CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__SaveData
                          (**(long **)(lVar3 + 0xb8),0);
                lVar3 = *(long *)(DAT_091b48d0 + 0x20);
                if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_03f95a6c();
                }
                lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
                if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
                  lVar3 = FUN_03f95a6c();
                }
                if (**(long **)(lVar3 + 0xb8) != 0) {
                  CakeOrder_AudioManagerCakeOrder__Play(**(long **)(lVar3 + 0xb8),2,0);
                  CakeOrder_Home_UIItemToolDetails__Refresh(param_1);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: CakeOrder.InGame.UIPopupBoosterSaveMeBase$$OnClickButtonSaveMeHardCurrency
// address: 0x42ae840
// body: available
// range: 0x42ae840-0x42aed13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42aed0c to 0x42adb4c CakeOrder.InGame.UIPopupBoosterSaveMeBase$$Activate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42aed10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIPopupBoosterSaveMeBase__OnClickButtonSaveMeHardCurrency(long *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  
  if ((DAT_0951729c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_091b49d8);
    FUN_03f5c2a4(&DAT_09195798);
    FUN_03f5c2a4(&DAT_09218300);
    FUN_03f5c2a4(&DAT_0921d4a8);
    FUN_03f5c2a4(&DAT_09218338);
    DAT_0951729c = 1;
  }
  fVar7 = (float)UnityEngine_Time__get_unscaledTime(0);
  if (fVar7 < *(float *)((long)param_1 + 0xbc) + 1.0) {
    return;
  }
  lVar2 = *(long *)(DAT_091b4b48 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar5 = **(long **)(lVar2 + 0xb8);
  lVar2 = CakeOrder_InGame_UIPopupBoosterSaveMeBase__get_HardCurrencySO(param_1);
  if ((lVar2 != 0) && (lVar5 != 0)) {
    iVar1 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                      (lVar5,*(undefined8 *)(lVar2 + 0x18),0);
    if (param_1[0x2d] != 0) {
      if (iVar1 < *(int *)(param_1[0x2d] + 0x20)) {
        uVar3 = FUN_05a8eda4(DAT_091b49d8);
        if ((uVar3 & 1) != 0) {
          lVar2 = *(long *)(DAT_091b49d0 + 0x20);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_03f95a6c();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_03f95a6c();
          }
          if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_042aed10;
          CakeOrder_Shop_InAppShopDataAccess__NotifyGemShortage(**(long **)(lVar2 + 0xb8),0);
        }
        lVar2 = param_1[0x30];
        if (lVar2 == 0) {
          return;
        }
        lVar5 = CakeOrder_InGame_UIPopupBoosterSaveMeBase__get_HardCurrencySO(param_1);
        if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x042ae9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar2 + 0x18))
                    (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar5 + 0x18),
                     *(undefined8 *)(lVar2 + 0x28));
          return;
        }
      }
      else {
        uVar8 = UnityEngine_Time__get_unscaledTime(0);
        *(undefined4 *)((long)param_1 + 0xbc) = uVar8;
        uVar3 = CakeOrder_InGame_UIPopupBoosterSaveMeBase__get_IsPackPurchase(param_1);
        lVar2 = *(long *)(DAT_091b4b48 + 0x20);
        if ((uVar3 & 1) == 0) {
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_03f95a6c();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_03f95a6c();
          }
          lVar5 = **(long **)(lVar2 + 0xb8);
          lVar2 = CakeOrder_InGame_UIPopupBoosterSaveMeBase__get_HardCurrencySO(param_1);
          if ((lVar2 != 0) && (param_1[0x2d] != 0)) {
            iVar1 = *(int *)(param_1[0x2d] + 0x20);
            uVar6 = *(undefined8 *)(lVar2 + 0x18);
            uVar4 = (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
            if (lVar5 != 0) {
              CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                        (lVar5,uVar6,-iVar1,uVar4,DAT_0921d4a8,0);
              lVar2 = *(long *)(DAT_091b4b48 + 0x20);
              if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                lVar2 = FUN_03f95a6c();
              }
              lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
              if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                lVar2 = FUN_03f95a6c();
              }
              if (**(long **)(lVar2 + 0xb8) != 0) {
                CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData
                          (**(long **)(lVar2 + 0xb8),0);
                lVar2 = thunk_FUN_03f9944c(DAT_09195798);
                System_Object___ctor(lVar2,0);
                if ((param_1[0x2d] != 0) && (lVar2 != 0)) {
                  *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(param_1[0x2d] + 0x20);
LAB_042aed00:
                  CakeOrder_InGame_UIPopupBoosterSaveMeBase__Activate(param_1,lVar2);
                  return;
                }
              }
            }
          }
        }
        else {
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_03f95a6c();
          }
          lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
            lVar2 = FUN_03f95a6c();
          }
          lVar5 = **(long **)(lVar2 + 0xb8);
          lVar2 = CakeOrder_InGame_UIPopupBoosterSaveMeBase__get_HardCurrencySO(param_1);
          if ((lVar2 != 0) && (param_1[0x2d] != 0)) {
            iVar1 = *(int *)(param_1[0x2d] + 0x20);
            uVar6 = *(undefined8 *)(lVar2 + 0x18);
            uVar4 = (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
            if (lVar5 != 0) {
              CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                        (lVar5,uVar6,-iVar1,uVar4,0,0);
              lVar2 = *(long *)(DAT_091b4b48 + 0x20);
              if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                lVar2 = FUN_03f95a6c();
              }
              lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
              if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                lVar2 = FUN_03f95a6c();
              }
              lVar5 = param_1[0x2d];
              if ((lVar5 != 0) && (**(long **)(lVar2 + 0xb8) != 0)) {
                CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                          (**(long **)(lVar2 + 0xb8),*(undefined8 *)(lVar5 + 0x28),
                           *(undefined4 *)(lVar5 + 0x50),DAT_09218300,0,0);
                lVar2 = *(long *)(DAT_091b4b48 + 0x20);
                if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                  lVar2 = FUN_03f95a6c();
                }
                lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
                if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                  lVar2 = FUN_03f95a6c();
                }
                if (param_1[0x2d] == 0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = *(undefined8 *)(param_1[0x2d] + 0x28);
                }
                if (**(long **)(lVar2 + 0xb8) != 0) {
                  CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                            (**(long **)(lVar2 + 0xb8),uVar4,0xffffffff,DAT_09218338,0,0);
                  lVar2 = *(long *)(DAT_091b4b48 + 0x20);
                  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                    lVar2 = FUN_03f95a6c();
                  }
                  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
                  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                    lVar2 = FUN_03f95a6c();
                  }
                  if (**(long **)(lVar2 + 0xb8) != 0) {
                    CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData
                              (**(long **)(lVar2 + 0xb8),0);
                    lVar2 = thunk_FUN_03f9944c(DAT_09195798);
                    System_Object___ctor(lVar2,0);
                    lVar5 = param_1[0x2d];
                    if ((lVar5 != 0) && (lVar2 != 0)) {
                      uVar8 = *(undefined4 *)(lVar5 + 0x20);
                      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar5 + 0x28);
                      *(undefined4 *)(lVar2 + 0x18) = uVar8;
                      thunk_FUN_03f5d7b8();
                      if (param_1[0x2d] != 0) {
                        *(undefined4 *)(lVar2 + 0x30) = *(undefined4 *)(param_1[0x2d] + 0x50);
                        goto LAB_042aed00;
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
LAB_042aed10:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


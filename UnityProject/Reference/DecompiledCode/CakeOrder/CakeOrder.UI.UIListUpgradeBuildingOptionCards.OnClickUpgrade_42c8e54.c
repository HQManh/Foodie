// rea decompile_all
// name: CakeOrder.UI.UIListUpgradeBuildingOptionCards$$OnClickUpgrade
// address: 0x42c8e54
// body: available
// range: 0x42c8e54-0x42c90bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c90b8 to 0x42c916c CakeOrder.UI.UIListUpgradeBuildingOptionCards$$PlayCoinFlight (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42c90bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIListUpgradeBuildingOptionCards__OnClickUpgrade
               (undefined1 param_1 [16],undefined4 param_2,long param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  
  if ((DAT_0951735a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0590);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_091b4b48);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0921cca0);
    FUN_03f5c2a4(&DAT_09218638);
    DAT_0951735a = 1;
  }
  if (*(char *)(param_3 + 0x150) == '\0') {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Equality(param_4,0,0);
    if ((uVar2 & 1) == 0) {
      if (param_4 != 0) {
        lVar6 = *(long *)(param_4 + 0x60);
        if (lVar6 == 0) {
          return;
        }
        if (*(long *)(param_3 + 0x108) == 0) {
          return;
        }
        uVar2 = FUN_057e1004(*(long *)(param_3 + 0x108),*(undefined8 *)(lVar6 + 0x10),DAT_091b0590);
        if ((uVar2 & 1) == 0) {
          return;
        }
        lVar3 = FUN_039af8ec(DAT_091b4b60);
        if (lVar3 != 0) {
          lVar7 = *(long *)(lVar3 + 0x48);
          lVar3 = FUN_039af8ec(DAT_091b4b48);
          if ((lVar7 != 0) && (lVar3 != 0)) {
            iVar1 = CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__GetItemAmount
                              (lVar3,*(undefined8 *)(lVar7 + 0x18),0);
            if (iVar1 < *(int *)(lVar6 + 0x18)) {
              return;
            }
            if (*(long *)(param_4 + 0x68) != 0) {
              uVar8 = UnityEngine_Transform__get_position(*(long *)(param_4 + 0x68),0);
              uVar4 = CakeOrder_UI_UIListUpgradeBuildingOptionCards__ResolvePartDestination
                                (param_3,*(undefined8 *)(param_4 + 0x58));
              uVar5 = *(undefined8 *)(lVar6 + 0x10);
              *(undefined1 *)(param_3 + 0x150) = 1;
              *(undefined8 *)(param_3 + 0x158) = uVar5;
              thunk_FUN_03f5d7b8(param_3 + 0x158);
              *(undefined8 *)(param_3 + 0x160) = *(undefined8 *)(param_4 + 0x58);
              thunk_FUN_03f5d7b8(param_3 + 0x160);
              if (*(long *)(param_3 + 0x120) != 0) {
                CakeOrder_DataSO_MapUpgradeConfig__DeferPartReveal
                          (*(long *)(param_3 + 0x120),*(undefined8 *)(lVar6 + 0x10),0);
                lVar3 = FUN_039af8ec(DAT_091b4b48);
                if (lVar3 != 0) {
                  CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
                            (lVar3,*(undefined8 *)(lVar7 + 0x18),-*(int *)(lVar6 + 0x18),
                             DAT_09218638,DAT_0921cca0,0);
                  if (*(long *)(param_3 + 0xf0) != 0) {
                    CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__BuyHomeBuildingItem
                              (*(long *)(param_3 + 0xf0),*(undefined8 *)(param_3 + 0x48),
                               *(undefined8 *)(lVar6 + 0x10),0);
                    lVar6 = FUN_039af8ec(DAT_091b4b48);
                    if (lVar6 != 0) {
                      CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(lVar6,0);
                      if (*(long *)(param_3 + 0xf0) != 0) {
                        CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__SaveData
                                  (*(long *)(param_3 + 0xf0),0);
                        lVar6 = FUN_039af8ec(DAT_091b48d0);
                        if (lVar6 != 0) {
                          CakeOrder_AudioManagerCakeOrder__PlaySfxAndHaptic
                                    (lVar6,*(undefined8 *)(param_3 + 0xa0),3,0);
                          CakeOrder_UI_UIListUpgradeBuildingOptionCards__PlayCoinFlight
                                    (uVar8,param_2,param_3,uVar4);
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
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}


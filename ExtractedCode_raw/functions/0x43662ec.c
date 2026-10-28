// rea decompile_all
// name: CakeOrder.Shop.UICookOrderShop$$ApplyOfferRulesVisibility
// address: 0x43662ec
// body: available
// range: 0x43662ec-0x436666f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4366664 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4366668 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436666c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_UICookOrderShop__ApplyOfferRulesVisibility(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  undefined8 local_50;
  undefined8 *puStack_48;
  long local_40;
  
  if ((DAT_09517875 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4c10);
    FUN_03f5c2a4(&DAT_091a4bf8);
    FUN_03f5c2a4(&DAT_091a4c00);
    FUN_03f5c2a4(&DAT_091a4c18);
    FUN_03f5c2a4(&DAT_091a4c08);
    FUN_03f5c2a4(&DAT_091a4c20);
    FUN_03f5c2a4(&DAT_091b16d0);
    FUN_03f5c2a4(&DAT_091b16b8);
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_091b49d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517875 = 1;
  }
  local_50 = 0;
  puStack_48 = (undefined8 *)0x0;
  local_40 = 0;
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  uVar2 = FUN_05a8eda4(DAT_091b49d8);
  uVar4 = 0;
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(DAT_091b49d0 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_0436666c;
    uVar4 = CakeOrder_Shop_InAppShopDataAccess__CreateOfferRules(**(long **)(lVar3 + 0xb8),0);
  }
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x1d8) = uVar4;
    thunk_FUN_03f5d7b8(param_1 + 0x1d8);
    if (*(long *)(param_1 + 0x1d8) != 0) {
      uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x1d8) + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        *(undefined8 *)(param_1 + 0x1d8) = 0;
        thunk_FUN_03f5d7b8(param_1 + 0x1d8,0);
      }
      if (*(long *)(param_1 + 0x1d8) != 0) {
        uVar4 = *(undefined8 *)(param_1 + 0x140);
        uVar1 = CakeOrder_Shop_UICookOrderShop__get_IsRemoveAdsOwned();
        CakeOrder_Shop_UICookOrderShop__ApplyOfferRuleToCard(param_1,uVar4,(uVar1 ^ 0xffffffff) & 1)
        ;
        uVar4 = *(undefined8 *)(param_1 + 0x148);
        uVar1 = CakeOrder_Shop_UICookOrderShop__get_IsRemoveAdsOwned();
        CakeOrder_Shop_UICookOrderShop__ApplyOfferRuleToCard(param_1,uVar4,(uVar1 ^ 0xffffffff) & 1)
        ;
        if (*(long *)(param_1 + 0x168) != 0) {
          FUN_057e185c(&local_88,*(long *)(param_1 + 0x168),DAT_091b16d0);
          puStack_48 = puStack_80;
          local_50 = local_88;
          local_40 = local_78;
          local_88 = 0;
          puStack_80 = &local_50;
          while (uVar2 = FUN_071bd28c(&local_50,DAT_091a4c18), lVar3 = local_40, (uVar2 & 1) != 0) {
            uVar4 = *(undefined8 *)(param_1 + 0x140);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = UnityEngine_Object__op_Equality(lVar3,uVar4,0);
            if ((uVar2 & 1) == 0) {
              uVar4 = *(undefined8 *)(param_1 + 0x148);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar2 = UnityEngine_Object__op_Equality(lVar3,uVar4,0);
              if ((uVar2 & 1) == 0) {
                CakeOrder_Shop_UICookOrderShop__ApplyOfferRuleToCard(param_1,lVar3,1);
              }
            }
          }
          FUN_071bd288(&local_50,DAT_091a4c10);
        }
        if (*(long *)(param_1 + 0x170) != 0) {
          FUN_057e185c(&local_88,*(long *)(param_1 + 0x170),DAT_091b16b8);
          puStack_68 = puStack_80;
          local_70 = local_88;
          local_60 = local_78;
          local_88 = 0;
          puStack_80 = &local_70;
          while (uVar2 = FUN_071bd28c(&local_70,DAT_091a4c00), lVar3 = local_60, (uVar2 & 1) != 0) {
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = UnityEngine_Object__op_Equality(lVar3,0,0);
            if ((uVar2 & 1) == 0) {
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar2 = CakeOrder_Shop_UICookOrderShop__IsContested
                                (param_1,*(undefined8 *)(lVar3 + 0x88));
              if ((uVar2 & 1) != 0) {
                if (*(long *)(param_1 + 0x1d8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar2 = CakeOrder_Shop_ShopOfferRules__IsVisible
                                  (*(long *)(param_1 + 0x1d8),*(undefined8 *)(lVar3 + 0x88));
                if ((uVar2 & 1) == 0) {
                  CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar3,0);
                }
                else {
                  uVar2 = CakeOrder_BaseUI_UIElementAbstract__get_IsShowing(param_1,0);
                  if ((uVar2 & 1) != 0) {
                    CakeOrder_BaseUI_UIElementAbstract__ShowImmediate(lVar3,0,0);
                  }
                }
              }
            }
          }
          FUN_071bd288(&local_70,DAT_091a4bf8);
        }
      }
    }
    return;
  }
LAB_0436666c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


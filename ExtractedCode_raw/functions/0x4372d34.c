// rea decompile_all
// name: CakeOrder.Shop.InAppShopDataAccess$$GrantRemoveAdsAsPurchase
// address: 0x4372d34
// body: available
// range: 0x4372d34-0x4372f6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4372f68 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CakeOrder_Shop_InAppShopDataAccess__GrantRemoveAdsAsPurchase(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_095178e1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919f9f0);
    FUN_03f5c2a4(&DAT_0919f648);
    FUN_03f5c2a4(&DAT_091b4900);
    FUN_03f5c2a4(&DAT_091b4908);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_0918aba8);
    FUN_03f5c2a4(&DAT_09222a70);
    FUN_03f5c2a4(&DAT_0920ba60);
    DAT_095178e1 = 1;
  }
  lVar7 = *(long *)(param_1 + 0x38);
  if (lVar7 == 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_0920ba60,param_1,0);
  }
  else {
    uVar1 = CakeOrder_Shop_InAppShopDataAccess__get_IsRemoveAdsPurchased(param_1);
    if ((uVar1 & 1) == 0) {
      uVar1 = CakeOrder_Shop_InAppShopDataAccess__get_IsRemoveAdsPermanent(param_1);
      if (*(long *)(param_1 + 0x38) != 0) {
        lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x18);
        uVar2 = CakeOrder_Shop_InAppShopDataAccess__GetKeyCountPurchasedPack
                          (*(undefined8 *)(param_1 + 0x70));
        if (lVar5 != 0) {
          FUN_06fca434(lVar5,uVar2,1,DAT_0919f9f0);
          if (*(long *)(param_1 + 0x38) != 0) {
            lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x30);
            uVar2 = CakeOrder_Shop_InAppShopDataAccess__GetKeyDatetimeLastPurchasedPack
                              (*(undefined8 *)(param_1 + 0x70));
            if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188c20);
            }
            uVar3 = EssentialSystemR1_OnlineTimeCheck__get_UtcNow(0);
            if (lVar5 != 0) {
              FUN_06fbfb04(lVar5,uVar2,uVar3,DAT_0919f648);
              uVar4 = FUN_05a8eda4(DAT_091b4908);
              if ((uVar4 & 1) != 0) {
                lVar5 = *(long *)(DAT_091b4900 + 0x20);
                if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_03f95a6c();
                }
                lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
                if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
                  lVar5 = FUN_03f95a6c();
                }
                lVar6 = **(long **)(lVar5 + 0xb8);
                lVar5 = thunk_FUN_03f9944c(DAT_0918aba8);
                CakeOrder_Shop_ShopPlayerFacts___ctor(lVar5,0);
                if ((lVar5 == 0) || (lVar6 == 0)) goto LAB_04372f68;
                CakeOrder_SaveProfile_CookOrderSystemInfoDataAccess__SetInt
                          (lVar6,DAT_09222a70,*(undefined4 *)(lVar5 + 0x18),0);
              }
              if ((uVar1 & 1) == 0) {
                CakeOrder_Shop_InAppShopDataAccess__ApplyPermanentRemoveAds(param_1);
              }
              CakeOrder_Shop_InAppShopDataAccess__SaveData(param_1);
              goto LAB_04372f50;
            }
          }
        }
      }
LAB_04372f68:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_04372f50:
  return lVar7 != 0;
}


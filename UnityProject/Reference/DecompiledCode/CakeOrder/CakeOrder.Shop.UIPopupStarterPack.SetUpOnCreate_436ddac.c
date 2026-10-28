// rea decompile_all
// name: CakeOrder.Shop.UIPopupStarterPack$$SetUpOnCreate
// address: 0x436ddac
// body: available
// range: 0x436ddac-0x436e08f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x436df34 to 0x85f71fc UnityEngine.Debug$$LogError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x436df84 to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x436e088 to 0x436f3a0 CakeOrder.Shop.InAppShopDataAccess$$add_onBuyPack (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x436e08c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_UIPopupStarterPack__SetUpOnCreate(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_095178b5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174e18);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_091b49d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dd000);
    FUN_03f5c2a4(&DAT_092089d8);
    FUN_03f5c2a4(&DAT_09208c38);
    FUN_03f5c2a4(&DAT_09204808);
    DAT_095178b5 = 1;
  }
  CakeOrder_BaseUI_UICakePopup__SetUpOnCreate(param_1,param_2,0);
  uVar1 = FUN_05a8eda4(DAT_091b49d8);
  if ((uVar1 & 1) == 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogError(DAT_09204808,param_1,0);
    lVar2 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar2 != 0) {
      UnityEngine_GameObject__SetActive(lVar2,0,0);
      return;
    }
  }
  else {
    uVar1 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 200),0);
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(DAT_091b49d0 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      if ((**(long **)(lVar2 + 0xb8) == 0) ||
         (lVar2 = CakeOrder_Shop_InAppShopDataAccess__CreateOfferRules(**(long **)(lVar2 + 0xb8),0),
         lVar2 == 0)) goto LAB_0436e08c;
      uVar3 = CakeOrder_Shop_ShopOfferRules__GetWinner(lVar2,*(undefined8 *)(param_1 + 200));
      uVar1 = System_String__IsNullOrEmpty(uVar3,0);
      if ((uVar1 & 1) == 0) {
        *(undefined8 *)(param_1 + 0xc0) = uVar3;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xc0),uVar3);
      }
    }
    uVar1 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0xc0),0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogError(DAT_09208c38,param_1,0);
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0xd0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogError(DAT_092089d8,param_1,0);
    }
    else {
      if (*(long *)(param_1 + 0xd0) == 0) goto LAB_0436e08c;
      CakeOrder_BaseUI_ButtonBuyWithSale__SetUp
                (*(long *)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xc0),0);
    }
    CakeOrder_Shop_UIPopupStarterPack__BuildRewardRow(param_1);
    lVar2 = *(long *)(DAT_091b49d0 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_03f9944c(DAT_09174e18);
    FUN_071cd244(uVar3,param_1,DAT_091dd000,0);
    if (lVar2 != 0) {
      CakeOrder_Shop_InAppShopDataAccess__add_onBuyPack(lVar2,uVar3,0);
      return;
    }
  }
LAB_0436e08c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


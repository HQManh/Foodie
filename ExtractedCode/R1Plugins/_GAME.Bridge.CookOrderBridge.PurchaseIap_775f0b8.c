// rea decompile_all
// name: _GAME.Bridge.CookOrderBridge$$PurchaseIap
// address: 0x775f0b8
// body: available
// range: 0x775f0b8-0x775f447 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x775f3b0 to 0x7319c44 IapAdsSystem.InAppManager$$PurchaseProduct (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x775f444 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_CookOrderBridge__PurchaseIap(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if ((DAT_09522c20 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091748e0);
    FUN_03f5c2a4(&DAT_09174e18);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_091b49a8);
    FUN_03f5c2a4(&DAT_091b4928);
    FUN_03f5c2a4(&DAT_091b49b0);
    FUN_03f5c2a4(&DAT_091b4930);
    FUN_03f5c2a4(&DAT_091e6a00);
    FUN_03f5c2a4(&DAT_091e6a08);
    FUN_03f5c2a4(&DAT_0918ee20);
    FUN_03f5c2a4(&DAT_092140f8);
    FUN_03f5c2a4(&DAT_091f9f80);
    FUN_03f5c2a4(&DAT_092214a8);
    DAT_09522c20 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918ee20);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    puVar7 = (undefined8 *)(lVar1 + 0x10);
    *puVar7 = param_1;
    thunk_FUN_03f5d7b8(puVar7,param_1);
    *(undefined8 *)(lVar1 + 0x20) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20),param_3);
    plVar5 = (long *)(lVar1 + 0x28);
    *plVar5 = param_2;
    thunk_FUN_03f5d7b8(plVar5,param_2);
    uVar2 = FUN_05a8eda4(DAT_091b49b0);
    if ((uVar2 & 1) == 0) {
      uVar4 = System_String__Concat(DAT_092140f8,*puVar7,DAT_091f9f80,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogWarning(uVar4,0);
      lVar1 = *plVar5;
      if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0775f42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),0,*(undefined8 *)(lVar1 + 0x28));
        return;
      }
      return;
    }
    uVar2 = FUN_05a8eda4(DAT_091b4930);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(DAT_091b4928 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_0775f444;
      IapAdsSystem_DataTrackingManager__TrackIapClick
                (**(long **)(lVar3 + 0xb8),*puVar7,*puVar7,DAT_092214a8,0);
    }
    puVar7 = (undefined8 *)(lVar1 + 0x18);
    *puVar7 = 0;
    thunk_FUN_03f5d7b8(puVar7,0);
    uVar2 = _GAME_Bridge_CookOrderBridge__IsIapGrantedByCookOrder(*(undefined8 *)(lVar1 + 0x10));
    if ((uVar2 & 1) != 0) {
      uVar4 = thunk_FUN_03f9944c(DAT_09174e18);
      FUN_071cd244(uVar4,lVar1,DAT_091e6a00,0);
      *(undefined8 *)(lVar1 + 0x18) = uVar4;
      thunk_FUN_03f5d7b8(puVar7,uVar4);
      lVar3 = *(long *)(DAT_091b49d0 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_0775f444;
      CakeOrder_Shop_InAppShopDataAccess__add_onBuyPack(**(long **)(lVar3 + 0xb8),*puVar7,0);
    }
    lVar3 = *(long *)(DAT_091b49a8 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    uVar6 = *(undefined8 *)(lVar1 + 0x10);
    lVar3 = **(long **)(lVar3 + 0xb8);
    uVar4 = thunk_FUN_03f9944c(DAT_091748e0);
    FUN_070a8c30(uVar4,lVar1,DAT_091e6a08,0);
    if (lVar3 != 0) {
      IapAdsSystem_InAppManager__PurchaseProduct(lVar3,uVar6,uVar4,0);
      return;
    }
  }
LAB_0775f444:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


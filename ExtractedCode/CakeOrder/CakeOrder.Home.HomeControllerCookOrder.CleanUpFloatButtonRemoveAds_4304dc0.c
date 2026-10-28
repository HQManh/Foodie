// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder$$CleanUpFloatButtonRemoveAds
// address: 0x4304dc0
// body: available
// range: 0x4304dc0-0x4304fdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4304fc4 to 0x43729fc CakeOrder.Shop.InAppShopDataAccess$$remove_onRemoveAds (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4304fd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeControllerCookOrder__CleanUpFloatButtonRemoveAds(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_09517578 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174e18);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091ce920);
    FUN_03f5c2a4(&DAT_091ce950);
    FUN_03f5c2a4(&DAT_091ce9d0);
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_091b49d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517578 = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x1e0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Inequality(uVar2,0,0);
  if ((uVar1 & 1) != 0) {
    lVar3 = *(long *)(param_1 + 0x1e0);
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,param_1,DAT_091ce950,0);
    if (lVar3 == 0) goto LAB_04304fd8;
    Utilities_UIDragAreaFloatingButton__remove_onClick(lVar3,uVar2,0);
  }
  uVar1 = FUN_05a8eda4(DAT_091b49d8);
  if ((uVar1 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(DAT_091b49d0 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03f95a6c();
  }
  lVar3 = **(long **)(lVar3 + 0xb8);
  uVar2 = thunk_FUN_03f9944c(DAT_09174e18);
  FUN_071cd244(uVar2,param_1,DAT_091ce920,0);
  if (lVar3 != 0) {
    CakeOrder_Shop_InAppShopDataAccess__remove_onBuyPack(lVar3,uVar2,0);
    lVar3 = *(long *)(DAT_091b49d0 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = **(long **)(lVar3 + 0xb8);
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,param_1,DAT_091ce9d0,0);
    if (lVar3 != 0) {
      CakeOrder_Shop_InAppShopDataAccess__remove_onRemoveAds(lVar3,uVar2,0);
      return;
    }
  }
LAB_04304fd8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


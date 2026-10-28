// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder$$UpdateFloatBtnRemoveAdsVisibility
// address: 0x4304dbc
// body: available
// range: 0x4304dbc-0x4304dbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeControllerCookOrder__UpdateFloatBtnRemoveAdsVisibility(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_09517570 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_091b49d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517570 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x1e0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  uVar2 = FUN_05a8eda4(DAT_091b49d8);
  if ((uVar2 & 1) == 0) {
LAB_04304640:
    uVar1 = 0;
  }
  else {
    lVar3 = *(long *)(DAT_091b49d0 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (**(long **)(lVar3 + 0xb8) == 0) goto LAB_043046c0;
    uVar2 = CakeOrder_Shop_InAppShopDataAccess__get_IsRemoveAdsPermanent
                      (**(long **)(lVar3 + 0xb8),0);
    if ((uVar2 & 1) != 0) goto LAB_04304640;
    uVar2 = CakeOrder_Home_HomeControllerCookOrder__HasOfferGroup
                      (uVar2,*(undefined8 *)(param_1 + 0x1f0));
    if ((uVar2 & 1) == 0) {
      uVar2 = CakeOrder_Home_HomeControllerCookOrder__IsReachedLevelShowBtnRemoveAds();
      if ((uVar2 & 1) == 0) goto LAB_04304640;
      uVar1 = CakeOrder_Home_HomeControllerCookOrder__IsLiveOpsButtonUnlockedByLevel(2);
    }
    else {
      uVar1 = CakeOrder_Home_HomeControllerCookOrder__IsOfferGroupOnSale
                        (uVar2,*(undefined8 *)(param_1 + 0x1f0));
    }
  }
  if ((*(long *)(param_1 + 0x1e0) != 0) &&
     (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x1e0),0), lVar3 != 0)) {
    uVar4 = UnityEngine_GameObject__SetActive(lVar3,uVar1 & 1,0);
    lVar3 = *(long *)(param_1 + 0x1e0);
    CakeOrder_Home_HomeControllerCookOrder__GetOfferGroupWinner
              (uVar4,*(undefined8 *)(param_1 + 0x1f0));
    uVar1 = CakeOrder_Home_HomeControllerCookOrder__HasSaleTag();
    if (lVar3 != 0) {
      Utilities_UIDragAreaFloatingButton__SetNoti(lVar3,uVar1 & 1,0);
      return;
    }
  }
LAB_043046c0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


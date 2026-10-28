// rea decompile_all
// name: CakeOrder.Shop.ShopOfferRules$$Check
// address: 0x4361720
// body: available
// range: 0x4361720-0x4361947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4361940 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4361944 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte CakeOrder_Shop_ShopOfferRules__Check(long param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  long lVar9;
  double dVar10;
  
  if ((DAT_09517852 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091805f8);
    DAT_09517852 = 1;
  }
  if (param_2 == 0) goto LAB_04361940;
  lVar9 = *(long *)(param_2 + 0x20);
  if ((lVar9 == 0) || (*(long *)(lVar9 + 0x18) == 0)) {
    lVar9 = FUN_03f5c394(DAT_091805f8,1);
    if (lVar9 == 0) goto LAB_04361940;
    if (*(int *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(lVar9 + 0x20) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar9 + 0x20),param_3);
  }
  iVar6 = *(int *)(param_2 + 0x10);
  bVar5 = 0;
  if (iVar6 < 6) {
    if (iVar6 < 2) {
      if (iVar6 != 0) {
        if (iVar6 != 1) goto LAB_04361914;
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_04361940;
        dVar10 = *(double *)(*(long *)(param_1 + 0x18) + 0x20);
        bVar3 = NAN(dVar10) || NAN((double)*(int *)(param_2 + 0x18));
        bVar4 = dVar10 < (double)*(int *)(param_2 + 0x18);
        goto LAB_043618dc;
      }
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_04361940;
      iVar6 = *(int *)(*(long *)(param_1 + 0x18) + 0x18);
    }
    else {
      if (iVar6 != 2) {
        if (iVar6 == 4) {
          if (*(long *)(param_1 + 0x18) == 0) goto LAB_04361940;
          bVar5 = *(char *)(*(long *)(param_1 + 0x18) + 0x2c) != '\0';
        }
        else if (iVar6 == 5) {
          iVar6 = CakeOrder_Shop_ShopOfferRules__TotalPurchases(param_1,lVar9);
          bVar5 = 0 < iVar6;
        }
        goto LAB_04361914;
      }
      if (*(long *)(param_1 + 0x18) == 0) {
LAB_04361940:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar6 = *(int *)(*(long *)(param_1 + 0x18) + 0x28);
    }
    bVar3 = SBORROW4(iVar6,*(int *)(param_2 + 0x18));
    bVar4 = iVar6 - *(int *)(param_2 + 0x18) < 0;
  }
  else if (iVar6 < 8) {
    if (iVar6 != 6) {
      if (iVar6 == 7) {
        uVar7 = CakeOrder_Shop_ShopOfferRules__LatestPurchase(param_1,lVar9);
        bVar5 = CakeOrder_Shop_ShopOfferRules__IsWithinDays
                          (param_1,uVar7,*(undefined4 *)(param_2 + 0x18));
      }
      goto LAB_04361914;
    }
    iVar6 = CakeOrder_Shop_ShopOfferRules__TotalPurchases(param_1,lVar9);
    bVar3 = SBORROW4(iVar6,*(int *)(param_2 + 0x18));
    bVar4 = iVar6 - *(int *)(param_2 + 0x18) < 0;
  }
  else {
    if (iVar6 != 8) {
      if (iVar6 == 9) {
        lVar9 = *(long *)(param_1 + 0x20);
        if (lVar9 == 0) goto LAB_04361940;
        uVar1 = *(undefined4 *)(param_2 + 0x18);
        uVar2 = *(undefined4 *)(param_2 + 0x1c);
        uVar8 = 1;
      }
      else {
        if (iVar6 != 10) goto LAB_04361914;
        lVar9 = *(long *)(param_1 + 0x20);
        if (lVar9 == 0) goto LAB_04361940;
        uVar1 = *(undefined4 *)(param_2 + 0x18);
        uVar2 = *(undefined4 *)(param_2 + 0x1c);
        uVar8 = *(undefined1 *)(param_1 + 0x28);
      }
      bVar5 = CakeOrder_Shop_ShopOfferFlashSale__IsOn(lVar9,param_3,uVar1,uVar2,uVar8);
      goto LAB_04361914;
    }
    lVar9 = *(long *)(param_1 + 0x18);
    if (lVar9 == 0) goto LAB_04361940;
    if (*(int *)(lVar9 + 0x30) < 1) {
      bVar5 = 0;
      goto LAB_04361914;
    }
    iVar6 = *(int *)(lVar9 + 0x18) - *(int *)(lVar9 + 0x30);
    bVar3 = SBORROW4(iVar6,*(int *)(param_2 + 0x18));
    bVar4 = iVar6 - *(int *)(param_2 + 0x18) < 0;
  }
LAB_043618dc:
  bVar5 = bVar4 == bVar3;
LAB_04361914:
  return (bVar5 ^ *(char *)(param_2 + 0x14) != '\0') & 1;
}


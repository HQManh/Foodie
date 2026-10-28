// rea decompile_all
// name: CakeOrder.Shop.InAppShopDataAccess$$PurchasePack
// address: 0x4371638
// body: available
// range: 0x4371638-0x4371a03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4371928 to 0x7319c44 IapAdsSystem.InAppManager$$PurchaseProduct (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43719f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43719f4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4371a00 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_InAppShopDataAccess__PurchasePack
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  
  if ((DAT_095178da & 1) == 0) {
    FUN_03f5c2a4(&DAT_091748e0);
    FUN_03f5c2a4(&DAT_09174e18);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091b49a8);
    FUN_03f5c2a4(&DAT_091b4928);
    FUN_03f5c2a4(&DAT_091b49b0);
    FUN_03f5c2a4(&DAT_091b4930);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091eb4b8);
    FUN_03f5c2a4(&DAT_091eb4c0);
    FUN_03f5c2a4(&DAT_09191630);
    FUN_03f5c2a4(&DAT_091fe0a8);
    DAT_095178da = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09191630);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    plVar7 = (long *)(lVar1 + 0x10);
    *plVar7 = param_2;
    thunk_FUN_03f5d7b8(plVar7,param_2);
    *(long *)(lVar1 + 0x20) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x20),param_1);
    *(undefined8 *)(lVar1 + 0x28) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28),param_3);
    plVar9 = (long *)(lVar1 + 0x30);
    *plVar9 = param_5;
    thunk_FUN_03f5d7b8(plVar9,param_5);
    uVar2 = System_String__IsNullOrEmpty(*plVar7,0);
    if (((uVar2 & 1) == 0) && (uVar2 = FUN_05a8eda4(DAT_091b49b0), (uVar2 & 1) != 0)) {
      uVar2 = CakeOrder_Shop_InAppShopDataAccess__IsCanPurchasePack(param_1,*plVar7);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0xb8) != 0) {
          uVar2 = FUN_053ec72c(*(long *)(param_1 + 0xb8),*plVar7,DAT_091a86b8);
          if ((uVar2 & 1) == 0) {
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
            lVar8 = *plVar7;
            lVar3 = **(long **)(lVar3 + 0xb8);
            uVar4 = CakeOrder_Shop_InAppShopDataAccess__GetPackTitle(param_1,lVar8,0);
            if (lVar3 == 0) goto LAB_043719f0;
            IapAdsSystem_DataTrackingManager__TrackIapClick(lVar3,lVar8,uVar4,param_4,0);
          }
          *(undefined8 *)(lVar1 + 0x18) = 0;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x18),0);
          uVar4 = thunk_FUN_03f9944c(DAT_09174e18);
          FUN_071cd244(uVar4,lVar1,DAT_091eb4b8,0);
          CakeOrder_Shop_InAppShopDataAccess__add_onBuyPack(param_1,uVar4);
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
          FUN_070a8c30(uVar4,lVar1,DAT_091eb4c0,0);
          if (lVar3 != 0) {
            IapAdsSystem_InAppManager__PurchaseProduct(lVar3,uVar6,uVar4,0);
            return;
          }
        }
        goto LAB_043719f0;
      }
    }
    else {
      plVar5 = (long *)FUN_03f5c394(DAT_09180318,1);
      if (plVar5 == (long *)0x0) goto LAB_043719f0;
      lVar1 = *plVar7;
      if ((lVar1 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar1,*(undefined8 *)(*plVar5 + 0x40)), lVar3 == 0)) {
        uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,0);
      }
      if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar5[4] = lVar1;
      thunk_FUN_03f5d7b8(plVar5 + 4,lVar1);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogErrorFormat(param_1,DAT_091fe0a8,plVar5,0);
    }
    lVar1 = *plVar9;
    if (lVar1 == 0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x043719d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),0,*(undefined8 *)(lVar1 + 0x28));
    return;
  }
LAB_043719f0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


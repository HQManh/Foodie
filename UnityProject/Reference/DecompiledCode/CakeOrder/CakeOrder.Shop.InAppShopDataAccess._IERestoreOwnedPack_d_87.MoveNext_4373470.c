// rea decompile_all
// name: CakeOrder.Shop.InAppShopDataAccess.<IERestoreOwnedPack>d__87$$MoveNext
// address: 0x4373470
// body: available
// range: 0x4373470-0x4373647 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4373634 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4373638 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4373644 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_Shop_InAppShopDataAccess_<IERestoreOwnedPack>d__87__MoveNext(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_095178e9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919f9f0);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_0920a2c0);
    DAT_095178e9 = 1;
  }
  if (1 < *(int *)(param_1 + 0x10) - 1U) {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x38) == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 2;
      return 1;
    }
    iVar1 = CakeOrder_Shop_InAppShopDataAccess__GetNumPurchasedPack
                      (lVar6,*(undefined8 *)(param_1 + 0x28));
    if (0 < iVar1) {
      return 0;
    }
    plVar2 = (long *)FUN_03f5c394(DAT_09180318,1);
    if (plVar2 != (long *)0x0) {
      lVar7 = *(long *)(param_1 + 0x28);
      if ((lVar7 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar7,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
        uVar4 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,0);
      }
      if ((int)plVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar2[4] = lVar7;
      thunk_FUN_03f5d7b8(plVar2 + 4,lVar7);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogFormat(DAT_0920a2c0,plVar2,0);
      if (*(long *)(lVar6 + 0x38) != 0) {
        lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + 0x18);
        uVar4 = CakeOrder_Shop_InAppShopDataAccess__GetKeyCountPurchasedPack
                          (*(undefined8 *)(param_1 + 0x28));
        if (lVar7 != 0) {
          FUN_06fca434(lVar7,uVar4,1,DAT_0919f9f0);
          uVar5 = CakeOrder_Shop_InAppShopDataAccess__IsRemoveAdsPackId
                            (lVar6,*(undefined8 *)(param_1 + 0x28));
          if ((uVar5 & 1) != 0) {
            CakeOrder_Shop_InAppShopDataAccess__ApplyPermanentRemoveAds(lVar6);
          }
          CakeOrder_Shop_InAppShopDataAccess__SaveData(lVar6);
          return 0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


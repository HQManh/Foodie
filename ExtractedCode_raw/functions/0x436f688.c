// rea decompile_all
// name: CakeOrder.Shop.InAppShopDataAccess$$EnsurePurchaseSubscription
// address: 0x436f688
// body: available
// range: 0x436f688-0x436f8b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x436f8b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x436f8b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_InAppShopDataAccess__EnsurePurchaseSubscription(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if ((DAT_095178cb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_091cfcb0);
    FUN_03f5c2a4(&DAT_091cfcb8);
    FUN_03f5c2a4(&DAT_09171e60);
    FUN_03f5c2a4(&DAT_091b49a8);
    FUN_03f5c2a4(&DAT_091b49b0);
    DAT_095178cb = 1;
  }
  if ((*(char *)(param_1 + 0x50) != '\0') || (uVar1 = FUN_05a8eda4(DAT_091b49b0), (uVar1 & 1) == 0))
  {
    return;
  }
  lVar2 = *(long *)(DAT_091b49a8 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_03f95a6c();
  }
  lVar2 = **(long **)(lVar2 + 0xb8);
  uVar3 = thunk_FUN_03f9944c(DAT_09174980);
  FUN_070a8c30(uVar3,param_1,DAT_091cfcb8,0);
  if (lVar2 != 0) {
    IapAdsSystem_InAppManager__add_onPurchaseSuccess(lVar2,uVar3,0);
    lVar2 = *(long *)(DAT_091b49a8 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = **(long **)(lVar2 + 0xb8);
    uVar3 = thunk_FUN_03f9944c(DAT_09174980);
    FUN_070a8c30(uVar3,param_1,DAT_091cfcb0,0);
    if (lVar2 != 0) {
      IapAdsSystem_InAppManager__add_onNonConsumableGrant(lVar2,uVar3,0);
      lVar2 = DAT_095354b8;
      *(undefined1 *)(param_1 + 0x50) = 1;
      uVar3 = DAT_09171e60;
      if (*(int *)(lVar2 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_Type__GetTypeFromHandle(uVar3,0);
      if (*(int *)(DAT_09535470 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09535470);
      }
      lVar2 = System_Enum__GetNames(uVar3,0);
      if (lVar2 != 0) {
        if ((int)*(ulong *)(lVar2 + 0x18) < 1) {
          return;
        }
        uVar1 = 0;
        uVar4 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
        do {
          if (uVar4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          CakeOrder_Shop_InAppShopDataAccess__RestoreOwnedPackIfEntitled
                    (param_1,*(undefined8 *)(lVar2 + 0x20 + uVar1 * 8));
          uVar4 = (ulong)*(uint *)(lVar2 + 0x18);
          uVar1 = uVar1 + 1;
        } while ((long)uVar1 < (long)(int)*(uint *)(lVar2 + 0x18));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


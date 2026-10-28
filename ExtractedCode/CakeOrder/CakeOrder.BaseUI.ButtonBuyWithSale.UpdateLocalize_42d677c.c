// rea decompile_all
// name: CakeOrder.BaseUI.ButtonBuyWithSale$$UpdateLocalize
// address: 0x42d677c
// body: available
// range: 0x42d677c-0x42d6967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d6960 to 0x731be34 IapAdsSystem.InAppManager$$LoadPrice (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42d6964 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_ButtonBuyWithSale__UpdateLocalize(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((DAT_095173ce & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4448);
    FUN_03f5c2a4(&DAT_091c4450);
    FUN_03f5c2a4(&DAT_091b49a8);
    FUN_03f5c2a4(&DAT_09191620);
    DAT_095173ce = 1;
  }
  if (*(char *)(param_1 + 0x94) == '\0') {
    return;
  }
  lVar1 = *(long *)(DAT_091b49a8 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  lVar1 = **(long **)(lVar1 + 0xb8);
  uVar2 = thunk_FUN_03f9944c(DAT_09191620);
  IapAdsSystem_InAppManager_SetTextPrice___ctor(uVar2,param_1,DAT_091c4448,0);
  if (lVar1 != 0) {
    IapAdsSystem_InAppManager__LoadPrice(lVar1,uVar5,uVar2,0);
    uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x80),0);
    if (((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x90) < 1)) {
      return;
    }
    uVar3 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x80),0);
    if ((uVar3 & 1) == 0) {
      lVar1 = *(long *)(DAT_091b49a8 + 0x20);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03f95a6c();
      }
      lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03f95a6c();
      }
      uVar5 = *(undefined8 *)(param_1 + 0x80);
      lVar1 = **(long **)(lVar1 + 0xb8);
      uVar2 = thunk_FUN_03f9944c(DAT_09191620);
      IapAdsSystem_InAppManager_SetTextPrice___ctor(uVar2,param_1,DAT_091c4450,0);
      if (lVar1 != 0) {
        IapAdsSystem_InAppManager__LoadPrice(lVar1,uVar5,uVar2,0);
        return;
      }
    }
    else {
      plVar4 = *(long **)(param_1 + 0x58);
      uVar2 = CakeOrder_BaseUI_ButtonBuyWithSale__GetFakeOriginPriceText(param_1);
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x042d68c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x558))(plVar4,uVar2,*(undefined8 *)(*plVar4 + 0x560));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


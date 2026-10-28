// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageMain$$IsRequireInternetToPlaySelectedMap
// address: 0x431eec0
// body: available
// range: 0x431eec0-0x431f02b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x431f024 to 0x42d8528 CakeOrder.BaseUI.UIFlowPolicy$$RequiresInternet (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x431f028 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageMain__IsRequireInternetToPlaySelectedMap(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  if ((DAT_09517642 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b48b0);
    FUN_03f5c2a4(&DAT_091b49d0);
    FUN_03f5c2a4(&DAT_091b49d8);
    FUN_03f5c2a4(&DAT_091b48b8);
    DAT_09517642 = 1;
  }
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar6 = *(long *)(*(long *)(param_1 + 0x50) + 0x10), lVar6 != 0)) {
    uVar1 = *(undefined4 *)(lVar6 + 0x28);
    uVar2 = FUN_05a8eda4(DAT_091b48b8);
    uVar5 = FUN_05a8eda4(DAT_091b48b8);
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      lVar6 = *(long *)(DAT_091b48b0 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_0431f028;
      uVar3 = IapAdsSystem_AdsManager__get_IsRequireInternetToNextLevel(**(long **)(lVar6 + 0xb8),0)
      ;
    }
    uVar5 = FUN_05a8eda4(DAT_091b49d8);
    if ((uVar5 & 1) == 0) {
      uVar4 = 0;
    }
    else {
      lVar6 = *(long *)(DAT_091b49d0 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      if (**(long **)(lVar6 + 0xb8) == 0) goto LAB_0431f028;
      uVar4 = CakeOrder_Shop_InAppShopDataAccess__get_IsRemoveAdsPermanent
                        (**(long **)(lVar6 + 0xb8),0);
    }
    CakeOrder_BaseUI_UIFlowPolicy__RequiresInternet(uVar1,uVar2 & 1,uVar3 & 1,uVar4 & 1,0);
    return;
  }
LAB_0431f028:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


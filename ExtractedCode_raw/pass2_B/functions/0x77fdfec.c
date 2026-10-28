// rea decompile_all
// name: _GAME.EventSale.PopupEventSaleCtrl$$<BuyAllPack>g__OnPurchaseSuccess|37_0
// address: 0x77fdfec
// body: available
// range: 0x77fdfec-0x77fe133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77fe12c to 0x77fdeb8 _GAME.EventSale.PopupEventSaleCtrl$$CheckClosePopup (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77fe130 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_EventSale_PopupEventSaleCtrl__<BuyAllPack>g__OnPurchaseSuccess_37_0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_0952317a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba6a8);
    DAT_0952317a = 1;
  }
  _GAME_EventSale_EventSaleManager__ClaimPack(3);
  lVar1 = *(long *)(DAT_091ba6a8 + 0x20);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x128);
  lVar1 = **(long **)(lVar1 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(lVar1,0,0);
    if ((uVar2 & 1) != 0) {
      if (lVar1 == 0) {
LAB_077fe130:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = *(undefined8 *)(lVar1 + 0x30);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(lVar1 + 0x30) == 0) goto LAB_077fe130;
        uVar3 = *(undefined8 *)(param_1 + 0x128);
        uVar4 = UnityEngine_Component__get_transform(*(long *)(lVar1 + 0x30),0);
        _GAME_GameUI_DropItemController__DropCloneItemToTarget(uVar3,uVar4,0,0);
      }
    }
  }
  _GAME_EventSale_PopupEventSaleCtrl__CheckClosePopup(param_1);
  return;
}


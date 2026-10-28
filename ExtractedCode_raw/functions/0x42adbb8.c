// rea decompile_all
// name: CakeOrder.InGame.UIPopupBoosterSaveMeBase$$OnBeforeShow
// address: 0x42adbb8
// body: available
// range: 0x42adbb8-0x42ade2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ade18 to 0x436bf38 CakeOrder.Shop.UIOfferPackInGame$$ShowOffer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42ade2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UIPopupBoosterSaveMeBase__OnBeforeShow(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_09517296 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174980);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dcf20);
    DAT_09517296 = 1;
  }
  CakeOrder_BaseUI_UICakePopup__OnBeforeShow(param_1,0);
  lVar4 = param_1[0x29];
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(lVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if (param_1[0x29] == 0) goto LAB_042ade2c;
    lVar4 = UnityEngine_Component__get_gameObject(param_1[0x29],0);
    uVar1 = (**(code **)(*param_1 + 0x2c8))(param_1,*(undefined8 *)(*param_1 + 0x2d0));
    if (lVar4 == 0) goto LAB_042ade2c;
    UnityEngine_GameObject__SetActive(lVar4,uVar1 & 1,0);
  }
  if (param_1[0x31] != 0) {
    lVar4 = *(long *)(param_1[0x31] + 0x18);
    if (lVar4 == 0) goto LAB_042ade2c;
    CakeOrder_BaseUI_UIElementAbstract__Show(0,lVar4,0,0,0);
    if ((param_1[0x31] == 0) || (lVar4 = *(long *)(param_1[0x31] + 0x28), lVar4 == 0))
    goto LAB_042ade2c;
    Utilities_UINumberCounterAbstract__Show(0,lVar4,0);
    if ((param_1[0x31] == 0) || (lVar4 = *(long *)(param_1[0x31] + 0x20), lVar4 == 0))
    goto LAB_042ade2c;
    Utilities_UINumberCounterAbstract__Hide(0,lVar4,0);
  }
  (**(code **)(*param_1 + 0x318))(param_1,*(undefined8 *)(*param_1 + 800));
  lVar4 = param_1[0x28];
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar4,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar4 = param_1[0x28];
  *(undefined1 *)(param_1 + 0x35) = 0;
  uVar3 = thunk_FUN_03f9944c(DAT_09174980);
  FUN_070a8c30(uVar3,param_1,*(undefined8 *)(*param_1 + 0x300),0);
  if (lVar4 != 0) {
    CakeOrder_Shop_UIOfferPackInGame__remove_onShownPackBought(lVar4,uVar3,0);
    lVar4 = param_1[0x28];
    uVar3 = thunk_FUN_03f9944c(DAT_09174980);
    FUN_070a8c30(uVar3,param_1,*(undefined8 *)(*param_1 + 0x300),0);
    if (lVar4 != 0) {
      CakeOrder_Shop_UIOfferPackInGame__add_onShownPackBought(lVar4,uVar3,0);
      lVar4 = param_1[0x28];
      uVar3 = thunk_FUN_03f9944c(DAT_09174980);
      FUN_070a8c30(uVar3,param_1,DAT_091dcf20,0);
      if (lVar4 != 0) {
        CakeOrder_Shop_UIOfferPackInGame__remove_onShownPackPurchased(lVar4,uVar3,0);
        lVar4 = param_1[0x28];
        uVar3 = thunk_FUN_03f9944c(DAT_09174980);
        FUN_070a8c30(uVar3,param_1,DAT_091dcf20,0);
        if (lVar4 != 0) {
          CakeOrder_Shop_UIOfferPackInGame__add_onShownPackPurchased(lVar4,uVar3,0);
          if (param_1[0x28] != 0) {
            CakeOrder_Shop_UIOfferPackInGame__ShowOffer(0xbf800000,param_1[0x28],param_1[0x16],0);
            return;
          }
        }
      }
    }
  }
LAB_042ade2c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


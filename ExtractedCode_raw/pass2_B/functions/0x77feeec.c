// rea decompile_all
// name: _GAME.EventSale.EventSalePackUICtrl$$BuyPack
// address: 0x77feeec
// body: available
// range: 0x77feeec-0x77ff0a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77ff040 to 0x77db484 _GAME.BaseGame.IAPManager$$PurchasePackage (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77ff0a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_EventSale_EventSalePackUICtrl__BuyPack(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  
  if ((DAT_09523197 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091b8600);
    FUN_03f5c2a4(&DAT_091e9c60);
    FUN_03f5c2a4(&DAT_091e9c68);
    FUN_03f5c2a4(&DAT_09190748);
    DAT_09523197 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09190748);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x18),param_1);
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar3 = _GAME_EventSale_EventSaleManager__IsPackBuyed(*(undefined4 *)(param_1 + 0x40)),
       (uVar3 & 1) == 0)) {
      uVar3 = _GAME_EventSale_EventSaleManager__get_IsSaleActive();
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x30) != 0) {
          UnityEngine_UI_Selectable__set_interactable(*(long *)(param_1 + 0x30),0,0);
          lVar7 = *(long *)(param_1 + 0x48);
          *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(param_1 + 0x40);
          if (lVar7 != 0) {
            uVar1 = *(undefined4 *)(lVar7 + 0x14);
            uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
            System_Action___ctor(uVar4,lVar2,DAT_091e9c68,0);
            uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
            System_Action___ctor(uVar5,lVar2,DAT_091e9c60,0);
            _GAME_BaseGame_IAPManager__PurchasePackage(uVar1,uVar4,uVar5,0,0);
            return;
          }
        }
        goto LAB_077ff0a4;
      }
      lVar2 = *(long *)(DAT_091b8600 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      plVar6 = (long *)**(long **)(lVar2 + 0xb8);
      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x077ff0a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x308))(plVar6,*(undefined8 *)(*plVar6 + 0x310));
        return;
      }
    }
    return;
  }
LAB_077ff0a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


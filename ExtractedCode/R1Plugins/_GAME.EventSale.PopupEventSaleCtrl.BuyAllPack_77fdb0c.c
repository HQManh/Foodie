// rea decompile_all
// name: _GAME.EventSale.PopupEventSaleCtrl$$BuyAllPack
// address: 0x77fdb0c
// body: available
// range: 0x77fdb0c-0x77fde4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77fdda4 to 0x774b10c _GAME.GameUI.PopupBaseCtrl$$Close (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77fde40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77fde44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77fde48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_EventSale_PopupEventSaleCtrl__BuyAllPack(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  
  if ((DAT_09523177 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091a40b8);
    FUN_03f5c2a4(&DAT_091a40c0);
    FUN_03f5c2a4(&DAT_091a40c8);
    FUN_03f5c2a4(&DAT_091ad630);
    FUN_03f5c2a4(&DAT_091afa58);
    FUN_03f5c2a4(&DAT_091ad628);
    FUN_03f5c2a4(&DAT_0917c3e8);
    FUN_03f5c2a4(&DAT_091d6218);
    FUN_03f5c2a4(&DAT_091d6220);
    FUN_03f5c2a4(&DAT_09189978);
    FUN_03f5c2a4(&DAT_0918a4d0);
    FUN_03f5c2a4(&DAT_091ba598);
    DAT_09523177 = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  if (*(long *)(param_1 + 0x108) != 0) {
    uVar2 = UnityEngine_GameObject__get_activeSelf(*(long *)(param_1 + 0x108),0);
    if ((uVar2 & 1) == 0) {
      uVar2 = _GAME_EventSale_EventSaleManager__get_IsSaleActive();
      if ((uVar2 & 1) == 0) {
        _GAME_GameUI_PopupBaseCtrl__Close(param_1,0);
        return;
      }
      if (*(long *)(param_1 + 0x118) == 0) goto LAB_077fde48;
      UnityEngine_UI_Selectable__set_interactable(*(long *)(param_1 + 0x118),0,0);
      lVar3 = thunk_FUN_03f9944c(DAT_0917c3e8);
      FUN_057e0400(lVar3,DAT_091ad628);
      if (*(int *)(DAT_0918a4d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = _GAME_BaseGame_SOIAPConfig__GetPack(0x35,0);
      if (lVar4 != 0) {
        if (*(long *)(lVar4 + 0x38) == 0) goto LAB_077fde48;
        FUN_057e185c(&local_88,*(long *)(lVar4 + 0x38),DAT_091afa58);
        puStack_68 = puStack_80;
        local_70 = local_88;
        local_60 = local_78;
        puStack_80 = &local_70;
        local_88 = 0;
        while (uVar2 = FUN_071bd28c(&local_70,DAT_091a40c0), uVar5 = local_60, (uVar2 & 1) != 0) {
          lVar4 = *(long *)(DAT_091ba598 + 0x20);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03f95a6c();
          }
          lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
            lVar4 = FUN_03f95a6c();
          }
          if (**(long **)(lVar4 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar7 = *(undefined8 *)(**(long **)(lVar4 + 0xb8) + 0x28);
          if (*(int *)(DAT_09189978 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = _GAME_Bridge_R1RewardMap__ToRewardInfo(uVar5,uVar7,0);
          lVar4 = DAT_091ad630;
          if (lVar3 == 0) {
LAB_077fde40:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar6 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar6 == 0) goto LAB_077fde40;
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar3,uVar5,
                         *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_071bd288(&local_70,DAT_091a40b8);
      }
      uVar5 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar5,param_1,DAT_091d6220,0);
      uVar7 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar7,param_1,DAT_091d6218,0);
      _GAME_BaseGame_IAPManager__PurchasePackage(0x35,uVar5,uVar7,lVar3,0);
    }
    return;
  }
LAB_077fde48:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


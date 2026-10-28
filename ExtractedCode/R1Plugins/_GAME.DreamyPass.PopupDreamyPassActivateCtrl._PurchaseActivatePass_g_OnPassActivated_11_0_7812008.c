// rea decompile_all
// name: _GAME.DreamyPass.PopupDreamyPassActivateCtrl$$<PurchaseActivatePass>g__OnPassActivated|11_0
// address: 0x7812008
// body: available
// range: 0x7812008-0x7812157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7812150 to 0x774b10c _GAME.GameUI.PopupBaseCtrl$$Close (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7812154 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_PopupDreamyPassActivateCtrl__<PurchaseActivatePass>g__OnPassActivated_11_0
               (long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_09523263 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183010);
    FUN_03f5c2a4(&DAT_0918a440);
    DAT_09523263 = 1;
  }
  uVar2 = _GAME_DreamyPass_DreamyPassManager__ClaimPassReward(0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_09183010 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_09183010 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = _GAME_Currency_CurrencyData__get_heart(**(long **)(DAT_09183010 + 0xb8),0);
    if (0 < 8 - iVar1) {
      uVar3 = thunk_FUN_03f9944c(DAT_0918a440);
      _GAME_GameItem_RwItemModel___ctor(uVar3,2,8 - iVar1,0);
      _GAME_GameItem_GameItemManager__ClaimReward(uVar3,0x2e,3,0);
    }
    uVar3 = thunk_FUN_03f9944c(DAT_0918a440);
    _GAME_GameItem_RwItemModel___ctor(uVar3,0x33,10,0);
    _GAME_GameItem_GameItemManager__ClaimReward(uVar3,0x2e,3,0);
    uVar3 = thunk_FUN_03f9944c(DAT_0918a440);
    _GAME_GameItem_RwItemModel___ctor(uVar3,0x34,1,0);
    _GAME_GameItem_GameItemManager__ClaimReward(uVar3,0x2e,3,0);
    _GAME_GameUI_DropItemController__DropCloneItemToBag
              (0x3dcccccd,*(undefined8 *)(param_1 + 0x100),0);
  }
  _GAME_GameUI_PopupBaseCtrl__Close(param_1,0);
  return;
}


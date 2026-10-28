// rea decompile_all
// name: _GAME.BaseGame.IAPManager$$PurchasePackage
// address: 0x77db484
// body: available
// range: 0x77db484-0x77db713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77db5f0 to 0x775f0b8 _GAME.Bridge.CookOrderBridge$$PurchaseIap (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77db710 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_IAPManager__PurchasePackage
               (undefined4 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  if ((DAT_09523010 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174570);
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0918a4d0);
    FUN_03f5c2a4(&DAT_091eb3e8);
    FUN_03f5c2a4(&DAT_091914f8);
    FUN_03f5c2a4(&DAT_091f66e8);
    FUN_03f5c2a4(&DAT_0920df18);
    FUN_03f5c2a4(&DAT_0920e290);
    FUN_03f5c2a4(&DAT_09214088);
    DAT_09523010 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_091914f8);
  System_Object___ctor(lVar1,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_2);
  plVar6 = (long *)(lVar1 + 0x18);
  *plVar6 = param_3;
  thunk_FUN_03f5d7b8(plVar6,param_3);
  if (*(int *)(DAT_0918a4d0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = _GAME_BaseGame_SOIAPConfig__ConvertSku(param_1);
  uVar3 = _GAME_Bridge_CookOrderBridge__IsIapListed(uVar2,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = thunk_FUN_03f9944c(DAT_09174570);
    FUN_070a4758(uVar4,lVar1,DAT_091eb3e8,0);
    _GAME_Bridge_CookOrderBridge__PurchaseIap(uVar2,uVar4,param_4,0);
    return;
  }
  uVar2 = System_String__Concat(DAT_09214088,uVar2,DAT_091f66e8,0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835d0);
  }
  UnityEngine_Debug__LogError(uVar2,0);
  lVar1 = DAT_091c0310;
  lVar5 = *(long *)(DAT_091c0310 + 0x38);
  if (lVar5 == 0) {
    FUN_03f95ac8(DAT_091c0310);
    lVar5 = *(long *)(lVar1 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_03f95a6c();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar5 = _GAME_Localize_LocalizeManager__GetTextOrNullByKey
                    (DAT_0920e290,**(undefined8 **)(lVar1 + 0xb8),0);
  lVar1 = DAT_0920df18;
  if (lVar5 != 0) {
    lVar1 = lVar5;
  }
  _GAME_GameUI_ToastController__ShowMessage(lVar1,0);
  lVar1 = *plVar6;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x077db6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}


// rea decompile_all
// name: _GAME.EventSale.PopupEventSaleCtrl$$OnDestroy
// address: 0x77fd600
// body: available
// range: 0x77fd600-0x77fd75f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77fd75c to 0x5d71ed0 FUN_05d71ed0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_EventSale_PopupEventSaleCtrl__OnDestroy(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_09523172 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091d6230);
    FUN_03f5c2a4(&DAT_091b85f8);
    FUN_03f5c2a4(&DAT_091ba3f8);
    FUN_03f5c2a4(&DAT_0917e718);
    FUN_03f5c2a4(&DAT_0918be20);
    DAT_09523172 = 1;
  }
  uVar3 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar3,param_1,DAT_091d6230,0);
  if (*(int *)(DAT_09182278 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  CakeOrder_Localization_CakeLocalization__remove_LocaleChanged(uVar3,0);
  if (*(long *)(param_1 + 0x198) != 0) {
    UnityEngine_MonoBehaviour__StopCoroutine(param_1,*(long *)(param_1 + 0x198),0);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x1a8);
  if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  _GAME_BaseGame_TimerManager__RemoveCallbackTick(uVar1,0);
  lVar2 = DAT_0917e718;
  uVar1 = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1a8) = 0xffffffff;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_060df6f8(uVar1,DAT_091ba3f8);
  uVar3 = DAT_091b85f8;
  *(undefined4 *)(param_1 + 0x1ac) = 0xffffffff;
  FUN_05d71ed0(param_1,uVar3);
  return;
}


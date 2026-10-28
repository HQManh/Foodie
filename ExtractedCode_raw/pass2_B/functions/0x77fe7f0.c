// rea decompile_all
// name: _GAME.EventSale.EventSaleFIconCtrl$$OnSetUp
// address: 0x77fe7f0
// body: available
// range: 0x77fe7f0-0x77fea67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77fea60 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77fea64 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_EventSale_EventSaleFIconCtrl__OnSetUp(long *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_0952318e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091cb8c8);
    FUN_03f5c2a4(&DAT_091ba438);
    FUN_03f5c2a4(&DAT_091ba458);
    FUN_03f5c2a4(&DAT_091ba3e0);
    FUN_03f5c2a4(&DAT_0917e718);
    FUN_03f5c2a4(&DAT_0917e738);
    FUN_03f5c2a4(&DAT_0917e730);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_0918c678);
    DAT_0952318e = 1;
  }
  uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
  if (param_1 != (long *)0x0) {
    System_Action___ctor(uVar2,param_1,*(undefined8 *)(*param_1 + 0x1a0),0);
    if (*(int *)(DAT_0917e718 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_060df21c(uVar2,1,0,DAT_091ba3e0);
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,param_1,*(undefined8 *)(*param_1 + 0x1a0),0);
    if (*(int *)(DAT_0917e730 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_060df21c(uVar2,1,0,DAT_091ba438);
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,param_1,*(undefined8 *)(*param_1 + 0x1b0),0);
    if (*(int *)(DAT_0917e738 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_060df21c(uVar2,1,0,DAT_091ba458);
    lVar3 = param_1[9];
    if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    _GAME_BaseGame_TimerManager__RemoveCallbackTick((int)lVar3,0);
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,param_1,*(undefined8 *)(*param_1 + 0x1b0),0);
    uVar1 = _GAME_BaseGame_TimerManager__AddCallbackTick(uVar2,param_1,0);
    uVar2 = DAT_0918c678;
    lVar3 = param_1[8];
    *(undefined4 *)(param_1 + 9) = uVar1;
    uVar2 = thunk_FUN_03f9944c(uVar2);
    UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091cb8c8,0);
    _GAME_Utils_HelperButton__AddOnClickListener(lVar3,uVar2,0);
    param_1[4] = param_2;
    thunk_FUN_03f5d7b8(param_1 + 4,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


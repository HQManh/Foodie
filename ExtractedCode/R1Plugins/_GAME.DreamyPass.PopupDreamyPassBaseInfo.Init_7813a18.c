// rea decompile_all
// name: _GAME.DreamyPass.PopupDreamyPassBaseInfo$$Init
// address: 0x7813a18
// body: available
// range: 0x7813a18-0x7813c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7813c90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_PopupDreamyPassBaseInfo__Init(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  if ((DAT_09523272 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091d6090);
    FUN_03f5c2a4(&DAT_091d6098);
    FUN_03f5c2a4(&DAT_091d60a0);
    FUN_03f5c2a4(&DAT_091d60a8);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_091ba348);
    FUN_03f5c2a4(&DAT_0917e700);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_0918c678);
    DAT_09523272 = 1;
  }
  *(undefined8 *)(param_1 + 0x58) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),param_2);
  uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar2,param_1,DAT_091d60a8,0);
  if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = _GAME_BaseGame_TimerManager__AddCallbackTick(uVar2,param_2,0);
  uVar2 = DAT_09180e78;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  uVar2 = thunk_FUN_03f9944c(uVar2);
  System_Action___ctor(uVar2,param_1,DAT_091d60a0,0);
  if (*(int *)(DAT_0917e700 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = FUN_060df21c(uVar2,1,param_2,DAT_091ba348);
  uVar2 = DAT_0918c678;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 100) = uVar1;
  uVar2 = thunk_FUN_03f9944c(uVar2);
  UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091d6098,0);
  _GAME_Utils_HelperButton__AddOnClickListener(uVar3,uVar2,0);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
  UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091d6090,0);
  _GAME_Utils_HelperButton__AddOnClickListener(uVar3,uVar2,0);
  plVar4 = *(long **)(param_1 + 0x48);
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((**(long **)(DAT_091896c0 + 0xb8) != 0) && (plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x178))
              (plVar4,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x20),
               *(undefined8 *)(*plVar4 + 0x180));
    if ((**(long **)(DAT_091896c0 + 0xb8) != 0) &&
       (plVar4 = *(long **)(param_1 + 0x50), plVar4 != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x07813c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x188))
                (plVar4,*(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18),0,
                 *(undefined8 *)(*plVar4 + 400));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


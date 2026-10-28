// rea decompile_all
// name: _GAME.DreamyPass.PopupDreamyPassFirstOpenCtrl$$Step3NextStep
// address: 0x7818240
// body: available
// range: 0x7818240-0x78182f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x78182f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_PopupDreamyPassFirstOpenCtrl__Step3NextStep(long param_1)

{
  long *plVar1;
  
  if ((DAT_0952329d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d5f08);
    FUN_03f5c2a4(&DAT_09189468);
    DAT_0952329d = 1;
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    UnityEngine_UI_Selectable__set_interactable(*(long *)(param_1 + 0x148),0,0);
    if (*(long *)(param_1 + 0x130) != 0) {
      UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x130),0,0);
      _GAME_GameUI_PopupBaseCtrl__Close(param_1,2,0);
      if (*(int *)(DAT_09189468 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar1 = (long *)FUN_04ca5cb8(DAT_091d5f08);
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x078182f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x2c8))(plVar1,*(undefined8 *)(*plVar1 + 0x2d0));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


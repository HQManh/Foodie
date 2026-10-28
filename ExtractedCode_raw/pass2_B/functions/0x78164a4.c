// rea decompile_all
// name: _GAME.DreamyPass.PopupDreamyPassFinish$$UpdateUIData
// address: 0x78164a4
// body: available
// range: 0x78164a4-0x781655f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7816558 to 0x7741364 _GAME.Utils.HelperButton$$Interactable (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x781655c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_PopupDreamyPassFinish__UpdateUIData(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((DAT_0952328d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d58);
    FUN_03f5c2a4(&DAT_0918be20);
    DAT_0952328d = 1;
  }
  if (**(long **)(DAT_09183d58 + 0xb8) != 0) {
    lVar2 = *(long *)(**(long **)(DAT_09183d58 + 0xb8) + 0x18);
    if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = _GAME_BaseGame_TimerManager__get_UnixTimeSeconds(0);
    if (*(long *)(param_1 + 0x10) != 0) {
      lVar2 = lVar2 - lVar1;
      UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x10),lVar2 < 1,0);
      if (*(long *)(param_1 + 0x20) != 0) {
        _GAME_Utils_HelperButton__Interactable
                  (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0xd0),0 < lVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


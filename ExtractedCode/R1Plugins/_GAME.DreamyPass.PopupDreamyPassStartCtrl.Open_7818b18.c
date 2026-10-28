// rea decompile_all
// name: _GAME.DreamyPass.PopupDreamyPassStartCtrl$$Open
// address: 0x7818b18
// body: available
// range: 0x7818b18-0x7818c03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7818bfc to 0x774ae2c _GAME.GameUI.PopupBaseCtrl$$Open (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7818c00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_PopupDreamyPassStartCtrl__Open(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_095232a3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_09189998);
    DAT_095232a3 = 1;
  }
  plVar1 = *(long **)(param_1 + 0xf0);
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((**(long **)(DAT_091896c0 + 0xb8) != 0) && (plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x178))
              (plVar1,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x20),
               *(undefined8 *)(*plVar1 + 0x180));
    if ((*(long *)(param_1 + 0xf8) != 0) && (**(long **)(DAT_091896c0 + 0xb8) != 0)) {
      lVar2 = *(long *)(*(long *)(param_1 + 0xf8) + 0x20);
      uVar3 = *(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18);
      if (*(int *)(DAT_09189998 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = _GAME_Bridge_R1UserTextSupport__ForDisplay(uVar3,0);
      if (lVar2 != 0) {
        TMPro_TMP_Text__SetText(lVar2,uVar3,0);
        _GAME_GameUI_PopupBaseCtrl__Open(param_1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: _GAME.DreamyPass.PopupDreamyPassCheat.<>c$$<Init>b__6_0
// address: 0x78139ac
// body: available
// range: 0x78139ac-0x7813a0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7813a04 to 0x780e370 _GAME.DreamyPass.DreamyPassDbModel$$AddSaveAction (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7813a08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_PopupDreamyPassCheat_<>c__<Init>b__6_0(void)

{
  long lVar1;
  
  if ((DAT_09523271 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d58);
    DAT_09523271 = 1;
  }
  lVar1 = **(long **)(DAT_09183d58 + 0xb8);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x18) = *(long *)(lVar1 + 0x18) + -0x15180;
    _GAME_DreamyPass_DreamyPassDbModel__AddSaveAction();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


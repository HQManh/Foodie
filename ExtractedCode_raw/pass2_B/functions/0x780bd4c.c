// rea decompile_all
// name: _GAME.DreamyStreak.SODreamyStreakConfig$$GetPointByStreak
// address: 0x780bd4c
// body: available
// range: 0x780bd4c-0x780be3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x780be08 to 0x5796eb0 FUN_05796eb0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x780be38 to 0x4ae7450 FUN_04ae7450 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x780be3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyStreak_SODreamyStreakConfig__GetPointByStreak(int param_1)

{
  long lVar1;
  
  if ((DAT_0952322b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9e58);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_0918a4c0);
    DAT_0952322b = 1;
  }
  if (*(int *)(DAT_0918a4c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = **(long **)(DAT_0918a4c0 + 0xb8);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) <= param_1) {
      if (*(int *)(DAT_0918a4c0 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar1 = **(long **)(DAT_0918a4c0 + 0xb8);
      }
      FUN_04ae7450(lVar1,DAT_091c9e58);
      return;
    }
    if (*(int *)(DAT_0918a4c0 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar1 = **(long **)(DAT_0918a4c0 + 0xb8);
      if (lVar1 == 0) goto LAB_0780be3c;
    }
    FUN_05796eb0(lVar1,param_1,DAT_091add20);
    return;
  }
LAB_0780be3c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: _GAME.TeamTreasure.TeamTreasureManager$$ClaimStepReward
// address: 0x77ee9f4
// body: available
// range: 0x77ee9f4-0x77eeb2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77eeb28 to 0x60df854 FUN_060df854 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77eeb2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_TeamTreasure_TeamTreasureManager__ClaimStepReward(int param_1)

{
  long lVar1;
  ulong uVar2;
  
  if ((DAT_095230d8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0cf8);
    FUN_03f5c2a4(&DAT_091ab408);
    FUN_03f5c2a4(&DAT_091ab410);
    FUN_03f5c2a4(&DAT_091ba510);
    FUN_03f5c2a4(&DAT_0917e760);
    FUN_03f5c2a4(&DAT_0918b998);
    DAT_095230d8 = 1;
  }
  if (param_1 < 0) {
    return;
  }
  lVar1 = _GAME_TeamTreasure_SOTeamTreasureConfig__get_ListRwStep();
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) <= param_1) {
      return;
    }
    if ((**(long **)(DAT_0918b998 + 0xb8) != 0) &&
       (lVar1 = *(long *)(**(long **)(DAT_0918b998 + 0xb8) + 0x20), lVar1 != 0)) {
      uVar2 = FUN_0571bde4(lVar1,param_1,DAT_091ab408);
      if ((uVar2 & 1) != 0) {
        return;
      }
      if (((**(long **)(DAT_0918b998 + 0xb8) != 0) &&
          (lVar1 = *(long *)(**(long **)(DAT_0918b998 + 0xb8) + 0x20), lVar1 != 0)) &&
         (FUN_0571be38(lVar1,param_1,1,DAT_091ab410), **(long **)(DAT_0918b998 + 0xb8) != 0)) {
        _GAME_TeamTreasure_TeamTreasureDbModel__AddSaveAction();
        if (*(int *)(DAT_0917e760 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_060df854(DAT_091ba510);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


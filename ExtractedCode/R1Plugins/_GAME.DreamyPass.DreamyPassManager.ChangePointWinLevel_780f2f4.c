// rea decompile_all
// name: _GAME.DreamyPass.DreamyPassManager$$ChangePointWinLevel
// address: 0x780f2f4
// body: available
// range: 0x780f2f4-0x780f3b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x780f3ac to 0x780f3b4 _GAME.DreamyPass.DreamyPassManager$$ChangePoint (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x780f3b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyPass_DreamyPassManager__ChangePointWinLevel(undefined4 param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = _GAME_Levels_LevelManager__get_LevelCompleted(0);
  if (((9 < iVar1) &&
      (uVar2 = _GAME_DreamyPass_DreamyPassManager__get_IsStarted(), (uVar2 & 1) != 0)) &&
     (uVar2 = _GAME_DreamyPass_DreamyPassManager__get_IsEnded(), (uVar2 & 1) == 0)) {
    lVar3 = _GAME_Levels_SOLevelConfig__GetLevelConfig(param_1,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = _GAME_Levels_LevelMainCfModel__IsSpecial(lVar3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = _GAME_Levels_LevelMainCfModel__IsHard(lVar3,0);
      uVar4 = 3;
      if ((uVar2 & 1) == 0) {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 5;
    }
    uVar2 = _GAME_Levels_LevelMainCfModel__IsSpecial(lVar3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = _GAME_Levels_LevelMainCfModel__IsHard(lVar3,0);
      uVar5 = 0x1e;
      if ((uVar2 & 1) == 0) {
        uVar5 = 10;
      }
    }
    else {
      uVar5 = 0x32;
    }
    _GAME_DreamyPass_DreamyPassManager__ChangePoint(uVar4,uVar5);
    return;
  }
  return;
}


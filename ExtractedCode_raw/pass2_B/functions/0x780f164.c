// rea decompile_all
// name: _GAME.DreamyPass.DreamyPassManager$$CheckPlayTutorialUnlock
// address: 0x780f164
// body: available
// range: 0x780f164-0x780f267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x780f264 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _GAME_DreamyPass_DreamyPassManager__CheckPlayTutorialUnlock(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if ((DAT_09523249 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d58);
    FUN_03f5c2a4(&DAT_091d5f30);
    FUN_03f5c2a4(&DAT_091d5f40);
    FUN_03f5c2a4(&DAT_09189468);
    DAT_09523249 = 1;
  }
  iVar1 = _GAME_Levels_LevelManager__get_LevelCompleted(0);
  if (iVar1 < 10) {
LAB_0780f1e4:
    uVar2 = 0;
  }
  else {
    lVar4 = **(long **)(DAT_09183d58 + 0xb8);
    if (lVar4 == 0) goto LAB_0780f264;
    if (*(char *)(lVar4 + 0x10) == '\0') {
      *(undefined1 *)(lVar4 + 0x10) = 1;
      _GAME_DreamyPass_DreamyPassManager__ResetDataNewSeason();
      if (*(int *)(DAT_09189468 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar5 = &DAT_091d5f40;
    }
    else {
      if (*(long *)(lVar4 + 0x18) != 0) goto LAB_0780f1e4;
      if (*(int *)(DAT_09189468 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar5 = &DAT_091d5f30;
    }
    plVar3 = (long *)FUN_04ca5cb8(*puVar5);
    if (plVar3 == (long *)0x0) {
LAB_0780f264:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar3 + 0x2c8))(plVar3,*(undefined8 *)(*plVar3 + 0x2d0));
    uVar2 = 1;
  }
  return uVar2;
}


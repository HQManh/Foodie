// rea decompile_all
// name: _GAME.StageRace.StageRaceManager$$FinishRace
// address: 0x77f4074
// body: available
// range: 0x77f4074-0x77f4257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77f4250 to 0x60df854 FUN_060df854 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77f4254 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_StageRace_StageRaceManager__FinishRace(ulong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_0952313d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0498);
    FUN_03f5c2a4(&DAT_0917ccb8);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_091ba4c8);
    FUN_03f5c2a4(&DAT_0917e750);
    FUN_03f5c2a4(&DAT_0918b158);
    DAT_0952313d = 1;
  }
  if ((param_1 & 1) != 0) {
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    _GAME_Profile_ProfileManager__ChangeStageRaceWin(1,0);
    _GAME_Quests_QuestsManager__ChangeQuestCounter(8,1,0);
    if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
    if (lVar4 == 0) goto LAB_077f4254;
    iVar2 = *(int *)(lVar4 + 0x20) + 1;
    *(int *)(lVar4 + 0x20) = iVar2;
    iVar1 = _GAME_StageRace_SOStageRaceConfig__get_NumbStage();
    if (iVar1 <= iVar2) {
      if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar4 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
      iVar2 = _GAME_StageRace_SOStageRaceConfig__get_NumbStage();
      if (lVar4 == 0) goto LAB_077f4254;
      *(int *)(lVar4 + 0x20) = iVar2 + -1;
    }
  }
  if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar4 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x30) = 0;
    *(undefined8 *)(lVar4 + 0x38) = 0;
    *(undefined4 *)(lVar4 + 0x40) = 0;
    uVar3 = thunk_FUN_03f9944c(DAT_0917ccb8);
    FUN_057e0400(uVar3,DAT_091b0498);
    *(undefined8 *)(lVar4 + 0x48) = uVar3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x48),uVar3);
    if (*(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8) != 0) {
      _GAME_StageRace_StageRaceDbModel__AddSaveAction();
      lVar4 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
      if (lVar4 != 0) {
        uVar3 = _GAME_StageRace_SOStageRaceConfig__GetStageConfig(*(undefined4 *)(lVar4 + 0x20));
        **(undefined8 **)(DAT_0918b158 + 0xb8) = uVar3;
        thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918b158 + 0xb8),uVar3);
        if (*(int *)(DAT_0917e750 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_060df854(DAT_091ba4c8);
        return;
      }
    }
  }
LAB_077f4254:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


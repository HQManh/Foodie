// rea decompile_all
// name: _GAME.SaveGame.SaveGameManager$$ApplyR1
// address: 0x77a0d50
// body: available
// range: 0x77a0d50-0x77a100f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77a0ffc to 0x60df854 FUN_060df854 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77a100c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_SaveGame_SaveGameManager__ApplyR1(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((DAT_09522e24 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184268);
    FUN_03f5c2a4(&DAT_091876b8);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_09189938);
    FUN_03f5c2a4(&DAT_091ba3f0);
    FUN_03f5c2a4(&DAT_0917e718);
    FUN_03f5c2a4(&DAT_0918b978);
    FUN_03f5c2a4(&DAT_0918d050);
    DAT_09522e24 = 1;
  }
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x20) != 0) {
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = **(long **)(DAT_091896c0 + 0xb8);
      if (lVar2 != 0) {
        if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar2 = **(long **)(DAT_091896c0 + 0xb8);
          if (lVar2 == 0) goto LAB_077a100c;
        }
        _GAME_Profile_ProfileDbModel__FromSaveGameModel(lVar2,*(undefined8 *)(param_1 + 0x20),0);
        _GAME_SaveGame_SaveGameManager__CanonicalizeProfileIdentity();
        if (**(long **)(DAT_091896c0 + 0xb8) == 0) goto LAB_077a100c;
        _GAME_Profile_ProfileDbModel__AddSaveAction(**(long **)(DAT_091896c0 + 0xb8),0);
      }
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = **(long **)(DAT_0918b978 + 0xb8);
      if (lVar2 != 0) {
        if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar2 = **(long **)(DAT_0918b978 + 0xb8);
          if (lVar2 == 0) goto LAB_077a100c;
        }
        _GAME_Team_TeamDbModel__FromSaveGameModel(lVar2,*(undefined8 *)(param_1 + 0x28),0);
        if (**(long **)(DAT_0918b978 + 0xb8) == 0) goto LAB_077a100c;
        _GAME_Team_TeamDbModel__AddSaveAction(**(long **)(DAT_0918b978 + 0xb8),0);
      }
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      if (**(long **)(DAT_091876b8 + 0xb8) != 0) {
        _GAME_Leaderboard_LeaderboardDbModel__FromSaveGameModel
                  (**(long **)(DAT_091876b8 + 0xb8),*(long *)(param_1 + 0x30),0);
        if (**(long **)(DAT_091876b8 + 0xb8) == 0) goto LAB_077a100c;
        _GAME_Leaderboard_LeaderboardDbModel__AddSaveAction(**(long **)(DAT_091876b8 + 0xb8),0);
      }
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      if (*(int *)(DAT_09189938 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = _GAME_R1Features__IsEventEnabled(5,0);
      if ((uVar1 & 1) != 0) {
        if (**(long **)(DAT_0918d050 + 0xb8) != 0) {
          _GAME_WeeklyContest_WeeklyContestDbModel__FromSaveGameModel
                    (**(long **)(DAT_0918d050 + 0xb8),*(undefined8 *)(param_1 + 0x38),0);
          if (**(long **)(DAT_0918d050 + 0xb8) == 0) goto LAB_077a100c;
          _GAME_WeeklyContest_WeeklyContestDbModel__AddSaveAction
                    (**(long **)(DAT_0918d050 + 0xb8),0);
        }
      }
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      if (*(int *)(DAT_09189938 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = _GAME_R1Features__IsEventEnabled(6,0);
      if ((uVar1 & 1) != 0) {
        if (**(long **)(DAT_09184268 + 0xb8) != 0) {
          _GAME_EventSale_EventSaleDbModel__FromSaveGameModel
                    (**(long **)(DAT_09184268 + 0xb8),*(undefined8 *)(param_1 + 0x40),0);
          if (**(long **)(DAT_09184268 + 0xb8) != 0) {
            _GAME_EventSale_EventSaleDbModel__AddSaveAction(**(long **)(DAT_09184268 + 0xb8),0);
            if (*(int *)(DAT_0917e718 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            FUN_060df854(DAT_091ba3f0);
            return;
          }
          goto LAB_077a100c;
        }
      }
    }
    return;
  }
LAB_077a100c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


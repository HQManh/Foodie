// rea decompile_all
// name: _GAME.WeeklyContest.WeeklyContestManager$$CheckPlayTutorialUnlock
// address: 0x77e19ec
// body: available
// range: 0x77e19ec-0x77e1b3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77e1b3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_WeeklyContest_WeeklyContestManager__CheckPlayTutorialUnlock(void)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  
  if ((DAT_09523074 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185080);
    FUN_03f5c2a4(&DAT_091d6060);
    FUN_03f5c2a4(&DAT_09189468);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_0918d050);
    DAT_09523074 = 1;
  }
  uVar3 = _GAME_WeeklyContest_WeeklyContestManager__get_IsTutorialUnlockPending();
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar6 = **(long **)(DAT_0918d050 + 0xb8);
  if (lVar6 != 0) {
    *(undefined1 *)(lVar6 + 0x10) = 1;
    if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = _GAME_BaseGame_TimerManager__get_WeekUtcNow();
    lVar1 = DAT_0918d050;
    *(undefined4 *)(lVar6 + 0x14) = uVar2;
    lVar6 = **(long **)(lVar1 + 0xb8);
    uVar4 = _GAME_BaseGame_TimerManager__GetEndOfCurrentWeekUtc(0);
    if (*(int *)(DAT_09185080 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09185080);
    }
    uVar4 = _GAME_Utils_HelperTime__ToUnixTimeSeconds(uVar4,0);
    lVar1 = DAT_0918d050;
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x18) = uVar4;
      if (**(long **)(lVar1 + 0xb8) != 0) {
        _GAME_WeeklyContest_WeeklyContestDbModel__AddSaveAction(**(long **)(lVar1 + 0xb8));
        if (*(int *)(DAT_09189468 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar5 = (long *)FUN_04ca5cb8(DAT_091d6060);
        if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x077e1b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x2c8))(plVar5,*(undefined8 *)(*plVar5 + 0x2d0));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: _GAME.DreamyStreak.DreamyStreakManager$$CheckClaimReward
// address: 0x7807dc4
// body: available
// range: 0x7807dc4-0x780805b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7808034 to 0x60df854 FUN_060df854 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7808058 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyStreak_DreamyStreakManager__CheckClaimReward
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  
  if ((DAT_09523201 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d70);
    FUN_03f5c2a4(&DAT_091ab408);
    FUN_03f5c2a4(&DAT_091ac740);
    FUN_03f5c2a4(&DAT_091ab410);
    FUN_03f5c2a4(&DAT_0918a4c0);
    FUN_03f5c2a4(&DAT_091ba388);
    FUN_03f5c2a4(&DAT_0917e708);
    DAT_09523201 = 1;
  }
  if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar2 = _GAME_Levels_LevelManager__get_LevelCompleted(0);
  if (iVar2 < 0x14) {
    return;
  }
  if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09183d70 + 0xb8) != 0) {
    uVar1 = *(undefined4 *)(**(long **)(DAT_09183d70 + 0xb8) + 0x2c);
    if (*(int *)(DAT_0918a4c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = _GAME_DreamyStreak_SODreamyStreakConfig__GetLevelPassed(uVar1,0);
    if (-1 < iVar2) {
      iVar5 = 0;
      do {
        if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if ((**(long **)(DAT_09183d70 + 0xb8) == 0) ||
           (lVar3 = *(long *)(**(long **)(DAT_09183d70 + 0xb8) + 0x30), lVar3 == 0))
        goto LAB_07808058;
        uVar4 = FUN_0571bde4(lVar3,iVar5,DAT_091ab408);
        if ((uVar4 & 1) == 0) {
          if (*(int *)(DAT_0918a4c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar3 = _GAME_DreamyStreak_SODreamyStreakConfig__get_ListLevel(0);
          if ((lVar3 == 0) || (lVar3 = FUN_057e0998(lVar3,iVar5,DAT_091ac740), lVar3 == 0))
          goto LAB_07808058;
          uVar6 = *(undefined8 *)(lVar3 + 0x18);
          _GAME_GameItem_GameItemManager__ClaimReward(uVar6,0x28,0,0);
          _GAME_GameUI_DropItemController__DropRwItemToBag(param_1,param_2,param_3,uVar6,0);
          if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if ((**(long **)(DAT_09183d70 + 0xb8) == 0) ||
             (lVar3 = *(long *)(**(long **)(DAT_09183d70 + 0xb8) + 0x30), lVar3 == 0))
          goto LAB_07808058;
          FUN_0571be38(lVar3,iVar5,1,DAT_091ab410);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= iVar2);
    }
    _GAME_Quests_QuestsManager__SetQuestCounter(9,iVar2,0);
    if (*(int *)(DAT_09183d70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_09183d70 + 0xb8) != 0) {
      _GAME_DreamyStreak_DreamyStreakDbModel__AddSaveAction();
      if (*(int *)(DAT_0917e708 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_060df854(DAT_091ba388);
      return;
    }
  }
LAB_07808058:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


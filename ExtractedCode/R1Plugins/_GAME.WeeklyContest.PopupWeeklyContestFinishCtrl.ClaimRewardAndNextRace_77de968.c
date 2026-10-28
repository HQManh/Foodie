// rea decompile_all
// name: _GAME.WeeklyContest.PopupWeeklyContestFinishCtrl$$ClaimRewardAndNextRace
// address: 0x77de968
// body: available
// range: 0x77de968-0x77deb2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77deb18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77deb1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77deb20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77deb28 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077deaa8) */
/* WARNING: Removing unreachable block (ram,0x077deb24) */

void _GAME_WeeklyContest_PopupWeeklyContestFinishCtrl__ClaimRewardAndNextRace(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_68;
  undefined8 *puStack_60;
  long local_58;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  if ((DAT_09523042 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a40d0);
    FUN_03f5c2a4(&DAT_091a40d8);
    FUN_03f5c2a4(&DAT_091a40e0);
    FUN_03f5c2a4(&DAT_091afa88);
    FUN_03f5c2a4(&DAT_091ba760);
    DAT_09523042 = 1;
  }
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_48 = 0;
  if ((*(char *)(param_1 + 0xd8) == '\0') && (*(char *)(param_1 + 0x138) == '\0')) {
    *(undefined1 *)(param_1 + 0x138) = 1;
    if (*(long *)(param_1 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(&local_68,*(long *)(param_1 + 0x110),DAT_091afa88);
    uStack_38 = puStack_60;
    local_40 = local_68;
    local_30 = local_58;
    local_68 = 0;
    puStack_60 = &local_40;
    while (uVar1 = FUN_071bd28c(&local_40,DAT_091a40d8), lVar3 = local_30, (uVar1 & 1) != 0) {
      if (local_30 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = UnityEngine_Component__get_gameObject(local_30,0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = UnityEngine_GameObject__get_activeSelf(lVar2,0);
      if ((uVar1 & 1) != 0) {
        _GAME_GameItem_GameItemManager__ClaimReward(*(undefined8 *)(lVar3 + 0x38),0x2f,0,0);
        _GAME_GameUI_DropItemController__DropCloneItemToBag(lVar3,0);
      }
    }
    FUN_071bd288(&local_40,DAT_091a40d0);
    _GAME_WeeklyContest_WeeklyContestManager__OnClaimFinishReward();
    lVar3 = *(long *)(DAT_091ba760 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (**(long **)(lVar3 + 0xb8) != 0) {
      _GAME_WeeklyContest_WeeklyContestHomeTabUICtrl__UpdateUIActive(**(long **)(lVar3 + 0xb8),0);
    }
    _GAME_GameUI_PopupBaseCtrl__Close(param_1,0);
  }
  return;
}


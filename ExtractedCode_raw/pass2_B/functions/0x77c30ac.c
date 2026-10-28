// rea decompile_all
// name: _GAME.Leaderboard.UILeaderboardCtrl$$UpdateUIActive
// address: 0x77c30ac
// body: available
// range: 0x77c30ac-0x77c339b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77c3380 to 0x77c3460 _GAME.Leaderboard.UILeaderboardTabTeamCtrl$$UpdateUIActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77c3394 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77c3398 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Leaderboard_UILeaderboardCtrl__UpdateUIActive(long param_1)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 local_24;
  
  if ((DAT_09522f3b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09226038);
    FUN_03f5c2a4(&DAT_09207238);
    FUN_03f5c2a4(&DAT_0920d030);
    FUN_03f5c2a4(&DAT_09203ff0);
    DAT_09522f3b = 1;
  }
  _GAME_Utils_HelperDOTween__CompleteAndKill(*(undefined8 *)(param_1 + 0x80),0);
  lVar8 = *(long *)(param_1 + 0x20);
  uVar2 = _GAME_Bridge_CookOrderBridge__IsHomeTabUnlocked(0,0);
  if (lVar8 == 0) goto LAB_077c3394;
  UnityEngine_GameObject__SetActive(lVar8,uVar2 & 1,0);
  lVar8 = *(long *)(param_1 + 0x28);
  uVar2 = _GAME_Bridge_CookOrderBridge__IsHomeTabUnlocked(0,0);
  if (lVar8 == 0) goto LAB_077c3394;
  UnityEngine_GameObject__SetActive(lVar8,(uVar2 ^ 0xffffffff) & 1,0);
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_077c3394;
  uVar3 = UnityEngine_GameObject__get_activeSelf(*(long *)(param_1 + 0x28),0);
  if ((uVar3 & 1) != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x30);
    lVar8 = FUN_03f5c394(DAT_091805f8,1);
    local_24 = _GAME_Bridge_CookOrderBridge__GetHomeTabUnlockLevel(0,0);
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_24);
    uVar4 = System_String__Format(DAT_09226038,uVar4,0);
    if (lVar8 != 0) {
      if (*(int *)(lVar8 + 0x18) != 0) {
        *(undefined8 *)(lVar8 + 0x20) = uVar4;
        thunk_FUN_03f5d7b8();
        _GAME_Localize_LocalizeHelper__SetTextLocalizedByKey(uVar7,DAT_09207238,lVar8,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    goto LAB_077c3394;
  }
  if (*(int *)(param_1 + 0x88) == 0) {
    uVar3 = _GAME_WeeklyContest_WeeklyContestManager__get_IsUnlocked(0);
    if ((uVar3 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x88) = 1;
      goto LAB_077c3250;
    }
    puVar6 = &DAT_0920d030;
    if (*(int *)(param_1 + 0x88) != 0) {
      puVar6 = &DAT_09203ff0;
    }
  }
  else {
LAB_077c3250:
    puVar6 = &DAT_09203ff0;
  }
  _GAME_Utils_HelperAnimation__ResetAndSetTrigger(*(undefined8 *)(param_1 + 0x38),*puVar6,0);
  if (*(long *)(param_1 + 0x68) != 0) {
    bVar1 = *(int *)(param_1 + 0x88) == 0;
    uVar9 = 0x3f800000;
    if (!bVar1) {
      uVar9 = 0;
    }
    _GAME_Utils_Helper__SetActive(uVar9,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x20),bVar1,0);
    iVar5 = *(int *)(param_1 + 0x88);
    if (iVar5 == 0) {
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_077c3394;
      _GAME_Leaderboard_UILeaderboardTabWeeklyCtrl__UpdateUIActive();
      iVar5 = *(int *)(param_1 + 0x88);
    }
    puVar6 = &DAT_0920d030;
    if (iVar5 != 1) {
      puVar6 = &DAT_09203ff0;
    }
    _GAME_Utils_HelperAnimation__ResetAndSetTrigger(*(undefined8 *)(param_1 + 0x40),*puVar6,0);
    if (*(long *)(param_1 + 0x70) != 0) {
      bVar1 = *(int *)(param_1 + 0x88) == 1;
      uVar9 = 0x3f800000;
      if (!bVar1) {
        uVar9 = 0;
      }
      _GAME_Utils_Helper__SetActive(uVar9,*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x20),bVar1,0)
      ;
      iVar5 = *(int *)(param_1 + 0x88);
      if (iVar5 == 1) {
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_077c3394;
        _GAME_Leaderboard_UILeaderboardTabPlayerCtrl__UpdateUIActive();
        iVar5 = *(int *)(param_1 + 0x88);
      }
      puVar6 = &DAT_0920d030;
      if (iVar5 != 2) {
        puVar6 = &DAT_09203ff0;
      }
      _GAME_Utils_HelperAnimation__ResetAndSetTrigger(*(undefined8 *)(param_1 + 0x48),*puVar6,0);
      if (*(long *)(param_1 + 0x78) != 0) {
        bVar1 = *(int *)(param_1 + 0x88) == 2;
        uVar9 = 0x3f800000;
        if (!bVar1) {
          uVar9 = 0;
        }
        _GAME_Utils_Helper__SetActive
                  (uVar9,*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x20),bVar1,0);
        if (*(int *)(param_1 + 0x88) != 2) {
          return;
        }
        if (*(long *)(param_1 + 0x78) != 0) {
          _GAME_Leaderboard_UILeaderboardTabTeamCtrl__UpdateUIActive();
          return;
        }
      }
    }
  }
LAB_077c3394:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: _GAME.TeamTreasure.TeamTreasureManager$$CheckResetEvent
// address: 0x77e8844
// body: available
// range: 0x77e8844-0x77e8963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77e8960 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _GAME_TeamTreasure_TeamTreasureManager__CheckResetEvent(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  if ((DAT_095230d9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d6030);
    FUN_03f5c2a4(&DAT_09189468);
    FUN_03f5c2a4(&DAT_0918b998);
    FUN_03f5c2a4(&DAT_0918be20);
    DAT_095230d9 = 1;
  }
  if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar3 = _GAME_BaseGame_TimerManager__get_WeekUtcNow();
  if (**(long **)(DAT_0918b998 + 0xb8) != 0) {
    iVar2 = *(int *)(**(long **)(DAT_0918b998 + 0xb8) + 0x14);
    lVar4 = _GAME_BaseGame_TimerManager__get_UnixTimeSecondsUtc();
    if (**(long **)(DAT_0918b998 + 0xb8) != 0) {
      bVar1 = iVar2 != iVar3 || *(long *)(**(long **)(DAT_0918b998 + 0xb8) + 0x18) < lVar4;
      if (bVar1) {
        lVar4 = _GAME_TeamTreasure_SOTeamTreasureConfig__GetTopReward(param_1);
        if (lVar4 == 0) {
          _GAME_TeamTreasure_TeamTreasureManager__<CheckResetEvent>g__ReOpenPopupEventDelay_19_0();
        }
        else {
          if (*(int *)(DAT_09189468 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar4 = FUN_04ca5cb8(DAT_091d6030);
          if (lVar4 == 0) goto LAB_077e8960;
          _GAME_TeamTreasure_PopupTeamTreasureTopRewardCtrl__Open(lVar4,param_1);
        }
        _GAME_TeamTreasure_TeamTreasureManager__ResetDataNewSeason();
      }
      return bVar1;
    }
  }
LAB_077e8960:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: _GAME.TeamTreasure.SOTeamTreasureConfig$$GetFillValueRewardStep
// address: 0x77e7ae4
// body: available
// range: 0x77e7ae4-0x77e7c4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77e7c3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e7c40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e7c44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e7c48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float _GAME_TeamTreasure_SOTeamTreasureConfig__GetFillValueRewardStep(int param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  float fVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  if ((DAT_095230c5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a47a8);
    FUN_03f5c2a4(&DAT_091a47b0);
    FUN_03f5c2a4(&DAT_091a47b8);
    FUN_03f5c2a4(&DAT_091b0cf0);
    FUN_03f5c2a4(&DAT_091b0cf8);
    DAT_095230c5 = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  lVar2 = _GAME_TeamTreasure_SOTeamTreasureConfig__get_ListRwStep();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_68,lVar2,DAT_091b0cf0);
  iVar5 = 0;
  fVar6 = 0.0;
  do {
    uVar3 = FUN_071bd28c(&local_68,DAT_091a47b0);
    lVar2 = local_58;
    if ((uVar3 & 1) == 0) {
LAB_077e7c10:
      FUN_071bd288(&local_68,DAT_091a47a8);
      return fVar6;
    }
    if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = *(int *)(local_58 + 0x14);
    if (param_1 < iVar1) {
      lVar2 = _GAME_TeamTreasure_SOTeamTreasureConfig__get_ListRwStep();
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar6 = fVar6 + ((float)(param_1 - iVar5) / (float)(iVar1 - iVar5)) *
                      (1.0 / (float)*(int *)(lVar2 + 0x18));
      goto LAB_077e7c10;
    }
    lVar4 = _GAME_TeamTreasure_SOTeamTreasureConfig__get_ListRwStep();
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar5 = *(int *)(lVar2 + 0x14);
    fVar6 = fVar6 + 1.0 / (float)*(int *)(lVar4 + 0x18);
  } while( true );
}


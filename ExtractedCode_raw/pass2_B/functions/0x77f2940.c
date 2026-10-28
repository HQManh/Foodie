// rea decompile_all
// name: _GAME.StageRace.PopupStageRaceRunningCtrl$$UpdatePlayerPointUIAndWinReward
// address: 0x77f2940
// body: available
// range: 0x77f2940-0x77f2b63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77f2b48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f2b4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f2b50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f2b54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f2b58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f2b5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f2b60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_StageRace_PopupStageRaceRunningCtrl__UpdatePlayerPointUIAndWinReward(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  long local_60;
  
  if ((DAT_09523108 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4520);
    FUN_03f5c2a4(&DAT_091a4528);
    FUN_03f5c2a4(&DAT_091a4530);
    FUN_03f5c2a4(&DAT_091b04c8);
    FUN_03f5c2a4(&DAT_091b04b8);
    FUN_03f5c2a4(&DAT_0918b158);
    DAT_09523108 = 1;
  }
  local_70 = 0;
  puStack_68 = (undefined8 *)0x0;
  local_60 = 0;
  if (*(long *)(param_1 + 0x128) != 0) {
    FUN_057e185c(&local_88,*(long *)(param_1 + 0x128),DAT_091b04c8);
    iVar4 = -1;
    local_60 = local_78;
    puStack_68 = puStack_80;
    local_70 = local_88;
    local_88 = 0;
    iVar5 = -1;
    puStack_80 = &local_70;
    while (uVar1 = FUN_071bd28c(&local_70,DAT_091a4528), lVar3 = local_60, (uVar1 & 1) != 0) {
      if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      _GAME_StageRace_StageRacePlayerUICtrl__UpdatePlayerPoint(local_60);
      if (*(int *)(lVar3 + 0x20) < 0) {
        if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar3 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar5 = *(int *)(lVar3 + 0x34);
      }
      else {
        if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = *(long *)(lVar2 + 0x48);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar2 = FUN_057e0998(lVar2,*(undefined4 *)(lVar3 + 0x20),DAT_091b04b8);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (iVar5 < *(int *)(lVar2 + 0x2c)) {
          iVar4 = *(int *)(lVar3 + 0x20);
          iVar5 = *(int *)(lVar2 + 0x2c);
        }
      }
    }
    FUN_071bd288(&local_70,DAT_091a4520);
    if (*(long *)(param_1 + 0x128) != 0) {
      FUN_057e185c(&local_88,*(long *)(param_1 + 0x128),DAT_091b04c8);
      local_60 = local_78;
      puStack_68 = puStack_80;
      local_70 = local_88;
      local_88 = 0;
      puStack_80 = &local_70;
      while( true ) {
        uVar1 = FUN_071bd28c(&local_70,DAT_091a4528);
        if ((uVar1 & 1) == 0) {
          FUN_071bd288(&local_70,DAT_091a4520);
          return;
        }
        if (local_60 == 0) break;
        _GAME_Utils_HelperMonoBehaviour__SetActive
                  (*(undefined8 *)(local_60 + 0x60),iVar4 == *(int *)(local_60 + 0x20),0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


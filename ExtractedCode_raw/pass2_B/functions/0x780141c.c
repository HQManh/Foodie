// rea decompile_all
// name: _GAME.DreamyTower.DreamyTowerManager$$<CheckResetEventByTime>g__CheckPeriodic|8_0
// address: 0x780141c
// body: available
// range: 0x780141c-0x7801577 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7801570 to 0x60df854 FUN_060df854 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7801574 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyTower_DreamyTowerManager__<CheckResetEventByTime>g__CheckPeriodic_8_0(void)

{
  long lVar1;
  long *plVar2;
  
  if ((DAT_095231b6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183d80);
    FUN_03f5c2a4(&DAT_091b85b8);
    FUN_03f5c2a4(&DAT_091ba3b8);
    FUN_03f5c2a4(&DAT_0917e710);
    FUN_03f5c2a4(&DAT_0918be20);
    DAT_095231b6 = 1;
  }
  if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = _GAME_BaseGame_TimerManager__get_UnixTimeSeconds(0);
  if (*(int *)(DAT_09183d80 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09183d80);
  }
  if (**(long **)(DAT_09183d80 + 0xb8) != 0) {
    if (lVar1 < *(long *)(**(long **)(DAT_09183d80 + 0xb8) + 0x18)) {
      return;
    }
    lVar1 = *(long *)(DAT_091b85b8 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_03f95a6c();
    }
    plVar2 = (long *)**(long **)(lVar1 + 0xb8);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x308))(plVar2,*(undefined8 *)(*plVar2 + 0x310));
    }
    if (*(int *)(DAT_09183d80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    _GAME_DreamyTower_DreamyTowerManager__ResetData();
    if (*(int *)(DAT_0917e710 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_060df854(DAT_091ba3b8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


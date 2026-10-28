// rea decompile_all
// name: _GAME.BaseGame.TimerManager$$get_WeekNow
// address: 0x77dc5e8
// body: available
// range: 0x77dc5e8-0x77dc6c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _GAME_BaseGame_TimerManager__get_WeekNow(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_18;
  
  if ((DAT_09523028 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_09185080);
    FUN_03f5c2a4(&DAT_0918be20);
    DAT_09523028 = 1;
  }
  local_18 = 0;
  if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_18 = _GAME_BaseGame_TimerManager__GetEndOfCurrentWeek(0);
  if (*(int *)(DAT_09183548 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09183548);
  }
  iVar1 = System_DateTime__get_Year(&local_18,0);
  uVar3 = _GAME_BaseGame_TimerManager__GetEndOfCurrentWeek(0);
  if (*(int *)(DAT_09185080 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09185080);
  }
  iVar2 = _GAME_Utils_HelperTime__GetWeekOfYear(uVar3,0);
  return iVar2 + iVar1 * 100;
}


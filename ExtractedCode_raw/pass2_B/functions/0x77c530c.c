// rea decompile_all
// name: _GAME.Leaderboard.UILeaderboardTabPlayerCtrl$$.ctor
// address: 0x77c530c
// body: available
// range: 0x77c530c-0x77c5457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77c5454 to 0x60e09d0 FUN_060e09d0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Leaderboard_UILeaderboardTabPlayerCtrl___ctor(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_09522f50 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919dae0);
    FUN_03f5c2a4(&DAT_0919db88);
    FUN_03f5c2a4(&DAT_091764e8);
    FUN_03f5c2a4(&DAT_09176500);
    FUN_03f5c2a4(&DAT_091ba6c0);
    FUN_03f5c2a4(&DAT_091bb2b8);
    FUN_03f5c2a4(&DAT_0917e908);
    DAT_09522f50 = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_0917e908);
  FUN_061a1268(uVar1,DAT_091bb2b8);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xc0),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_091764e8);
  FUN_06eef750(uVar1,DAT_0919dae0);
  *(undefined8 *)(param_1 + 200) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 200),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09176500);
  FUN_06ef2eac(uVar1,DAT_0919db88);
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xd0),uVar1);
  uVar1 = DAT_091ba6c0;
  *(undefined4 *)(param_1 + 0xdc) = 0xffffffff;
  FUN_060e09d0(param_1,uVar1);
  return;
}


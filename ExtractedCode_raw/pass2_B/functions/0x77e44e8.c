// rea decompile_all
// name: _GAME.WeeklyContest.WeeklyContestManager.<>c__DisplayClass24_0$$<ForceFetchRank>g__FetchProfile|0
// address: 0x77e44e8
// body: available
// range: 0x77e44e8-0x77e45ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_WeeklyContest_WeeklyContestManager_<>c__DisplayClass24_0__<ForceFetchRank>g__FetchProfile_0
               (undefined8 param_1,undefined8 param_2)

{
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09523082 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2780);
    DAT_09523082 = 1;
  }
  local_40 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_88 = 0;
  local_90 = 0;
  thunk_FUN_03f5d7b8((ulong)&local_90 | 8,0);
  local_70 = param_1;
  thunk_FUN_03f5d7b8(&local_70,param_1);
  uStack_78 = param_2;
  thunk_FUN_03f5d7b8(&uStack_78,param_2);
  local_90 = CONCAT44(local_90._4_4_,0xffffffff);
  if (*(long *)(DAT_091c2780 + 0x38) == 0) {
    FUN_03f95ac8();
  }
  _GAME_WeeklyContest_WeeklyContestManager_<>c__DisplayClass24_0_<<ForceFetchRank>g__FetchProfile_0>d__MoveNext
            (&local_90);
  FUN_0412600c((ulong)&local_90 | 8,0);
  return;
}


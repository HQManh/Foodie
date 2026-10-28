// rea decompile_all
// name: _GAME.Team.TeamServer$$DeleteTeamByServerId
// address: 0x7785054
// body: available
// range: 0x7785054-0x7785153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamServer__DeleteTeamByServerId
               (undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_09522d53 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199e88);
    FUN_03f5c2a4(&DAT_09199e70);
    FUN_03f5c2a4(&DAT_09199ea8);
    DAT_09522d53 = 1;
  }
  local_50 = 0;
  local_90 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  thunk_FUN_03f5d7b8((ulong)&local_90 | 8,0);
  local_70 = param_2;
  thunk_FUN_03f5d7b8(&local_70,param_2);
  uStack_68 = CONCAT71(uStack_68._1_7_,param_3) & 0xffffffffffffff01;
  local_90 = CONCAT44(local_90._4_4_,0xffffffff);
  if (*(long *)(DAT_09199e70 + 0x38) == 0) {
    FUN_03f95ac8();
  }
  _GAME_Team_TeamServer_<DeleteTeamByServerId>d__15__MoveNext(&local_90);
  FUN_042b05c0(&local_a8,(ulong)&local_90 | 8,DAT_09199ea8);
  param_1[1] = uStack_a0;
  *param_1 = local_a8;
  param_1[2] = local_98;
  return;
}


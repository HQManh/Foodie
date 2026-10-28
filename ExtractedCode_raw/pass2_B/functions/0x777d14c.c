// rea decompile_all
// name: _GAME.Team.TeamServer$$LeaveTeam
// address: 0x777d14c
// body: available
// range: 0x777d14c-0x777d21f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamServer__LeaveTeam(undefined1 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulong local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((DAT_09522d59 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199c08);
    FUN_03f5c2a4(&DAT_09199c00);
    FUN_03f5c2a4(&DAT_09199c28);
    DAT_09522d59 = 1;
  }
  local_70 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  thunk_FUN_03f5d7b8((ulong)&local_70 | 8,0);
  lVar1 = DAT_09199c00;
  local_50 = CONCAT71(local_50._1_7_,param_1) & 0xffffffffffffff01;
  local_70 = CONCAT44(local_70._4_4_,0xffffffff);
  lVar2 = *(long *)(DAT_09199c00 + 0x38);
  if (lVar2 == 0) {
    FUN_03f95ac8(DAT_09199c00);
    lVar2 = *(long *)(lVar1 + 0x38);
  }
  _GAME_Team_TeamServer_<LeaveTeam>d__21__MoveNext(&local_70,*(undefined8 *)(lVar2 + 0x10));
  FUN_04323e00((ulong)&local_70 | 8,DAT_09199c28);
  return;
}


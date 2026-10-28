// rea decompile_all
// name: _GAME.GameUI.DropItemController$$DropGoldBurstAsync
// address: 0x775199c
// body: available
// range: 0x775199c-0x7751b0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_DropItemController__DropGoldBurstAsync
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  long lVar2;
  undefined4 local_120 [2];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8 [9];
  
  if ((DAT_09522bad & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199b18);
    FUN_03f5c2a4(&DAT_09199ae0);
    FUN_03f5c2a4(&DAT_09199b38);
    DAT_09522bad = 1;
  }
  memset(local_120,0,0xa0);
  local_110 = 0;
  uStack_108 = 0;
  local_118 = 0;
  thunk_FUN_03f5d7b8(&local_118,0);
  local_f0 = param_7;
  thunk_FUN_03f5d7b8(&local_f0,param_7);
  local_100 = param_8;
  local_e8 = param_1;
  uStack_e4 = param_2;
  local_e0 = param_3;
  uStack_dc = param_4;
  local_d8 = param_5;
  uStack_d4 = param_6;
  local_d0 = param_9;
  thunk_FUN_03f5d7b8(&local_d0,param_9);
  local_c8[0] = param_10;
  thunk_FUN_03f5d7b8(local_c8,0);
  local_f8 = param_11;
  thunk_FUN_03f5d7b8(&local_f8,param_11);
  lVar1 = DAT_09199ae0;
  local_120[0] = 0xffffffff;
  lVar2 = *(long *)(DAT_09199ae0 + 0x38);
  if (lVar2 == 0) {
    FUN_03f95ac8(DAT_09199ae0);
    lVar2 = *(long *)(lVar1 + 0x38);
  }
  _GAME_GameUI_DropItemController_<DropGoldBurstAsync>d__73__MoveNext
            (local_120,*(undefined8 *)(lVar2 + 0x10));
  FUN_0439f774(&local_118,DAT_09199b38);
  return;
}


// rea decompile_all
// name: _GAME.BaseGame.ABIServerAPI$$ResolveServerId
// address: 0x77cefd4
// body: available
// range: 0x77cefd4-0x77cf0f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_ABIServerAPI__ResolveServerId
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [9];
  
  if ((DAT_09522fb7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919a110);
    FUN_03f5c2a4(&DAT_0919a100);
    FUN_03f5c2a4(&DAT_0919a130);
    DAT_09522fb7 = 1;
  }
  memset(local_c8,0,0x88);
  local_a0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  thunk_FUN_03f5d7b8(&local_c0,0);
  local_88[0] = param_2;
  thunk_FUN_03f5d7b8(local_88,param_2);
  local_98 = param_3;
  thunk_FUN_03f5d7b8(&local_98,param_3);
  local_90 = param_4;
  thunk_FUN_03f5d7b8(&local_90,param_4);
  local_c8[0] = 0xffffffff;
  if (*(long *)(DAT_0919a100 + 0x38) == 0) {
    FUN_03f95ac8();
  }
  _GAME_BaseGame_ABIServerAPI_<ResolveServerId>d__53__MoveNext(local_c8);
  FUN_06ac93a8(&local_f0,&local_c0,DAT_0919a130);
  param_1[4] = local_d0;
  param_1[1] = uStack_e8;
  *param_1 = local_f0;
  param_1[3] = uStack_d8;
  param_1[2] = uStack_e0;
  return;
}


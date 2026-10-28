// rea decompile_all
// name: _GAME.GameUI.DropItemController$$DropItemToTargetAsync
// address: 0x7751618
// body: available
// range: 0x7751618-0x775177b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_DropItemController__DropItemToTargetAsync
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  if ((DAT_09522baa & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199b18);
    FUN_03f5c2a4(&DAT_09199af0);
    FUN_03f5c2a4(&DAT_09199b38);
    DAT_09522baa = 1;
  }
  local_80 = 0;
  local_e0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_c8 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  thunk_FUN_03f5d7b8((ulong)&local_e0 | 8,0);
  local_b0 = param_7;
  thunk_FUN_03f5d7b8(&local_b0,param_7);
  uStack_b8 = param_8;
  thunk_FUN_03f5d7b8(&uStack_b8,param_8);
  local_a8 = CONCAT44(param_2,param_1);
  local_a0 = CONCAT44(param_4,param_3);
  uStack_98 = CONCAT44(param_6,param_5);
  local_c0 = param_9;
  thunk_FUN_03f5d7b8(&local_c0,param_9);
  local_90 = param_10;
  thunk_FUN_03f5d7b8(&local_90,0);
  lVar1 = DAT_09199af0;
  local_e0 = CONCAT44(local_e0._4_4_,0xffffffff);
  lVar2 = *(long *)(DAT_09199af0 + 0x38);
  if (lVar2 == 0) {
    FUN_03f95ac8(DAT_09199af0);
    lVar2 = *(long *)(lVar1 + 0x38);
  }
  _GAME_GameUI_DropItemController_<DropItemToTargetAsync>d__69__MoveNext
            (&local_e0,*(undefined8 *)(lVar2 + 0x10));
  FUN_0439f774((ulong)&local_e0 | 8,DAT_09199b38);
  return;
}


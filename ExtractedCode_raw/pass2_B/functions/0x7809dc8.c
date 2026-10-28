// rea decompile_all
// name: _GAME.DreamyStreak.PopupDreamyStreakCtrl$$OnOpened
// address: 0x7809dc8
// body: available
// range: 0x7809dc8-0x7809e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_DreamyStreak_PopupDreamyStreakCtrl__OnOpened(undefined8 param_1)

{
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((DAT_09523213 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2f68);
    DAT_09523213 = 1;
  }
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  local_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  System_Runtime_CompilerServices_AsyncVoidMethodBuilder__Create(&local_80,0);
  uStack_50 = uStack_78;
  uStack_58 = local_80;
  local_40 = uStack_68;
  uStack_48 = uStack_70;
  thunk_FUN_03f5d7b8((ulong)&local_60 | 8,0);
  uStack_38 = param_1;
  thunk_FUN_03f5d7b8(&uStack_38,param_1);
  local_60 = CONCAT44(local_60._4_4_,0xffffffff);
  FUN_049cf254((ulong)&local_60 | 8,&local_60,DAT_091c2f68);
  return;
}


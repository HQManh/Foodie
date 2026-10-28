// rea decompile_all
// name: _GAME.BaseGame.SocialAuth$$SignInPlatformAuthID
// address: 0x77d738c
// body: available
// range: 0x77d738c-0x77d7463 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_SocialAuth__SignInPlatformAuthID(undefined8 *param_1)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09522fed & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199dd8);
    FUN_03f5c2a4(&DAT_09199dc8);
    FUN_03f5c2a4(&DAT_09199df8);
    DAT_09522fed = 1;
  }
  local_40 = 0;
  local_70 = 0;
  uStack_48 = 0;
  local_50 = 0;
  local_58 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  thunk_FUN_03f5d7b8((ulong)&local_70 | 8,0);
  local_70 = CONCAT44(local_70._4_4_,0xffffffff);
  if (*(long *)(DAT_09199dc8 + 0x38) == 0) {
    FUN_03f95ac8();
  }
  _GAME_BaseGame_SocialAuth_<SignInPlatformAuthID>d__10__MoveNext(&local_70);
  FUN_042b05c0(&local_88,(ulong)&local_70 | 8,DAT_09199df8);
  param_1[1] = uStack_80;
  *param_1 = local_88;
  param_1[2] = local_78;
  return;
}


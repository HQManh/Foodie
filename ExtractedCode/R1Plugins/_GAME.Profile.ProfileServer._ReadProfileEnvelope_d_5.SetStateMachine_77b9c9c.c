// rea decompile_all
// name: _GAME.Profile.ProfileServer.<ReadProfileEnvelope>d__5$$SetStateMachine
// address: 0x77b9c9c
// body: available
// range: 0x6aac1c0-0x6aac1c3 inclusive
// range: 0x77b9c9c-0x77b9cf3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
_GAME_Profile_ProfileServer_<ReadProfileEnvelope>d__5__SetStateMachine
          (long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  if ((DAT_09522ecb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199d58);
    DAT_09522ecb = 1;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1 + 8;
  return auVar1;
}


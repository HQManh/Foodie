// rea decompile_all
// name: _GAME.Bridge.R1UserTextSupport$$Init
// address: 0x7766830
// body: available
// range: 0x7766830-0x7766953 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_R1UserTextSupport__Init(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 local_14 [4];
  
  if ((DAT_09522c6f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091d6d58);
    FUN_03f5c2a4(&DAT_09189998);
    DAT_09522c6f = 1;
  }
  local_14[0] = 0;
  if (*(int *)(DAT_09189998 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(char *)(*(long *)(DAT_09189998 + 0xb8) + 0x30) == '\0') {
    if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Application__get_isPlaying(0);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(DAT_09189998 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = DAT_09180e78;
      *(undefined1 *)(*(long *)(DAT_09189998 + 0xb8) + 0x30) = 1;
      uVar2 = thunk_FUN_03f9944c(uVar2);
      System_Action___ctor(uVar2,0,DAT_091d6d58,0);
      if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Application__add_quitting(uVar2,0);
      local_14[0] = _GAME_Bridge_R1UserTextSupport__SetupFontsAsync();
      Cysharp_Threading_Tasks_UniTaskVoid__Forget(local_14,0);
    }
  }
  return;
}


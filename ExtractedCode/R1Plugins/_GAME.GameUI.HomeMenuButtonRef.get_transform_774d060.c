// rea decompile_all
// name: _GAME.GameUI.HomeMenuButtonRef$$get_transform
// address: 0x774d060
// body: available
// range: 0x774d060-0x774d17f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _GAME_GameUI_HomeMenuButtonRef__get_transform(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined4 local_24;
  
  if ((DAT_09522b80 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918ee30);
    FUN_03f5c2a4(&DAT_09214078);
    DAT_09522b80 = 1;
  }
  uVar1 = _GAME_Bridge_CookOrderBridge__GetHomeTabNavButton(*(undefined4 *)(param_1 + 0x10),0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar1,0,0);
  if ((uVar2 & 1) == 0) {
    local_24 = *(undefined4 *)(param_1 + 0x10);
    uVar1 = FUN_03f5c42c(DAT_0918ee30,&local_24);
    uVar1 = System_String__Format(DAT_09214078,uVar1,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogWarning(uVar1,0);
    _GAME_BaseGame_R1Runtime__Ensure(0);
    uVar1 = _GAME_BaseGame_R1Runtime__get_Transform(0);
  }
  return uVar1;
}


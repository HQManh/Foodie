// rea decompile_all
// name: _GAME.BaseGame.ABIServerAPI$$GetServerIdHistory
// address: 0x77cedfc
// body: available
// range: 0x77cedfc-0x77cef0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77cef04 to 0x743298c System.String$$Split (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77cef08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _GAME_BaseGame_ABIServerAPI__GetServerIdHistory(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_09522fb5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09522fb5 = 1;
  }
  if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = _GAME_BaseGame_ABIServerAPI__get_KEY_SAVE_SERVER_ID_HISTORY();
  lVar2 = UnityEngine_PlayerPrefs__GetString(uVar1,DAT_091f5700,0);
  uVar3 = _GAME_Utils_HelperString__IsNullOrEmpty(lVar2,0);
  lVar4 = DAT_091c0310;
  if ((uVar3 & 1) != 0) {
    lVar2 = *(long *)(DAT_091c0310 + 0x38);
    if (lVar2 == 0) {
      FUN_03f95ac8(DAT_091c0310);
      lVar2 = *(long *)(lVar4 + 0x38);
    }
    lVar2 = *(long *)(lVar2 + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    return **(undefined8 **)(lVar4 + 0xb8);
  }
  if (lVar2 != 0) {
    uVar1 = System_String__Split(lVar2,0x2c,0,0);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


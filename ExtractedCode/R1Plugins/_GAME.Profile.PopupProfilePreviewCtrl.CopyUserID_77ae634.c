// rea decompile_all
// name: _GAME.Profile.PopupProfilePreviewCtrl$$CopyUserID
// address: 0x77ae634
// body: available
// range: 0x77ae634-0x77ae773 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77ae76c to 0x774d01c _GAME.GameUI.ToastController$$ShowLocalizeMessage (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77ae770 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_PopupProfilePreviewCtrl__CopyUserID(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_09522e70 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_09184b38);
    FUN_03f5c2a4(&DAT_091ff240);
    FUN_03f5c2a4(&DAT_09214950);
    DAT_09522e70 = 1;
  }
  if (*(char *)(param_1 + 0xd8) != '\0') {
    return;
  }
  if (*(long *)(param_1 + 400) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 400) + 0x10);
    uVar1 = UnityEngine_Device_Application__get_version(0);
    uVar1 = System_String__Concat(uVar4,DAT_09214950,uVar1,0);
    if (*(int *)(DAT_09184b38 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184b38);
    }
    UnityEngine_GUIUtility__set_systemCopyBuffer(uVar1,0);
    lVar2 = DAT_091c0310;
    lVar3 = *(long *)(DAT_091c0310 + 0x38);
    if (lVar3 == 0) {
      FUN_03f95ac8(DAT_091c0310);
      lVar3 = *(long *)(lVar2 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03f95a6c();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    _GAME_GameUI_ToastController__ShowLocalizeMessage
              (DAT_091ff240,**(undefined8 **)(lVar2 + 0xb8),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


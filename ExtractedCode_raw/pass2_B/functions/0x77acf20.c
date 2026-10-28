// rea decompile_all
// name: _GAME.Profile.PopupEditProfileNameCtrl$$SaveProfileEdit
// address: 0x77acf20
// body: available
// range: 0x77acf20-0x77ad083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77ad080 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_PopupEditProfileNameCtrl__SaveProfileEdit(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_28;
  undefined8 local_18;
  
  if ((DAT_09522e65 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0920af18);
    DAT_09522e65 = 1;
  }
  local_18 = 0;
  local_28 = 0;
  uVar1 = (**(code **)(*param_1 + 0x348))(param_1,*(undefined8 *)(*param_1 + 0x350));
  if ((uVar1 & 1) == 0) {
    if (param_1[0x1d] == 0) {
LAB_077ad080:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = _GAME_Bridge_CookOrderBridge__ValidateName
                      (*(undefined8 *)(param_1[0x1d] + 0x210),&local_18,&local_28,0);
    if ((uVar1 & 1) == 0) {
      _GAME_GameUI_ToastController__ShowMessage(local_28,0);
    }
    else {
      if (param_1[0x1f] == 0) goto LAB_077ad080;
      *(undefined8 *)(param_1[0x1f] + 0x10) = local_18;
      thunk_FUN_03f5d7b8();
      lVar3 = param_1[0x1f];
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      _GAME_Profile_ProfileManager__SaveEdit(lVar3);
      lVar3 = DAT_091c0310;
      lVar2 = *(long *)(DAT_091c0310 + 0x38);
      if (lVar2 == 0) {
        FUN_03f95ac8(DAT_091c0310);
        lVar2 = *(long *)(lVar3 + 0x38);
      }
      lVar2 = *(long *)(lVar2 + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      _GAME_GameUI_ToastController__ShowLocalizeMessage
                (DAT_0920af18,**(undefined8 **)(lVar3 + 0xb8),0);
      _GAME_GameUI_PopupBaseCtrl__Close(param_1,0);
    }
  }
  return;
}


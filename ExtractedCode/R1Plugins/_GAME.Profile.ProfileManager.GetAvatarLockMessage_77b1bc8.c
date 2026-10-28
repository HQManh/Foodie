// rea decompile_all
// name: _GAME.Profile.ProfileManager$$GetAvatarLockMessage
// address: 0x77b1bc8
// body: available
// range: 0x77b1bc8-0x77b1d73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77b1d6c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77b1d70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileManager__GetAvatarLockMessage(undefined4 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_09522e89 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_0918a4d8);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091fece0);
    FUN_03f5c2a4(&DAT_091fc598);
    DAT_09522e89 = 1;
  }
  local_30 = 0;
  local_28 = 0;
  if (*(int *)(DAT_0918a4d8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = _GAME_Profile_SOProfileConfig__GetAvatarUnlockRule(param_1);
  if (((lVar1 != 0) &&
      (uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar1 + 0x18),0), (uVar2 & 1) == 0)) &&
     (uVar2 = _GAME_Bridge_CookOrderBridge__TryGetRestaurantUnlockStep
                        (*(undefined8 *)(lVar1 + 0x18),*(undefined1 *)(lVar1 + 0x20),&local_28,
                         &local_30,0), (uVar2 & 1) != 0)) {
    lVar1 = FUN_03f5c394(DAT_091805f8,2);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar1 + 0x18) != 0) {
      *(undefined8 *)(lVar1 + 0x20) = local_28;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20));
      if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
        *(undefined8 *)(lVar1 + 0x28) = local_30;
        thunk_FUN_03f5d7b8();
        uVar3 = DAT_091fc598;
        goto LAB_077b1d54;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  lVar1 = DAT_091c0310;
  lVar4 = *(long *)(DAT_091c0310 + 0x38);
  if (lVar4 == 0) {
    FUN_03f95ac8(DAT_091c0310);
    lVar4 = *(long *)(lVar1 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0x38) + 0x10);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03f95a6c();
  }
  lVar1 = **(long **)(lVar1 + 0xb8);
  uVar3 = DAT_091fece0;
LAB_077b1d54:
  _GAME_Localize_LocalizeManager__GetTextByLanguageByKey(uVar3,lVar1,0);
  return;
}


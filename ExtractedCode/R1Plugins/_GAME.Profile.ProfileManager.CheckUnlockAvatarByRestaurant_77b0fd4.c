// rea decompile_all
// name: _GAME.Profile.ProfileManager$$CheckUnlockAvatarByRestaurant
// address: 0x77b0fd4
// body: available
// range: 0x77b0fd4-0x77b1177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77b115c to 0x60df854 FUN_060df854 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77b1174 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Profile_ProfileManager__CheckUnlockAvatarByRestaurant(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  
  if ((DAT_09522e87 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918a4d8);
    FUN_03f5c2a4(&DAT_091ba480);
    FUN_03f5c2a4(&DAT_0917e740);
    DAT_09522e87 = 1;
  }
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((**(long **)(DAT_091896c0 + 0xb8) != 0) &&
     (uVar4 = _GAME_Bridge_CookOrderBridge__get_IsCoreProfileReady(0), (uVar4 & 1) != 0)) {
    if (*(int *)(DAT_0918a4d8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = _GAME_Profile_SOProfileConfig__get_ListAvatar();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = *(int *)(lVar5 + 0x18);
    iVar2 = _GAME_Bridge_CookOrderBridge__get_AvatarCount(0);
    if (iVar2 <= iVar1) {
      iVar1 = iVar2;
    }
    if (0 < iVar1) {
      uVar6 = 0;
      iVar2 = 0;
      do {
        if (*(int *)(DAT_0918a4d8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar5 = _GAME_Profile_SOProfileConfig__GetAvatarUnlockRule(iVar2);
        if (((lVar5 != 0) &&
            (uVar4 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar5 + 0x18),0), (uVar4 & 1) == 0
            )) && (uVar4 = _GAME_Bridge_CookOrderBridge__IsAvatarUnlocked(iVar2,0), (uVar4 & 1) == 0
                  )) {
          if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = _GAME_Profile_ProfileManager__IsAvatarOpenByRestaurant(lVar5);
          if ((uVar4 & 1) != 0) {
            uVar3 = _GAME_Bridge_CookOrderBridge__UnlockAvatar(iVar2,0);
            uVar6 = uVar6 | uVar3;
          }
        }
        iVar2 = iVar2 + 1;
      } while (iVar1 != iVar2);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(DAT_0917e740 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_060df854(DAT_091ba480);
        return;
      }
    }
  }
  return;
}


// rea decompile_all
// name: _GAME.Profile.ProfileManager$$RandomUnlockedAvatar
// address: 0x77af058
// body: available
// range: 0x77af058-0x77af1bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77af1a4 to 0x5796eb0 FUN_05796eb0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77af1bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _GAME_Profile_ProfileManager__RandomUnlockedAvatar(void)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_09522e78 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cb1f8);
    FUN_03f5c2a4(&DAT_091cb4e8);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_091d68a8);
    FUN_03f5c2a4(&DAT_0918a4d8);
    DAT_09522e78 = 1;
  }
  if (*(int *)(DAT_0918a4d8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = _GAME_Profile_SOProfileConfig__get_ListAvatar();
  if (lVar2 != 0) {
    uVar3 = System_Linq_Enumerable__Range(0,*(undefined4 *)(lVar2 + 0x18),0);
    uVar4 = thunk_FUN_03f9944c(DAT_09178b98);
    FUN_05315754(uVar4,0,DAT_091d68a8,0);
    uVar3 = FUN_04b0c1f0(uVar3,uVar4,DAT_091cb4e8);
    lVar2 = FUN_04b08778(uVar3,DAT_091cb1f8);
    if (lVar2 != 0) {
      if (0 < *(int *)(lVar2 + 0x18)) {
        uVar1 = UnityEngine_Random__Range(0,*(int *)(lVar2 + 0x18),0);
        uVar3 = FUN_05796eb0(lVar2,uVar1,DAT_091add20);
        return uVar3;
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


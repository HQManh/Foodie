// rea decompile_all
// name: CakeOrder.InGame.UICakePauseMenuInGame$$CheatPanelCardStyle
// address: 0x42976e8
// body: available
// range: 0x42976e8-0x42977f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42977f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_InGame_UICakePauseMenuInGame__CheatPanelCardStyle(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_095171d7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184b20);
    FUN_03f5c2a4(&DAT_09184ac0);
    FUN_03f5c2a4(&DAT_09189c68);
    DAT_095171d7 = 1;
  }
  if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = UnityEngine_GUI__get_skin(0);
  if (lVar1 != 0) {
    uVar2 = UnityEngine_GUISkin__get_box(lVar1,0);
    lVar1 = thunk_FUN_03f9944c(DAT_09184b20);
    UnityEngine_GUIStyle___ctor(lVar1,uVar2,0);
    if (lVar1 != 0) {
      lVar3 = UnityEngine_GUIStyle__get_normal(lVar1,0);
      uVar2 = CakeOrder_InGame_UICakePauseMenuInGame__GetCheatPanelCardTexture();
      if (lVar3 != 0) {
        UnityEngine_GUIStyleState__set_background(lVar3,uVar2,0);
        uVar2 = thunk_FUN_03f9944c(DAT_09189c68);
        UnityEngine_RectOffset___ctor(uVar2,0xc,0xc,8,8,0);
        UnityEngine_GUIStyle__set_padding(lVar1,uVar2,0);
        return lVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


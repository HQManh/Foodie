// rea decompile_all
// name: _GAME.Team.UITabTeamCtrl$$UpdateUIActive
// address: 0x7797c48
// body: available
// range: 0x7797c48-0x7797dff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7797de8 to 0x7797f5c _GAME.Team.UITabTeamTabMyTeamCtrl$$UpdateUIActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7797dfc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_UITabTeamCtrl__UpdateUIActive(long param_1)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if ((DAT_09522dd5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918b978);
    DAT_09522dd5 = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = _GAME_Team_TeamManager__get_IsUnlocked(0);
  _GAME_Utils_Helper__SetActive(0x3f800000,uVar4,(uVar1 ^ 0xffffffff) & 1,0);
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
    uVar2 = _GAME_Team_TeamManager__get_IsUnlocked(0);
    if ((uVar2 & 1) == 0) {
      bVar3 = false;
    }
    else {
      if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091896c0 + 0xb8) == 0) goto LAB_07797dfc;
      bVar3 = *(long *)(**(long **)(DAT_091896c0 + 0xb8) + 0x50) < 1;
    }
    _GAME_Utils_Helper__SetActive(0x3f800000,uVar4,bVar3,0);
    if (*(long *)(param_1 + 0x38) != 0) {
      uVar2 = _GAME_Utils_Helper__ActiveSelf(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20),0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x38) == 0) goto LAB_07797dfc;
        _GAME_Team_UITabTeamTabListTeamCtrl__UpdateUIActive();
      }
      if (*(long *)(param_1 + 0x40) != 0) {
        uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20);
        if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = _GAME_Team_TeamManager__get_IsUnlocked(0);
        if ((uVar2 & 1) == 0) {
          bVar3 = false;
        }
        else {
          if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (**(long **)(DAT_091896c0 + 0xb8) == 0) goto LAB_07797dfc;
          bVar3 = 0 < *(long *)(**(long **)(DAT_091896c0 + 0xb8) + 0x50);
        }
        _GAME_Utils_Helper__SetActive(0x3f800000,uVar4,bVar3,0);
        if (*(long *)(param_1 + 0x40) != 0) {
          uVar2 = _GAME_Utils_Helper__ActiveSelf
                            (*(undefined8 *)(*(long *)(param_1 + 0x40) + 0x20),0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          if (*(long *)(param_1 + 0x40) != 0) {
            _GAME_Team_UITabTeamTabMyTeamCtrl__UpdateUIActive();
            return;
          }
        }
      }
    }
  }
LAB_07797dfc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: _GAME.Bridge.R1HomeTabPage$$RefreshPanel
// address: 0x7762394
// body: available
// range: 0x7762394-0x77626b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77626ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77626b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77626b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_R1HomeTabPage__RefreshPanel(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 local_24;
  
  if ((DAT_09522c40 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09185158);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_09189938);
    FUN_03f5c2a4(&DAT_09214080);
    FUN_03f5c2a4(&DAT_0921b5a8);
    DAT_09522c40 = 1;
  }
  _GAME_Bridge_R1HomeTabPage__TryInitPanel(param_1);
  _GAME_Bridge_R1HomeTabPage__FitPanelAboveTabBar(param_1);
  uVar2 = _GAME_Bridge_R1HomeTabPage__get_PanelObject(param_1);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar3 & 1) != 0) {
    lVar4 = _GAME_Bridge_R1HomeTabPage__get_PanelObject(param_1);
    if (lVar4 == 0) goto LAB_077626ac;
    UnityEngine_GameObject__SetActive(lVar4,*(undefined1 *)(param_1 + 0xb8),0);
  }
  if (*(char *)(param_1 + 0xb8) == '\0') {
    if (*(int *)(DAT_09189938 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522cab == '\0') {
      FUN_03f5c2a4(&DAT_09189938);
      DAT_09522cab = '\x01';
    }
    if (*(int *)(DAT_09189938 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    bVar1 = *(char *)(*(long *)(DAT_09189938 + 0xb8) + 9) != '\0';
  }
  else {
    bVar1 = false;
  }
  uVar2 = *(undefined8 *)(param_1 + 0xa8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0xa8) == 0) goto LAB_077626ac;
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0xa8),bVar1,0);
  }
  if (bVar1 == false) {
    if (*(char *)(param_1 + 0xb8) != '\0') goto LAB_077625a0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0xb0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
    if ((uVar3 & 1) != 0) {
      lVar4 = *(long *)(param_1 + 0xb0);
      if (*(int *)(DAT_09182278 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = CakeOrder_Localization_CakeLocalization__Tr(DAT_0921b5a8,0);
      if (lVar4 == 0) {
LAB_077626ac:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      TMPro_TMP_Text__SetText(lVar4,uVar2,0);
    }
    if (*(char *)(param_1 + 0xb8) != '\0') {
LAB_077625a0:
      uVar2 = *(undefined8 *)(param_1 + 0x98);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        _GAME_Leaderboard_UILeaderboardCtrl__UpdateUIActive(*(long *)(param_1 + 0x98),0);
        uVar3 = _GAME_Leaderboard_LeaderboardManager__get_IsUnlocked(0);
        if ((uVar3 & 1) != 0) {
          if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          _GAME_Profile_ProfileManager__CheckFirstOpen(0);
        }
      }
      uVar2 = *(undefined8 *)(param_1 + 0xa0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0xa0) != 0) {
        _GAME_Team_UITabTeamCtrl__UpdateUIActive(*(long *)(param_1 + 0xa0),0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (bVar1 != false) {
      return;
    }
  }
  local_24 = *(undefined4 *)(param_1 + 0x68);
  uVar2 = FUN_03f5c42c(DAT_09185158,&local_24);
  uVar2 = System_String__Format(DAT_09214080,uVar2,0);
  if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091835d0);
  }
  UnityEngine_Debug__LogWarning(uVar2,0);
  return;
}


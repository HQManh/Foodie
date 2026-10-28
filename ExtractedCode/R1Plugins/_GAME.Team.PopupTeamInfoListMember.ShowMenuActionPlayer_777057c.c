// rea decompile_all
// name: _GAME.Team.PopupTeamInfoListMember$$ShowMenuActionPlayer
// address: 0x777057c
// body: available
// range: 0x777057c-0x77707fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77707f4 to 0x89a1808 UnityEngine.UI.LayoutRebuilder$$ForceRebuildLayoutImmediate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77707f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_PopupTeamInfoListMember__ShowMenuActionPlayer(long param_1,undefined4 param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_09522ca6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_091b0c90);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918b978);
    DAT_09522ca6 = 1;
  }
  plVar2 = *(long **)(param_1 + 0x90);
  if (plVar2 == (long *)0x0) goto LAB_077707f8;
  uVar3 = (**(code **)(*plVar2 + 0x348))(plVar2,*(undefined8 *)(*plVar2 + 0x350));
  if ((uVar3 & 1) != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x98) = param_2;
  _GAME_Utils_Helper__SetActive(*(undefined8 *)(param_1 + 0x68),1,0);
  if (*(long *)(param_1 + 0x18) == 0) goto LAB_077707f8;
  lVar4 = FUN_057e0998(*(long *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x98),DAT_091b0c90);
  _GAME_Utils_HelperButton__SetActive(*(undefined8 *)(param_1 + 0x70),1,0);
  if ((*(long *)(param_1 + 0x90) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_1 + 0x90) + 0xf8), lVar5 == 0)) goto LAB_077707f8;
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  lVar5 = *(long *)(lVar5 + 0x10);
  if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_091896c0 + 0xb8) == 0) goto LAB_077707f8;
  if (lVar5 == *(long *)(**(long **)(DAT_091896c0 + 0xb8) + 0x50)) {
    if (*(int *)(DAT_0918b978 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((**(long **)(DAT_0918b978 + 0xb8) == 0) ||
       (lVar5 = *(long *)(**(long **)(DAT_0918b978 + 0xb8) + 0x40), lVar5 == 0)) goto LAB_077707f8;
    if (*(int *)(lVar5 + 0x30) != 1) goto LAB_07770760;
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x68) == 0)) goto LAB_077707f8;
    lVar5 = *(long *)(*(long *)(lVar4 + 0x68) + 0x10);
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522cb0 == '\0') {
      FUN_03f5c2a4(&DAT_09180dc0);
      DAT_09522cb0 = '\x01';
    }
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (lVar5 == 0) goto LAB_077707f8;
    uVar1 = System_String__Equals(lVar5,**(undefined8 **)(DAT_09180dc0 + 0xb8),0);
    uVar1 = uVar1 ^ 1;
  }
  else {
LAB_07770760:
    uVar1 = 0;
  }
  _GAME_Utils_HelperButton__SetActive(uVar6,uVar1 & 1,0);
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  uVar1 = _GAME_Utils_HelperButton__ActiveSelf(*(undefined8 *)(param_1 + 0x78),0);
  _GAME_Utils_HelperButton__SetActive(uVar6,uVar1 & 1,0);
  if (lVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x68);
    lVar4 = UnityEngine_Component__get_transform(lVar4,0);
    if ((lVar4 != 0) && (UnityEngine_Transform__get_position(lVar4,0), lVar5 != 0)) {
      UnityEngine_Transform__set_position(lVar5,0);
      uVar6 = *(undefined8 *)(param_1 + 0x68);
      if (*(int *)(DAT_09187680 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(uVar6,0);
      return;
    }
  }
LAB_077707f8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


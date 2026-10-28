// rea decompile_all
// name: _GAME.StageRace.PopupStageRaceRunningCtrl$$OnUpdateData
// address: 0x77f3c18
// body: available
// range: 0x77f3c18-0x77f3f37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77f3e00 to 0x7741114 _GAME.Utils.HelperButton$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x77f3f34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_StageRace_PopupStageRaceRunningCtrl__OnUpdateData(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  
  if ((DAT_09523109 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0310);
    FUN_03f5c2a4(&DAT_09185080);
    FUN_03f5c2a4(&DAT_0918b158);
    FUN_03f5c2a4(&DAT_0918be20);
    FUN_03f5c2a4(&DAT_092014f0);
    DAT_09523109 = 1;
  }
  if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar6 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x18);
    if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = _GAME_BaseGame_TimerManager__get_UnixTimeSeconds(0);
    lVar7 = DAT_091c0310;
    lVar9 = param_1[0x1e];
    lVar6 = lVar6 - lVar2;
    if (lVar6 < 1) {
      lVar6 = *(long *)(DAT_091c0310 + 0x38);
      if (lVar6 == 0) {
        FUN_03f95ac8(DAT_091c0310);
        lVar6 = *(long *)(lVar7 + 0x38);
      }
      lVar6 = *(long *)(lVar6 + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar6 = *(long *)(*(long *)(lVar7 + 0x38) + 0x10);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      _GAME_Localize_LocalizeHelper__SetTextLocalizedByKey
                (lVar9,DAT_092014f0,**(undefined8 **)(lVar6 + 0xb8),0);
    }
    else {
      if (*(int *)(DAT_09185080 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = _GAME_Utils_HelperTime__FormatTimePrettyShort(lVar6,0);
      if (lVar9 == 0) goto LAB_077f3f34;
      TMPro_TMP_Text__SetText(lVar9,uVar3,0);
    }
    uVar4 = (**(code **)(*param_1 + 0x348))(param_1,*(undefined8 *)(*param_1 + 0x350));
    if (((uVar4 & 1) != 0) || ((char)param_1[0x27] != '\0')) {
      _GAME_Utils_HelperTextMeshPro__SetActive(param_1[0x1f],1,0);
      _GAME_Utils_HelperTextMeshPro__SetActive(param_1[0x20],0,0);
      _GAME_Utils_HelperTextMeshPro__SetActive(param_1[0x21],0,0);
      _GAME_Utils_HelperButton__SetActive(param_1[0x23],0,0);
      lVar6 = param_1[0x24];
      uVar1 = 0;
LAB_077f3df0:
      _GAME_Utils_HelperButton__SetActive(lVar6,uVar1,0);
      return;
    }
    lVar6 = param_1[0x1f];
    if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
    if (lVar7 != 0) {
      _GAME_Utils_HelperTextMeshPro__SetActive(lVar6,*(int *)(lVar7 + 0x30) == 1,0);
      plVar8 = *(long **)(DAT_0918b158 + 0xb8);
      lVar6 = plVar8[1];
      if (lVar6 != 0) {
        lVar7 = param_1[0x20];
        if (*(int *)(lVar6 + 0x30) == 2) {
          if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
            FUN_03f5c424();
            plVar8 = *(long **)(DAT_0918b158 + 0xb8);
            lVar6 = plVar8[1];
            if (lVar6 == 0) goto LAB_077f3f34;
          }
          if (*plVar8 == 0) goto LAB_077f3f34;
          bVar5 = *(int *)(*plVar8 + 0x14) <= *(int *)(lVar6 + 0x34);
        }
        else {
          bVar5 = false;
        }
        _GAME_Utils_HelperTextMeshPro__SetActive(lVar7,bVar5,0);
        if (param_1[0x1f] != 0) {
          lVar7 = param_1[0x21];
          lVar6 = UnityEngine_Component__get_gameObject(param_1[0x1f],0);
          if (lVar6 != 0) {
            uVar4 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
            if ((uVar4 & 1) == 0) {
              uVar1 = _GAME_Utils_HelperTextMeshPro__ActiveSelf(param_1[0x20],0);
              uVar1 = uVar1 ^ 1;
            }
            else {
              uVar1 = 0;
            }
            _GAME_Utils_HelperTextMeshPro__SetActive(lVar7,uVar1 & 1,0);
            lVar6 = param_1[0x24];
            uVar1 = _GAME_Utils_HelperTextMeshPro__ActiveSelf(param_1[0x20],0);
            _GAME_Utils_HelperButton__SetActive(lVar6,uVar1 & 1,0);
            lVar6 = param_1[0x23];
            uVar1 = _GAME_Utils_HelperTextMeshPro__ActiveSelf(param_1[0x20],0);
            uVar1 = (uVar1 ^ 0xffffffff) & 1;
            goto LAB_077f3df0;
          }
        }
      }
    }
  }
LAB_077f3f34:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


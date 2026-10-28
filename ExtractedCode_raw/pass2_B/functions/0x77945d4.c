// rea decompile_all
// name: _GAME.Team.TeamChatInputBarUICtrl$$OnInputChanged
// address: 0x77945d4
// body: available
// range: 0x77945d4-0x779472f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7794728 to 0x89aeac4 UnityEngine.UI.Selectable$$set_interactable (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x779472c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_TeamChatInputBarUICtrl__OnInputChanged
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  
  if ((DAT_09522dc0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189998);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09522dc0 = 1;
  }
  uVar1 = System_String__IsNullOrEmpty(param_5,0);
  if (*(long *)(param_4 + 0x30) != 0) {
    UnityEngine_GameObject__SetActive(*(long *)(param_4 + 0x30),uVar1 & 1,0);
    if (*(int *)(DAT_09189998 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = _GAME_Bridge_R1UserTextSupport__ForDisplay(param_5,0);
    if (*(long *)(param_4 + 0x28) != 0) {
      TMPro_TMP_Text__SetText(*(long *)(param_4 + 0x28),uVar2,0);
      if ((uVar1 & 1) == 0) {
        if (*(long *)(param_4 + 0x28) == 0) goto LAB_0779472c;
        fVar5 = (float)TMPro_TMP_Text__GetPreferredValues(*(long *)(param_4 + 0x28),uVar2,0);
        if ((*(long *)(param_4 + 0x28) == 0) ||
           (lVar3 = TMPro_TMP_Text__get_rectTransform(*(long *)(param_4 + 0x28),0), lVar3 == 0))
        goto LAB_0779472c;
        UnityEngine_RectTransform__get_rect(lVar3,0);
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = 0x1001;
        if (param_3 < fVar5) {
          uVar4 = 0x1004;
        }
      }
      else {
        uVar4 = 0x1001;
      }
      if (*(long *)(param_4 + 0x28) != 0) {
        TMPro_TMP_Text__set_alignment(*(long *)(param_4 + 0x28),uVar4,0);
        if (*(long *)(param_4 + 0x40) != 0) {
          UnityEngine_UI_Selectable__set_interactable
                    (*(long *)(param_4 + 0x40),(uVar1 ^ 0xffffffff) & 1,0);
          return;
        }
      }
    }
  }
LAB_0779472c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


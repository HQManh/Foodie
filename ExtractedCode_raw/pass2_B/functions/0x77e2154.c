// rea decompile_all
// name: _GAME.WeeklyContest.WeeklyContestHomeTabUICtrl$$ShowContent
// address: 0x77e2154
// body: available
// range: 0x77e2154-0x77e2347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77e22fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e2344 to 0x77e30f4 _GAME.WeeklyContest.WeeklyContestManager$$FinishWeek (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_WeeklyContest_WeeklyContestHomeTabUICtrl__ShowContent(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  
  if ((DAT_09523068 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1d68);
    FUN_03f5c2a4(&DAT_091af138);
    FUN_03f5c2a4(&DAT_091af140);
    FUN_03f5c2a4(&DAT_091b1d70);
    FUN_03f5c2a4(&DAT_09189468);
    FUN_03f5c2a4(&DAT_0918d050);
    DAT_09523068 = 1;
  }
  if (**(long **)(DAT_0918d050 + 0xb8) != 0) {
    lVar5 = *(long *)(**(long **)(DAT_0918d050 + 0xb8) + 0x38);
    _GAME_Utils_Helper__SetActive(0x3f800000,*(undefined8 *)(param_1 + 0x40),0,0);
    _GAME_Utils_Helper__SetActive(0x3f800000,*(undefined8 *)(param_1 + 0x50),1,0);
    _GAME_WeeklyContest_WeeklyContestHomeTabUICtrl__UpdateUITimeLeft(param_1);
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      if (0 < iVar1) {
        iVar6 = 0;
        do {
          if (((*(long *)(param_1 + 0x68) == 0) ||
              (lVar2 = FUN_057e0998(*(long *)(param_1 + 0x68),iVar6,DAT_091af140), lVar2 == 0)) ||
             (lVar2 = UnityEngine_Component__get_gameObject(lVar2,0), lVar2 == 0))
          goto LAB_077e22fc;
          UnityEngine_GameObject__SetActive(lVar2,1,0);
          if (*(long *)(param_1 + 0x68) == 0) goto LAB_077e22fc;
          lVar2 = FUN_057e0998(*(long *)(param_1 + 0x68),iVar6,DAT_091af140);
          uVar3 = FUN_057e0998(lVar5,iVar6,DAT_091b1d70);
          if (lVar2 == 0) goto LAB_077e22fc;
          _GAME_WeeklyContest_PlayerWCRankItemUICtrl__UpdateUIData(lVar2,uVar3);
          iVar1 = *(int *)(lVar5 + 0x18);
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar1);
      }
      lVar5 = *(long *)(param_1 + 0x68);
      while (lVar5 != 0) {
        if (*(int *)(lVar5 + 0x18) <= iVar1) {
          if (*(int *)(DAT_09189468 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = _GAME_GameUI_PopupController__HasPopupActive(0);
          if ((uVar4 & 1) != 0) {
            return;
          }
          _GAME_WeeklyContest_WeeklyContestManager__FinishWeek(1);
          return;
        }
        lVar5 = FUN_057e0998(lVar5,iVar1,DAT_091af140);
        if ((lVar5 == 0) || (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0))
        break;
        UnityEngine_GameObject__SetActive(lVar5,0,0);
        iVar1 = iVar1 + 1;
        lVar5 = *(long *)(param_1 + 0x68);
      }
    }
  }
LAB_077e22fc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: _GAME.Team.PopupTeamInfoListMember$$ShowListMember
// address: 0x776f934
// body: available
// range: 0x776f934-0x776fc0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x776fbd0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x776fc08 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x776fc0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_PopupTeamInfoListMember__ShowListMember(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if ((DAT_09522ca2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b11a8);
    FUN_03f5c2a4(&DAT_091d63b8);
    FUN_03f5c2a4(&DAT_091d63c0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbcf8);
    DAT_09522ca2 = 1;
  }
  _GAME_Utils_HelperDOTween__CompleteAndKill(*(undefined8 *)(param_1 + 0xa0),0);
  _GAME_Utils_Helper__SetActive(0x3f800000,*(undefined8 *)(param_1 + 0x10),1,0);
  lVar7 = *(long *)(param_1 + 0xa0);
  uVar3 = DG_Tweening_DOTweenModuleUI__DOFade
                    (0x3f800000,0x3e4ccccd,*(undefined8 *)(param_1 + 0x10),0);
  lVar2 = DAT_091b11a8;
  if (lVar7 != 0) {
    lVar6 = *(long *)(lVar7 + 0x10);
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
        thunk_FUN_03f5d7b8();
      }
      else {
        FUN_057e0c68(lVar7,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      uVar4 = _GAME_Utils_Helper__ActiveSelf(*(undefined8 *)(param_1 + 0x58),0);
      if ((uVar4 & 1) != 0) {
        lVar7 = *(long *)(param_1 + 0xa0);
        uVar3 = DG_Tweening_DOTweenModuleUI__DOFade(0,0x3e4ccccd,*(undefined8 *)(param_1 + 0x58),0);
        uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar5,param_1,DAT_091d63b8,0);
        uVar3 = FUN_04d956bc(uVar3,uVar5,DAT_091dbcf8);
        lVar2 = DAT_091b11a8;
        if (lVar7 == 0) goto LAB_0776fc0c;
        lVar6 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar6 == 0) goto LAB_0776fc0c;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar7,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      uVar4 = _GAME_Utils_Helper__ActiveSelf(*(undefined8 *)(param_1 + 0x60),0);
      if ((uVar4 & 1) == 0) {
        return;
      }
      lVar7 = *(long *)(param_1 + 0xa0);
      uVar3 = DG_Tweening_DOTweenModuleUI__DOFade(0,0x3e4ccccd,*(undefined8 *)(param_1 + 0x60),0);
      uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar5,param_1,DAT_091d63c0,0);
      uVar3 = FUN_04d956bc(uVar3,uVar5,DAT_091dbcf8);
      lVar2 = DAT_091b11a8;
      if (lVar7 != 0) {
        lVar6 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar6 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
            thunk_FUN_03f5d7b8();
            return;
          }
          FUN_057e0c68(lVar7,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                      );
          return;
        }
      }
    }
  }
LAB_0776fc0c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


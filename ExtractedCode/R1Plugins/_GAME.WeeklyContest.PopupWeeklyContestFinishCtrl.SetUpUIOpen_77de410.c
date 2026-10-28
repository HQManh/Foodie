// rea decompile_all
// name: _GAME.WeeklyContest.PopupWeeklyContestFinishCtrl$$SetUpUIOpen
// address: 0x77de410
// body: available
// range: 0x77de410-0x77de77b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77de69c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _GAME_WeeklyContest_PopupWeeklyContestFinishCtrl__SetUpUIOpen(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  
  if ((DAT_09523040 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091afa98);
    FUN_03f5c2a4(&DAT_091afa60);
    FUN_03f5c2a4(&DAT_091afaa0);
    FUN_03f5c2a4(&DAT_091afa68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09204830);
    FUN_03f5c2a4(&DAT_091f9d68);
    FUN_03f5c2a4(&DAT_09204810);
    DAT_09523040 = 1;
  }
  if (param_2 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _GAME_WeeklyContest_SOWeeklyContestConfig__GetRankReward(param_2);
  }
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x130) = uVar2;
    thunk_FUN_03f5d7b8(param_1 + 0x130);
    if ((*(long *)(param_1 + 0x130) == 0) || (*(int *)(*(long *)(param_1 + 0x130) + 0x18) == 0)) {
      return 0;
    }
    _GAME_Utils_HelperTextMeshPro__SetActive(*(undefined8 *)(param_1 + 0xe8),1,0);
    plVar7 = *(long **)(param_1 + 0xe8);
    uVar2 = _GAME_Utils_HelperNumber__FormatStt(param_2 + 1,0);
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x558))(plVar7,uVar2,*(undefined8 *)(*plVar7 + 0x560));
      if (*(long *)(param_1 + 0xf0) != 0) {
        UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0xf0),1,0);
        if (*(long *)(param_1 + 0x120) != 0) {
          UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x120),0,0);
          _GAME_Utils_HelperButton__SetActive(*(undefined8 *)(param_1 + 0x118),1,0);
          if (*(long *)(param_1 + 0x118) != 0) {
            lVar3 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x118),0);
            if (DAT_09515cf3 == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09515cf3 = '\x01';
            }
            if (lVar3 != 0) {
              lVar5 = *(long *)(DAT_0918cbd0 + 0xb8);
              UnityEngine_Transform__set_localScale
                        (*(undefined4 *)(lVar5 + 0xc),*(undefined4 *)(lVar5 + 0x10),
                         *(undefined4 *)(lVar5 + 0x14),lVar3,0);
              if (*(long *)(param_1 + 0x118) != 0) {
                UnityEngine_UI_Selectable__set_interactable(*(long *)(param_1 + 0x118),1,0);
                _GAME_Utils_HelperButton__SetActive(*(undefined8 *)(param_1 + 0x128),0,0);
                lVar3 = *(long *)(param_1 + 0x110);
                if (lVar3 != 0) {
                  iVar6 = 0;
                  while (iVar6 < *(int *)(lVar3 + 0x18)) {
                    if (*(long *)(param_1 + 0x130) == 0) goto LAB_077de69c;
                    iVar1 = *(int *)(*(long *)(param_1 + 0x130) + 0x18);
                    lVar3 = FUN_057e0998(lVar3,iVar6,DAT_091afaa0);
                    if (iVar6 < iVar1) {
                      if ((lVar3 == 0) ||
                         (lVar3 = UnityEngine_Component__get_gameObject(lVar3,0), lVar3 == 0))
                      goto LAB_077de69c;
                      UnityEngine_GameObject__SetActive(lVar3,1,0);
                      if (*(long *)(param_1 + 0x110) == 0) goto LAB_077de69c;
                      lVar3 = FUN_057e0998(*(long *)(param_1 + 0x110),iVar6,DAT_091afaa0);
                      if ((*(long *)(param_1 + 0x130) == 0) ||
                         (uVar2 = FUN_057e0998(*(long *)(param_1 + 0x130),iVar6,DAT_091afa68),
                         lVar3 == 0)) goto LAB_077de69c;
                      _GAME_GameUI_RwItemUICtrl__SetData(lVar3,uVar2,0);
                    }
                    else {
                      if ((lVar3 == 0) ||
                         (lVar3 = UnityEngine_Component__get_gameObject(lVar3,0), lVar3 == 0))
                      goto LAB_077de69c;
                      UnityEngine_GameObject__SetActive(lVar3,0,0);
                    }
                    lVar3 = *(long *)(param_1 + 0x110);
                    iVar6 = iVar6 + 1;
                    if (lVar3 == 0) goto LAB_077de69c;
                  }
                  uVar2 = *(undefined8 *)(param_1 + 0x100);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar4 = UnityEngine_Object__op_Inequality(uVar2,0,0);
                  if ((uVar4 & 1) == 0) {
LAB_077de738:
                    _GAME_Utils_HelperAnimation__ResetAndSetTrigger
                              (*(undefined8 *)(param_1 + 0x108),DAT_09204810,0);
                    _GAME_Utils_HelperAnimation__ResetAndSetTrigger
                              (*(undefined8 *)(param_1 + 0xf8),DAT_09204830,0);
                    return 1;
                  }
                  if (*(long *)(param_1 + 0x100) != 0) {
                    lVar3 = Spine_Unity_SkeletonGraphic__get_AnimationState
                                      (*(long *)(param_1 + 0x100),0);
                    if (lVar3 == 0) goto LAB_077de738;
                    if ((*(long *)(param_1 + 0x100) != 0) &&
                       (lVar3 = Spine_Unity_SkeletonGraphic__get_AnimationState
                                          (*(long *)(param_1 + 0x100),0), lVar3 != 0)) {
                      Spine_AnimationState__ClearTracks(lVar3,0);
                      if ((*(long *)(param_1 + 0x100) != 0) &&
                         (lVar3 = Spine_Unity_SkeletonGraphic__get_AnimationState
                                            (*(long *)(param_1 + 0x100),0), lVar3 != 0)) {
                        Spine_AnimationState__SetAnimation(lVar3,0,DAT_091f9d68,1,0);
                        goto LAB_077de738;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_077de69c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


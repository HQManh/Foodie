// rea decompile_all
// name: CakeOrder.InGame.InGameUITutorialProcessBooster.<IEShowStepOpenBox>d__33$$MoveNext
// address: 0x428ec90
// body: available
// range: 0x428ec90-0x428f273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x428f270 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_InGame_InGameUITutorialProcessBooster_<IEShowStepOpenBox>d__33__MoveNext(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_0951718d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174c90);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091cfd10);
    FUN_03f5c2a4(&DAT_091cfd18);
    FUN_03f5c2a4(&DAT_091cfd20);
    FUN_03f5c2a4(&DAT_091b48d0);
    FUN_03f5c2a4(&DAT_091dbcc0);
    FUN_03f5c2a4(&DAT_091dbe90);
    FUN_03f5c2a4(&DAT_091dbe80);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091dc030);
    FUN_03f5c2a4(&DAT_0918ce98);
    FUN_03f5c2a4(&DAT_0918cec0);
    DAT_0951718d = 1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar4 = *(long *)(param_1 + 0x20);
  uVar2 = 0;
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar4 != 0) {
        uVar6 = *(undefined4 *)(lVar4 + 0xec);
        uVar2 = thunk_FUN_03f9944c(DAT_0918ce98);
        UnityEngine_WaitForSecondsRealtime___ctor(uVar6,uVar2,0);
        *(undefined8 *)(param_1 + 0x18) = uVar2;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
        uVar6 = 1;
        uVar2 = 1;
        goto LAB_0428f258;
      }
    }
    else if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      CakeOrder_TimeControlCakeOrder__StopTime(lVar4,0);
      if (*(int *)(DAT_09183190 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = DG_Tweening_DOTween__Sequence(0);
      if ((lVar4 != 0) && (*(long *)(lVar4 + 0x30) != 0)) {
        uVar2 = DG_Tweening_TweenSettingsExtensions__AppendInterval
                          (*(undefined4 *)(*(long *)(lVar4 + 0x30) + 0x28),uVar2,0);
        lVar5 = *(long *)(lVar4 + 0x30);
        if (lVar5 != 0) {
          uVar3 = DG_Tweening_DOTweenModuleUI__DOAnchorPos
                            (*(undefined4 *)(lVar5 + 0x18),*(undefined4 *)(lVar5 + 0x1c),
                             *(undefined4 *)(lVar5 + 0x2c),*(undefined8 *)(lVar4 + 0x50),0,0);
          uVar3 = FUN_04d95e8c(uVar3,0x1a,DAT_091dbe90);
          uVar2 = DG_Tweening_TweenSettingsExtensions__Append(uVar2,uVar3,0);
          lVar5 = *(long *)(lVar4 + 0x30);
          if (lVar5 != 0) {
            uVar3 = DG_Tweening_ShortcutExtensions__DOScale
                              (*(undefined4 *)(lVar5 + 0x24),*(undefined4 *)(lVar5 + 0x2c),
                               *(undefined8 *)(lVar4 + 0x50),0);
            uVar3 = FUN_04d95e8c(uVar3,6,DAT_091dbeb0);
            uVar2 = DG_Tweening_TweenSettingsExtensions__Join(uVar2,uVar3,0);
            if (*(long *)(lVar4 + 0x30) != 0) {
              uVar3 = DG_Tweening_DOTweenModuleUI__DOFade
                                (0x3f800000,*(undefined4 *)(*(long *)(lVar4 + 0x30) + 0x2c),
                                 *(undefined8 *)(lVar4 + 0x48),0);
              uVar3 = FUN_04d95e8c(uVar3,1,DAT_091dbe80);
              uVar2 = DG_Tweening_TweenSettingsExtensions__Join(uVar2,uVar3,0);
              uVar2 = FUN_04d9656c(uVar2,1,DAT_091dc030);
              uVar2 = FUN_04d8dd74(uVar2,DAT_091dbcc0);
              *(undefined8 *)(lVar4 + 0x88) = uVar2;
              thunk_FUN_03f5d7b8((undefined8 *)(lVar4 + 0x88),uVar2);
              uVar2 = 0;
              if (*(long *)(lVar4 + 0x40) != 0) {
                lVar5 = Spine_Unity_SkeletonGraphic__get_AnimationState(*(long *)(lVar4 + 0x40),0);
                uVar2 = 0;
                if (lVar5 != 0) {
                  Spine_AnimationState__SetAnimation(lVar5,0,*(undefined8 *)(lVar4 + 0x58),0,0);
                  uVar2 = 0;
                  if (*(long *)(lVar4 + 0x40) != 0) {
                    lVar5 = Spine_Unity_SkeletonGraphic__get_AnimationState
                                      (*(long *)(lVar4 + 0x40),0);
                    uVar2 = 0;
                    if (lVar5 != 0) {
                      uVar2 = Spine_AnimationState__AddAnimation
                                        (0,lVar5,0,*(undefined8 *)(lVar4 + 0x60),1,0);
                      lVar4 = *(long *)(lVar4 + 0x30);
                      if (lVar4 != 0) {
                        fVar7 = *(float *)(lVar4 + 0x28);
                        fVar8 = *(float *)(lVar4 + 0x2c);
                        uVar2 = thunk_FUN_03f9944c(DAT_0918ce98);
                        UnityEngine_WaitForSecondsRealtime___ctor(fVar7 + fVar8,uVar2,0);
                        *(undefined8 *)(param_1 + 0x18) = uVar2;
                        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
                        uVar2 = 1;
                        uVar6 = 2;
                        goto LAB_0428f258;
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
    else {
      if (iVar1 != 2) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar4 != 0) {
        lVar5 = *(long *)(lVar4 + 0x78);
        *(undefined1 *)(lVar4 + 0xf0) = 0;
        uVar3 = thunk_FUN_03f9944c(DAT_09174c90);
        uVar2 = FUN_071cd244(uVar3,lVar4,DAT_091cfd20,0);
        if (lVar5 != 0) {
          Utilities_ForwardUIPointerEvent__add_onMouseClick(lVar5,uVar3,0);
          uVar2 = thunk_FUN_03f9944c(DAT_09177ab8);
          FUN_053007d8(uVar2,lVar4,DAT_091cfd10,0);
          uVar3 = thunk_FUN_03f9944c(DAT_0918cec0);
          UnityEngine_WaitUntil___ctor(uVar3,uVar2,0);
          *(undefined8 *)(param_1 + 0x18) = uVar3;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
          uVar2 = 1;
          uVar6 = 3;
          goto LAB_0428f258;
        }
      }
    }
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        lVar5 = *(long *)(DAT_091b48d0 + 0x20);
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        uVar2 = 0;
        if ((**(long **)(lVar5 + 0xb8) == 0) ||
           (uVar2 = CakeOrder_AudioManagerCakeOrder__Play(**(long **)(lVar5 + 0xb8),2,0), lVar4 == 0
           )) goto LAB_0428f270;
        *(undefined1 *)(lVar4 + 0xe8) = 0;
        CakeOrder_InGame_InGameUITutorialProcessBooster__TakeReward(lVar4);
        uVar2 = thunk_FUN_03f9944c(DAT_09177ab8);
        FUN_053007d8(uVar2,lVar4,DAT_091cfd18,0);
        uVar3 = thunk_FUN_03f9944c(DAT_0918cec0);
        UnityEngine_WaitUntil___ctor(uVar3,uVar2,0);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
        uVar2 = 1;
        uVar6 = 5;
      }
      else {
        if (iVar1 != 5) {
          return 0;
        }
        uVar6 = 0xffffffff;
      }
LAB_0428f258:
      *(undefined4 *)(param_1 + 0x10) = uVar6;
      return uVar2;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 != 0) {
      lVar5 = *(long *)(lVar4 + 0x78);
      uVar3 = thunk_FUN_03f9944c(DAT_09174c90);
      uVar2 = FUN_071cd244(uVar3,lVar4,DAT_091cfd20,0);
      if (lVar5 != 0) {
        Utilities_ForwardUIPointerEvent__remove_onMouseClick(lVar5,uVar3,0);
        uVar2 = 0;
        if (*(long *)(lVar4 + 0x40) != 0) {
          lVar5 = Spine_Unity_SkeletonGraphic__get_AnimationState(*(long *)(lVar4 + 0x40),0);
          uVar2 = 0;
          if (lVar5 != 0) {
            Spine_AnimationState__SetAnimation(lVar5,0,*(undefined8 *)(lVar4 + 0x68),0,0);
            uVar2 = 0;
            if (*(long *)(lVar4 + 0x40) != 0) {
              lVar5 = Spine_Unity_SkeletonGraphic__get_AnimationState(*(long *)(lVar4 + 0x40),0);
              uVar2 = 0;
              if (lVar5 != 0) {
                uVar2 = Spine_AnimationState__AddAnimation
                                  (0,lVar5,0,*(undefined8 *)(lVar4 + 0x70),1,0);
                if (*(long *)(lVar4 + 0x30) != 0) {
                  uVar6 = *(undefined4 *)(*(long *)(lVar4 + 0x30) + 0x30);
                  uVar2 = thunk_FUN_03f9944c(DAT_0918ce98);
                  UnityEngine_WaitForSecondsRealtime___ctor(uVar6,uVar2,0);
                  *(undefined8 *)(param_1 + 0x18) = uVar2;
                  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar2);
                  uVar2 = 1;
                  uVar6 = 4;
                  goto LAB_0428f258;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0428f270:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(uVar2);
}


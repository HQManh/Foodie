// rea decompile_all
// name: CakeOrder.InGame.InGameUITutorialProcessCombo.<IETutCombo>d__11$$MoveNext
// address: 0x429061c
// body: available
// range: 0x429061c-0x4290f8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4290f78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4290f7c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4290f88 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 CakeOrder_InGame_InGameUITutorialProcessCombo_<IETutCombo>d__11__MoveNext(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 local_44;
  
  if ((DAT_09517193 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09177ab8);
    FUN_03f5c2a4(&DAT_091cfd70);
    FUN_03f5c2a4(&DAT_091cfd48);
    FUN_03f5c2a4(&DAT_091cfd50);
    FUN_03f5c2a4(&DAT_091cfd58);
    FUN_03f5c2a4(&DAT_091cfd60);
    FUN_03f5c2a4(&DAT_091cfd68);
    FUN_03f5c2a4(&DAT_09180318);
    FUN_03f5c2a4(&DAT_091dbc98);
    FUN_03f5c2a4(&DAT_091dc008);
    FUN_03f5c2a4(&DAT_0918ce98);
    FUN_03f5c2a4(&DAT_0918cec0);
    FUN_03f5c2a4(&DAT_09224490);
    FUN_03f5c2a4(&DAT_09224488);
    FUN_03f5c2a4(&DAT_09224478);
    FUN_03f5c2a4(&DAT_09224480);
    DAT_09517193 = 1;
  }
  iVar2 = *(int *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x20);
  if (iVar2 < 4) {
    if (iVar2 < 2) {
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        uVar9 = thunk_FUN_03f9944c(DAT_09177ab8);
        FUN_053007d8(uVar9,lVar7,DAT_091cfd48,0);
        uVar3 = thunk_FUN_03f9944c(DAT_0918cec0);
        UnityEngine_WaitUntil___ctor(uVar3,uVar9,0);
        *(undefined8 *)(param_1 + 0x18) = uVar3;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      if (iVar2 != 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      CakeOrder_TimeControlCakeOrder__StopTime(lVar7,0);
      if (((lVar7 != 0) && (*(long *)(lVar7 + 0x30) != 0)) &&
         ((lVar6 = *(long *)(*(long *)(lVar7 + 0x30) + 0x10), lVar6 != 0 &&
          (lVar6 = *(long *)(lVar6 + 0x58), lVar6 != 0)))) {
        Utilities_BoolModifierWithRegisteredSource__AddModifier(lVar6,lVar7,0);
        if (((*(long *)(lVar7 + 0x30) != 0) &&
            (lVar6 = *(long *)(*(long *)(lVar7 + 0x30) + 0x18), lVar6 != 0)) &&
           (lVar6 = *(long *)(lVar6 + 0xf8), lVar6 != 0)) {
          puVar8 = (undefined8 *)(param_1 + 0x28);
          *puVar8 = *(undefined8 *)(lVar6 + 0xf8);
          thunk_FUN_03f5d7b8(puVar8);
          uVar9 = *puVar8;
          if (*(int *)(DAT_09182278 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = CakeOrder_Localization_CakeLocalization__Tr(DAT_09224480,0);
          CakeOrder_UI_UITutorialProcessBase__ShowTutInstruct(lVar7,uVar9,uVar3,0);
          if ((((*(long *)(lVar7 + 0x30) != 0) &&
               (lVar6 = *(long *)(*(long *)(lVar7 + 0x30) + 0x18), lVar6 != 0)) &&
              (lVar6 = *(long *)(lVar6 + 0xf8), lVar6 != 0)) &&
             (lVar6 = *(long *)(lVar6 + 0x78), lVar6 != 0)) {
            iVar2 = CakeOrder_InGame_InGameComboMechanicControl__get_StepRequiredToActivate(lVar6,0)
            ;
            if (((*(long *)(lVar7 + 0x30) != 0) &&
                (lVar6 = *(long *)(*(long *)(lVar7 + 0x30) + 0x18), lVar6 != 0)) &&
               ((lVar6 = *(long *)(lVar6 + 0xf8), lVar6 != 0 &&
                (lVar6 = *(long *)(lVar6 + 0x78), lVar6 != 0)))) {
              uVar1 = iVar2 - *(int *)(lVar7 + 0x44);
              CakeOrder_InGame_InGameComboMechanicControl__IncreaseComboStep
                        (lVar6,uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU),0);
              *(undefined1 *)(lVar7 + 0x28) = 0;
              uVar9 = thunk_FUN_03f9944c(DAT_09177ab8);
              FUN_053007d8(uVar9,lVar7,DAT_091cfd50,0);
              uVar3 = thunk_FUN_03f9944c(DAT_0918cec0);
              UnityEngine_WaitUntil___ctor(uVar3,uVar9,0);
              *(undefined8 *)(param_1 + 0x18) = uVar3;
              thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
              uVar10 = 2;
              goto LAB_04290f50;
            }
          }
        }
      }
    }
    else if (iVar2 == 2) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar7 != 0) {
        CakeOrder_UI_UITutorialProcessBase__HideTutInstruct(lVar7,*(undefined8 *)(param_1 + 0x28),0)
        ;
        if ((((*(long *)(lVar7 + 0x30) != 0) &&
             (lVar6 = *(long *)(*(long *)(lVar7 + 0x30) + 0x18), lVar6 != 0)) &&
            (lVar6 = *(long *)(lVar6 + 0xf8), lVar6 != 0)) &&
           ((lVar6 = *(long *)(lVar6 + 0x78), lVar6 != 0 &&
            (lVar6 = *(long *)(lVar6 + 0x28), lVar6 != 0)))) {
          puVar8 = &DAT_09224488;
          if (*(char *)(lVar6 + 0x24) != '\0') {
            puVar8 = &DAT_09224490;
          }
          uVar9 = *(undefined8 *)(param_1 + 0x28);
          uVar3 = *puVar8;
          plVar4 = (long *)FUN_03f5c394(DAT_09180318,1);
          local_44 = *(undefined4 *)(lVar7 + 0x44);
          lVar6 = FUN_03f5c42c(DAT_09535420,&local_44);
          if (plVar4 != (long *)0x0) {
            if ((lVar6 != 0) &&
               (lVar5 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
              uVar9 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar9,0);
            }
            if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            plVar4[4] = lVar6;
            thunk_FUN_03f5d7b8(plVar4 + 4,lVar6);
            if (*(int *)(DAT_09182278 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = CakeOrder_Localization_CakeLocalization__TrFormat(uVar3,plVar4,0);
            CakeOrder_UI_UITutorialProcessBase__ShowTutInstruct(lVar7,uVar9,uVar3,0);
            *(undefined1 *)(lVar7 + 0x28) = 0;
            uVar9 = thunk_FUN_03f9944c(DAT_09177ab8);
            FUN_053007d8(uVar9,lVar7,DAT_091cfd58,0);
            uVar3 = thunk_FUN_03f9944c(DAT_0918cec0);
            UnityEngine_WaitUntil___ctor(uVar3,uVar9,0);
            *(undefined8 *)(param_1 + 0x18) = uVar3;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
            uVar10 = 3;
            goto LAB_04290f50;
          }
        }
      }
    }
    else {
      if (iVar2 != 3) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (lVar7 != 0) {
        CakeOrder_UI_UITutorialProcessBase__HideTutInstruct(lVar7,*(undefined8 *)(param_1 + 0x28),0)
        ;
        CakeOrder_TimeControlCakeOrder__ResumeTime(lVar7,0);
        if (((*(long *)(lVar7 + 0x30) != 0) &&
            (lVar6 = *(long *)(*(long *)(lVar7 + 0x30) + 0x10), lVar6 != 0)) &&
           (lVar6 = *(long *)(lVar6 + 0x58), lVar6 != 0)) {
          Utilities_BoolModifierWithRegisteredSource__RemoveModifier(lVar6,lVar7,0);
          lVar6 = *(long *)(lVar7 + 0x48);
          if (lVar6 != 0) {
            DG_Tweening_TweenExtensions__Kill(lVar6,0,0);
          }
          if (*(long *)(lVar7 + 0x20) != 0) {
            uVar9 = DG_Tweening_DOTweenModuleUI__DOFade
                              (0,0x3e800000,*(undefined8 *)(*(long *)(lVar7 + 0x20) + 0x38),0);
            uVar9 = FUN_04d9656c(uVar9,1,DAT_091dc008);
            uVar9 = FUN_04d8dd74(uVar9,DAT_091dbc98);
            *(undefined8 *)(lVar7 + 0x48) = uVar9;
            thunk_FUN_03f5d7b8((long *)(lVar7 + 0x48),uVar9);
            if ((*(long *)(lVar7 + 0x20) != 0) &&
               (lVar6 = *(long *)(*(long *)(lVar7 + 0x20) + 0x38), lVar6 != 0)) {
              UnityEngine_CanvasGroup__set_blocksRaycasts(lVar6,0,0);
              *(undefined1 *)(lVar7 + 0x40) = 0;
              if ((((*(long *)(lVar7 + 0x30) != 0) &&
                   ((lVar6 = *(long *)(*(long *)(lVar7 + 0x30) + 0x18), lVar6 != 0 &&
                    (lVar6 = *(long *)(lVar6 + 0xf8), lVar6 != 0)))) &&
                  (lVar6 = *(long *)(lVar6 + 0x78), lVar6 != 0)) &&
                 (lVar6 = *(long *)(lVar6 + 0x50), lVar6 != 0)) {
                Utilities_FloatModifierWithRegisteredSource__AddModifier(0,lVar6,lVar7,0);
                if (((*(long *)(lVar7 + 0x30) != 0) &&
                    (lVar6 = *(long *)(*(long *)(lVar7 + 0x30) + 0x18), lVar6 != 0)) &&
                   (lVar6 = *(long *)(lVar6 + 0xf8), lVar6 != 0)) {
                  lVar6 = *(long *)(lVar6 + 0x78);
                  uVar9 = thunk_FUN_03f9944c(DAT_09180e78);
                  System_Action___ctor(uVar9,lVar7,DAT_091cfd70,0);
                  if (lVar6 != 0) {
                    CakeOrder_InGame_InGameComboMechanicControl__add_onComboActivated(lVar6,uVar9,0)
                    ;
                    uVar9 = thunk_FUN_03f9944c(DAT_09177ab8);
                    FUN_053007d8(uVar9,lVar7,DAT_091cfd60,0);
                    uVar3 = thunk_FUN_03f9944c(DAT_0918cec0);
                    UnityEngine_WaitUntil___ctor(uVar3,uVar9,0);
                    *(undefined8 *)(param_1 + 0x18) = uVar3;
                    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
                    uVar10 = 4;
                    goto LAB_04290f50;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else if (iVar2 < 6) {
    if (iVar2 == 4) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      CakeOrder_UI_InGameUITutorialControl__SetDoneTut(1,0,0);
      if ((((lVar7 != 0) && (*(long *)(lVar7 + 0x30) != 0)) &&
          (lVar6 = *(long *)(*(long *)(lVar7 + 0x30) + 0x18), lVar6 != 0)) &&
         (lVar6 = *(long *)(lVar6 + 0xf8), lVar6 != 0)) {
        lVar6 = *(long *)(lVar6 + 0x78);
        uVar9 = thunk_FUN_03f9944c(DAT_09180e78);
        System_Action___ctor(uVar9,lVar7,DAT_091cfd70,0);
        if (lVar6 != 0) {
          CakeOrder_InGame_InGameComboMechanicControl__remove_onComboActivated(lVar6,uVar9,0);
          if (((*(long *)(lVar7 + 0x30) != 0) &&
              (lVar6 = *(long *)(*(long *)(lVar7 + 0x30) + 0x18), lVar6 != 0)) &&
             ((lVar6 = *(long *)(lVar6 + 0xf8), lVar6 != 0 &&
              ((lVar6 = *(long *)(lVar6 + 0x78), lVar6 != 0 &&
               (lVar6 = *(long *)(lVar6 + 0x50), lVar6 != 0)))))) {
            Utilities_FloatModifierWithRegisteredSource__RemoveModifier(lVar6,lVar7,0);
            uVar10 = *(undefined4 *)(lVar7 + 0x3c);
            uVar9 = thunk_FUN_03f9944c(DAT_0918ce98);
            UnityEngine_WaitForSecondsRealtime___ctor(uVar10,uVar9,0);
            *(undefined8 *)(param_1 + 0x18) = uVar9;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar9);
            uVar10 = 5;
            goto LAB_04290f50;
          }
        }
      }
    }
    else {
      if (iVar2 != 5) {
        return 0;
      }
      uVar9 = *(undefined8 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(DAT_09182278 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = CakeOrder_Localization_CakeLocalization__Tr(DAT_09224478,0);
      if (lVar7 != 0) {
        CakeOrder_UI_UITutorialProcessBase__ShowTutInstruct(lVar7,uVar9,uVar3,0);
        CakeOrder_TimeControlCakeOrder__StopTime(lVar7,0);
        lVar6 = *(long *)(lVar7 + 0x48);
        if (lVar6 != 0) {
          DG_Tweening_TweenExtensions__Kill(lVar6,0,0);
        }
        if (*(long *)(lVar7 + 0x20) != 0) {
          uVar9 = DG_Tweening_DOTweenModuleUI__DOFade
                            (0x3f800000,0x3e800000,*(undefined8 *)(*(long *)(lVar7 + 0x20) + 0x38),0
                            );
          uVar9 = FUN_04d9656c(uVar9,1,DAT_091dc008);
          uVar9 = FUN_04d8dd74(uVar9,DAT_091dbc98);
          *(undefined8 *)(lVar7 + 0x48) = uVar9;
          thunk_FUN_03f5d7b8((long *)(lVar7 + 0x48),uVar9);
          if ((*(long *)(lVar7 + 0x20) != 0) &&
             (lVar6 = *(long *)(*(long *)(lVar7 + 0x20) + 0x38), lVar6 != 0)) {
            UnityEngine_CanvasGroup__set_blocksRaycasts(lVar6,1,0);
            *(undefined1 *)(lVar7 + 0x28) = 0;
            uVar9 = thunk_FUN_03f9944c(DAT_09177ab8);
            FUN_053007d8(uVar9,lVar7,DAT_091cfd68,0);
            uVar3 = thunk_FUN_03f9944c(DAT_0918cec0);
            UnityEngine_WaitUntil___ctor(uVar3,uVar9,0);
            *(undefined8 *)(param_1 + 0x18) = uVar3;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar3);
            *(undefined4 *)(param_1 + 0x10) = 6;
            return 1;
          }
        }
      }
    }
  }
  else {
    if (iVar2 != 6) {
      if (iVar2 != 7) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      CakeOrder_TimeControlCakeOrder__ResumeTime(lVar7,0);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 != 0) {
      CakeOrder_UI_UITutorialProcessBase__HideTutInstruct(lVar7,*(undefined8 *)(param_1 + 0x28),0);
      uVar9 = thunk_FUN_03f9944c(DAT_0918ce98);
      UnityEngine_WaitForSecondsRealtime___ctor(0x3f000000,uVar9,0);
      *(undefined8 *)(param_1 + 0x18) = uVar9;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),uVar9);
      uVar10 = 7;
LAB_04290f50:
      *(undefined4 *)(param_1 + 0x10) = uVar10;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


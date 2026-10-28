// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$ShowPeek
// address: 0x4227248
// body: available
// range: 0x4227248-0x422791b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4227910 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4227918 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_OrderIngredientList__ShowPeek
               (long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,byte param_7)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  
  if ((DAT_09516d91 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adca8);
    FUN_03f5c2a4(&DAT_091ae388);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_091add30);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d5648);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbe90);
    FUN_03f5c2a4(&DAT_091dbe80);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_09516d91 = 1;
  }
  AnhPD_FoodOrder_OrderIngredientList__CapturePos(param_1);
  AnhPD_FoodOrder_OrderIngredientList__KillMorph(param_1);
  DG_Tweening_ShortcutExtensions__DOKill(*(undefined8 *)(param_1 + 0xb0),0,0);
  *(undefined8 *)(param_1 + 0xf8) = param_6;
  uVar9 = thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xf8),param_6);
  *(undefined1 *)(param_1 + 0x11d) = 0;
  uVar3 = AnhPD_FoodOrder_OrderIngredientList__PickPeek(uVar9,param_2,param_3);
  if (-1 < (int)uVar3) {
    lVar10 = UnityEngine_Component__get_gameObject(param_1,0);
    if (lVar10 != 0) {
      UnityEngine_GameObject__SetActive(lVar10,1,0);
      AnhPD_FoodOrder_OrderIngredientList__ResetAlpha(param_1);
      AnhPD_FoodOrder_OrderIngredientList__RestoreRest(param_1);
      uVar4 = AnhPD_FoodOrder_OrderIngredientList__Bind(param_1,param_2);
      if ((*(long *)(param_1 + 0x70) != 0) &&
         (lVar10 = FUN_057e0998(*(long *)(param_1 + 0x70),uVar3,DAT_091ae388), lVar10 != 0)) {
        if (*(int *)(param_1 + 0x58) < *(int *)(lVar10 + 0x40)) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          bVar2 = UnityEngine_Object__op_Implicit(param_5,0);
          bVar2 = bVar2 | param_7;
          if ((bVar2 & 1) == 0) {
            param_5 = 0;
          }
          *(byte *)(param_1 + 0x11d) = bVar2 & 1;
        }
        else {
          bVar2 = 0;
          param_5 = 0;
          *(undefined1 *)(param_1 + 0x11d) = 0;
        }
        *(byte *)(param_1 + 0x100) = bVar2 & param_7 & 1;
        AnhPD_FoodOrder_OrderIngredientList__PrepareNormalLayout(param_1,uVar4);
        uVar9 = *(undefined8 *)(param_1 + 0xb0);
        if (*(int *)(DAT_09187680 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(uVar9,0);
        fVar21 = 1.0;
        if (0 < (int)uVar4) {
          uVar16 = 0;
          do {
            if (*(long *)(param_1 + 0x70) == 0) goto LAB_04227910;
            lVar10 = FUN_057e0998(*(long *)(param_1 + 0x70),uVar16,DAT_091ae388);
            if ((*(long *)(param_1 + 0x98) == 0) ||
               (uVar5 = FUN_05796eb0(*(long *)(param_1 + 0x98),uVar16,DAT_091add20), lVar10 == 0))
            goto LAB_04227910;
            fVar18 = (float)AnhPD_FoodOrder_ListIngredientBoardView__FitScale(lVar10,uVar5);
            uVar16 = uVar16 + 1;
            if (fVar18 <= fVar21) {
              fVar21 = fVar18;
            }
          } while (uVar4 != uVar16);
        }
        if ((*(long *)(param_1 + 0x70) != 0) &&
           (lVar10 = FUN_057e0998(*(long *)(param_1 + 0x70),uVar3,DAT_091ae388), lVar10 != 0)) {
          plVar11 = (long *)UnityEngine_Component__get_transform(lVar10,0);
          if ((plVar11 != (long *)0x0) && (*plVar11 != DAT_09189c98)) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0(plVar11);
          }
          uVar5 = AnhPD_FoodOrder_OrderIngredientList__NormalScale(fVar21,param_1,uVar3);
          if (*(long *)(param_1 + 0x98) != 0) {
            uVar6 = FUN_05796eb0(*(long *)(param_1 + 0x98),uVar3,DAT_091add20);
            AnhPD_FoodOrder_ListIngredientBoardView__Relayout(uVar5,0,lVar10,uVar6);
            uVar9 = FUN_03f5c394(DAT_091807f8,4);
            if (plVar11 != (long *)0x0) {
              UnityEngine_RectTransform__GetWorldCorners(plVar11,uVar9,0);
              lVar14 = DAT_09188ad0;
              uVar17 = *(undefined8 *)(param_1 + 0xb8);
              *(undefined1 *)(param_1 + 0xf0) = 1;
              if (*(int *)(lVar14 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar12 = UnityEngine_Object__op_Implicit(uVar17,0);
              if ((uVar12 & 1) != 0) {
                if (*(long *)(param_1 + 0xb8) == 0) goto LAB_04227910;
                UnityEngine_Behaviour__set_enabled(*(long *)(param_1 + 0xb8),0,0);
              }
              AnhPD_FoodOrder_OrderIngredientList__CoverBoards(param_1,param_4,param_5);
              lVar14 = *(long *)(param_1 + 0x98);
              if (lVar14 != 0) {
                *(undefined4 *)(lVar14 + 0x18) = 0;
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                if (0 < (int)uVar4) {
                  uVar16 = 0;
                  do {
                    lVar14 = DAT_091adc88;
                    lVar13 = *(long *)(param_1 + 0x98);
                    if (lVar13 == 0) goto LAB_04227910;
                    lVar15 = *(long *)(lVar13 + 0x10);
                    *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                    if (lVar15 == 0) goto LAB_04227910;
                    uVar1 = *(uint *)(lVar13 + 0x18);
                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                      *(undefined4 *)(lVar15 + (long)(int)uVar1 * 4 + 0x20) = 1;
                    }
                    else {
                      FUN_057971a8(lVar13,1,*(undefined8 *)
                                             (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                    }
                    if (uVar3 != uVar16) {
                      if ((*(long *)(param_1 + 0x70) == 0) ||
                         (lVar14 = FUN_057e0998(*(long *)(param_1 + 0x70),uVar16,DAT_091ae388),
                         lVar14 == 0)) goto LAB_04227910;
                      AnhPD_FoodOrder_ListIngredientBoardView__Hide();
                    }
                    uVar16 = uVar16 + 1;
                  } while (uVar4 != uVar16);
                }
                uVar6 = *(undefined4 *)(param_1 + 0x54);
                AnhPD_FoodOrder_ListIngredientBoardView__SetEdgePadding
                          (*(undefined4 *)(param_1 + 0x50),uVar6,lVar10);
                AnhPD_FoodOrder_OrderIngredientList__PlaceAlone(plVar11);
                lVar14 = *(long *)(param_1 + 0x98);
                uVar5 = AnhPD_FoodOrder_OrderIngredientList__BestColumns(param_1,lVar10);
                if (lVar14 != 0) {
                  FUN_05796f04(lVar14,uVar3,uVar5,DAT_091add30);
                  uVar19 = UnityEngine_RectTransform__get_anchoredPosition(plVar11,0);
                  uVar5 = uVar6;
                  uVar20 = UnityEngine_RectTransform__get_sizeDelta(plVar11,0);
                  if (*(long *)(param_1 + 0x98) != 0) {
                    uVar7 = FUN_05796eb0(*(long *)(param_1 + 0x98),uVar3,DAT_091add20);
                    uVar7 = AnhPD_FoodOrder_ListIngredientBoardView__FitScale(lVar10,uVar7);
                    if (*(long *)(param_1 + 0x98) != 0) {
                      uVar8 = FUN_05796eb0(*(long *)(param_1 + 0x98),uVar3,DAT_091add20);
                      AnhPD_FoodOrder_ListIngredientBoardView__Relayout
                                (uVar7,*(undefined4 *)(param_1 + 0x5c),lVar10,uVar8);
                      AnhPD_FoodOrder_OrderIngredientList__SetRectFromWorldCorners
                                (param_1,plVar11,uVar9);
                      lVar10 = AnhPD_FoodOrder_OrderIngredientList__CanvasGroupOf(lVar10);
                      if (lVar10 != 0) {
                        UnityEngine_CanvasGroup__set_alpha(0,lVar10,0);
                        if (*(int *)(DAT_09183190 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        uVar9 = DG_Tweening_DOTween__Sequence(0);
                        uVar17 = DG_Tweening_DOTweenModuleUI__DOAnchorPos
                                           (uVar19,uVar6,*(undefined4 *)(param_1 + 0x5c),plVar11,0,0
                                           );
                        uVar17 = FUN_04d95e8c(uVar17,*(undefined4 *)(param_1 + 100),DAT_091dbe90);
                        uVar9 = DG_Tweening_TweenSettingsExtensions__Join(uVar9,uVar17,0);
                        uVar17 = DG_Tweening_DOTweenModuleUI__DOSizeDelta
                                           (uVar20,uVar5,*(undefined4 *)(param_1 + 0x5c),plVar11,0,0
                                           );
                        uVar17 = FUN_04d95e8c(uVar17,*(undefined4 *)(param_1 + 100),DAT_091dbe90);
                        uVar9 = DG_Tweening_TweenSettingsExtensions__Join(uVar9,uVar17,0);
                        uVar17 = DG_Tweening_DOTweenModuleUI__DOFade
                                           (0x3f800000,*(undefined4 *)(param_1 + 0x5c),lVar10,0);
                        uVar17 = FUN_04d95e8c(uVar17,*(undefined4 *)(param_1 + 0x60),DAT_091dbe80);
                        uVar9 = DG_Tweening_TweenSettingsExtensions__Join(uVar9,uVar17,0);
                        uVar17 = thunk_FUN_03f9944c(DAT_0918c148);
                        DG_Tweening_TweenCallback___ctor(uVar17,param_1,DAT_091d5648,0);
                        uVar9 = FUN_04d956bc(uVar9,uVar17,DAT_091dbd18);
                        *(undefined8 *)(param_1 + 0xe8) = uVar9;
                        thunk_FUN_03f5d7b8();
                        *(undefined1 *)(param_1 + 0x11c) = 1;
                        *(undefined1 *)(param_1 + 0x101) = 1;
                        AnhPD_FoodOrder_OrderIngredientList__RefreshOwned(param_1,1);
                        goto LAB_042278e0;
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
LAB_04227910:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_042278e0:
  return ~uVar3 >> 0x1f;
}


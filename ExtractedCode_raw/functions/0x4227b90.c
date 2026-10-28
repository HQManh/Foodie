// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$MorphToNormal
// address: 0x4227b90
// body: available
// range: 0x4227b90-0x422842f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4227e40 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422841c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4228424 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422842c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_OrderIngredientList__MorphToNormal
               (undefined1 param_1 [16],ulong param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined8 local_80;
  long local_78;
  
  if ((DAT_09516d99 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c58d0);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_0919d420);
    FUN_03f5c2a4(&DAT_0919d428);
    FUN_03f5c2a4(&DAT_0919d418);
    FUN_03f5c2a4(&DAT_0919d430);
    FUN_03f5c2a4(&DAT_09176398);
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_091ae380);
    FUN_03f5c2a4(&DAT_091ae388);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d5640);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbe90);
    FUN_03f5c2a4(&DAT_091dbe80);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091807e8);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_09516d99 = 1;
  }
  local_80 = 0;
  local_78 = 0;
  AnhPD_FoodOrder_OrderIngredientList__CapturePos(param_3);
  AnhPD_FoodOrder_OrderIngredientList__KillMorph(param_3);
  DG_Tweening_ShortcutExtensions__DOKill(*(undefined8 *)(param_3 + 0xb0),0,0);
  uVar5 = DAT_09176398;
  *(undefined1 *)(param_3 + 0x11c) = 0;
  lVar3 = thunk_FUN_03f9944c(uVar5);
  FUN_06eef750(lVar3,DAT_0919d418);
  lVar4 = *(long *)(param_3 + 0x70);
  if (lVar4 != 0) {
    iVar14 = 0;
    do {
      if (*(int *)(lVar4 + 0x18) <= iVar14) {
        *(undefined1 *)(param_3 + 0xf0) = 1;
        AnhPD_FoodOrder_OrderIngredientList__RestoreRest(param_3);
        uVar1 = AnhPD_FoodOrder_OrderIngredientList__Bind(param_3,param_4);
        if (uVar1 == 0) {
          *(undefined1 *)(param_3 + 0xf0) = 0;
          AnhPD_FoodOrder_OrderIngredientList__Clear(param_3);
          goto LAB_042283f0;
        }
        AnhPD_FoodOrder_OrderIngredientList__PrepareNormalLayout(param_3,uVar1);
        uVar5 = *(undefined8 *)(param_3 + 0xb0);
        if (*(int *)(DAT_09187680 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(uVar5,0);
        fVar20 = 1.0;
        if ((int)uVar1 < 1) goto LAB_04227f00;
        uVar15 = 0;
        goto LAB_04227eac;
      }
      uVar5 = FUN_057e0998(lVar4,iVar14,DAT_091ae388);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar6 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar6 & 1) != 0) {
        if (((*(long *)(param_3 + 0x70) == 0) ||
            (lVar4 = FUN_057e0998(*(long *)(param_3 + 0x70),iVar14,DAT_091ae388), lVar4 == 0)) ||
           (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0)) break;
        uVar6 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
        if ((uVar6 & 1) != 0) {
          uVar5 = FUN_03f5c394(DAT_091807f8,4);
          if (((*(long *)(param_3 + 0x70) == 0) ||
              (lVar4 = FUN_057e0998(*(long *)(param_3 + 0x70),iVar14,DAT_091ae388), lVar4 == 0)) ||
             (plVar7 = (long *)UnityEngine_Component__get_transform(lVar4,0), plVar7 == (long *)0x0)
             ) break;
          if (*plVar7 != DAT_09189c98) goto LAB_0422842c;
          UnityEngine_RectTransform__GetWorldCorners(plVar7,uVar5,0);
          if (lVar3 == 0) break;
          FUN_06ef04f8(lVar3,iVar14,uVar5,DAT_0919d430);
        }
      }
      lVar4 = *(long *)(param_3 + 0x70);
      iVar14 = iVar14 + 1;
    } while (lVar4 != 0);
  }
LAB_04227e40:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    lVar4 = FUN_057e0998(*(long *)(param_3 + 0x70),uVar15,DAT_091ae388);
    if ((*(long *)(param_3 + 0x98) == 0) ||
       (uVar2 = FUN_05796eb0(*(long *)(param_3 + 0x98),uVar15,DAT_091add20), lVar4 == 0))
    goto LAB_04227e40;
    fVar18 = (float)AnhPD_FoodOrder_ListIngredientBoardView__FitScale(lVar4,uVar2);
    uVar15 = uVar15 + 1;
    if (fVar18 <= fVar20) {
      fVar20 = fVar18;
    }
    if (uVar1 == uVar15) break;
LAB_04227eac:
    if (*(long *)(param_3 + 0x70) == 0) goto LAB_04227e40;
  }
LAB_04227f00:
  lVar4 = FUN_03f5c394(DAT_091807e8,uVar1);
  lVar8 = FUN_03f5c394(DAT_091807e8,uVar1);
  if (0 < (int)uVar1) {
    uVar6 = 0;
    puVar16 = (undefined4 *)(lVar4 + 0x24);
    puVar13 = (undefined4 *)(lVar8 + 0x24);
    do {
      uVar2 = (undefined4)param_2;
      if (((*(long *)(param_3 + 0x70) == 0) ||
          (lVar9 = FUN_057e0998(*(long *)(param_3 + 0x70),uVar6 & 0xffffffff,DAT_091ae388),
          lVar9 == 0)) ||
         (plVar7 = (long *)UnityEngine_Component__get_transform(lVar9,0), plVar7 == (long *)0x0))
      goto LAB_04227e40;
      if (*plVar7 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar7);
      }
      uVar19 = UnityEngine_RectTransform__get_anchoredPosition(plVar7,0);
      if (lVar4 == 0) goto LAB_04227e40;
      if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_0422841c;
      puVar16[-1] = uVar19;
      *puVar16 = uVar2;
      uVar19 = UnityEngine_RectTransform__get_sizeDelta(plVar7,0);
      if (lVar8 == 0) goto LAB_04227e40;
      if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_0422841c;
      puVar13[-1] = uVar19;
      *puVar13 = uVar2;
      if (*(long *)(param_3 + 0x70) == 0) goto LAB_04227e40;
      lVar9 = FUN_057e0998(*(long *)(param_3 + 0x70),uVar6 & 0xffffffff,DAT_091ae388);
      uVar2 = AnhPD_FoodOrder_OrderIngredientList__NormalScale(fVar20,param_3,uVar6 & 0xffffffff);
      if ((*(long *)(param_3 + 0x98) == 0) ||
         (uVar19 = FUN_05796eb0(*(long *)(param_3 + 0x98),uVar6 & 0xffffffff,DAT_091add20),
         lVar3 == 0)) goto LAB_04227e40;
      uVar10 = FUN_06ef0700(lVar3,uVar6 & 0xffffffff,DAT_0919d420);
      param_2 = 0;
      if ((uVar10 & 1) != 0) {
        param_2 = (ulong)*(uint *)(param_3 + 0x5c);
      }
      if (lVar9 == 0) goto LAB_04227e40;
      AnhPD_FoodOrder_ListIngredientBoardView__Relayout(uVar2,lVar9,uVar19);
      uVar6 = uVar6 + 1;
      puVar16 = puVar16 + 2;
      puVar13 = puVar13 + 2;
    } while (uVar1 != uVar6);
  }
  uVar5 = *(undefined8 *)(param_3 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = UnityEngine_Object__op_Implicit(uVar5,0);
  if ((uVar6 & 1) != 0) {
    if (*(long *)(param_3 + 0xb8) == 0) goto LAB_04227e40;
    UnityEngine_Behaviour__set_enabled(*(long *)(param_3 + 0xb8),0,0);
  }
  AnhPD_FoodOrder_OrderIngredientList__MoveToClip(param_3);
  if (*(int *)(DAT_09183190 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = DG_Tweening_DOTween__Sequence(0);
  *(undefined8 *)(param_3 + 0xe8) = uVar5;
  thunk_FUN_03f5d7b8();
  if (0 < (int)uVar1) {
    uVar6 = 0;
    puVar16 = (undefined4 *)(lVar4 + 0x24);
    puVar13 = (undefined4 *)(lVar8 + 0x24);
    do {
      if ((*(long *)(param_3 + 0x70) == 0) ||
         (lVar9 = FUN_057e0998(*(long *)(param_3 + 0x70),uVar6 & 0xffffffff,DAT_091ae388),
         lVar9 == 0)) goto LAB_04227e40;
      plVar7 = (long *)UnityEngine_Component__get_transform(lVar9,0);
      if ((plVar7 != (long *)0x0) && (*plVar7 != DAT_09189c98)) {
LAB_0422842c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar7);
      }
      if ((*(long *)(param_3 + 0x70) == 0) ||
         (lVar9 = FUN_057e0998(*(long *)(param_3 + 0x70),uVar6 & 0xffffffff,DAT_091ae388),
         lVar9 == 0)) goto LAB_04227e40;
      uVar10 = FUN_04a6b048(lVar9,&local_78,DAT_091c58d0);
      if ((uVar10 & 1) != 0) {
        DG_Tweening_ShortcutExtensions__DOKill(local_78,0,0);
      }
      if (lVar3 == 0) goto LAB_04227e40;
      uVar11 = FUN_06ef1fe8(lVar3,uVar6 & 0xffffffff,&local_80,DAT_0919d428);
      if ((uVar11 & 1) == 0) {
        if ((uVar10 & 1) != 0) {
          if (local_78 == 0) goto LAB_04227e40;
          UnityEngine_CanvasGroup__set_alpha(0x3f800000,local_78,0);
        }
        if (DAT_09515ce6 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515ce6 = '\x01';
        }
        if (plVar7 == (long *)0x0) goto LAB_04227e40;
        puVar12 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
        UnityEngine_Transform__set_localScale(*puVar12,puVar12[1],puVar12[2],plVar7,0);
        uVar17 = *(undefined8 *)(param_3 + 0xe8);
        uVar5 = DG_Tweening_ShortcutExtensions__DOScale
                          (0x3f800000,*(undefined4 *)(param_3 + 0x5c),plVar7,0);
        uVar5 = FUN_04d95e8c(uVar5,0x1b,DAT_091dbeb0);
LAB_04228340:
        DG_Tweening_TweenSettingsExtensions__Join(uVar17,uVar5,0);
      }
      else {
        AnhPD_FoodOrder_OrderIngredientList__SetFromWorldCorners(param_3,plVar7,local_80);
        if (lVar4 == 0) goto LAB_04227e40;
        if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_0422841c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar17 = *(undefined8 *)(param_3 + 0xe8);
        uVar5 = DG_Tweening_DOTweenModuleUI__DOAnchorPos
                          (puVar16[-1],*puVar16,*(undefined4 *)(param_3 + 0x5c),plVar7,0,0);
        uVar5 = FUN_04d95e8c(uVar5,*(undefined4 *)(param_3 + 100),DAT_091dbe90);
        DG_Tweening_TweenSettingsExtensions__Join(uVar17,uVar5,0);
        if (lVar8 == 0) goto LAB_04227e40;
        if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_0422841c;
        uVar17 = *(undefined8 *)(param_3 + 0xe8);
        uVar5 = DG_Tweening_DOTweenModuleUI__DOSizeDelta
                          (puVar13[-1],*puVar13,*(undefined4 *)(param_3 + 0x5c),plVar7,0,0);
        uVar5 = FUN_04d95e8c(uVar5,*(undefined4 *)(param_3 + 100),DAT_091dbe90);
        DG_Tweening_TweenSettingsExtensions__Join(uVar17,uVar5,0);
        if ((uVar10 & 1) != 0) {
          if (local_78 == 0) goto LAB_04227e40;
          fVar20 = (float)UnityEngine_CanvasGroup__get_alpha(local_78,0);
          if (fVar20 < 1.0) {
            uVar17 = *(undefined8 *)(param_3 + 0xe8);
            uVar5 = DG_Tweening_DOTweenModuleUI__DOFade
                              (0x3f800000,*(undefined4 *)(param_3 + 0x5c),local_78,0);
            uVar5 = FUN_04d95e8c(uVar5,*(undefined4 *)(param_3 + 0x60),DAT_091dbe80);
            goto LAB_04228340;
          }
        }
      }
      uVar6 = uVar6 + 1;
      puVar16 = puVar16 + 2;
      puVar13 = puVar13 + 2;
    } while (uVar1 != uVar6);
  }
  uVar17 = *(undefined8 *)(param_3 + 0xe8);
  uVar5 = thunk_FUN_03f9944c(DAT_0918c148);
  DG_Tweening_TweenCallback___ctor(uVar5,param_3,DAT_091d5640,0);
  FUN_04d956bc(uVar17,uVar5,DAT_091dbd18);
  if (*(char *)(param_3 + 0x101) != '\0') {
    lVar3 = *(long *)(param_3 + 0x108);
    *(undefined1 *)(param_3 + 0x101) = 0;
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x18))
                (*(undefined4 *)(param_3 + 0x5c),*(undefined8 *)(lVar3 + 0x40),
                 *(undefined4 *)(param_3 + 100),*(undefined8 *)(lVar3 + 0x28));
    }
  }
  AnhPD_FoodOrder_OrderIngredientList__RefreshOwned(param_3,1);
LAB_042283f0:
  return uVar1 != 0;
}


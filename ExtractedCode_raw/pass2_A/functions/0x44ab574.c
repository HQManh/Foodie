// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$ShowGlow
// address: 0x44ab574
// body: available
// range: 0x44ab574-0x44abbe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ab9dc to 0x865b360 UnityEngine.GameObject$$SetActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44abbdc to 0x4d9656c FUN_04d9656c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44abbe0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__ShowGlow
               (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4,ulong param_5)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  float fVar17;
  char local_ac [4];
  undefined4 local_a8;
  float fStack_a4;
  undefined4 local_a0;
  undefined8 local_9c;
  
  if ((DAT_09518216 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd7c0);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_091b6a78);
    FUN_03f5c2a4(&DAT_091b6a80);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918bc08);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091dbf30);
    FUN_03f5c2a4(&DAT_091dbff0);
    FUN_03f5c2a4(&DAT_091dc028);
    FUN_03f5c2a4(&DAT_091fc4d0);
    DAT_09518216 = 1;
  }
  if (*(long *)(param_4 + 0x2e8) == 0) goto LAB_044abbe0;
  lVar11 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x28);
  if ((param_5 & 1) != 0) {
    plVar5 = (long *)(param_4 + 0x78);
    lVar6 = *plVar5;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Implicit(lVar6,0);
    if ((uVar2 & 1) == 0) {
      lVar6 = thunk_FUN_03f9944c(DAT_0918bc08);
      UnityEngine_Texture2D___ctor(lVar6,0x80,0x80,4,0,0);
      if (lVar6 == 0) goto LAB_044abbe0;
      UnityEngine_Texture__set_wrapMode(lVar6,1,0);
      plVar7 = (long *)(param_4 + 0x88);
      *plVar7 = lVar6;
      thunk_FUN_03f5d7b8(plVar7,lVar6);
      iVar9 = 0;
      do {
        iVar10 = 0;
        fVar12 = (float)iVar9 + 0.5 + -64.0;
        do {
          if (DAT_09515fab == '\0') {
            FUN_03f5c2a4(&DAT_09187e80);
            DAT_09515fab = '\x01';
          }
          if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (*plVar7 == 0) goto LAB_044abbe0;
          fVar13 = (float)iVar10 + 0.5 + -64.0;
          fVar14 = SQRT(fVar12 * fVar12 + fVar13 * fVar13) * -0.015625 + 1.0;
          fVar13 = 1.0;
          if (fVar14 <= 1.0) {
            fVar13 = fVar14;
          }
          fVar17 = 0.0;
          if (0.0 <= fVar14) {
            fVar17 = fVar13;
          }
          UnityEngine_Texture2D__SetPixel
                    (0x3f800000,0x3f800000,0x3f800000,fVar17 * fVar17 * (3.0 - (fVar17 + fVar17)),
                     *plVar7,iVar10,iVar9,0);
          iVar10 = iVar10 + 1;
        } while (iVar10 != 0x80);
        iVar9 = iVar9 + 1;
      } while (iVar9 != 0x80);
      if (*plVar7 == 0) goto LAB_044abbe0;
      UnityEngine_Texture2D__Apply(*plVar7,0);
      param_2 = 0.0;
      param_3 = 0x43000000;
      uVar3 = UnityEngine_Sprite__Create
                        (0,0,0x4300000043000000,0x4300000043000000,0x3f000000,0x3f000000,
                         0x4300000043000000,*(undefined8 *)(param_4 + 0x88),0);
      puVar8 = (undefined8 *)(param_4 + 0x80);
      *puVar8 = uVar3;
      thunk_FUN_03f5d7b8(puVar8,uVar3);
      lVar6 = thunk_FUN_03f9944c(DAT_09184b68);
      UnityEngine_GameObject___ctor(lVar6,DAT_091fc4d0,0);
      if (lVar6 == 0) goto LAB_044abbe0;
      lVar4 = UnityEngine_GameObject__get_transform(lVar6,0);
      uVar3 = UnityEngine_Component__get_transform(param_4,0);
      if (lVar4 == 0) goto LAB_044abbe0;
      UnityEngine_Transform__SetParent(lVar4,uVar3,0);
      lVar6 = FUN_04b7c294(lVar6,DAT_091cd7c0);
      *plVar5 = lVar6;
      thunk_FUN_03f5d7b8(plVar5,lVar6);
      if (*plVar5 == 0) goto LAB_044abbe0;
      UnityEngine_SpriteRenderer__set_sprite(*plVar5,*puVar8,0);
      lVar6 = *plVar5;
      uVar1 = CookOrder_Cooking_Implement_CookingGameplayPresentation__get_FocusLayer();
      if (((lVar6 == 0) || (UnityEngine_Renderer__set_sortingLayerID(lVar6,uVar1,0), lVar11 == 0))
         || (*plVar5 == 0)) goto LAB_044abbe0;
      UnityEngine_Renderer__set_sortingOrder(*plVar5,*(int *)(lVar11 + 0x18) + -1,0);
    }
  }
  uVar3 = *(undefined8 *)(param_4 + 0x78);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  DG_Tweening_ShortcutExtensions__DOKill(*(undefined8 *)(param_4 + 0x78),0,0);
  if (*(long *)(param_4 + 0x78) != 0) {
    uVar3 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x78),0);
    DG_Tweening_ShortcutExtensions__DOKill(uVar3,0,0);
    lVar6 = *(long *)(param_4 + 0x78);
    if ((param_5 & 1) == 0) {
      if ((lVar6 != 0) && (lVar11 = UnityEngine_Component__get_gameObject(lVar6,0), lVar11 != 0)) {
        UnityEngine_GameObject__SetActive(lVar11,0,0);
        return;
      }
    }
    else if ((lVar6 != 0) && (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 != 0)) {
      UnityEngine_GameObject__SetActive(lVar6,1,0);
      CookOrder_Cooking_Implement_CookingGameplayPresentation__GridBounds(local_ac,param_4);
      uVar3 = local_9c;
      uVar1 = local_a8;
      fVar12 = fStack_a4;
      uVar16 = local_a0;
      if (local_ac[0] == '\0') {
        uVar1 = CookOrder_Cooking_Implement_CookingGameplayPresentation__get_MergePoint(param_4);
        if (DAT_09515cf3 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515cf3 = '\x01';
        }
        uVar3 = NEON_fmov(0x40800000,4);
        uVar15 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
        uVar3 = CONCAT44((float)((ulong)uVar15 >> 0x20) * (float)((ulong)uVar3 >> 0x20) * 0.5,
                         (float)uVar15 * (float)uVar3 * 0.5);
        fVar12 = param_2;
        uVar16 = param_3;
      }
      if ((*(long *)(param_4 + 0x78) != 0) &&
         (lVar6 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x78),0), lVar6 != 0)) {
        UnityEngine_Transform__set_position(uVar1,fVar12,uVar16,lVar6,0);
        if (((*(long *)(param_4 + 0x78) != 0) &&
            (((lVar6 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x78),0), lVar6 != 0
              && (lVar6 = UnityEngine_Transform__GetParent(lVar6,0), lVar6 != 0)) &&
             (fVar13 = (float)UnityEngine_Transform__get_lossyScale(lVar6,0), lVar11 != 0)))) &&
           (*(long *)(param_4 + 0x78) != 0)) {
          fVar14 = *(float *)(lVar11 + 0x2c);
          lVar6 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x78),0);
          if (lVar6 != 0) {
            fVar14 = fVar14 + fVar14;
            fVar17 = (float)((ulong)uVar3 >> 0x20);
            uVar2 = CONCAT44(ABS(fVar12),ABS(fVar13));
            uVar2 = uVar2 ^ (uVar2 ^ 0x3a83126f3a83126f) &
                            CONCAT44(-(uint)(ABS(fVar12) < 0.001),-(uint)(ABS(fVar13) < 0.001));
            fVar12 = (((float)uVar3 + (float)uVar3 + fVar14) * 1.6) / (float)uVar2;
            fVar13 = ((fVar17 + fVar17 + fVar14) * 1.6) / (float)(uVar2 >> 0x20);
            UnityEngine_Transform__set_localScale(CONCAT44(fVar13,fVar12),fVar13,0x3f800000,lVar6,0)
            ;
            if (*(long *)(param_4 + 0x78) != 0) {
              uVar1 = *(undefined4 *)(lVar11 + 0x28);
              UnityEngine_SpriteRenderer__set_color
                        (*(undefined4 *)(lVar11 + 0x1c),*(undefined4 *)(lVar11 + 0x20),
                         *(undefined4 *)(lVar11 + 0x24),0,*(long *)(param_4 + 0x78),0);
              uVar3 = DG_Tweening_DOTweenModuleSprite__DOFade
                                (uVar1,*(undefined4 *)(lVar11 + 0x30),
                                 *(undefined8 *)(param_4 + 0x78),0);
              FUN_04d9656c(uVar3,1,DAT_091dbff0);
              if (*(long *)(param_4 + 0x78) != 0) {
                uVar3 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x78),0);
                fVar14 = *(float *)(lVar11 + 0x34);
                uVar3 = DG_Tweening_ShortcutExtensions__DOScale
                                  (CONCAT44(fVar13 * fVar14,fVar12 * fVar14),fVar13 * fVar14,fVar14,
                                   *(float *)(lVar11 + 0x38) * 0.5,uVar3,0);
                uVar3 = FUN_04d95e8c(uVar3,4,DAT_091dbeb0);
                uVar3 = FUN_04d962f4(uVar3,0xffffffff,1,DAT_091dbf30);
                FUN_04d9656c(uVar3,1,DAT_091dc028);
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_044abbe0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


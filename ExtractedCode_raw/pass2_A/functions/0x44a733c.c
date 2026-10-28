// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$ShowFocusDim
// address: 0x44a733c
// body: available
// range: 0x44a733c-0x44a7743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44a7720 to 0x866d690 UnityEngine.Transform$$set_localScale (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44a7740 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__ShowFocusDim
               (undefined1 param_1 [16],float param_2,long param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if ((DAT_0951820f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd7c0);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091fc4c8);
    DAT_0951820f = 1;
  }
  if ((param_4 & 1) != 0) {
    plVar9 = (long *)(param_3 + 0x48);
    lVar10 = *plVar9;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(lVar10,0);
    if ((uVar5 & 1) == 0) {
      lVar10 = thunk_FUN_03f9944c(DAT_09184b68);
      UnityEngine_GameObject___ctor(lVar10,DAT_091fc4c8,0);
      if (lVar10 == 0) goto LAB_044a7740;
      lVar6 = UnityEngine_GameObject__get_transform(lVar10,0);
      uVar7 = UnityEngine_Component__get_transform(param_3,0);
      if (lVar6 == 0) goto LAB_044a7740;
      UnityEngine_Transform__SetParent(lVar6,uVar7,0);
      lVar10 = FUN_04b7c294(lVar10,DAT_091cd7c0);
      *plVar9 = lVar10;
      thunk_FUN_03f5d7b8(plVar9,lVar10);
      uVar7 = UnityEngine_Texture2D__get_whiteTexture(0);
      plVar8 = (long *)UnityEngine_Texture2D__get_whiteTexture(0);
      if (plVar8 == (long *)0x0) goto LAB_044a7740;
      iVar1 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
      plVar8 = (long *)UnityEngine_Texture2D__get_whiteTexture(0);
      if (plVar8 == (long *)0x0) goto LAB_044a7740;
      iVar2 = (**(code **)(*plVar8 + 0x1a8))(plVar8,*(undefined8 *)(*plVar8 + 0x1b0));
      plVar8 = (long *)UnityEngine_Texture2D__get_whiteTexture(0);
      if (plVar8 == (long *)0x0) goto LAB_044a7740;
      iVar3 = (**(code **)(*plVar8 + 0x188))(plVar8,*(undefined8 *)(*plVar8 + 400));
      uVar7 = UnityEngine_Sprite__Create
                        (0,0,(float)iVar1,(float)iVar2,0x3f000000,0x3f000000,(float)iVar3,uVar7,0);
      *(undefined8 *)(param_3 + 0x50) = uVar7;
      thunk_FUN_03f5d7b8((undefined8 *)(param_3 + 0x50),uVar7);
      if (*(long *)(param_3 + 0x48) == 0) goto LAB_044a7740;
      UnityEngine_SpriteRenderer__set_sprite
                (*(long *)(param_3 + 0x48),*(undefined8 *)(param_3 + 0x50),0);
      if (((*(long *)(param_3 + 0x2e8) == 0) ||
          (lVar10 = *(long *)(*(long *)(param_3 + 0x2e8) + 0x28), lVar10 == 0)) ||
         (*(long *)(param_3 + 0x48) == 0)) goto LAB_044a7740;
      param_2 = 0.0;
      UnityEngine_SpriteRenderer__set_color
                (0,0,0,*(undefined4 *)(lVar10 + 0x10),*(long *)(param_3 + 0x48),0);
      lVar10 = *plVar9;
      uVar4 = CookOrder_Cooking_Implement_CookingGameplayPresentation__get_FocusLayer();
      if (lVar10 == 0) goto LAB_044a7740;
      UnityEngine_Renderer__set_sortingLayerID(lVar10,uVar4,0);
      if (((*(long *)(param_3 + 0x2e8) == 0) ||
          (lVar10 = *(long *)(*(long *)(param_3 + 0x2e8) + 0x28), lVar10 == 0)) ||
         (*(long *)(param_3 + 0x48) == 0)) goto LAB_044a7740;
      iVar2 = *(int *)(lVar10 + 0x18) + -2;
      iVar1 = *(int *)(lVar10 + 0x14);
      if (iVar2 <= *(int *)(lVar10 + 0x14)) {
        iVar1 = iVar2;
      }
      UnityEngine_Renderer__set_sortingOrder(*(long *)(param_3 + 0x48),iVar1,0);
    }
  }
  uVar7 = *(undefined8 *)(param_3 + 0x48);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_3 + 0x48) != 0) &&
     (lVar10 = UnityEngine_Component__get_gameObject(*(long *)(param_3 + 0x48),0), lVar10 != 0)) {
    UnityEngine_GameObject__SetActive(lVar10,param_4 & 1,0);
    if ((param_4 & 1) == 0) {
      return;
    }
    if (*(long *)(param_3 + 0x48) != 0) {
      lVar10 = UnityEngine_Component__get_transform(*(long *)(param_3 + 0x48),0);
      CookOrder_Cooking_Implement_CookingGameplayPresentation__get_MergePoint(param_3);
      if (lVar10 != 0) {
        UnityEngine_Transform__set_position(lVar10,0);
        uVar7 = *(undefined8 *)(param_3 + 0x1e0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
        fVar11 = 20.0;
        if ((uVar5 & 1) != 0) {
          if (*(long *)(param_3 + 0x1e0) == 0) goto LAB_044a7740;
          fVar11 = (float)UnityEngine_Camera__get_orthographicSize(*(long *)(param_3 + 0x1e0),0);
          fVar11 = fVar11 + fVar11;
        }
        if (((*(long *)(param_3 + 0x48) != 0) &&
            (lVar10 = UnityEngine_Component__get_transform(*(long *)(param_3 + 0x48),0), lVar10 != 0
            )) && (lVar10 = UnityEngine_Transform__GetParent(lVar10,0), lVar10 != 0)) {
          fVar12 = (float)UnityEngine_Transform__get_lossyScale(lVar10,0);
          if (*(long *)(param_3 + 0x48) != 0) {
            lVar10 = UnityEngine_Component__get_transform(*(long *)(param_3 + 0x48),0);
            uVar7 = *(undefined8 *)(param_3 + 0x1e0);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar5 = UnityEngine_Object__op_Implicit(uVar7,0);
            fVar13 = 1.0;
            if ((uVar5 & 1) != 0) {
              if (*(long *)(param_3 + 0x1e0) == 0) goto LAB_044a7740;
              fVar13 = (float)UnityEngine_Camera__get_aspect(*(long *)(param_3 + 0x1e0),0);
            }
            if (lVar10 != 0) {
              fVar14 = 1.0;
              if (1.0 <= fVar13) {
                fVar14 = fVar13;
              }
              uVar5 = CONCAT44(ABS(param_2),ABS(fVar12));
              uVar5 = uVar5 ^ (uVar5 ^ 0x3a83126f3a83126f) &
                              CONCAT44(-(uint)(ABS(param_2) < 0.001),-(uint)(ABS(fVar12) < 0.001));
              fVar12 = (fVar11 + fVar11) / (float)(uVar5 >> 0x20);
              UnityEngine_Transform__set_localScale
                        (CONCAT44(fVar12,(fVar11 * fVar14 + fVar11 * fVar14) / (float)uVar5),fVar12,
                         0x3f800000,lVar10,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_044a7740:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


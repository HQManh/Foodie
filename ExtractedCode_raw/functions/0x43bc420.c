// rea decompile_all
// name: ChocDino.UIFX.FilterStackTextMeshPro$$CalculateScreenRect
// address: 0x43bc420
// body: available
// range: 0x43bc420-0x43bca37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43bca30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43bca34 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FilterStackTextMeshPro__CalculateScreenRect(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_09517b64 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0ab0);
    FUN_03f5c2a4(&DAT_091b0ab8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517b64 = 1;
  }
  lVar6 = *(long *)(param_1 + 0x40);
  if (*(int *)(param_1 + 0xac) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ChocDino_UIFX_FilterStackTextMeshPro__GetRenderCamera(param_1);
  }
  if (lVar6 == 0) goto LAB_043bca30;
  ChocDino_UIFX_ScreenRectFromMeshes__Start(lVar6,uVar2,*(undefined4 *)(param_1 + 0xac),0);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar3 & 1) != 0) {
    lVar6 = *(long *)(param_1 + 0xb8);
    if ((lVar6 != 0) && (0 < (int)*(ulong *)(lVar6 + 0x18))) {
      uVar3 = 0;
      uVar5 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      do {
        if (uVar5 <= uVar3) goto LAB_043bca34;
        lVar7 = *(long *)(lVar6 + 0x20 + uVar3 * 8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(lVar7,0);
        if ((uVar5 & 1) != 0) {
          if (lVar7 == 0) goto LAB_043bca30;
          uVar5 = ChocDino_UIFX_FilterBase__IsFiltered(lVar7,0);
          if (((uVar5 & 1) != 0) && (*(int *)(lVar7 + 0x2c) == 1)) {
            bVar1 = false;
            goto LAB_043bc55c;
          }
        }
        uVar5 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(lVar6 + 0x18));
    }
    bVar1 = true;
LAB_043bc55c:
    if (((*(long *)(param_1 + 0x30) == 0) ||
        (lVar6 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0x30),0), lVar6 == 0)) ||
       (*(long *)(param_1 + 0x30) == 0)) goto LAB_043bca30;
    uVar8 = *(uint *)(lVar6 + 0x34);
    lVar6 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0x30),0);
    if (lVar6 == 0) goto LAB_043bca30;
    if (*(long *)(lVar6 + 0x60) != 0) {
      if (((*(long *)(param_1 + 0x30) == 0) ||
          (lVar6 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0x30),0), lVar6 == 0)) ||
         (*(long *)(lVar6 + 0x60) == 0)) goto LAB_043bca30;
      uVar10 = *(uint *)(*(long *)(lVar6 + 0x60) + 0x18);
      if ((int)uVar10 <= (int)uVar8) {
        uVar8 = uVar10;
      }
    }
    if (bVar1) {
      if (0 < (int)uVar8) {
        uVar3 = 0;
        lVar6 = 0x20;
        do {
          if (((*(long *)(param_1 + 0x30) == 0) ||
              (lVar7 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0x30),0), lVar7 == 0)) ||
             (lVar7 = *(long *)(lVar7 + 0x60), lVar7 == 0)) goto LAB_043bca30;
          if (*(uint *)(lVar7 + 0x18) <= uVar3) goto LAB_043bca34;
          lVar9 = *(long *)(lVar7 + lVar6);
          lVar7 = ((long *)(lVar7 + lVar6))[1];
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = UnityEngine_Object__op_Inequality(lVar9,0,0);
          if (((uVar5 & 1) != 0) && (0 < (int)lVar7)) {
            if (uVar3 != 0) {
              lVar7 = *(long *)(param_1 + 0x38);
              if (lVar7 == 0) goto LAB_043bca30;
              if (((long)uVar3 < (long)*(int *)(lVar7 + 0x18)) &&
                 (lVar7 = FUN_057e0998(lVar7,uVar3 & 0xffffffff,DAT_091b0ab8),
                 *(char *)(param_1 + 0xa6) == '\0')) {
                if (lVar7 == 0) goto LAB_043bca30;
                uVar2 = *(undefined8 *)(lVar7 + 0xe0);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424(DAT_09188ad0);
                }
                uVar5 = UnityEngine_Object__op_Inequality(uVar2,0,0);
                if ((uVar5 & 1) != 0) goto LAB_043bc710;
              }
            }
            if (lVar9 == 0) goto LAB_043bca30;
            UnityEngine_Mesh__GetVertices(lVar9,*(undefined8 *)(param_1 + 0x88),0);
            UnityEngine_Mesh__GetColors(lVar9,*(undefined8 *)(param_1 + 0x90),0);
            UnityEngine_Mesh__GetTriangles(lVar9,*(undefined8 *)(param_1 + 0x98),0,0);
            lVar7 = *(long *)(param_1 + 0x40);
            if (*(int *)(param_1 + 0xac) == 0) {
              uVar2 = 0;
            }
            else {
              uVar2 = UnityEngine_Component__get_transform(param_1,0);
            }
            if (lVar7 == 0) goto LAB_043bca30;
            ChocDino_UIFX_ScreenRectFromMeshes__AddTriangleBounds
                      (lVar7,uVar2,*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x98),
                       *(undefined8 *)(param_1 + 0x90),0);
          }
LAB_043bc710:
          uVar3 = uVar3 + 1;
          lVar6 = lVar6 + 0x50;
        } while (uVar8 != uVar3);
      }
    }
    else {
      lVar6 = *(long *)(param_1 + 0x40);
      if (*(int *)(param_1 + 0xac) == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = UnityEngine_Component__get_transform(param_1,0);
      }
      lVar7 = ChocDino_UIFX_FilterStackTextMeshPro__get_RectTransformComponent(param_1);
      if ((lVar7 == 0) || (UnityEngine_RectTransform__get_rect(lVar7,0), lVar6 == 0))
      goto LAB_043bca30;
      ChocDino_UIFX_ScreenRectFromMeshes__AddRect(lVar6,uVar2,0);
    }
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    ChocDino_UIFX_ScreenRectFromMeshes__End(*(long *)(param_1 + 0x40),0);
    lVar6 = *(long *)(param_1 + 0xb8);
    if ((lVar6 == 0) || ((int)*(ulong *)(lVar6 + 0x18) < 1)) {
      uVar3 = 0;
      uVar5 = 0x200000000;
    }
    else {
      uVar3 = 0;
      uVar8 = 0;
      uVar5 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
      uVar10 = 2;
      do {
        if (uVar5 <= uVar3) goto LAB_043bca34;
        lVar7 = *(long *)(lVar6 + 0x20 + uVar3 * 8);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(lVar7,0);
        if ((uVar5 & 1) != 0) {
          if (lVar7 == 0) goto LAB_043bca30;
          uVar5 = ChocDino_UIFX_FilterBase__IsFiltered(lVar7,0);
          if ((uVar5 & 1) != 0) {
            ChocDino_UIFX_FilterBase__set_RenderSpace(lVar7,*(undefined4 *)(param_1 + 0xac),0);
            if (*(char *)(param_1 + 0xa8) == '\0') {
              fVar12 = 1.0;
            }
            else {
              if (*(long *)(param_1 + 0x30) == 0) goto LAB_043bca30;
              uVar2 = UnityEngine_UI_Graphic__get_canvas(*(long *)(param_1 + 0x30),0);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09188ad0);
              }
              uVar5 = UnityEngine_Object__op_Implicit(uVar2,0);
              fVar11 = 1.0;
              if ((uVar5 & 1) != 0) {
                if (((*(long *)(param_1 + 0x30) == 0) ||
                    (lVar9 = UnityEngine_UI_Graphic__get_canvas(*(long *)(param_1 + 0x30),0),
                    lVar9 == 0)) ||
                   (lVar4 = UnityEngine_Component__get_transform(lVar9,0), lVar4 == 0))
                goto LAB_043bca30;
                fVar11 = (float)UnityEngine_Transform__get_localScale(lVar4,0);
                uVar5 = UnityEngine_Canvas__get_isRootCanvas(lVar9,0);
                if ((uVar5 & 1) == 0) {
                  uVar2 = UnityEngine_Canvas__get_rootCanvas(lVar9,0);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424(DAT_09188ad0);
                  }
                  uVar5 = UnityEngine_Object__op_Implicit(uVar2,0);
                  if ((uVar5 & 1) != 0) {
                    lVar9 = UnityEngine_Canvas__get_rootCanvas(lVar9,0);
                    if ((lVar9 == 0) ||
                       (lVar9 = UnityEngine_Component__get_transform(lVar9,0), lVar9 == 0))
                    goto LAB_043bca30;
                    fVar11 = (float)UnityEngine_Transform__get_localScale(lVar9,0);
                  }
                }
              }
              lVar9 = UnityEngine_Component__get_transform(lVar7,0);
              if (lVar9 == 0) goto LAB_043bca30;
              fVar12 = (float)UnityEngine_Transform__get_lossyScale(lVar9,0);
              fVar12 = fVar12 / fVar11;
            }
            if (0.0 < *(float *)(param_1 + 0xb0)) {
              if (*(long *)(param_1 + 0x30) == 0) goto LAB_043bca30;
              fVar12 = fVar12 * (*(float *)(*(long *)(param_1 + 0x30) + 0x20c) /
                                *(float *)(param_1 + 0xb0));
            }
            ChocDino_UIFX_FilterBase__set_UserScale(fVar12,lVar7,0);
            ChocDino_UIFX_FilterBase__AdjustRect(lVar7,*(undefined8 *)(param_1 + 0x40),0);
            if ((int)uVar8 <= (int)*(uint *)(lVar7 + 0xac)) {
              uVar8 = *(uint *)(lVar7 + 0xac);
            }
            if ((int)uVar10 <= (int)*(uint *)(lVar7 + 0xb0)) {
              uVar10 = *(uint *)(lVar7 + 0xb0);
            }
          }
        }
        uVar5 = (ulong)*(uint *)(lVar6 + 0x18);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)(int)*(uint *)(lVar6 + 0x18));
      uVar5 = (ulong)uVar10 << 0x20;
      uVar3 = (ulong)uVar8;
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      ChocDino_UIFX_ScreenRectFromMeshes__OptimiseRects(*(long *)(param_1 + 0x40),uVar5 | uVar3,0,0)
      ;
      lVar6 = *(long *)(param_1 + 0xb8);
      if ((lVar6 != 0) && (0 < (int)*(ulong *)(lVar6 + 0x18))) {
        uVar3 = 0;
        uVar5 = *(ulong *)(lVar6 + 0x18) & 0xffffffff;
        do {
          if (uVar5 <= uVar3) {
LAB_043bca34:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar7 = *(long *)(lVar6 + 0x20 + uVar3 * 8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = UnityEngine_Object__op_Implicit(lVar7,0);
          if ((uVar5 & 1) != 0) {
            if (lVar7 == 0) goto LAB_043bca30;
            uVar5 = ChocDino_UIFX_FilterBase__IsFiltered(lVar7,0);
            if ((uVar5 & 1) != 0) {
              ChocDino_UIFX_FilterBase__SetFinalRect(lVar7,*(undefined8 *)(param_1 + 0x40),0);
            }
          }
          uVar5 = (ulong)*(uint *)(lVar6 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar6 + 0x18));
      }
      return;
    }
  }
LAB_043bca30:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: ChocDino.UIFX.FilterStackTextMeshPro$$UpdateCulling
// address: 0x43bef28
// body: available
// range: 0x43bef28-0x43bf64f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43bf618 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43bf61c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43bf620 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43bf624 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43bf628 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43bf62c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43bf630 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43bf634 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43bf638 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43bf63c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43bf640 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43bf644 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FilterStackTextMeshPro__UpdateCulling(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_130;
  float fStack_12c;
  undefined4 uStack_128;
  float fStack_124;
  float local_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((DAT_09517b73 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4688);
    FUN_03f5c2a4(&DAT_091a4690);
    FUN_03f5c2a4(&DAT_091a4698);
    FUN_03f5c2a4(&DAT_091b0aa8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517b73 = 1;
  }
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled(param_1,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if ((*(long *)(param_1 + 0x30) == 0) ||
     (lVar4 = TMPro_TextMeshProUGUI__get_canvasRenderer(*(long *)(param_1 + 0x30),0), lVar4 == 0))
  goto LAB_043bf618;
  uVar3 = UnityEngine_CanvasRenderer__get_hasMoved(lVar4,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_043bf618;
  uVar5 = UnityEngine_UI_Graphic__get_canvas(*(long *)(param_1 + 0x30),0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x180) == '\0') {
    uVar5 = *(undefined8 *)(param_1 + 0x168);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if (*(char *)(param_1 + 0x180) != '\0') goto LAB_043bf078;
  }
  else {
    uVar1 = 0;
LAB_043bf078:
    uVar5 = *(undefined8 *)(param_1 + 0x168);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
    if ((uVar3 & 1) != 0) {
      ChocDino_UIFX_FilterStackTextMeshPro__GatherSubMeshes(param_1);
      ChocDino_UIFX_FilterStackTextMeshPro__CalculateScreenRect(param_1);
      lVar4 = *(long *)(param_1 + 0x40);
      if (lVar4 == 0) goto LAB_043bf618;
      fVar15 = *(float *)(lVar4 + 0x2c);
      fVar14 = *(float *)(lVar4 + 0x30);
      fVar16 = *(float *)(lVar4 + 0x34);
      fVar17 = *(float *)(lVar4 + 0x38);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar17 = fVar14 + fVar17;
      fVar16 = fVar15 + fVar16;
      fVar13 = fVar14;
      fVar10 = fVar17;
      if (*(int *)(param_1 + 0xac) == 0) {
        lVar4 = UnityEngine_Component__get_transform(param_1,0);
        if (lVar4 == 0) goto LAB_043bf618;
        UnityEngine_Transform__get_localToWorldMatrix(&local_130,lVar4,0);
        uStack_c8 = CONCAT44(fStack_124,uStack_128);
        local_d0 = CONCAT44(fStack_12c,local_130);
        uStack_c0 = CONCAT44(uStack_11c,local_120);
        uStack_b8 = uStack_118;
        uStack_a8 = uStack_108;
        local_b0 = local_110;
        uStack_98 = uStack_f8;
        uStack_a0 = uStack_100;
        fVar8 = (float)FUN_043c08f4(fVar15,fVar17,0,&local_d0,0);
        fVar9 = (float)FUN_043c08f4(fVar16,fVar17,0,&local_d0,0);
        fVar16 = (float)FUN_043c08f4(fVar16,fVar14,0,&local_d0,0);
        fVar15 = (float)FUN_043c08f4(fVar15,fVar14,0,&local_d0,0);
      }
      else {
        lVar4 = ChocDino_UIFX_FilterStackTextMeshPro__GetRenderCamera(param_1);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar3 = UnityEngine_Object__op_Implicit(lVar4,0);
        fVar8 = fVar15;
        fVar9 = fVar16;
        if ((uVar3 & 1) != 0) {
          if (lVar4 == 0) goto LAB_043bf618;
          fVar8 = (float)UnityEngine_Camera__ScreenToWorldPoint(fVar15,fVar17,0,lVar4,0);
          fVar9 = (float)UnityEngine_Camera__ScreenToWorldPoint(fVar16,fVar17,0,lVar4,0);
          fVar16 = (float)UnityEngine_Camera__ScreenToWorldPoint(fVar16,fVar14,0,lVar4,0);
          fVar15 = (float)UnityEngine_Camera__ScreenToWorldPoint(fVar15,fVar14,0,lVar4,0);
        }
      }
      fVar11 = fVar9;
      if (fVar8 <= fVar9) {
        fVar11 = fVar8;
      }
      if (fVar9 <= fVar8) {
        fVar9 = fVar8;
      }
      fVar8 = fVar17;
      if (fVar10 <= fVar17) {
        fVar8 = fVar10;
      }
      if (fVar17 <= fVar10) {
        fVar17 = fVar10;
      }
      fVar10 = fVar16;
      if (fVar11 <= fVar16) {
        fVar10 = fVar11;
      }
      fVar11 = fVar13;
      if (fVar8 <= fVar13) {
        fVar11 = fVar8;
      }
      if (fVar16 <= fVar9) {
        fVar16 = fVar9;
      }
      if (fVar13 <= fVar17) {
        fVar13 = fVar17;
      }
      fVar17 = fVar15;
      if (fVar10 <= fVar15) {
        fVar17 = fVar10;
      }
      fVar10 = fVar14;
      if (fVar11 <= fVar14) {
        fVar10 = fVar11;
      }
      if (fVar15 <= fVar16) {
        fVar15 = fVar16;
      }
      if (fVar14 <= fVar13) {
        fVar14 = fVar13;
      }
      if (((*(long *)(param_1 + 0x30) == 0) ||
          (lVar4 = UnityEngine_UI_Graphic__get_canvas(*(long *)(param_1 + 0x30),0), lVar4 == 0)) ||
         (lVar4 = UnityEngine_Component__get_transform(lVar4,0), lVar4 == 0)) goto LAB_043bf618;
      fVar16 = (float)UnityEngine_Transform__InverseTransformPoint(fVar17,fVar10,0,lVar4,0);
      if (((*(long *)(param_1 + 0x30) == 0) ||
          (lVar4 = UnityEngine_UI_Graphic__get_canvas(*(long *)(param_1 + 0x30),0), lVar4 == 0)) ||
         (lVar4 = UnityEngine_Component__get_transform(lVar4,0), lVar4 == 0)) goto LAB_043bf618;
      fVar15 = (float)UnityEngine_Transform__InverseTransformPoint(fVar15,fVar14,0,lVar4,0);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = FUN_043c0980(fVar16,fVar10,fVar15 - fVar16,fVar14 - fVar10,param_1 + 0x170,1,0);
      uVar1 = uVar1 ^ 1;
    }
  }
  if ((*(long *)(param_1 + 0x30) != 0) &&
     (lVar4 = TMPro_TextMeshProUGUI__get_canvasRenderer(*(long *)(param_1 + 0x30),0), lVar4 != 0)) {
    UnityEngine_CanvasRenderer__set_cull(lVar4,uVar1 & 1,0);
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_057e185c(&local_130,*(long *)(param_1 + 0x38),DAT_091b0aa8);
      local_e0 = CONCAT44(uStack_11c,local_120);
      while( true ) {
        while( true ) {
          while( true ) {
            do {
              uVar3 = FUN_071bd28c(&local_f0,DAT_091a4690);
              lVar4 = local_e0;
              if ((uVar3 & 1) == 0) {
                FUN_071bd288(&local_f0,DAT_091a4688);
                *(undefined1 *)(param_1 + 0x181) = 0;
                return;
              }
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
            } while ((uVar3 & 1) == 0);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar5 = *(undefined8 *)(lVar4 + 0xe0);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = UnityEngine_Object__op_Inequality(uVar5,0,0);
            if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 0xa6) == '\0')) break;
            lVar4 = UnityEngine_UI_Graphic__get_canvasRenderer(lVar4,0);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            UnityEngine_CanvasRenderer__set_cull(lVar4,uVar1 & 1,0);
          }
          uVar5 = *(undefined8 *)(param_1 + 0x168);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Equality(uVar5,0,0);
          if ((uVar3 & 1) == 0) break;
          lVar4 = UnityEngine_UI_Graphic__get_canvasRenderer(lVar4,0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          UnityEngine_CanvasRenderer__set_cull(lVar4,0,0);
        }
        lVar6 = TMPro_TMP_SubMeshUI__get_mesh(lVar4,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_Mesh__get_bounds(&local_130,lVar6,0);
        fVar17 = local_120;
        fVar14 = fStack_124;
        fVar15 = fStack_12c;
        fVar16 = local_130;
        if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        fVar13 = local_130;
        lVar6 = UnityEngine_UI_Graphic__get_canvas(*(long *)(param_1 + 0x30),0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = UnityEngine_Component__get_transform(lVar6,0);
        lVar7 = ChocDino_UIFX_FilterStackTextMeshPro__get_RectTransformComponent(param_1);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_Transform__get_position(lVar7,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        fVar10 = (float)UnityEngine_Transform__InverseTransformPoint(lVar6,0);
        if (*(long *)(param_1 + 0x30) == 0) break;
        fVar9 = fVar13;
        lVar6 = UnityEngine_UI_Graphic__get_canvas(*(long *)(param_1 + 0x30),0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar6 = UnityEngine_Component__get_transform(lVar6,0);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        fVar11 = (float)UnityEngine_Transform__get_lossyScale(lVar6,0);
        fVar8 = fVar9;
        lVar6 = ChocDino_UIFX_FilterStackTextMeshPro__get_RectTransformComponent(param_1);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        fVar12 = (float)UnityEngine_Transform__get_lossyScale(lVar6,0);
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar4 = UnityEngine_UI_Graphic__get_canvasRenderer(lVar4,0);
        uVar2 = FUN_043c0980(fVar10 + (fVar16 - fVar14) * (fVar12 / fVar11),
                             fVar13 + (fVar15 - fVar17) * (fVar8 / fVar9),
                             (fVar14 + fVar14) * (fVar12 / fVar11),
                             (fVar17 + fVar17) * (fVar8 / fVar9),param_1 + 0x170,1,0);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_CanvasRenderer__set_cull(lVar4,(uVar2 ^ 0xffffffff) & 1,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_043bf618:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


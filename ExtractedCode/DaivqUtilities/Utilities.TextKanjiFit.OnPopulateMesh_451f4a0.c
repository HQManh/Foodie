// rea decompile_all
// name: Utilities.TextKanjiFit$$OnPopulateMesh
// address: 0x451f4a0
// body: available
// range: 0x451f4a0-0x451fd6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x451fd50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451fd64 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451fd68 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_TextKanjiFit__OnPopulateMesh
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,float param_4,
               long *param_5,long param_6)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  undefined1 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_280;
  float fStack_27c;
  undefined8 uStack_278;
  undefined8 local_270;
  int local_268;
  undefined8 local_264;
  undefined5 uStack_25c;
  undefined3 uStack_257;
  undefined5 uStack_254;
  undefined1 local_24f;
  undefined8 local_24e;
  undefined8 uStack_246;
  undefined8 local_23e;
  undefined6 uStack_236;
  undefined2 uStack_230;
  undefined6 uStack_22e;
  undefined8 uStack_228;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  int local_1f8;
  undefined8 local_1f4;
  undefined1 local_1df;
  undefined8 local_1de;
  undefined8 uStack_1d6;
  undefined8 local_1ce;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  int local_198;
  undefined8 local_194;
  undefined1 local_17f;
  undefined8 local_17e;
  undefined8 uStack_176;
  undefined8 uStack_16e;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  int local_138;
  undefined8 local_134;
  undefined1 local_11f;
  undefined8 local_11e;
  undefined8 uStack_116;
  undefined8 uStack_10e;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined6 uStack_b8;
  undefined2 local_b2;
  undefined6 uStack_b0;
  undefined8 uStack_aa;
  undefined8 local_a0;
  undefined5 uStack_98;
  undefined3 uStack_93;
  undefined5 uStack_90;
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  if ((DAT_095185b4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917a188);
    FUN_03f5c2a4(&DAT_0917b138);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_095185b4 = 1;
  }
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_93 = 0;
  uStack_90 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_aa = 0;
  local_b2 = 0;
  uStack_b0 = 0;
  uVar7 = UnityEngine_UI_Text__get_font(param_5,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar8 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if ((uVar8 & 1) == 0) {
    *(undefined1 *)(param_5 + 0x1f) = 1;
    lVar9 = UnityEngine_UI_Graphic__get_rectTransform(param_5,0);
    if (lVar9 != 0) {
      UnityEngine_RectTransform__get_rect(lVar9,0);
      fVar21 = param_4;
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar18 = (float)UnityEngine_UI_Text__get_pixelsPerUnit(param_5,0);
      UnityEngine_UI_Text__GetGenerationSettings(&local_280,param_3,param_4,param_5,0);
      local_f0 = CONCAT44(fStack_27c,local_280);
      uStack_e8 = uStack_278;
      uStack_98 = uStack_25c;
      local_a0 = local_264;
      local_e0 = local_270;
      uStack_c8 = uStack_246;
      local_d0 = local_24e;
      uStack_b8 = uStack_236;
      uStack_c0 = local_23e;
      uStack_93 = uStack_257;
      uStack_90 = uStack_254;
      uStack_aa = uStack_228;
      local_b2 = uStack_230;
      uStack_b0 = uStack_22e;
      iVar4 = local_268;
      uVar17 = local_24f;
      if (((char)param_5[0x21] == '\0') ||
         (uVar8 = UnityEngine_UI_Text__get_resizeTextForBestFit(param_5,0), (uVar8 & 1) == 0)) {
LAB_0451f834:
        lVar9 = UnityEngine_UI_Text__get_cachedTextGenerator(param_5,0);
        uVar7 = (**(code **)(*param_5 + 0x5d8))(param_5,*(undefined8 *)(*param_5 + 0x5e0));
        uVar10 = UnityEngine_Component__get_gameObject(param_5,0);
        if (lVar9 != 0) {
          uStack_208 = uStack_e8;
          local_210 = local_f0;
          local_1f4 = local_a0;
          local_200 = local_e0;
          uStack_1d6 = uStack_c8;
          local_1de = local_d0;
          local_1ce = uStack_c0;
          uStack_1b8 = uStack_aa;
          local_1f8 = iVar4;
          local_1df = uVar17;
          UnityEngine_TextGenerator__PopulateWithErrors(lVar9,uVar7,&local_210,uVar10,0);
          lVar9 = UnityEngine_UI_Text__get_cachedTextGenerator(param_5,0);
          if ((lVar9 != 0) &&
             (plVar11 = (long *)UnityEngine_TextGenerator__get_verts(lVar9,0),
             plVar11 != (long *)0x0)) {
            lVar9 = *plVar11;
            uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar8 != 0) {
              piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == DAT_0917a188) {
                  puVar12 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0451f938;
                }
                uVar8 = uVar8 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar8 != 0);
            }
            puVar12 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a188,0);
LAB_0451f938:
            fVar18 = 1.0 / fVar18;
            uVar6 = (*(code *)*puVar12)(plVar11,puVar12[1]);
            if ((int)uVar6 < 1) {
              if (DAT_09515ce8 == '\0') {
                FUN_03f5c2a4(&DAT_0918cb68);
                DAT_09515ce8 = '\x01';
              }
              fVar21 = **(float **)(DAT_0918cb68 + 0xb8);
              fVar19 = (*(float **)(DAT_0918cb68 + 0xb8))[1];
            }
            else {
              lVar9 = *plVar11;
              uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar8 != 0) {
                piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == DAT_0917b138) {
                    puVar12 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_0451f9e4;
                  }
                  uVar8 = uVar8 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar8 != 0);
              }
              puVar12 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917b138,0);
LAB_0451f9e4:
              (*(code *)*puVar12)(&local_280,plVar11,0,puVar12[1]);
              lVar9 = *plVar11;
              uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar8 != 0) {
                piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == DAT_0917b138) {
                    puVar12 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_0451fa48;
                  }
                  uVar8 = uVar8 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar8 != 0);
              }
              puVar12 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917b138,0);
LAB_0451fa48:
              (*(code *)*puVar12)(&local_280,plVar11,0,puVar12[1]);
              fVar21 = fVar18 * local_280;
              fVar19 = fVar18 * fStack_27c;
            }
            fVar20 = fVar19;
            fVar22 = (float)UnityEngine_UI_Graphic__PixelAdjustPoint(fVar21,param_5,0);
            if (param_6 != 0) {
              UnityEngine_UI_VertexHelper__Clear(param_6,0);
              if (DAT_09515ce8 == '\0') {
                FUN_03f5c2a4(&DAT_0918cb68);
                DAT_09515ce8 = '\x01';
              }
              fVar23 = (fVar22 - fVar21) - **(float **)(DAT_0918cb68 + 0xb8);
              fVar24 = (fVar20 - fVar19) - (*(float **)(DAT_0918cb68 + 0xb8))[1];
              if (fVar23 * fVar23 + fVar24 * fVar24 < 9.9999994e-11) {
                if (0 < (int)uVar6) {
                  uVar15 = 0;
                  do {
                    lVar9 = *plVar11;
                    lVar16 = param_5[0x22];
                    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    if (uVar8 != 0) {
                      piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar13 + -2) == DAT_0917b138) {
                          puVar12 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                          goto LAB_0451fc70;
                        }
                        uVar8 = uVar8 - 1;
                        piVar13 = piVar13 + 4;
                      } while (uVar8 != 0);
                    }
                    puVar12 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917b138,0);
LAB_0451fc70:
                    (*(code *)*puVar12)(&local_280,plVar11,uVar15,puVar12[1]);
                    if (lVar16 == 0) goto LAB_0451fd40;
                    uVar2 = uVar15 & 3;
                    if (*(uint *)(lVar16 + 0x18) <= uVar2) goto LAB_0451fd54;
                    memmove((void *)(lVar16 + (ulong)uVar2 * 0x6c + 0x20),&local_280,0x6c);
                    lVar9 = param_5[0x22];
                    if (lVar9 == 0) goto LAB_0451fd40;
                    if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_0451fd54;
                    lVar9 = lVar9 + (ulong)uVar2 * 0x6c;
                    *(ulong *)(lVar9 + 0x20) =
                         CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20) * fVar18,
                                  (float)*(undefined8 *)(lVar9 + 0x20) * fVar18);
                    *(float *)(lVar9 + 0x28) = fVar18 * *(float *)(lVar9 + 0x28);
                    if (uVar2 == 3) {
                      UnityEngine_UI_VertexHelper__AddUIVertexQuad(param_6,param_5[0x22],0);
                    }
                    uVar15 = uVar15 + 1;
                  } while (uVar15 != uVar6);
                }
              }
              else if (0 < (int)uVar6) {
                uVar15 = 0;
                do {
                  lVar9 = *plVar11;
                  lVar16 = param_5[0x22];
                  uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
                  if (uVar8 != 0) {
                    piVar13 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar13 + -2) == DAT_0917b138) {
                        puVar12 = (undefined8 *)(lVar9 + (long)*piVar13 * 0x10 + 0x138);
                        goto LAB_0451fb4c;
                      }
                      uVar8 = uVar8 - 1;
                      piVar13 = piVar13 + 4;
                    } while (uVar8 != 0);
                  }
                  puVar12 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917b138,0);
LAB_0451fb4c:
                  (*(code *)*puVar12)(&local_280,plVar11,uVar15,puVar12[1]);
                  if (lVar16 == 0) goto LAB_0451fd40;
                  uVar2 = uVar15 & 3;
                  if (*(uint *)(lVar16 + 0x18) <= uVar2) goto LAB_0451fd54;
                  memmove((void *)(lVar16 + (ulong)uVar2 * 0x6c + 0x20),&local_280,0x6c);
                  lVar9 = param_5[0x22];
                  if (lVar9 == 0) goto LAB_0451fd40;
                  if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_0451fd54;
                  lVar9 = lVar9 + (ulong)uVar2 * 0x6c;
                  *(ulong *)(lVar9 + 0x20) =
                       CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x20) >> 0x20) * fVar18,
                                (float)*(undefined8 *)(lVar9 + 0x20) * fVar18);
                  *(float *)(lVar9 + 0x28) = fVar18 * *(float *)(lVar9 + 0x28);
                  lVar9 = param_5[0x22];
                  if (lVar9 == 0) goto LAB_0451fd40;
                  if (*(uint *)(lVar9 + 0x18) <= uVar2) goto LAB_0451fd54;
                  lVar16 = lVar9 + (ulong)uVar2 * 0x6c;
                  *(float *)(lVar16 + 0x20) = (fVar22 - fVar21) + *(float *)(lVar16 + 0x20);
                  *(float *)(lVar16 + 0x24) = (fVar20 - fVar19) + *(float *)(lVar16 + 0x24);
                  if (uVar2 == 3) {
                    UnityEngine_UI_VertexHelper__AddUIVertexQuad(param_6,lVar9,0);
                  }
                  uVar15 = uVar15 + 1;
                } while (uVar15 != uVar6);
              }
              *(undefined1 *)(param_5 + 0x1f) = 0;
              goto LAB_0451fd08;
            }
          }
        }
      }
      else {
        iVar4 = UnityEngine_UI_Text__get_resizeTextMaxSize(param_5,0);
        lVar9 = UnityEngine_UI_Text__get_cachedTextGenerator(param_5,0);
        if (lVar9 != 0) {
          uStack_148 = uStack_e8;
          local_150 = local_f0;
          local_134 = local_a0;
          uStack_f8 = uStack_aa;
          local_140 = local_e0;
          uStack_10e = uStack_c0;
          local_11f = 0;
          uStack_116 = uStack_c8;
          local_11e = local_d0;
          local_138 = iVar4;
          fVar19 = (float)UnityEngine_TextGenerator__GetPreferredHeight
                                    (lVar9,param_5[0x1c],&local_150,0);
          fVar20 = (float)UnityEngine_UI_Text__get_pixelsPerUnit(param_5,0);
          lVar9 = UnityEngine_UI_Graphic__get_rectTransform(param_5,0);
          if (lVar9 != 0) {
            UnityEngine_RectTransform__get_rect(lVar9,0);
            fVar22 = fVar21;
            if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (fVar21 < fVar19 / fVar20) {
              iVar4 = UnityEngine_UI_Text__get_resizeTextMinSize(param_5,0);
              iVar5 = UnityEngine_UI_Text__get_resizeTextMaxSize(param_5,0);
              do {
                do {
                  iVar14 = iVar5;
                  if (iVar14 <= iVar4 + 1) {
                    uVar17 = 0;
                    goto LAB_0451f834;
                  }
                  iVar5 = iVar4 + iVar14;
                  if (iVar5 < 0) {
                    iVar5 = iVar5 + 1;
                  }
                  lVar9 = UnityEngine_UI_Text__get_cachedTextGenerator(param_5,0);
                  if (lVar9 == 0) goto LAB_0451fd40;
                  iVar5 = iVar5 >> 1;
                  uStack_1a8 = uStack_e8;
                  local_1b0 = local_f0;
                  local_194 = local_a0;
                  uStack_158 = uStack_aa;
                  local_1a0 = local_e0;
                  uStack_16e = uStack_c0;
                  local_17f = 0;
                  uStack_176 = uStack_c8;
                  local_17e = local_d0;
                  local_198 = iVar5;
                  fVar21 = (float)UnityEngine_TextGenerator__GetPreferredHeight
                                            (lVar9,param_5[0x1c],&local_1b0,0);
                  fVar19 = (float)UnityEngine_UI_Text__get_pixelsPerUnit(param_5,0);
                  lVar9 = UnityEngine_UI_Graphic__get_rectTransform(param_5,0);
                  if (lVar9 == 0) goto LAB_0451fd40;
                  UnityEngine_RectTransform__get_rect(lVar9,0);
                  fVar20 = fVar22;
                  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  bVar1 = fVar22 < fVar21 / fVar19;
                  fVar22 = fVar20;
                } while (bVar1);
                lVar9 = UnityEngine_UI_Graphic__get_rectTransform(param_5,0);
                if (lVar9 == 0) goto LAB_0451fd40;
                UnityEngine_RectTransform__get_rect(lVar9,0);
                fVar22 = fVar20;
                if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                iVar4 = iVar5;
                iVar5 = iVar14;
              } while (fVar21 / fVar19 < fVar20);
            }
            uVar17 = 0;
            goto LAB_0451f834;
          }
        }
      }
    }
LAB_0451fd40:
    if (*(long *)(lVar3 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  else {
LAB_0451fd08:
    if (*(long *)(lVar3 + 0x28) == local_88) {
      return;
    }
  }
LAB_0451fd68:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0451fd54:
  if (*(long *)(lVar3 + 0x28) == local_88) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  goto LAB_0451fd68;
}


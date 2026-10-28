// rea decompile_all
// name: ChocDino.UIFX.MotionBlurSimpleTMP$$LateUpdate
// address: 0x43b3d08
// body: available
// range: 0x43b3d08-0x43b410f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b40e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43b410c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_MotionBlurSimpleTMP__LateUpdate(long param_1)

{
  int *piVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 local_b0 [64];
  
  if ((DAT_09517b28 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188408);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517b28 = 1;
  }
  if (*(char *)(param_1 + 0xe8) != '\0') {
    *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | 4;
  }
  if (*(int *)(param_1 + 0x20) == 1) {
LAB_043b3d80:
    uVar6 = *(undefined8 *)(param_1 + 0xe0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar6,0,0);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0xe0) == 0) goto LAB_043b40e0;
      uVar18 = *(undefined8 *)(param_1 + 0xa0);
      uVar17 = *(undefined8 *)(param_1 + 0xa8);
      uVar16 = *(undefined8 *)(param_1 + 0xb0);
      uVar15 = *(undefined8 *)(param_1 + 0xb8);
      uVar14 = *(undefined8 *)(param_1 + 0xc0);
      uVar13 = *(undefined8 *)(param_1 + 200);
      uVar12 = *(undefined8 *)(param_1 + 0xd0);
      uVar6 = *(undefined8 *)(param_1 + 0xd8);
      lVar3 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xe0),0);
      if (lVar3 == 0) goto LAB_043b40e0;
      UnityEngine_Transform__get_worldToLocalMatrix(local_b0,lVar3,0);
      fVar8 = (float)uVar18 - (float)local_b0._0_8_;
      fVar9 = (float)((ulong)uVar18 >> 0x20) - SUB84(local_b0._0_8_,4);
      fVar10 = (float)uVar17 - (float)local_b0._8_8_;
      fVar11 = (float)((ulong)uVar17 >> 0x20) - SUB84(local_b0._8_8_,4);
      if (((9.9999994e-11 <= fVar11 * fVar11 + fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9) ||
          (fVar8 = (float)uVar16 - (float)local_b0._16_8_,
          fVar9 = (float)((ulong)uVar16 >> 0x20) - SUB84(local_b0._16_8_,4),
          fVar10 = (float)uVar15 - (float)local_b0._24_8_,
          fVar11 = (float)((ulong)uVar15 >> 0x20) - SUB84(local_b0._24_8_,4),
          9.9999994e-11 <= fVar11 * fVar11 + fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9)) ||
         ((fVar8 = (float)uVar14 - (float)local_b0._32_8_,
          fVar9 = (float)((ulong)uVar14 >> 0x20) - SUB84(local_b0._32_8_,4),
          fVar10 = (float)uVar13 - (float)local_b0._40_8_,
          fVar11 = (float)((ulong)uVar13 >> 0x20) - SUB84(local_b0._40_8_,4),
          9.9999994e-11 <= fVar11 * fVar11 + fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9 ||
          (fVar8 = (float)uVar12 - (float)local_b0._48_8_,
          fVar9 = (float)((ulong)uVar12 >> 0x20) - SUB84(local_b0._48_8_,4),
          fVar10 = (float)uVar6 - (float)local_b0._56_8_,
          fVar11 = (float)((ulong)uVar6 >> 0x20) - SUB84(local_b0._56_8_,4),
          9.9999994e-11 <= fVar11 * fVar11 + fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9))))
      goto LAB_043b3f98;
    }
  }
  else {
    uVar18 = *(undefined8 *)(param_1 + 0x60);
    uVar17 = *(undefined8 *)(param_1 + 0x68);
    uVar16 = *(undefined8 *)(param_1 + 0x70);
    uVar15 = *(undefined8 *)(param_1 + 0x78);
    uVar14 = *(undefined8 *)(param_1 + 0x80);
    uVar13 = *(undefined8 *)(param_1 + 0x88);
    uVar12 = *(undefined8 *)(param_1 + 0x90);
    uVar6 = *(undefined8 *)(param_1 + 0x98);
    lVar3 = UnityEngine_Component__get_transform(param_1,0);
    if (lVar3 == 0) goto LAB_043b40e0;
    UnityEngine_Transform__get_localToWorldMatrix(local_b0,lVar3,0);
    fVar8 = (float)uVar18 - (float)local_b0._0_8_;
    fVar9 = (float)((ulong)uVar18 >> 0x20) - SUB84(local_b0._0_8_,4);
    fVar10 = (float)uVar17 - (float)local_b0._8_8_;
    fVar11 = (float)((ulong)uVar17 >> 0x20) - SUB84(local_b0._8_8_,4);
    if ((((fVar11 * fVar11 + fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9 < 9.9999994e-11) &&
         (fVar8 = (float)uVar16 - (float)local_b0._16_8_,
         fVar9 = (float)((ulong)uVar16 >> 0x20) - SUB84(local_b0._16_8_,4),
         fVar10 = (float)uVar15 - (float)local_b0._24_8_,
         fVar11 = (float)((ulong)uVar15 >> 0x20) - SUB84(local_b0._24_8_,4),
         fVar11 * fVar11 + fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9 < 9.9999994e-11)) &&
        (fVar8 = (float)uVar14 - (float)local_b0._32_8_,
        fVar9 = (float)((ulong)uVar14 >> 0x20) - SUB84(local_b0._32_8_,4),
        fVar10 = (float)uVar13 - (float)local_b0._40_8_,
        fVar11 = (float)((ulong)uVar13 >> 0x20) - SUB84(local_b0._40_8_,4),
        fVar11 * fVar11 + fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9 < 9.9999994e-11)) &&
       (fVar8 = (float)uVar12 - (float)local_b0._48_8_,
       fVar9 = (float)((ulong)uVar12 >> 0x20) - SUB84(local_b0._48_8_,4),
       fVar10 = (float)uVar6 - (float)local_b0._56_8_,
       fVar11 = (float)((ulong)uVar6 >> 0x20) - SUB84(local_b0._56_8_,4),
       fVar11 * fVar11 + fVar10 * fVar10 + fVar8 * fVar8 + fVar9 * fVar9 < 9.9999994e-11))
    goto LAB_043b3d80;
LAB_043b3f98:
    *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0xf8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
  if (((uVar2 & 1) != 0) &&
     (uVar2 = ChocDino_UIFX_MotionBlurSimpleTMP__CanApply(param_1), (uVar2 & 1) != 0)) {
    lVar3 = *(long *)(param_1 + 0xf8);
    *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) | 1;
    if (lVar3 == 0) goto LAB_043b40e0;
    if (*(char *)(lVar3 + 0x3b0) == '\0') {
      if (*(long *)(param_1 + 0x58) != 0) {
        uVar2 = 0;
        iVar5 = 0;
        lVar7 = 0x28;
        while (lVar3 = TMPro_TMP_Text__get_textInfo(lVar3,0), lVar3 != 0) {
          if ((long)*(int *)(lVar3 + 0x34) <= (long)uVar2) {
            if ((*(long *)(param_1 + 0x58) != 0) &&
               (lVar3 = *(long *)(*(long *)(param_1 + 0x58) + 0x10), lVar3 != 0)) {
              if (*(int *)(param_1 + 0x24) * iVar5 != *(int *)(lVar3 + 0x18)) goto LAB_043b3ff0;
              goto LAB_043b3ff8;
            }
            break;
          }
          if (((*(long *)(param_1 + 0xf8) == 0) ||
              (lVar3 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0xf8),0), lVar3 == 0)) ||
             (lVar3 = *(long *)(lVar3 + 0x60), lVar3 == 0)) break;
          if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          piVar1 = (int *)(lVar3 + lVar7);
          lVar3 = *(long *)(param_1 + 0xf8);
          lVar7 = lVar7 + 0x50;
          uVar2 = uVar2 + 1;
          iVar5 = *piVar1 + iVar5;
          if (lVar3 == 0) break;
        }
        goto LAB_043b40e0;
      }
    }
    else {
LAB_043b3ff0:
      ChocDino_UIFX_MotionBlurSimpleTMP__ForceMeshBackToOriginal(param_1);
    }
LAB_043b3ff8:
    lVar3 = *(long *)(param_1 + 0xf8);
    if (*(int *)(param_1 + 0x34) == 0) {
      if (lVar3 == 0) goto LAB_043b40e0;
      TMPro_TMP_Text__set_renderMode(lVar3,0,0);
      plVar4 = *(long **)(param_1 + 0xf8);
      if (plVar4 == (long *)0x0) goto LAB_043b40e0;
      (**(code **)(*plVar4 + 0x7d8))(plVar4,0,0,*(undefined8 *)(*plVar4 + 0x7e0));
      lVar3 = *(long *)(param_1 + 0xf8);
    }
    if (lVar3 == 0) {
LAB_043b40e0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar6 = TMPro_TMP_Text__get_textInfo(lVar3,0);
    ChocDino_UIFX_MotionBlurSimpleTMP__ModifyGeometry(param_1,uVar6);
  }
  return;
}


// rea decompile_all
// name: Utilities.UISliderMultipeImage.<>c__DisplayClass18_0.<<ChangeValue>g__IEChangeValue|0>d$$MoveNext
// address: 0x452fa64
// body: available
// range: 0x452fa64-0x452ff37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452ff30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x452ff34 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_UISliderMultipeImage_<>c__DisplayClass18_0_<<ChangeValue>g__IEChangeValue_0>d__MoveNext
          (long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((DAT_09518636 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e98);
    DAT_09518636 = 1;
  }
  lVar12 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar13 = UnityEngine_Time__get_unscaledTime(0);
    *(undefined4 *)(param_1 + 0x28) = uVar13;
    lVar3 = DAT_09187e98;
    if ((lVar12 == 0) || (lVar7 = *(long *)(lVar12 + 0x10), lVar7 == 0)) goto LAB_0452ff30;
    fVar14 = *(float *)(lVar7 + 0x20);
    fVar16 = *(float *)(lVar7 + 0x24);
    lVar7 = *(long *)(lVar7 + 0x30);
    *(float *)(param_1 + 0x2c) = fVar14;
    fVar17 = 1.0 - **(float **)(lVar3 + 0xb8);
    if (fVar16 <= fVar14) {
      if (fVar17 <= fVar14 - fVar16) {
        if (lVar7 == 0) goto LAB_0452ff30;
        lVar3 = *(long *)(lVar7 + 0x48);
      }
      else {
        if (lVar7 == 0) goto LAB_0452ff30;
        lVar3 = *(long *)(lVar7 + 0x40);
      }
    }
    else if (fVar17 <= fVar16 - fVar14) {
      if (lVar7 == 0) goto LAB_0452ff30;
      lVar3 = *(long *)(lVar7 + 0x38);
    }
    else {
      if (lVar7 == 0) goto LAB_0452ff30;
      lVar3 = *(long *)(lVar7 + 0x30);
    }
    if (lVar3 == 0) goto LAB_0452ff30;
    Utilities_UISliderMultipeImage_EffectConfig__PlaySound(lVar3,*(undefined8 *)(lVar7 + 0x10));
    lVar3 = *(long *)(lVar12 + 0x10);
    if ((lVar3 == 0) || (lVar7 = *(long *)(lVar3 + 0x30), lVar7 == 0)) goto LAB_0452ff30;
    fVar16 = *(float *)(lVar3 + 0x24);
    fVar17 = (fVar16 - *(float *)(param_1 + 0x2c)) / *(float *)(lVar7 + 0x18);
    fVar14 = *(float *)(lVar7 + 0x20);
    if (fVar17 <= *(float *)(lVar7 + 0x20)) {
      fVar14 = fVar17;
    }
    fVar18 = *(float *)(lVar7 + 0x1c);
    if (*(float *)(lVar7 + 0x1c) <= fVar17) {
      fVar18 = fVar14;
    }
    fVar14 = 0.1;
    if (0.1 <= *(float *)(lVar12 + 0x18)) {
      fVar14 = *(float *)(lVar12 + 0x18);
    }
    *(float *)(param_1 + 0x30) = fVar18 / fVar14;
    if (fVar16 <= *(float *)(param_1 + 0x2c)) {
      *(undefined8 *)(param_1 + 0x34) = 0x3f80000000000000;
      lVar3 = *(long *)(lVar3 + 0x28);
      if (lVar3 == 0) goto LAB_0452ff30;
      uVar8 = *(ulong *)(lVar3 + 0x18);
      uVar9 = uVar8 & 0xffffffff;
      uVar10 = uVar8 & 0xffffffff;
      do {
        uVar9 = uVar9 - 1;
        uVar2 = (int)uVar10 - 1;
        uVar10 = (ulong)uVar2;
        if ((int)uVar2 < 0) goto LAB_0452fc84;
        if ((uint)uVar8 <= uVar2) goto LAB_0452ff34;
        lVar7 = *(long *)(lVar3 + (uVar9 & 0xffffffff) * 8 + 0x20);
        if (lVar7 == 0) goto LAB_0452ff30;
        fVar14 = *(float *)(lVar7 + 0xf4);
      } while (fVar14 <= **(float **)(DAT_09187e98 + 0xb8) + 0.0);
      *(uint *)(param_1 + 0x34) = uVar2;
LAB_0452fc80:
      *(float *)(param_1 + 0x38) = fVar14;
    }
    else {
      lVar3 = *(long *)(lVar3 + 0x28);
      if (lVar3 == 0) goto LAB_0452ff30;
      iVar6 = (int)*(undefined8 *)(lVar3 + 0x18);
      *(int *)(param_1 + 0x34) = iVar6;
      *(undefined4 *)(param_1 + 0x38) = 0;
      if (0 < iVar6) {
        lVar7 = 0;
        do {
          lVar11 = *(long *)(lVar3 + 0x20 + lVar7 * 8);
          if (lVar11 == 0) goto LAB_0452ff30;
          fVar14 = *(float *)(lVar11 + 0xf4);
          if (fVar14 < 1.0 - **(float **)(DAT_09187e98 + 0xb8)) {
            *(int *)(param_1 + 0x34) = (int)lVar7;
            goto LAB_0452fc80;
          }
          lVar7 = lVar7 + 1;
        } while (iVar6 != (int)lVar7);
      }
    }
  }
LAB_0452fc84:
  fVar14 = (float)UnityEngine_Time__get_unscaledTime(0);
  if (fVar14 < *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x30)) {
    fVar14 = (float)UnityEngine_Time__get_unscaledTime(0);
    if ((((lVar12 != 0) && (lVar3 = *(long *)(lVar12 + 0x10), lVar3 != 0)) &&
        (*(long *)(lVar3 + 0x30) != 0)) &&
       (lVar7 = *(long *)(*(long *)(lVar3 + 0x30) + 0x28), lVar7 != 0)) {
      fVar17 = *(float *)(param_1 + 0x2c);
      fVar18 = *(float *)(lVar3 + 0x24);
      fVar16 = (float)UnityEngine_AnimationCurve__Evaluate
                                ((fVar14 - *(float *)(param_1 + 0x28)) / *(float *)(param_1 + 0x30),
                                 lVar7,0);
      lVar7 = *(long *)(lVar12 + 0x10);
      fVar14 = 1.0;
      if (fVar16 <= 1.0) {
        fVar14 = fVar16;
      }
      fVar15 = 0.0;
      if (0.0 <= fVar16) {
        fVar15 = fVar14;
      }
      *(float *)(lVar3 + 0x20) = fVar17 + (fVar18 - fVar17) * fVar15;
      if (lVar7 != 0) {
        Utilities_UISliderMultipeImage__UpdateFill();
        lVar12 = *(long *)(lVar12 + 0x10);
        if (lVar12 != 0) {
          fVar14 = *(float *)(lVar12 + 0x24);
          uVar2 = *(uint *)(param_1 + 0x34);
          if (fVar14 <= *(float *)(param_1 + 0x2c)) {
            if ((-1 < (int)uVar2) && (*(float *)(lVar12 + 0x20) < (float)(int)uVar2)) {
              fVar16 = 1.0 - **(float **)(DAT_09187e98 + 0xb8);
              if ((*(float *)(param_1 + 0x38) < fVar16) ||
                 ((float)(int)(uVar2 + 1) - fVar14 < fVar16)) {
                if ((*(long *)(lVar12 + 0x30) == 0) ||
                   (lVar3 = *(long *)(lVar12 + 0x28), lVar3 == 0)) goto LAB_0452ff30;
                if (*(uint *)(lVar3 + 0x18) <= uVar2) goto LAB_0452ff34;
                lVar3 = *(long *)(lVar3 + (ulong)uVar2 * 8 + 0x20);
                if (lVar3 == 0) goto LAB_0452ff30;
                lVar12 = *(long *)(*(long *)(lVar12 + 0x30) + 0x40);
              }
              else {
                if ((*(long *)(lVar12 + 0x30) == 0) ||
                   (lVar3 = *(long *)(lVar12 + 0x28), lVar3 == 0)) goto LAB_0452ff30;
                if (*(uint *)(lVar3 + 0x18) <= uVar2) {
LAB_0452ff34:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar3 = *(long *)(lVar3 + (ulong)uVar2 * 8 + 0x20);
                if (lVar3 == 0) goto LAB_0452ff30;
                lVar12 = *(long *)(*(long *)(lVar12 + 0x30) + 0x48);
              }
              uVar5 = UnityEngine_UI_Graphic__get_rectTransform(lVar3,0);
              if (lVar12 == 0) goto LAB_0452ff30;
              Utilities_UISliderMultipeImage_EffectConfig__PlayVfxAndVibrate(lVar12,uVar5);
              *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
              *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
            }
LAB_0452ff08:
            *(undefined8 *)(param_1 + 0x18) = 0;
            thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
            *(undefined4 *)(param_1 + 0x10) = 1;
            return 1;
          }
          lVar3 = *(long *)(lVar12 + 0x28);
          if (lVar3 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (((int)uVar1 <= (int)uVar2) || (*(float *)(lVar12 + 0x20) <= (float)(int)uVar2))
            goto LAB_0452ff08;
            if ((**(float **)(DAT_09187e98 + 0xb8) + 0.0 < *(float *)(param_1 + 0x38)) ||
               (fVar14 - (float)(int)uVar2 < 1.0 - **(float **)(DAT_09187e98 + 0xb8))) {
              if (*(long *)(lVar12 + 0x30) == 0) goto LAB_0452ff30;
              if (uVar1 <= uVar2) goto LAB_0452ff34;
              lVar3 = *(long *)(lVar3 + (long)(int)uVar2 * 8 + 0x20);
              if (lVar3 == 0) goto LAB_0452ff30;
              lVar12 = *(long *)(*(long *)(lVar12 + 0x30) + 0x30);
            }
            else {
              if (*(long *)(lVar12 + 0x30) == 0) goto LAB_0452ff30;
              if (uVar1 <= uVar2) goto LAB_0452ff34;
              lVar3 = *(long *)(lVar3 + (long)(int)uVar2 * 8 + 0x20);
              if (lVar3 == 0) goto LAB_0452ff30;
              lVar12 = *(long *)(*(long *)(lVar12 + 0x30) + 0x38);
            }
            uVar5 = UnityEngine_UI_Graphic__get_rectTransform(lVar3,0);
            if (lVar12 != 0) {
              Utilities_UISliderMultipeImage_EffectConfig__PlayVfxAndVibrate(lVar12,uVar5);
              *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
              *(undefined4 *)(param_1 + 0x38) = 0;
              goto LAB_0452ff08;
            }
          }
        }
      }
    }
  }
  else if ((lVar12 != 0) && (lVar3 = *(long *)(lVar12 + 0x10), lVar3 != 0)) {
    *(undefined4 *)(lVar3 + 0x20) = *(undefined4 *)(lVar3 + 0x24);
    Utilities_UISliderMultipeImage__UpdateFill();
    if (*(long *)(lVar12 + 0x10) != 0) {
      puVar4 = (undefined8 *)(*(long *)(lVar12 + 0x10) + 0x38);
      *puVar4 = 0;
      thunk_FUN_03f5d7b8(puVar4,0);
      return 0;
    }
  }
LAB_0452ff30:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


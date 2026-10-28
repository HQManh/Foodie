// rea decompile_all
// name: Utilities.UIEffectFlyThenExplode.<<StartFlyAnchoredCoord>g__IEFly|28_0>d$$MoveNext
// address: 0x4527714
// body: available
// range: 0x4527714-0x4527da3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4527da0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_UIEffectFlyThenExplode_<<StartFlyAnchoredCoord>g__IEFly_28_0>d__MoveNext
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined8 *puVar4;
  float *pfVar5;
  ulong uVar6;
  float *pfVar7;
  long lVar8;
  int *piVar9;
  float *pfVar10;
  long *plVar11;
  long lVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_28;
  
  if ((DAT_09518604 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186250);
    FUN_03f5c2a4(&DAT_0918ce98);
    FUN_03f5c2a4(&DAT_0918ce90);
    DAT_09518604 = 1;
  }
  iVar1 = *(int *)(param_4 + 0x10);
  lVar12 = *(long *)(param_4 + 0x20);
  local_28 = 0;
  if (iVar1 - 2U < 2) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar12 == 0) goto LAB_04527da0;
    plVar11 = *(long **)(lVar12 + 0x38);
    if (plVar11 != (long *)0x0) {
      lVar12 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09186250) {
            puVar4 = (undefined8 *)(lVar12 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_04527828;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186250,1);
LAB_04527828:
      (*(code *)*puVar4)(plVar11,puVar4[1]);
    }
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      if (lVar12 == 0) goto LAB_04527da0;
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      if (lVar12 == 0) goto LAB_04527da0;
      if (*(char *)(lVar12 + 0x48) == '\0') {
        uVar13 = UnityEngine_Time__get_unscaledTime(0);
      }
      else {
        uVar13 = UnityEngine_Time__get_time(0);
      }
      lVar3 = *(long *)(lVar12 + 0x40);
      *(undefined4 *)(param_4 + 0x38) = uVar13;
      if (lVar3 == 0) goto LAB_04527da0;
      uVar13 = UnityEngine_RectTransform__get_anchoredPosition(lVar3,0);
      *(undefined4 *)(param_4 + 0x3c) = uVar13;
      *(undefined4 *)(param_4 + 0x40) = param_2;
      if (*(long *)(lVar12 + 0x40) == 0) goto LAB_04527da0;
      uVar13 = UnityEngine_Transform__get_localEulerAngles(*(long *)(lVar12 + 0x40),0);
      *(undefined4 *)(param_4 + 0x44) = uVar13;
      *(undefined4 *)(param_4 + 0x48) = param_2;
      *(undefined4 *)(param_4 + 0x4c) = param_3;
      if (*(long *)(lVar12 + 0x40) == 0) goto LAB_04527da0;
      uVar13 = UnityEngine_Transform__get_localScale(*(long *)(lVar12 + 0x40),0);
      cVar2 = DAT_09515fab;
      fVar19 = *(float *)(param_4 + 0x3c);
      fVar20 = *(float *)(param_4 + 0x40);
      fVar21 = *(float *)(param_4 + 0x28);
      fVar22 = *(float *)(param_4 + 0x2c);
      *(undefined4 *)(param_4 + 0x50) = uVar13;
      *(undefined4 *)(param_4 + 0x54) = param_2;
      *(undefined4 *)(param_4 + 0x58) = param_3;
      if (cVar2 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09515fab = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar20 = fVar20 - fVar22;
      fVar19 = fVar19 - fVar21;
      cVar2 = *(char *)(lVar12 + 0x50);
      uVar13 = *(undefined4 *)(lVar12 + 0x54);
      fVar20 = SQRT(fVar19 * fVar19 + fVar20 * fVar20);
      *(float *)(param_4 + 0x5c) = fVar20;
      *(undefined4 *)(param_4 + 0x60) = uVar13;
      if (cVar2 != '\0') {
        *(float *)(param_4 + 0x60) = fVar20 / *(float *)(lVar12 + 0x58);
      }
      if (0.0 < *(float *)(param_4 + 0x30)) {
        *(float *)(param_4 + 0x60) = *(float *)(param_4 + 0x30);
      }
      uVar16 = *(undefined8 *)(param_4 + 0x3c);
      local_28 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0x28) >> 0x20) -
                          (float)((ulong)uVar16 >> 0x20),
                          (float)*(undefined8 *)(param_4 + 0x28) - (float)uVar16);
      uVar13 = UnityEngine_Vector2__Normalize(&local_28,0);
      *(undefined4 *)(param_4 + 100) = uVar13;
      *(float *)(param_4 + 0x68) = (float)uVar16;
      *(float *)(param_4 + 0x6c) = -(float)uVar16;
      *(undefined4 *)(param_4 + 0x70) = uVar13;
    }
    if (*(char *)(lVar12 + 0x48) == '\0') {
      fVar20 = (float)UnityEngine_Time__get_unscaledTime(0);
    }
    else {
      fVar20 = (float)UnityEngine_Time__get_time(0);
    }
    if (fVar20 < *(float *)(param_4 + 0x38) + *(float *)(param_4 + 0x60)) {
      if (*(char *)(lVar12 + 0x48) == '\0') {
        fVar20 = (float)UnityEngine_Time__get_unscaledTime(0);
      }
      else {
        fVar20 = (float)UnityEngine_Time__get_time(0);
      }
      if (*(long *)(lVar12 + 0x60) == 0) goto LAB_04527da0;
      uVar16 = UnityEngine_AnimationCurve__Evaluate
                         ((fVar20 - *(float *)(param_4 + 0x38)) / *(float *)(param_4 + 0x60),
                          *(long *)(lVar12 + 0x60),0);
      fVar20 = (float)*(undefined8 *)(param_4 + 0x3c) +
               (float)*(undefined8 *)(param_4 + 100) * *(float *)(param_4 + 0x5c) * (float)uVar16;
      fVar19 = (float)((ulong)*(undefined8 *)(param_4 + 0x3c) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_4 + 100) >> 0x20) * *(float *)(param_4 + 0x5c) *
               (float)uVar16;
      uVar6 = CONCAT44(fVar19,fVar20);
      if (*(char *)(lVar12 + 0x88) != '\0') {
        if (*(long *)(lVar12 + 0x90) == 0) goto LAB_04527da0;
        fVar21 = (float)UnityEngine_AnimationCurve__Evaluate(*(long *)(lVar12 + 0x90),0);
        if (*(long *)(lVar12 + 0x98) == 0) goto LAB_04527da0;
        fVar22 = (float)UnityEngine_AnimationCurve__Evaluate(uVar16,*(long *)(lVar12 + 0x98),0);
        if (*(long *)(lVar12 + 0xa0) == 0) goto LAB_04527da0;
        fVar14 = (float)UnityEngine_AnimationCurve__Evaluate(uVar16,*(long *)(lVar12 + 0xa0),0);
        fVar15 = 1.0;
        fVar17 = 1.0;
        if (*(char *)(lVar12 + 0x89) != '\0') {
          fVar17 = *(float *)(param_4 + 0x5c);
        }
        if (*(char *)(lVar12 + 0x8a) != '\0') {
          fVar15 = *(float *)(param_4 + 0x5c);
        }
        if (*(char *)(lVar12 + 0x8b) == '\0') {
          fVar18 = 1.0;
        }
        else {
          fVar18 = *(float *)(param_4 + 0x5c);
        }
        uVar6 = CONCAT44(fVar19 + (float)((ulong)*(undefined8 *)(param_4 + 0x6c) >> 0x20) * fVar21 *
                                  fVar17 + fVar14 * fVar18,
                         fVar20 + (float)*(undefined8 *)(param_4 + 0x6c) * fVar21 * fVar17 +
                                  fVar22 * fVar15);
      }
      if (*(long *)(lVar12 + 0x40) != 0) {
        UnityEngine_RectTransform__set_anchoredPosition
                  (uVar6 & 0xffffffff,uVar6 >> 0x20,*(long *)(lVar12 + 0x40),0);
        if (*(char *)(lVar12 + 0x68) != '\0') {
          if (*(long *)(lVar12 + 0x70) == 0) goto LAB_04527da0;
          fVar20 = (float)UnityEngine_AnimationCurve__Evaluate(uVar16,*(long *)(lVar12 + 0x70),0);
          lVar3 = *(long *)(lVar12 + 0x40);
          if (*(char *)(lVar12 + 0x69) == '\0') {
            if (lVar3 == 0) goto LAB_04527da0;
          }
          else {
            if (lVar3 == 0) goto LAB_04527da0;
            fVar20 = fVar20 + *(float *)(param_4 + 0x4c);
          }
          UnityEngine_Transform__set_localEulerAngles
                    (*(undefined4 *)(param_4 + 0x44),*(undefined4 *)(param_4 + 0x48),fVar20,lVar3,0)
          ;
        }
        if (*(char *)(lVar12 + 0x78) != '\0') {
          if (*(long *)(lVar12 + 0x80) == 0) goto LAB_04527da0;
          fVar20 = (float)UnityEngine_AnimationCurve__Evaluate(uVar16,*(long *)(lVar12 + 0x80),0);
          lVar3 = *(long *)(lVar12 + 0x40);
          if (*(char *)(lVar12 + 0x79) == '\0') {
            if (DAT_09515cf3 == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09515cf3 = '\x01';
            }
            if (lVar3 == 0) goto LAB_04527da0;
            lVar12 = *(long *)(DAT_0918cbd0 + 0xb8);
            pfVar7 = (float *)(lVar12 + 0x14);
            pfVar5 = (float *)(lVar12 + 0xc);
            pfVar10 = (float *)(lVar12 + 0x10);
          }
          else {
            if (lVar3 == 0) goto LAB_04527da0;
            pfVar7 = (float *)(param_4 + 0x58);
            pfVar5 = (float *)(param_4 + 0x50);
            pfVar10 = (float *)(param_4 + 0x54);
          }
          UnityEngine_Transform__set_localScale
                    (fVar20 * *pfVar5,fVar20 * *pfVar10,fVar20 * *pfVar7,lVar3,0);
        }
        *(undefined8 *)(param_4 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x18),0);
        *(undefined4 *)(param_4 + 0x10) = 1;
        return 1;
      }
      goto LAB_04527da0;
    }
    if (*(long *)(lVar12 + 0x40) == 0) goto LAB_04527da0;
    UnityEngine_RectTransform__set_anchoredPosition
              (*(undefined4 *)(param_4 + 0x28),*(undefined4 *)(param_4 + 0x2c),
               *(long *)(lVar12 + 0x40),0);
    if (*(char *)(lVar12 + 0x68) != '\0') {
      if (*(long *)(lVar12 + 0x70) == 0) goto LAB_04527da0;
      fVar20 = (float)UnityEngine_AnimationCurve__Evaluate(0x3f800000,*(long *)(lVar12 + 0x70),0);
      if (*(char *)(lVar12 + 0x69) != '\0') {
        fVar20 = fVar20 + *(float *)(param_4 + 0x4c);
      }
      if (*(long *)(lVar12 + 0x40) == 0) goto LAB_04527da0;
      UnityEngine_Transform__set_localEulerAngles
                (*(undefined4 *)(param_4 + 0x44),*(undefined4 *)(param_4 + 0x48),fVar20,
                 *(long *)(lVar12 + 0x40),0);
    }
    if (*(char *)(lVar12 + 0x78) != '\0') {
      if (*(long *)(lVar12 + 0x80) == 0) {
LAB_04527da0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar20 = (float)UnityEngine_AnimationCurve__Evaluate(0x3f800000,*(long *)(lVar12 + 0x80),0);
      lVar3 = *(long *)(lVar12 + 0x40);
      if (*(char *)(lVar12 + 0x79) == '\0') {
        if (DAT_09515cf3 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515cf3 = '\x01';
        }
        lVar8 = *(long *)(DAT_0918cbd0 + 0xb8);
        pfVar7 = (float *)(lVar8 + 0xc);
        pfVar5 = (float *)(lVar8 + 0x10);
        pfVar10 = (float *)(lVar8 + 0x14);
      }
      else {
        pfVar7 = (float *)(param_4 + 0x50);
        pfVar5 = (float *)(param_4 + 0x54);
        pfVar10 = (float *)(param_4 + 0x58);
      }
      if (lVar3 == 0) goto LAB_04527da0;
      UnityEngine_Transform__set_localScale
                (fVar20 * *pfVar7,fVar20 * *pfVar5,fVar20 * *pfVar10,lVar3,0);
    }
    plVar11 = *(long **)(lVar12 + 0x30);
    if (plVar11 != (long *)0x0) {
      lVar3 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09186250) {
            puVar4 = (undefined8 *)(lVar3 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_04527ce8;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186250,2);
LAB_04527ce8:
      (*(code *)*puVar4)(plVar11,puVar4[1]);
    }
    if (*(char *)(param_4 + 0x34) != '\0') {
      uVar13 = *(undefined4 *)(lVar12 + 0xa8);
      if (*(char *)(lVar12 + 0x48) == '\0') {
        uVar16 = thunk_FUN_03f9944c(DAT_0918ce98);
        UnityEngine_WaitForSecondsRealtime___ctor(uVar13,uVar16,0);
        *(undefined8 *)(param_4 + 0x18) = uVar16;
        thunk_FUN_03f5d7b8(param_4 + 0x18,uVar16);
        uVar13 = 3;
      }
      else {
        uVar16 = thunk_FUN_03f9944c(DAT_0918ce90);
        UnityEngine_WaitForSeconds___ctor(uVar13,uVar16,0);
        *(undefined8 *)(param_4 + 0x18) = uVar16;
        thunk_FUN_03f5d7b8(param_4 + 0x18,uVar16);
        uVar13 = 2;
      }
      *(undefined4 *)(param_4 + 0x10) = uVar13;
      return 1;
    }
  }
  return 0;
}


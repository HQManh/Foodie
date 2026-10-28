// rea decompile_all
// name: Utilities.UIEffectFlyThenExplode.<<StartFlyWorldCoord>g__IEFly|29_0>d$$MoveNext
// address: 0x4528550
// body: available
// range: 0x4528550-0x4528c1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4528c1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_UIEffectFlyThenExplode_<<StartFlyWorldCoord>g__IEFly_29_0>d__MoveNext
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
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_28;
  
  if ((DAT_09518606 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186250);
    FUN_03f5c2a4(&DAT_0918ce98);
    FUN_03f5c2a4(&DAT_0918ce90);
    DAT_09518606 = 1;
  }
  iVar1 = *(int *)(param_4 + 0x10);
  lVar12 = *(long *)(param_4 + 0x20);
  local_28 = 0;
  if (iVar1 - 2U < 2) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar12 == 0) goto LAB_04528c1c;
    plVar11 = *(long **)(lVar12 + 0x38);
    if (plVar11 != (long *)0x0) {
      lVar12 = *plVar11;
      uVar6 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar6 != 0) {
        piVar9 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09186250) {
            puVar4 = (undefined8 *)(lVar12 + (long)(*piVar9 + 1) * 0x10 + 0x138);
            goto LAB_04528664;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186250,1);
LAB_04528664:
      (*(code *)*puVar4)(plVar11,puVar4[1]);
    }
  }
  else {
    if (iVar1 == 1) {
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      if (lVar12 == 0) goto LAB_04528c1c;
    }
    else {
      if (iVar1 != 0) {
        return 0;
      }
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      if (lVar12 == 0) goto LAB_04528c1c;
      if (*(char *)(lVar12 + 0x48) == '\0') {
        uVar13 = UnityEngine_Time__get_unscaledTime(0);
      }
      else {
        uVar13 = UnityEngine_Time__get_time(0);
      }
      lVar3 = *(long *)(lVar12 + 0x40);
      *(undefined4 *)(param_4 + 0x3c) = uVar13;
      if (lVar3 == 0) goto LAB_04528c1c;
      uVar13 = UnityEngine_Transform__get_position(lVar3,0);
      *(undefined4 *)(param_4 + 0x40) = uVar13;
      *(undefined4 *)(param_4 + 0x44) = param_2;
      *(undefined4 *)(param_4 + 0x48) = param_3;
      if (*(long *)(lVar12 + 0x40) == 0) goto LAB_04528c1c;
      uVar13 = UnityEngine_Transform__get_localEulerAngles(*(long *)(lVar12 + 0x40),0);
      *(undefined4 *)(param_4 + 0x4c) = uVar13;
      *(undefined4 *)(param_4 + 0x50) = param_2;
      *(undefined4 *)(param_4 + 0x54) = param_3;
      if (*(long *)(lVar12 + 0x40) == 0) goto LAB_04528c1c;
      uVar13 = UnityEngine_Transform__get_localScale(*(long *)(lVar12 + 0x40),0);
      cVar2 = DAT_09515fab;
      fVar20 = *(float *)(param_4 + 0x40);
      fVar21 = *(float *)(param_4 + 0x44);
      fVar22 = *(float *)(param_4 + 0x28);
      fVar23 = *(float *)(param_4 + 0x2c);
      *(undefined4 *)(param_4 + 0x58) = uVar13;
      *(undefined4 *)(param_4 + 0x5c) = param_2;
      *(undefined4 *)(param_4 + 0x60) = param_3;
      if (cVar2 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09515fab = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar21 = fVar21 - fVar23;
      fVar20 = fVar20 - fVar22;
      cVar2 = *(char *)(lVar12 + 0x50);
      uVar13 = *(undefined4 *)(lVar12 + 0x54);
      fVar21 = SQRT(fVar20 * fVar20 + fVar21 * fVar21);
      *(float *)(param_4 + 100) = fVar21;
      *(undefined4 *)(param_4 + 0x68) = uVar13;
      if (cVar2 != '\0') {
        *(float *)(param_4 + 0x68) = fVar21 / *(float *)(lVar12 + 0x58);
      }
      if (0.0 < *(float *)(param_4 + 0x34)) {
        *(float *)(param_4 + 0x68) = *(float *)(param_4 + 0x34);
      }
      uVar17 = *(undefined8 *)(param_4 + 0x40);
      local_28 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0x28) >> 0x20) -
                          (float)((ulong)uVar17 >> 0x20),
                          (float)*(undefined8 *)(param_4 + 0x28) - (float)uVar17);
      uVar13 = UnityEngine_Vector2__Normalize(&local_28,0);
      *(undefined4 *)(param_4 + 0x74) = 0;
      *(undefined4 *)(param_4 + 0x6c) = uVar13;
      *(float *)(param_4 + 0x70) = (float)uVar17;
      *(undefined4 *)(param_4 + 0x80) = 0;
      *(float *)(param_4 + 0x78) = -(float)uVar17;
      *(undefined4 *)(param_4 + 0x7c) = uVar13;
    }
    if (*(char *)(lVar12 + 0x48) == '\0') {
      fVar21 = (float)UnityEngine_Time__get_unscaledTime(0);
    }
    else {
      fVar21 = (float)UnityEngine_Time__get_time(0);
    }
    if (fVar21 < *(float *)(param_4 + 0x3c) + *(float *)(param_4 + 0x68)) {
      if (*(char *)(lVar12 + 0x48) == '\0') {
        fVar21 = (float)UnityEngine_Time__get_unscaledTime(0);
      }
      else {
        fVar21 = (float)UnityEngine_Time__get_time(0);
      }
      if (*(long *)(lVar12 + 0x60) == 0) goto LAB_04528c1c;
      uVar17 = UnityEngine_AnimationCurve__Evaluate
                         ((fVar21 - *(float *)(param_4 + 0x3c)) / *(float *)(param_4 + 0x68),
                          *(long *)(lVar12 + 0x60),0);
      fVar20 = *(float *)(param_4 + 100);
      fVar21 = (float)uVar17;
      fVar22 = (float)*(undefined8 *)(param_4 + 0x40) +
               (float)*(undefined8 *)(param_4 + 0x6c) * fVar20 * fVar21;
      fVar23 = (float)((ulong)*(undefined8 *)(param_4 + 0x40) >> 0x20) +
               (float)((ulong)*(undefined8 *)(param_4 + 0x6c) >> 0x20) * fVar20 * fVar21;
      uVar6 = CONCAT44(fVar23,fVar22);
      fVar21 = *(float *)(param_4 + 0x48) + fVar21 * *(float *)(param_4 + 0x74) * fVar20;
      if (*(char *)(lVar12 + 0x88) != '\0') {
        if (*(long *)(lVar12 + 0x90) == 0) goto LAB_04528c1c;
        fVar20 = (float)UnityEngine_AnimationCurve__Evaluate(*(long *)(lVar12 + 0x90),0);
        if (*(long *)(lVar12 + 0x98) == 0) goto LAB_04528c1c;
        fVar14 = (float)UnityEngine_AnimationCurve__Evaluate(uVar17,*(long *)(lVar12 + 0x98),0);
        if (*(long *)(lVar12 + 0xa0) == 0) goto LAB_04528c1c;
        fVar15 = (float)UnityEngine_AnimationCurve__Evaluate(uVar17,*(long *)(lVar12 + 0xa0),0);
        fVar16 = 1.0;
        fVar18 = 1.0;
        if (*(char *)(lVar12 + 0x89) != '\0') {
          fVar18 = *(float *)(param_4 + 100);
        }
        if (*(char *)(lVar12 + 0x8a) != '\0') {
          fVar16 = *(float *)(param_4 + 100);
        }
        if (*(char *)(lVar12 + 0x8b) == '\0') {
          fVar19 = 1.0;
        }
        else {
          fVar19 = *(float *)(param_4 + 100);
        }
        uVar6 = CONCAT44(fVar23 + (float)((ulong)*(undefined8 *)(param_4 + 0x78) >> 0x20) * fVar20 *
                                  fVar18 + fVar15 * fVar19,
                         fVar22 + (float)*(undefined8 *)(param_4 + 0x78) * fVar20 * fVar18 +
                                  fVar14 * fVar16);
        fVar21 = fVar21 + fVar20 * *(float *)(param_4 + 0x80) * fVar18 + 0.0;
      }
      if (*(long *)(lVar12 + 0x40) != 0) {
        UnityEngine_Transform__set_position
                  (uVar6 & 0xffffffff,uVar6 >> 0x20,fVar21,*(long *)(lVar12 + 0x40),0);
        if (*(char *)(lVar12 + 0x68) != '\0') {
          if (*(long *)(lVar12 + 0x70) == 0) goto LAB_04528c1c;
          fVar21 = (float)UnityEngine_AnimationCurve__Evaluate(uVar17,*(long *)(lVar12 + 0x70),0);
          lVar3 = *(long *)(lVar12 + 0x40);
          if (*(char *)(lVar12 + 0x69) == '\0') {
            if (lVar3 == 0) goto LAB_04528c1c;
          }
          else {
            if (lVar3 == 0) goto LAB_04528c1c;
            fVar21 = fVar21 + *(float *)(param_4 + 0x54);
          }
          UnityEngine_Transform__set_localEulerAngles
                    (*(undefined4 *)(param_4 + 0x4c),*(undefined4 *)(param_4 + 0x50),fVar21,lVar3,0)
          ;
        }
        if (*(char *)(lVar12 + 0x78) != '\0') {
          if (*(long *)(lVar12 + 0x80) == 0) goto LAB_04528c1c;
          fVar21 = (float)UnityEngine_AnimationCurve__Evaluate(uVar17,*(long *)(lVar12 + 0x80),0);
          lVar3 = *(long *)(lVar12 + 0x40);
          if (*(char *)(lVar12 + 0x79) == '\0') {
            if (DAT_09515cf3 == '\0') {
              FUN_03f5c2a4(&DAT_0918cbd0);
              DAT_09515cf3 = '\x01';
            }
            if (lVar3 == 0) goto LAB_04528c1c;
            lVar12 = *(long *)(DAT_0918cbd0 + 0xb8);
            pfVar7 = (float *)(lVar12 + 0x14);
            pfVar5 = (float *)(lVar12 + 0xc);
            pfVar10 = (float *)(lVar12 + 0x10);
          }
          else {
            if (lVar3 == 0) goto LAB_04528c1c;
            pfVar7 = (float *)(param_4 + 0x60);
            pfVar5 = (float *)(param_4 + 0x58);
            pfVar10 = (float *)(param_4 + 0x5c);
          }
          UnityEngine_Transform__set_localScale
                    (fVar21 * *pfVar5,fVar21 * *pfVar10,fVar21 * *pfVar7,lVar3,0);
        }
        *(undefined8 *)(param_4 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x18),0);
        *(undefined4 *)(param_4 + 0x10) = 1;
        return 1;
      }
      goto LAB_04528c1c;
    }
    if (*(long *)(lVar12 + 0x40) == 0) goto LAB_04528c1c;
    UnityEngine_Transform__set_position
              (*(undefined4 *)(param_4 + 0x28),*(undefined4 *)(param_4 + 0x2c),
               *(undefined4 *)(param_4 + 0x30),*(long *)(lVar12 + 0x40),0);
    if (*(char *)(lVar12 + 0x68) != '\0') {
      if (*(long *)(lVar12 + 0x70) == 0) goto LAB_04528c1c;
      fVar21 = (float)UnityEngine_AnimationCurve__Evaluate(0x3f800000,*(long *)(lVar12 + 0x70),0);
      if (*(char *)(lVar12 + 0x69) != '\0') {
        fVar21 = fVar21 + *(float *)(param_4 + 0x54);
      }
      if (*(long *)(lVar12 + 0x40) == 0) goto LAB_04528c1c;
      UnityEngine_Transform__set_localEulerAngles
                (*(undefined4 *)(param_4 + 0x4c),*(undefined4 *)(param_4 + 0x50),fVar21,
                 *(long *)(lVar12 + 0x40),0);
    }
    if (*(char *)(lVar12 + 0x78) != '\0') {
      if (*(long *)(lVar12 + 0x80) == 0) {
LAB_04528c1c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar21 = (float)UnityEngine_AnimationCurve__Evaluate(0x3f800000,*(long *)(lVar12 + 0x80),0);
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
        pfVar7 = (float *)(param_4 + 0x58);
        pfVar5 = (float *)(param_4 + 0x5c);
        pfVar10 = (float *)(param_4 + 0x60);
      }
      if (lVar3 == 0) goto LAB_04528c1c;
      UnityEngine_Transform__set_localScale
                (fVar21 * *pfVar7,fVar21 * *pfVar5,fVar21 * *pfVar10,lVar3,0);
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
            goto LAB_04528b64;
          }
          uVar6 = uVar6 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09186250,2);
LAB_04528b64:
      (*(code *)*puVar4)(plVar11,puVar4[1]);
    }
    if (*(char *)(param_4 + 0x38) != '\0') {
      uVar13 = *(undefined4 *)(lVar12 + 0xa8);
      if (*(char *)(lVar12 + 0x48) == '\0') {
        uVar17 = thunk_FUN_03f9944c(DAT_0918ce98);
        UnityEngine_WaitForSecondsRealtime___ctor(uVar13,uVar17,0);
        *(undefined8 *)(param_4 + 0x18) = uVar17;
        thunk_FUN_03f5d7b8(param_4 + 0x18,uVar17);
        uVar13 = 3;
      }
      else {
        uVar17 = thunk_FUN_03f9944c(DAT_0918ce90);
        UnityEngine_WaitForSeconds___ctor(uVar13,uVar17,0);
        *(undefined8 *)(param_4 + 0x18) = uVar17;
        thunk_FUN_03f5d7b8(param_4 + 0x18,uVar17);
        uVar13 = 2;
      }
      *(undefined4 *)(param_4 + 0x10) = uVar13;
      return 1;
    }
  }
  return 0;
}


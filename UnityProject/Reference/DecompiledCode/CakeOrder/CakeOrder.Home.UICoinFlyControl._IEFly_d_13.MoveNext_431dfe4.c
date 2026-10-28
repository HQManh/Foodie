// rea decompile_all
// name: CakeOrder.Home.UICoinFlyControl.<IEFly>d__13$$MoveNext
// address: 0x431dfe4
// body: available
// range: 0x431dfe4-0x431e57b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x431e578 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_Home_UICoinFlyControl_<IEFly>d__13__MoveNext
          (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 local_28;
  
  if ((DAT_0951763e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b7d08);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951763e = 1;
  }
  uVar1 = *(uint *)(param_4 + 0x10);
  lVar8 = *(long *)(param_4 + 0x20);
  local_28 = 0;
  if (uVar1 < 2) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar8 == 0) goto LAB_0431e578;
    iVar6 = *(int *)(lVar8 + 0x58);
    iVar3 = UnityEngine_Time__get_frameCount(0);
    if (iVar6 == iVar3) {
      iVar6 = *(int *)(lVar8 + 0x5c);
    }
    else {
      uVar9 = UnityEngine_Time__get_frameCount(0);
      iVar6 = 0;
      *(undefined4 *)(lVar8 + 0x58) = uVar9;
      *(undefined4 *)(lVar8 + 0x5c) = 0;
    }
    if ((*(long *)(lVar8 + 0x30) == 0) ||
       (lVar7 = *(long *)(*(long *)(lVar8 + 0x30) + 0x30), lVar7 == 0)) goto LAB_0431e578;
    iVar3 = *(int *)(lVar7 + 0x18);
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    if (iVar3 <= iVar6) {
      *(undefined8 *)(param_4 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x18),0);
      *(undefined4 *)(param_4 + 0x10) = 1;
      return 1;
    }
    uVar15 = *(undefined8 *)(lVar8 + 0x38);
    *(int *)(lVar8 + 0x5c) = iVar6 + 1;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar15,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(lVar8 + 0x30) == 0) goto LAB_0431e578;
      uVar15 = *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x38);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar15,0);
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(lVar8 + 0x30) == 0) || (*(long *)(lVar8 + 0x38) == 0)) goto LAB_0431e578;
        UnityEngine_AudioSource__PlayOneShot
                  (*(long *)(lVar8 + 0x38),*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x38),0);
      }
    }
    MoreMountains_NiceVibrations_MMVibrationManager__Haptic(8,0);
    if ((*(long *)(lVar8 + 0x30) == 0) || (*(long *)(param_4 + 0x28) == 0)) goto LAB_0431e578;
    lVar8 = *(long *)(*(long *)(lVar8 + 0x30) + 0x30);
    uVar15 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x28),0);
    if (lVar8 == 0) goto LAB_0431e578;
    uVar15 = Utilities_UIFlyExplodeConfig__Play(0,lVar8,uVar15,0);
    *(undefined8 *)(param_4 + 0x18) = uVar15;
    thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x18),uVar15);
    uVar9 = 2;
LAB_0431e3e0:
    *(undefined4 *)(param_4 + 0x10) = uVar9;
    uVar15 = 1;
  }
  else {
    if (uVar1 == 2) {
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      if ((*(long *)(param_4 + 0x28) == 0) ||
         (lVar7 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x28),0), lVar7 == 0))
      goto LAB_0431e578;
      fVar13 = (float)UnityEngine_Transform__get_position(lVar7,0);
      *(float *)(param_4 + 0x30) = fVar13;
      *(float *)(param_4 + 0x34) = param_2;
      *(undefined4 *)(param_4 + 0x38) = param_3;
      local_28 = CONCAT44((float)((ulong)*(undefined8 *)(param_4 + 0x3c) >> 0x20) - param_2,
                          (float)*(undefined8 *)(param_4 + 0x3c) - fVar13);
      uVar9 = UnityEngine_Vector2__Normalize(&local_28,0);
      cVar2 = DAT_09515fab;
      fVar10 = *(float *)(param_4 + 0x30);
      fVar13 = *(float *)(param_4 + 0x34);
      fVar16 = *(float *)(param_4 + 0x3c);
      fVar11 = *(float *)(param_4 + 0x40);
      *(float *)(param_4 + 0x50) = -param_2;
      *(undefined4 *)(param_4 + 0x54) = uVar9;
      if (cVar2 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09515fab = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar13 = fVar13 - fVar11;
      fVar10 = fVar10 - fVar16;
      fVar13 = SQRT(fVar10 * fVar10 + fVar13 * fVar13);
      uVar9 = UnityEngine_Random__Range(fVar13 * -0.15,fVar13 * 0.15,0);
      fVar13 = 0.0;
      *(undefined4 *)(param_4 + 0x58) = uVar9;
      *(undefined4 *)(param_4 + 0x5c) = 0;
LAB_0431e158:
      if ((lVar8 == 0) || (*(long *)(lVar8 + 0x30) == 0)) goto LAB_0431e578;
      if (fVar13 < *(float *)(*(long *)(lVar8 + 0x30) + 0x10)) {
        fVar10 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
        lVar7 = *(long *)(lVar8 + 0x30);
        *(float *)(param_4 + 0x5c) = fVar13 + fVar10;
        if (lVar7 == 0) {
LAB_0431e578:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        fVar10 = (fVar13 + fVar10) / *(float *)(lVar7 + 0x10);
        fVar13 = 1.0;
        if (fVar10 <= 1.0) {
          fVar13 = fVar10;
        }
        fVar16 = 0.0;
        if (0.0 <= fVar10) {
          fVar16 = fVar13;
        }
        if (*(long *)(param_4 + 0x28) == 0) goto LAB_0431e578;
        lVar7 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x28),0);
        if ((*(long *)(lVar8 + 0x30) == 0) ||
           (lVar4 = *(long *)(*(long *)(lVar8 + 0x30) + 0x18), lVar4 == 0)) goto LAB_0431e578;
        uVar15 = *(undefined8 *)(param_4 + 0x30);
        uVar17 = *(undefined8 *)(param_4 + 0x3c);
        fVar13 = (float)UnityEngine_AnimationCurve__Evaluate(fVar16,lVar4,0);
        if ((*(long *)(lVar8 + 0x30) == 0) ||
           (lVar4 = *(long *)(*(long *)(lVar8 + 0x30) + 0x20), lVar4 == 0)) goto LAB_0431e578;
        fVar10 = *(float *)(param_4 + 0x58);
        uVar18 = *(undefined8 *)(param_4 + 0x50);
        fVar11 = (float)UnityEngine_AnimationCurve__Evaluate(fVar16,lVar4,0);
        if (lVar7 == 0) goto LAB_0431e578;
        fVar14 = (float)uVar15;
        fVar12 = (float)((ulong)uVar15 >> 0x20);
        fVar12 = fVar12 + ((float)((ulong)uVar17 >> 0x20) - fVar12) * fVar13 +
                 (float)((ulong)uVar18 >> 0x20) * fVar10 * fVar11;
        UnityEngine_Transform__set_position
                  (CONCAT44(fVar12,fVar14 + ((float)uVar17 - fVar14) * fVar13 +
                                   (float)uVar18 * fVar10 * fVar11),fVar12,0,lVar7,0);
        if (*(long *)(param_4 + 0x28) == 0) goto LAB_0431e578;
        lVar7 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x28),0);
        if (DAT_09515cf3 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515cf3 = '\x01';
        }
        if ((*(long *)(lVar8 + 0x30) == 0) ||
           (lVar8 = *(long *)(*(long *)(lVar8 + 0x30) + 0x28), lVar8 == 0)) goto LAB_0431e578;
        lVar4 = *(long *)(DAT_0918cbd0 + 0xb8);
        fVar10 = *(float *)(lVar4 + 0xc);
        fVar11 = *(float *)(lVar4 + 0x10);
        fVar12 = *(float *)(lVar4 + 0x14);
        fVar13 = (float)UnityEngine_AnimationCurve__Evaluate(fVar16,lVar8,0);
        if (lVar7 == 0) goto LAB_0431e578;
        UnityEngine_Transform__set_localScale
                  (fVar10 * fVar13,fVar11 * fVar13,fVar12 * fVar13,lVar7,0);
        *(undefined8 *)(param_4 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x18),0);
        uVar9 = 3;
        goto LAB_0431e3e0;
      }
      if ((*(long *)(param_4 + 0x28) == 0) ||
         (lVar7 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x28),0), lVar7 == 0))
      goto LAB_0431e578;
      fVar13 = *(float *)(param_4 + 0x40);
      UnityEngine_Transform__set_position
                (*(undefined4 *)(param_4 + 0x3c),fVar13,*(undefined4 *)(param_4 + 0x44),lVar7,0);
      uVar15 = *(undefined8 *)(lVar8 + 0x38);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar15,0);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(lVar8 + 0x30) == 0) goto LAB_0431e578;
        uVar15 = *(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x40);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Implicit(uVar15,0);
        if ((uVar5 & 1) != 0) {
          if ((*(long *)(lVar8 + 0x30) == 0) || (*(long *)(lVar8 + 0x38) == 0)) goto LAB_0431e578;
          UnityEngine_AudioSource__PlayOneShot
                    (*(long *)(lVar8 + 0x38),*(undefined8 *)(*(long *)(lVar8 + 0x30) + 0x40),0);
        }
      }
      uVar15 = *(undefined8 *)(lVar8 + 0x40);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Implicit(uVar15,0);
      if ((uVar5 & 1) != 0) {
        fVar10 = (float)UnityEngine_Random__get_insideUnitCircle(0);
        if (*(long *)(lVar8 + 0x40) == 0) goto LAB_0431e578;
        fVar16 = *(float *)(lVar8 + 0x48);
        lVar7 = UnityEngine_Component__get_transform(*(long *)(lVar8 + 0x40),0);
        if (lVar7 == 0) goto LAB_0431e578;
        UnityEngine_Transform__set_position
                  (fVar10 * fVar16 + *(float *)(param_4 + 0x3c),
                   fVar13 * fVar16 + *(float *)(param_4 + 0x40),*(float *)(param_4 + 0x44) + 0.0,
                   lVar7,0);
        if (*(long *)(lVar8 + 0x40) == 0) goto LAB_0431e578;
        UnityEngine_ParticleSystem__Play(*(long *)(lVar8 + 0x40),0);
      }
      if (*(long *)(lVar8 + 0x50) == 0) goto LAB_0431e578;
      FUN_05d3a864(*(long *)(lVar8 + 0x50),*(undefined8 *)(param_4 + 0x28),DAT_091b7d08);
      lVar8 = *(long *)(param_4 + 0x48);
      if (lVar8 != 0) {
        (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
      }
    }
    else if (uVar1 == 3) {
      fVar13 = *(float *)(param_4 + 0x5c);
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      goto LAB_0431e158;
    }
    uVar15 = 0;
  }
  return uVar15;
}


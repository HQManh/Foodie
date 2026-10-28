// rea decompile_all
// name: DG.Tweening.Plugins.PathPlugin$$SetOrientation
// address: 0x4563c28
// body: available
// range: 0x4563c28-0x45645cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45645c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45645c8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45645cc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_PathPlugin__SetOrientation
               (float param_1,ulong param_2,float param_3,float param_4,undefined8 param_5,
               int *param_6,long param_7,long param_8,int param_9)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  long lVar12;
  float *pfVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  float fVar17;
  ulong uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_120 [112];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_9c;
  float fStack_98;
  float local_94;
  
  fVar17 = (float)param_2;
  fVar26 = param_3;
  fVar21 = param_4;
  if ((DAT_09518841 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182880);
    FUN_03f5c2a4(&DAT_091831c8);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_091b7638);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518841 = 1;
  }
  if ((param_7 == 0) || (plVar7 = *(long **)(param_7 + 0x48), plVar7 == (long *)0x0))
  goto LAB_045645c4;
  lVar10 = *plVar7;
  if (lVar10 == DAT_09184b68) {
    lVar10 = UnityEngine_GameObject__get_transform(plVar7,0);
  }
  else {
    if ((*(byte *)(lVar10 + 0x130) < *(byte *)(DAT_09182880 + 0x130)) ||
       (*(long *)(*(long *)(lVar10 + 200) + (ulong)*(byte *)(DAT_09182880 + 0x130) * 8 + -8) !=
        DAT_09182880)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0();
    }
    lVar10 = UnityEngine_Component__get_transform(plVar7,0);
  }
  if (DAT_09515ed5 == '\0') {
    FUN_03f5c2a4(&DAT_091898c0);
    DAT_09515ed5 = '\x01';
  }
  if (lVar10 == 0) goto LAB_045645c4;
  pfVar11 = *(float **)(DAT_091898c0 + 0xb8);
  fVar25 = *pfVar11;
  fVar27 = pfVar11[1];
  fVar28 = pfVar11[2];
  fVar29 = pfVar11[3];
  uVar18 = UnityEngine_Transform__get_position(lVar10,0);
  uVar8 = param_2;
  fVar20 = fVar26;
  if (param_9 == 1) {
    uVar8 = (ulong)(uint)param_6[0x16];
    fVar20 = (float)param_6[0x17];
    fVar21 = (float)param_6[0x18];
    UnityEngine_Transform__set_rotation(param_6[0x15],uVar8,fVar20,fVar21,lVar10,0);
  }
  fVar24 = (float)uVar8;
  iVar2 = param_6[1];
  fVar22 = (float)param_2;
  fVar23 = (float)uVar18;
  if (iVar2 == 1) {
    if (param_8 == 0) goto LAB_045645c4;
    if ((*(int *)(param_8 + 0x20) != 0) || (0.0001 < (float)param_6[10])) {
      param_1 = (float)param_6[10] + param_1;
      fVar25 = 1.0;
      if (1.0 < param_1) {
        if ((*(byte *)(param_6 + 4) & 1) == 0) {
          fVar25 = 1.00001;
          param_1 = 1.00001;
          if (*(int *)(param_8 + 0x20) == 0) {
            param_1 = 1.0;
          }
        }
        else {
          fVar25 = -1.0;
          param_1 = param_1 + -1.0;
        }
      }
      fVar29 = fVar21;
      fVar24 = (float)DG_Tweening_Plugins_Core_PathCore_Path__GetPoint(param_1,param_8,0);
      fVar21 = fVar25;
      fVar30 = fVar20;
      if (*(int *)(param_8 + 0x20) == 0) goto LAB_04564028;
    }
    else {
      lVar12 = *(long *)(param_8 + 0x18);
      if (lVar12 == 0) goto LAB_045645c4;
      uVar9 = *(uint *)(param_8 + 0x50);
      if ((*(uint *)(lVar12 + 0x18) <= uVar9) || (*(uint *)(lVar12 + 0x18) <= uVar9 - 1))
      goto LAB_045645cc;
      pfVar13 = (float *)(lVar12 + 0x20 + (long)(int)uVar9 * 0xc);
      pfVar11 = (float *)(lVar12 + 0x20 + (long)(int)(uVar9 - 1) * 0xc);
      fVar24 = (fVar17 + *pfVar13) - *pfVar11;
      fVar25 = (param_3 + pfVar13[1]) - pfVar11[1];
      fVar20 = (param_4 + pfVar13[2]) - pfVar11[2];
LAB_04564028:
      lVar12 = *(long *)(param_8 + 0x18);
      if (lVar12 == 0) goto LAB_045645c4;
      lVar14 = *(long *)(lVar12 + 0x18);
      if ((int)lVar14 == 0) {
LAB_045645cc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar15 = lVar12 + (long)(int)((ulong)((lVar14 << 0x20) + -0x100000000) >> 0x20) * 0xc;
      fVar27 = *(float *)(lVar15 + 0x20);
      fVar21 = *(float *)(lVar15 + 0x24);
      fVar30 = *(float *)(lVar15 + 0x28);
      fVar29 = 9.9999994e-11;
      if (((fVar20 - fVar30) * (fVar20 - fVar30) +
           (fVar24 - fVar27) * (fVar24 - fVar27) + (fVar25 - fVar21) * (fVar25 - fVar21) <
           9.9999994e-11) &&
         (fVar17 = fVar17 - fVar27, fVar24 = fVar27, fVar25 = fVar21, fVar20 = fVar30,
         (param_4 - fVar30) * (param_4 - fVar30) +
         fVar17 * fVar17 + (param_3 - fVar21) * (param_3 - fVar21) < 9.9999994e-11)) {
        if ((int)lVar14 == 1) goto LAB_045645cc;
        lVar12 = lVar12 + (long)(int)((ulong)((lVar14 << 0x20) + -0x200000000) >> 0x20) * 0xc;
        fVar29 = fVar27 - *(float *)(lVar12 + 0x20);
        fVar24 = fVar27 + fVar29;
        fVar25 = fVar21 + (fVar21 - *(float *)(lVar12 + 0x24));
        fVar20 = fVar30 + (fVar30 - *(float *)(lVar12 + 0x28));
      }
    }
    uVar16 = UnityEngine_Transform__get_up(lVar10,0);
    uVar19 = *(undefined8 *)(param_6 + 0x12);
    fVar17 = fVar30;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    bVar6 = UnityEngine_Object__op_Inequality(uVar19,0,0);
    bVar1 = bVar6 & *(byte *)(param_6 + 0x10);
    if ((bVar1 & 1) != 0) {
      if (*(long *)(param_6 + 0x12) == 0) goto LAB_045645c4;
      fVar24 = (float)UnityEngine_Transform__TransformPoint(fVar24,*(long *)(param_6 + 0x12),0);
      fVar17 = fVar20;
    }
    uVar9 = param_6[3];
    if (uVar9 != 0) {
      if ((uVar9 >> 1 & 1) != 0) {
        UnityEngine_Transform__InverseTransformPoint(fVar24,fVar25,lVar10,0);
        fVar25 = 0.0;
        fVar24 = (float)UnityEngine_Transform__TransformPoint(lVar10,0);
        if ((bVar1 & 1) == 0) {
          fVar17 = fVar20;
          if (DAT_09515faa == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515faa = '\x01';
          }
          lVar12 = *(long *)(DAT_0918cbd0 + 0xb8);
          uVar16 = *(undefined4 *)(lVar12 + 0x18);
          fVar21 = *(float *)(lVar12 + 0x1c);
          fVar30 = *(float *)(lVar12 + 0x20);
        }
        else {
          if (*(long *)(param_6 + 0x12) == 0) goto LAB_045645c4;
          fVar21 = fVar25;
          fVar30 = fVar20;
          uVar16 = UnityEngine_Transform__get_up(*(long *)(param_6 + 0x12),0);
          fVar17 = fVar30;
        }
        uVar9 = param_6[3];
      }
      if ((uVar9 >> 2 & 1) != 0) {
        UnityEngine_Transform__InverseTransformPoint(fVar24,lVar10,0);
        fVar17 = -fVar20;
        if (0.0 <= fVar20) {
          fVar17 = fVar20;
        }
        fVar20 = fVar17;
        fVar24 = (float)UnityEngine_Transform__TransformPoint(0,lVar10,0);
        uVar9 = param_6[3];
        fVar17 = fVar20;
      }
      if ((uVar9 >> 3 & 1) != 0) {
        if ((bVar1 & 1) == 0) {
          lVar12 = lVar10;
          if (DAT_09515faa == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515faa = '\x01';
          }
        }
        else {
          lVar12 = *(long *)(param_6 + 0x12);
          if (DAT_09515faa == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515faa = '\x01';
          }
          if (lVar12 == 0) goto LAB_045645c4;
        }
        lVar14 = *(long *)(DAT_0918cbd0 + 0xb8);
        fVar21 = *(float *)(lVar14 + 0x1c);
        fVar17 = *(float *)(lVar14 + 0x20);
        uVar16 = UnityEngine_Transform__TransformDirection
                           (*(undefined4 *)(lVar14 + 0x18),fVar21,fVar17,lVar12,0);
        fVar30 = (float)param_6[0x19];
      }
    }
    if (*param_6 != 1) {
      if ((bVar6 & 1) != 0) {
        if (*(long *)(param_6 + 0x12) == 0) goto LAB_045645c4;
        uVar8 = param_2;
        fVar21 = (float)UnityEngine_Transform__get_localScale
                                  (uVar18,param_2,*(long *)(param_6 + 0x12),0);
        fVar24 = fVar23 + (fVar24 - fVar23) / fVar21;
        fVar25 = fVar22 + (fVar25 - fVar22) / (float)uVar8;
        fVar20 = fVar26 + (fVar20 - fVar26) / fVar17;
      }
      if (*(int *)(DAT_091831c8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar29 = fVar24;
      fVar26 = (float)DG_Tweening_Core_DOTweenUtils__Angle2D
                                (uVar18 & 0xffffffff,param_2,fVar26,fVar24,fVar25,fVar20,0);
      fVar17 = fVar26 + 360.0;
      if (0.0 <= fVar26) {
        fVar17 = fVar26;
      }
      fVar27 = 0.0;
      if (*param_6 == 3) {
        bVar3 = false;
        bVar4 = true;
        bVar5 = false;
        if (fVar17 < 270.0) {
          bVar3 = false;
          bVar4 = false;
          bVar5 = true;
          if (!NAN(fVar17)) {
            bVar3 = fVar17 < 90.0;
            bVar4 = fVar17 == 90.0;
            bVar5 = false;
          }
        }
        fVar26 = 180.0 - fVar17;
        if (bVar4 || bVar3 != bVar5) {
          fVar26 = fVar17;
        }
        fVar17 = fVar26;
        fVar27 = 3.1415927;
        if (fVar23 <= fVar24) {
          fVar27 = 0.0;
        }
      }
      fVar28 = 0.017453292;
      local_b0 = (ulong)(uint)fVar27 << 0x20;
      uStack_a8 = CONCAT44(uStack_a8._4_4_,fVar17 * 0.017453292);
      fVar25 = (float)UnityEngine_Quaternion__Internal_FromEulerRad(&local_b0,0);
      goto LAB_045643d0;
    }
    fVar24 = fVar24 - fVar23;
    fVar25 = fVar25 - fVar22;
    fVar20 = fVar20 - fVar26;
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515ce6 = '\x01';
    }
    pfVar11 = *(float **)(DAT_0918cbd0 + 0xb8);
    fVar28 = fVar20 - pfVar11[2];
    fVar27 = 9.9999994e-11;
    if (fVar28 * fVar28 +
        (fVar24 - *pfVar11) * (fVar24 - *pfVar11) + (fVar25 - pfVar11[1]) * (fVar25 - pfVar11[1]) <
        9.9999994e-11) {
      fVar25 = 9.9999994e-11;
      fVar20 = fVar28;
      fVar24 = (float)UnityEngine_Transform__get_forward(lVar10,0);
      fVar27 = fVar25;
      fVar28 = fVar20;
    }
    if ((bVar6 & 1) != 0) {
      if (*(long *)(param_6 + 0x12) == 0) {
LAB_045645c4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar17 = (float)UnityEngine_Transform__get_localScale(*(long *)(param_6 + 0x12),0);
      fVar24 = fVar24 / fVar17;
      fVar25 = fVar25 / fVar27;
      fVar20 = fVar20 / fVar28;
    }
    local_b0 = CONCAT44(fVar25,fVar24);
    uStack_a8 = CONCAT44(uStack_a8._4_4_,fVar20);
    local_9c = uVar16;
    fStack_98 = fVar21;
    local_94 = fVar30;
  }
  else if (iVar2 == 2) {
    uVar19 = *(undefined8 *)(param_6 + 8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = UnityEngine_Object__op_Inequality(uVar19,0,0);
    if ((uVar8 & 1) == 0) goto LAB_045643d0;
    if (*(long *)(param_6 + 8) == 0) goto LAB_045645c4;
    fVar27 = fVar24;
    fVar28 = fVar20;
    UnityEngine_Transform__get_position(*(long *)(param_6 + 8),0);
    local_b0 = 0;
    uStack_a8 = 0;
    FUN_05c3a618(&local_b0,DAT_091b7638);
    if (param_8 == 0) goto LAB_045645c4;
    *(undefined8 *)(param_8 + 0x104) = uStack_a8;
    *(long *)(param_8 + 0xfc) = local_b0;
    if (*(long *)(param_6 + 8) == 0) goto LAB_045645c4;
    fVar17 = (float)UnityEngine_Transform__get_position(*(long *)(param_6 + 8),0);
    fVar26 = fVar28 - fVar26;
    fVar22 = fVar27 - fVar22;
    if ((*(byte *)((long)param_6 + 0x52) & 1) == 0) {
      local_9c = UnityEngine_Transform__get_up(lVar10,0);
      fVar29 = (float)uVar18;
    }
    else {
      if (DAT_09515faa == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515faa = '\x01';
      }
      fVar29 = (float)uVar18;
      lVar12 = *(long *)(DAT_0918cbd0 + 0xb8);
      local_9c = *(undefined4 *)(lVar12 + 0x18);
      fVar27 = *(float *)(lVar12 + 0x1c);
      fVar28 = *(float *)(lVar12 + 0x20);
    }
    local_b0 = CONCAT44(fVar22,fVar17 - fVar23);
    uStack_a8 = CONCAT44(uStack_a8._4_4_,fVar26);
    fStack_98 = fVar27;
    local_94 = fVar28;
  }
  else {
    if (iVar2 != 3) goto LAB_045643d0;
    local_b0 = 0;
    uStack_a8 = 0;
    fVar29 = fVar21;
    FUN_05c3a618(param_6[5],param_6[6],param_6[7],&local_b0,DAT_091b7638);
    if (param_8 == 0) goto LAB_045645c4;
    *(undefined8 *)(param_8 + 0x104) = uStack_a8;
    *(long *)(param_8 + 0xfc) = local_b0;
    uVar19 = *(undefined8 *)(param_6 + 5);
    fVar27 = (float)param_6[7];
    fVar26 = fVar27 - fVar26;
    if ((*(byte *)((long)param_6 + 0x52) & 1) == 0) {
      fVar28 = fVar23;
      local_9c = UnityEngine_Transform__get_up(lVar10,0);
    }
    else {
      if (DAT_09515faa == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515faa = '\x01';
      }
      lVar12 = *(long *)(DAT_0918cbd0 + 0xb8);
      local_9c = *(undefined4 *)(lVar12 + 0x18);
      fVar27 = *(float *)(lVar12 + 0x1c);
      fVar28 = *(float *)(lVar12 + 0x20);
    }
    uStack_a8 = CONCAT44(uStack_a8._4_4_,fVar26);
    local_b0 = CONCAT44((float)((ulong)uVar19 >> 0x20) - fVar22,(float)uVar19 - fVar23);
    fStack_98 = fVar27;
    local_94 = fVar28;
  }
  fVar25 = (float)UnityEngine_Quaternion__Internal_LookRotation(&local_b0,&local_9c,0);
LAB_045643d0:
  if ((*(byte *)(param_6 + 0xb) & 1) != 0) {
    fVar22 = (float)param_6[0xe];
    fVar17 = (float)param_6[0xf];
    fVar26 = (float)param_6[0xc];
    fVar20 = (float)param_6[0xd];
    fVar31 = fVar25 * fVar26;
    fVar30 = fVar25 * fVar20;
    fVar32 = fVar27 * fVar20;
    fVar21 = fVar27 * fVar26;
    fVar24 = fVar25 * fVar22;
    fVar23 = fVar28 * fVar22;
    fVar25 = (fVar27 * fVar22 + fVar29 * fVar26 + fVar25 * fVar17) - fVar28 * fVar20;
    fVar27 = (fVar28 * fVar26 + fVar29 * fVar20 + fVar27 * fVar17) - fVar24;
    fVar28 = (fVar30 + fVar29 * fVar22 + fVar28 * fVar17) - fVar21;
    fVar29 = ((fVar29 * fVar17 - fVar31) - fVar32) - fVar23;
  }
  memcpy(auStack_120,param_6,0x70);
  DG_Tweening_Core_DOTweenExternalCommand__Dispatch_SetOrientationOnPath
            (fVar25,fVar27,fVar28,fVar29,auStack_120,param_7,lVar10,0);
  return;
}


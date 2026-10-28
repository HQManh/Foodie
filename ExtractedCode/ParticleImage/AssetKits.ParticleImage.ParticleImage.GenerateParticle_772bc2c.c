// rea decompile_all
// name: AssetKits.ParticleImage.ParticleImage$$GenerateParticle
// address: 0x772bc2c
// body: available
// range: 0x772bc2c-0x772c6ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x772c6ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AssetKits_ParticleImage_ParticleImage__GenerateParticle
          (undefined1 param_1 [16],float param_2,float param_3,long param_4,int param_5,int param_6,
          long param_7)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 uVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 local_d0;
  undefined4 local_cc;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  float local_88;
  undefined8 local_38;
  
  if ((DAT_09522a46 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ed0);
    DAT_09522a46 = 1;
  }
  fVar8 = 0.0;
  local_38 = 0;
  local_98 = 0;
  if (param_6 < 2) {
    if (param_6 == 0) {
      if (param_7 == 0) goto LAB_0772c6ec;
      fVar8 = (float)*(int *)(param_7 + 0x14);
LAB_0772bcf0:
      fVar8 = (360.0 / fVar8) * (float)param_5;
    }
    else {
      if (param_6 != 1) goto LAB_0772bd0c;
      fVar8 = *(float *)(param_4 + 0x708);
LAB_0772bcbc:
      fVar8 = ((360.0 / fVar8) * (float)param_5) / *(float *)(param_4 + 0x138);
    }
    param_2 = *(float *)(param_4 + 0x110);
    fVar8 = param_2 * fVar8;
  }
  else {
    if (param_6 == 2) {
      fVar8 = *(float *)(param_4 + 0x70c);
      goto LAB_0772bcf0;
    }
    if (param_6 == 3) {
      fVar8 = *(float *)(param_4 + 0x710);
      goto LAB_0772bcbc;
    }
  }
LAB_0772bd0c:
  if (DAT_09515ce8 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce8 = '\x01';
  }
  puVar7 = *(ulong **)(DAT_0918cb68 + 0xb8);
  iVar1 = *(int *)(param_4 + 0x108);
  local_38 = *puVar7;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
LAB_0772bdc0:
      local_38 = *(ulong *)(param_4 + 0x7e4);
    }
    else if (iVar1 == 1) {
      if (*(char *)(param_4 + 0x12d) != '\0') {
        if (*(int *)(param_4 + 0x10c) == 0) {
          uVar6 = *(undefined8 *)(param_4 + 0x7e4);
          fVar19 = (float)UnityEngine_Random__get_insideUnitCircle(0);
          fVar16 = *(float *)(param_4 + 0x118);
          fVar19 = fVar19 * fVar16;
          fVar11 = param_2 * fVar16;
          param_2 = fVar16;
          goto LAB_0772c108;
        }
        param_2 = (float)UnityEngine_Random__Range(0,0x3f800000,0);
        fVar11 = (float)AssetKits_ParticleImage_ParticleImage__RotateOnAngle(0,param_2,0);
        param_3 = *(float *)(param_4 + 0x118);
        fVar11 = fVar11 * param_3;
        param_2 = param_2 * param_3;
        goto LAB_0772c054;
      }
      if (*(int *)(param_4 + 0x10c) != 0) {
        fVar19 = 1.0;
        param_2 = (float)AssetKits_ParticleImage_ParticleImage__RotateOnAngle(0,0x3f800000,0);
        param_3 = *(float *)(param_4 + 0x118) - *(float *)(param_4 + 0x130);
        fVar11 = (float)UnityEngine_Random__Range(*(float *)(param_4 + 0x118),param_3,0);
        param_2 = param_2 * fVar11;
        fVar19 = fVar19 * fVar11;
        goto LAB_0772c0e8;
      }
      uVar12 = UnityEngine_Random__get_insideUnitCircle(0);
      local_98 = CONCAT44(param_2,uVar12);
      fVar19 = (float)UnityEngine_Vector2__Normalize(&local_98,0);
      fVar9 = *(float *)(param_4 + 0x118);
      uVar6 = *(undefined8 *)(param_4 + 0x7e4);
      fVar21 = fVar9 - *(float *)(param_4 + 0x130);
      fVar22 = param_2 * fVar9;
      fVar20 = param_2 * fVar21;
      fVar16 = (float)UnityEngine_Random__get_value(0);
      param_3 = 0.0;
      fVar11 = 1.0;
      if (fVar16 <= 1.0) {
        fVar11 = fVar16;
      }
      fVar10 = 0.0;
      if (0.0 <= fVar16) {
        fVar10 = fVar11;
      }
      param_2 = fVar19 * fVar21 - fVar19 * fVar9;
      local_38 = CONCAT44((float)((ulong)uVar6 >> 0x20) + fVar22 + (fVar20 - fVar22) * fVar10,
                          (float)uVar6 + fVar19 * fVar9 + param_2 * fVar10);
    }
  }
  else if (iVar1 == 2) {
    if (*(char *)(param_4 + 0x12d) == '\0') {
      fVar19 = (float)UnityEngine_Random__Range(0,0x43b40000,0);
      fVar16 = *(float *)(param_4 + 0x11c);
      fVar9 = *(float *)(param_4 + 0x120);
      fVar11 = fVar8;
      if (*(int *)(param_4 + 0x10c) != 1) {
        fVar11 = fVar19;
      }
      sincosf(fVar11 * 0.017453292,&fStack_b4,&local_b8);
      fVar19 = 0.5;
      param_3 = fVar19;
      if (fStack_b4 <= 0.0) {
        param_3 = -0.5;
      }
      if (local_b8 <= 0.0) {
        fVar19 = -0.5;
      }
      param_2 = fVar9 * param_3;
      param_3 = param_3 * (fVar9 - *(float *)(param_4 + 0x130));
      fVar9 = fVar16 * fVar19;
      fVar19 = fVar19 * (fVar16 - *(float *)(param_4 + 0x130));
      fVar11 = local_b8 * param_2;
      fVar22 = local_b8 * param_3;
      fVar21 = fStack_b4 * fVar9;
      bVar3 = ABS(fVar21) < ABS(fVar11);
      fVar16 = fStack_b4 * fVar19;
      fVar11 = fVar11 / fStack_b4;
      if (bVar3) {
        fVar11 = fVar9;
      }
      if (bVar3) {
        param_2 = fVar21 / local_b8;
      }
      fVar9 = fVar22 / fStack_b4;
      if (ABS(fVar16) < ABS(fVar22)) {
        param_3 = fVar16 / local_b8;
        fVar9 = fVar19;
      }
      fVar16 = (float)UnityEngine_Random__get_value(0);
      param_3 = param_3 - param_2;
      fVar19 = 1.0;
      if (fVar16 <= 1.0) {
        fVar19 = fVar16;
      }
      fVar21 = 0.0;
      if (0.0 <= fVar16) {
        fVar21 = fVar19;
      }
      fVar11 = fVar11 + (fVar9 - fVar11) * fVar21;
      param_2 = param_2 + param_3 * fVar21;
      goto LAB_0772c054;
    }
    if (*(int *)(param_4 + 0x10c) == 1) {
      sincosf(fVar8 * 0.017453292,&fStack_ac,&local_b0);
      uVar17 = NEON_rev64(CONCAT44(fStack_ac,local_b0),4);
      uVar18 = CONCAT44(-(uint)(0.0 < fStack_ac),-(uint)(0.0 < local_b0)) & 0x8000000080000000 ^
               0xbf000000bf000000;
      param_2 = (float)uVar18 * (float)*(undefined8 *)(param_4 + 0x11c);
      fVar16 = (float)(uVar18 >> 0x20) * (float)((ulong)*(undefined8 *)(param_4 + 0x11c) >> 0x20);
      uVar6 = CONCAT44(fVar16,param_2);
      fVar11 = (float)uVar17 * param_2;
      fVar19 = (float)((ulong)uVar17 >> 0x20) * fVar16;
      local_a8 = CONCAT44(fVar19,fVar11);
      bVar3 = ABS(fVar11) < ABS(fVar19);
      if (!bVar3) {
        local_b0 = fStack_ac;
      }
      *(float *)((ulong)&local_a0 | (ulong)bVar3 << 2) =
           *(float *)((ulong)&local_a8 | (ulong)(byte)~bVar3 << 2) / local_b0;
      local_a0 = uVar6;
      if (DAT_09515ce9 == '\0') {
        FUN_03f5c2a4(&DAT_0918cb68);
        DAT_09515ce9 = '\x01';
        puVar7 = *(ulong **)(DAT_0918cb68 + 0xb8);
      }
      uVar18 = puVar7[1];
      fVar9 = (float)UnityEngine_Random__get_value(0);
      param_3 = 0.0;
      fVar19 = 1.0;
      if (fVar9 <= 1.0) {
        fVar19 = fVar9;
      }
      fVar11 = 0.0;
      if (0.0 <= fVar9) {
        fVar11 = fVar19;
      }
      param_2 = (float)uVar18 - param_2;
      fVar19 = param_2 * fVar11;
      fVar11 = ((float)(uVar18 >> 0x20) - fVar16) * fVar11;
LAB_0772c108:
      local_38 = CONCAT44((float)((ulong)uVar6 >> 0x20) + fVar11,(float)uVar6 + fVar19);
    }
    else {
      param_2 = *(float *)(param_4 + 0x7e4);
      fVar19 = *(float *)(param_4 + 0x7e8);
      fVar11 = (float)UnityEngine_Random__Range
                                (*(float *)(param_4 + 0x11c) * -0.5,
                                 *(float *)(param_4 + 0x11c) * 0.5,0);
      param_3 = *(float *)(param_4 + 0x120) * -0.5;
      fVar16 = (float)UnityEngine_Random__Range(param_3,*(float *)(param_4 + 0x120) * 0.5,0);
      param_2 = param_2 + fVar11;
      fVar19 = fVar19 + fVar16;
LAB_0772c0e8:
      local_38 = CONCAT44(fVar19,param_2);
    }
  }
  else if (iVar1 == 3) {
    fVar11 = *(float *)(param_4 + 0x7e4);
    param_2 = *(float *)(param_4 + 0x7e8);
    if (*(int *)(param_4 + 0x10c) == 1) {
      fVar16 = fVar8 - (float)(int)(fVar8 / 361.0) * 361.0;
      fVar19 = 361.0;
      if (fVar16 <= 361.0) {
        fVar19 = fVar16;
      }
      fVar9 = 0.0;
      if (0.0 <= fVar16) {
        fVar9 = fVar19;
      }
      param_3 = 360.0;
      fVar19 = (float)AssetKits_ParticleImage_Extensions__Remap
                                (fVar9,0,0x43b40000,*(float *)(param_4 + 0x128) * -0.5,
                                 *(float *)(param_4 + 0x128) * 0.5,0);
      param_2 = param_2 + 0.0;
      fVar11 = fVar11 + fVar19;
    }
    else {
      param_3 = *(float *)(param_4 + 0x128);
      fVar19 = (float)UnityEngine_Random__Range(param_3 * -0.5,param_3 * 0.5,0);
      fVar11 = fVar11 + fVar19;
      param_2 = param_2 + 0.0;
    }
LAB_0772c054:
    local_38 = CONCAT44(param_2,fVar11);
  }
  else if (iVar1 == 4) goto LAB_0772bdc0;
  if (*(int *)(param_4 + 0xf0) == 1) {
    lVar4 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar4 == 0) goto LAB_0772c6ec;
    fVar11 = (float)UnityEngine_Transform__get_eulerAngles(lVar4,0);
    local_90 = CONCAT44(param_2 * 0.017453292,fVar11 * 0.017453292);
    local_88 = param_3 * 0.017453292;
    param_2 = local_88;
    UnityEngine_Quaternion__Internal_FromEulerRad(&local_90,0);
    uVar12 = UnityEngine_Quaternion__op_Multiply(0);
    local_38 = CONCAT44(param_2,uVar12);
  }
  if (DAT_09515ce8 == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09515ce8 = '\x01';
  }
  iVar1 = *(int *)(param_4 + 0x108);
  fVar19 = **(float **)(DAT_0918cb68 + 0xb8);
  fVar11 = (*(float **)(DAT_0918cb68 + 0xb8))[1];
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      if (iVar1 != 1) goto LAB_0772c2f0;
      goto LAB_0772c2ac;
    }
    if (*(int *)(param_4 + 0x10c) == 1) {
      param_2 = 1.0;
      fVar19 = (float)AssetKits_ParticleImage_ParticleImage__RotateOnAngle(0);
      goto LAB_0772c2c0;
    }
    uVar12 = UnityEngine_Random__get_insideUnitCircle(0);
    puVar5 = &local_98;
    local_98 = CONCAT44(param_2,uVar12);
LAB_0772c2b0:
    fVar19 = (float)UnityEngine_Vector2__Normalize(puVar5,0);
LAB_0772c2c0:
    uVar12 = UnityEngine_Random__get_value(0);
    uVar15 = UnityEngine_Random__get_value(0);
    fVar11 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                              (uVar12,uVar15,param_4 + 0x220,0);
    fVar19 = fVar19 * fVar11;
  }
  else {
    if (iVar1 == 2) {
LAB_0772c2ac:
      puVar5 = &local_38;
      goto LAB_0772c2b0;
    }
    if (iVar1 == 3) {
      if (*(int *)(param_4 + 0xf0) == 1) {
        lVar4 = UnityEngine_Component__get_transform(param_4,0);
        if (lVar4 == 0) {
LAB_0772c6ec:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        fVar19 = (float)UnityEngine_Transform__get_up(lVar4,0);
      }
      else {
        if (DAT_09515faa == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515faa = '\x01';
        }
        fVar19 = *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x18);
        param_2 = *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x1c);
      }
      goto LAB_0772c2c0;
    }
    if (iVar1 != 4) goto LAB_0772c2f0;
    if (*(int *)(param_4 + 0xf0) == 1) {
      if (*(int *)(param_4 + 0x10c) == 1) {
        fVar8 = fVar8 - (float)(int)(fVar8 / 361.0) * 361.0;
        fVar11 = 361.0;
        if (fVar8 <= 361.0) {
          fVar11 = fVar8;
        }
        fVar19 = 0.0;
        if (0.0 <= fVar8) {
          fVar19 = fVar11;
        }
        fVar11 = 360.0;
        fVar8 = (float)AssetKits_ParticleImage_Extensions__Remap
                                 (fVar19,0,0x43b40000,*(float *)(param_4 + 0x124) * -0.5,
                                  *(float *)(param_4 + 0x124) * 0.5,0);
      }
      else {
        fVar11 = *(float *)(param_4 + 0x124);
        fVar8 = (float)UnityEngine_Random__Range(fVar11 * -0.5,fVar11 * 0.5,0);
      }
      lVar4 = UnityEngine_Component__get_transform(param_4,0);
      if (lVar4 == 0) goto LAB_0772c6ec;
      UnityEngine_Transform__get_eulerAngles(lVar4,0);
      fVar8 = fVar8 - fVar11;
    }
    else if (*(int *)(param_4 + 0x10c) == 1) {
      fVar8 = fVar8 - (float)(int)(fVar8 / 361.0) * 361.0;
      fVar11 = 361.0;
      if (fVar8 <= 361.0) {
        fVar11 = fVar8;
      }
      fVar19 = 0.0;
      if (0.0 <= fVar8) {
        fVar19 = fVar11;
      }
      fVar8 = (float)AssetKits_ParticleImage_Extensions__Remap
                               (fVar19,0,0x43b40000,*(float *)(param_4 + 0x124) * -0.5,
                                *(float *)(param_4 + 0x124) * 0.5,0);
    }
    else {
      fVar8 = (float)UnityEngine_Random__Range
                               (*(float *)(param_4 + 0x124) * -0.5,*(float *)(param_4 + 0x124) * 0.5
                                ,0);
    }
    sincosf(fVar8 * 0.017453292,&fStack_bc,&local_c0);
    uVar12 = UnityEngine_Random__get_value(0);
    uVar15 = UnityEngine_Random__get_value(0);
    fVar11 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                              (uVar12,uVar15,param_4 + 0x220,0);
    fVar19 = fStack_bc * fVar11;
    param_2 = local_c0;
  }
  fVar11 = param_2 * fVar11;
LAB_0772c2f0:
  uVar13 = UnityEngine_Random__get_value(0);
  uVar18 = local_38;
  uVar12 = local_38._4_4_;
  cVar2 = *(char *)(param_4 + 0x3d1);
  uVar15 = UnityEngine_Random__get_value(0);
  uVar14 = UnityEngine_Random__get_value(0);
  if (cVar2 == '\0') {
    uVar15 = UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(uVar15,uVar14,param_4 + 0x3d8,0);
    local_d0 = 0;
    local_cc = 0;
  }
  else {
    local_cc = UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(uVar15,uVar14,param_4 + 0x3f8,0);
    uVar15 = UnityEngine_Random__get_value(0);
    uVar14 = UnityEngine_Random__get_value(0);
    local_d0 = UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(uVar15,uVar14,param_4 + 0x418,0);
    uVar15 = UnityEngine_Random__get_value(0);
    uVar14 = UnityEngine_Random__get_value(0);
    uVar15 = UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(uVar15,uVar14,param_4 + 0x438,0);
  }
  uVar14 = UnityEngine_Random__get_value(0);
  UnityEngine_Random__get_value(0);
  UnityEngine_ParticleSystem_MinMaxGradient__Evaluate(uVar14,param_4 + 0x1c8,0);
  if (*(char *)(param_4 + 0x141) == '\0') {
    UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(uVar13,uVar13,param_4 + 0x148,0);
    UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(uVar13,uVar13,param_4 + 0x148,0);
    lVar4 = param_4 + 0x148;
    uVar14 = uVar13;
  }
  else {
    uVar14 = UnityEngine_Random__get_value(0);
    uVar13 = UnityEngine_Random__get_value(0);
    UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(uVar14,uVar13,param_4 + 0x168,0);
    uVar14 = UnityEngine_Random__get_value(0);
    uVar13 = UnityEngine_Random__get_value(0);
    UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(uVar14,uVar13,param_4 + 0x188,0);
    uVar13 = UnityEngine_Random__get_value(0);
    uVar14 = UnityEngine_Random__get_value(0);
    lVar4 = param_4 + 0x1a8;
  }
  UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(uVar13,uVar14,lVar4,0);
  uVar14 = UnityEngine_Random__get_value(0);
  uVar13 = UnityEngine_Random__get_value(0);
  UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(uVar14,uVar13,param_4 + 0x200,0);
  uVar6 = thunk_FUN_03f9944c(DAT_09188ed0);
  AssetKits_ParticleImage_Particle___ctor
            (uVar18 & 0xffffffff,uVar12,local_cc,local_d0,uVar15,fVar19,fVar11,uVar6,param_4);
  return uVar6;
}


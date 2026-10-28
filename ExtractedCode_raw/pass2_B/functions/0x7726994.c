// rea decompile_all
// name: AssetKits.ParticleImage.Particle$$Animate
// address: 0x7726994
// body: available
// range: 0x7726994-0x7727edb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7727ed8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AssetKits_ParticleImage_Particle__Animate(long param_1)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  float local_178;
  float local_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  if ((DAT_09522a32 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b3590);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09522a32 = 1;
  }
  local_b0 = 0;
  local_a8 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  memset(auStack_138,0,0x88);
  local_140 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_168 = 0;
  local_170 = 0;
  if (*(long *)(param_1 + 0x10) == 0) goto LAB_07727ed8;
  fVar24 = *(float *)(param_1 + 0x74);
  if (*(int *)(*(long *)(param_1 + 0x10) + 0xf4) == 1) {
    fVar11 = (float)UnityEngine_Time__get_deltaTime(0);
  }
  else {
    fVar11 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
  }
  fVar24 = fVar24 + fVar11;
  *(float *)(param_1 + 0x74) = fVar24;
  if (*(float *)(param_1 + 0xa8) < fVar24) {
    return;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) goto LAB_07727ed8;
  uStack_98 = *(undefined8 *)(lVar7 + 0x578);
  local_a0 = *(undefined8 *)(lVar7 + 0x570);
  uStack_88 = *(undefined8 *)(lVar7 + 0x588);
  uStack_90 = *(undefined8 *)(lVar7 + 0x580);
  uVar26 = *(undefined8 *)(param_1 + 0x28);
  uVar15 = 0;
  uVar18 = AssetKits_ParticleImage_Extensions__Remap
                     (fVar24,0,*(float *)(param_1 + 0xa8),0,0x3f800000,0);
  fVar11 = *(float *)(param_1 + 0xd0);
  fVar24 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(uVar18,fVar11,&local_a0,0);
  lVar7 = *(long *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x48) =
       CONCAT44((float)((ulong)uVar26 >> 0x20) * fVar24,(float)uVar26 * fVar24);
  if (lVar7 == 0) goto LAB_07727ed8;
  if (*(int *)(lVar7 + 0xf0) == 1) {
    if (*(long *)(param_1 + 0x98) == 0) goto LAB_07727ed8;
    uVar18 = *(undefined8 *)(param_1 + 0x18);
    fVar24 = (float)UnityEngine_Transform__InverseTransformPoint
                              (*(undefined4 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf4),
                               *(undefined4 *)(param_1 + 0xf8),*(long *)(param_1 + 0x98),0);
    if (*(long *)(param_1 + 0x98) == 0) goto LAB_07727ed8;
    fVar11 = *(float *)(param_1 + 0xf4);
    fVar21 = *(float *)(param_1 + 0xf8);
    UnityEngine_Transform__InverseTransformPoint
              (*(undefined4 *)(param_1 + 0xf0),*(long *)(param_1 + 0x98),0);
    *(ulong *)(param_1 + 0x18) =
         CONCAT44((float)((ulong)uVar18 >> 0x20) + fVar11,(float)uVar18 + fVar24);
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar7 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x10),0), lVar7 == 0))
    goto LAB_07727ed8;
    uVar12 = UnityEngine_Transform__get_rotation(lVar7,0);
    local_80 = CONCAT44(fVar11,uVar12);
    uStack_78 = CONCAT44(uVar15,fVar21);
    uVar12 = UnityEngine_Quaternion__Internal_Inverse(&local_80,0);
    local_b0 = CONCAT44(fVar11,uVar12);
    local_a8 = CONCAT44(uVar15,fVar21);
    fVar24 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(&local_b0,0);
    fVar11 = fVar11 * 57.29578;
    fVar21 = fVar21 * 57.29578;
    fVar13 = (float)UnityEngine_Quaternion__Internal_MakePositive(fVar24 * 57.29578,0);
    uStack_78 = *(undefined8 *)(param_1 + 0x104);
    local_80 = *(undefined8 *)(param_1 + 0xfc);
    fVar24 = fVar11;
    fVar22 = fVar21;
    uVar12 = UnityEngine_Quaternion__Internal_Inverse(&local_80,0);
    local_b0 = CONCAT44(fVar24,uVar12);
    local_a8 = CONCAT44(uVar15,fVar22);
    fVar14 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(&local_b0,0);
    fVar24 = fVar24 * 57.29578;
    fVar22 = fVar22 * 57.29578;
    fVar14 = (float)UnityEngine_Quaternion__Internal_MakePositive(fVar14 * 57.29578,0);
    *(float *)(param_1 + 0x10c) = fVar13 - fVar14;
    *(float *)(param_1 + 0x110) = fVar11 - fVar24;
    *(float *)(param_1 + 0x114) = fVar21 - fVar22;
    uVar15 = AssetKits_ParticleImage_Particle__RotatePointAroundCenter
                       (*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0);
    uVar12 = *(undefined4 *)(param_1 + 0x1c);
    AssetKits_ParticleImage_Particle__RotatePointAroundCenter
              (*(undefined4 *)(param_1 + 0x18),uVar12,0,*(undefined4 *)(param_1 + 0x10c),
               *(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x114));
    *(undefined4 *)(param_1 + 0x18) = uVar15;
    *(undefined4 *)(param_1 + 0x1c) = uVar12;
    uVar15 = AssetKits_ParticleImage_Particle__RotatePointAroundCenter
                       (*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),0,
                        *(undefined4 *)(param_1 + 0x10c),*(undefined4 *)(param_1 + 0x110),
                        *(undefined4 *)(param_1 + 0x114));
    fVar11 = *(float *)(param_1 + 0x2c);
    uVar12 = 0;
    uVar23 = *(undefined4 *)(param_1 + 0x10c);
    AssetKits_ParticleImage_Particle__RotatePointAroundCenter(*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = uVar15;
    *(float *)(param_1 + 0x2c) = fVar11;
    if (*(long *)(param_1 + 0x98) == 0) goto LAB_07727ed8;
    uVar15 = UnityEngine_Transform__get_position(*(long *)(param_1 + 0x98),0);
    *(undefined4 *)(param_1 + 0xf0) = uVar15;
    *(float *)(param_1 + 0xf4) = fVar11;
    *(undefined4 *)(param_1 + 0xf8) = uVar12;
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar7 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x10),0), lVar7 == 0))
    goto LAB_07727ed8;
    uVar15 = UnityEngine_Transform__get_rotation(lVar7,0);
    lVar7 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0xfc) = uVar15;
    *(float *)(param_1 + 0x100) = fVar11;
    *(undefined4 *)(param_1 + 0x104) = uVar12;
    *(undefined4 *)(param_1 + 0x108) = uVar23;
    if (lVar7 == 0) goto LAB_07727ed8;
  }
  if (*(char *)(lVar7 + 0x5ef) != '\0') {
    if (*(int *)(lVar7 + 0x5f0) == 1) {
      memcpy(auStack_138,(void *)(lVar7 + 0x5f8),0x88);
      uVar18 = AssetKits_ParticleImage_Extensions__Remap
                         (*(undefined4 *)(param_1 + 0x74),0,*(undefined4 *)(param_1 + 0xa8),0,
                          0x3f800000,0);
      uVar15 = UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                         (uVar18,*(undefined4 *)(param_1 + 200),auStack_110,0);
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_07727ed8;
      memcpy(auStack_138,(void *)(*(long *)(param_1 + 0x10) + 0x5f8),0x88);
      uVar23 = 0;
      fVar11 = *(float *)(param_1 + 0xa8);
      AssetKits_ParticleImage_Extensions__Remap
                (*(undefined4 *)(param_1 + 0x74),0,fVar11,0,0x3f800000,0);
      fVar24 = *(float *)(param_1 + 0xcc);
      uVar12 = UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(auStack_f0,0);
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar7 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x10),0), lVar7 == 0))
      goto LAB_07727ed8;
      uVar16 = UnityEngine_Transform__get_rotation(lVar7,0);
      local_80 = CONCAT44(fVar24,uVar16);
      uStack_78 = CONCAT44(uVar23,fVar11);
      uVar16 = UnityEngine_Quaternion__Internal_Inverse(&local_80,0);
      local_b0 = CONCAT44(fVar24,uVar16);
      local_a8 = CONCAT44(uVar23,fVar11);
      fVar21 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(&local_b0,0);
      uVar5 = (ulong)(uint)(fVar24 * 57.29578);
      fVar11 = fVar11 * 57.29578;
      uVar23 = UnityEngine_Quaternion__Internal_MakePositive(fVar21 * 57.29578,uVar5,fVar11,0);
      uVar15 = AssetKits_ParticleImage_Particle__RotatePointAroundCenter
                         (uVar15,uVar12,0,uVar23,uVar5 & 0xffffffff,fVar11);
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_07727ed8;
      memcpy(auStack_138,(void *)(*(long *)(param_1 + 0x10) + 0x5f8),0x88);
      uVar18 = AssetKits_ParticleImage_Extensions__Remap
                         (*(undefined4 *)(param_1 + 0x74),0,*(undefined4 *)(param_1 + 0xa8),0,
                          0x3f800000,0);
      uVar12 = UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                         (uVar18,*(undefined4 *)(param_1 + 200),auStack_110,0);
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_07727ed8;
      memcpy(auStack_138,(void *)(*(long *)(param_1 + 0x10) + 0x5f8),0x88);
      uVar23 = 0;
      fVar21 = *(float *)(param_1 + 0xa8);
      AssetKits_ParticleImage_Extensions__Remap
                (*(undefined4 *)(param_1 + 0x74),0,fVar21,0,0x3f800000,0);
      fVar24 = *(float *)(param_1 + 0xcc);
      fVar11 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(auStack_f0,0);
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar7 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x10),0), lVar7 == 0))
      goto LAB_07727ed8;
      uVar16 = UnityEngine_Transform__get_rotation(lVar7,0);
      local_80 = CONCAT44(fVar24,uVar16);
      uStack_78 = CONCAT44(uVar23,fVar21);
      uVar16 = UnityEngine_Quaternion__Internal_Inverse(&local_80,0);
      local_b0 = CONCAT44(fVar24,uVar16);
      local_a8 = CONCAT44(uVar23,fVar21);
      fVar22 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(&local_b0,0);
      uVar5 = (ulong)(uint)(fVar24 * 57.29578);
      fVar21 = fVar21 * 57.29578;
      uVar23 = UnityEngine_Quaternion__Internal_MakePositive(fVar22 * 57.29578,uVar5,fVar21,0);
      AssetKits_ParticleImage_Particle__RotatePointAroundCenter
                (uVar12,fVar11,0,uVar23,uVar5 & 0xffffffff,fVar21);
      *(undefined4 *)(param_1 + 0x38) = uVar15;
      *(float *)(param_1 + 0x3c) = fVar11;
    }
    else {
      bVar1 = *(byte *)(lVar7 + 0x5f9);
      memcpy(auStack_138,(void *)(lVar7 + 0x5f8),0x88);
      uVar18 = AssetKits_ParticleImage_Extensions__Remap
                         (*(undefined4 *)(param_1 + 0x74),0,*(undefined4 *)(param_1 + 0xa8),0,
                          0x3f800000,0);
      fVar11 = *(float *)(param_1 + 200);
      if ((bVar1 & 1) == 0) {
        uVar15 = UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(uVar18,fVar11,auStack_130,0);
        *(undefined4 *)(param_1 + 0x3c) = 0;
        *(undefined4 *)(param_1 + 0x38) = uVar15;
      }
      else {
        uVar15 = UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(uVar18,fVar11,auStack_110,0);
        if (*(long *)(param_1 + 0x10) == 0) goto LAB_07727ed8;
        memcpy(auStack_138,(void *)(*(long *)(param_1 + 0x10) + 0x5f8),0x88);
        uVar18 = AssetKits_ParticleImage_Extensions__Remap
                           (*(undefined4 *)(param_1 + 0x74),0,*(undefined4 *)(param_1 + 0xa8),0,
                            0x3f800000,0);
        fVar11 = *(float *)(param_1 + 0xcc);
        uVar12 = UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(uVar18,fVar11,auStack_f0,0);
        *(undefined4 *)(param_1 + 0x38) = uVar15;
        *(undefined4 *)(param_1 + 0x3c) = uVar12;
      }
    }
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == 0) goto LAB_07727ed8;
  if (*(char *)(lVar7 + 0x5ed) != '\0') {
    uStack_98 = *(undefined8 *)(lVar7 + 0x5a0);
    local_a0 = *(undefined8 *)(lVar7 + 0x598);
    uStack_88 = *(undefined8 *)(lVar7 + 0x5b0);
    uStack_90 = *(undefined8 *)(lVar7 + 0x5a8);
    fVar11 = *(float *)(param_1 + 0xa8);
    uVar18 = *(undefined8 *)(param_1 + 0x40);
    uVar12 = 0;
    AssetKits_ParticleImage_Extensions__Remap
              (*(undefined4 *)(param_1 + 0x74),0,fVar11,0,0x3f800000,0);
    fVar24 = *(float *)(param_1 + 0xbc);
    uVar15 = UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(&local_a0,0);
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar7 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x10),0), lVar7 == 0))
    goto LAB_07727ed8;
    uVar23 = UnityEngine_Transform__get_rotation(lVar7,0);
    local_80 = CONCAT44(fVar24,uVar23);
    uStack_78 = CONCAT44(uVar12,fVar11);
    uVar23 = UnityEngine_Quaternion__Internal_Inverse(&local_80,0);
    local_b0 = CONCAT44(fVar24,uVar23);
    local_a8 = CONCAT44(uVar12,fVar11);
    fVar21 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(&local_b0,0);
    uVar5 = (ulong)(uint)(fVar24 * 57.29578);
    fVar11 = fVar11 * 57.29578;
    uVar12 = UnityEngine_Quaternion__Internal_MakePositive(fVar21 * 57.29578,uVar5,fVar11,0);
    fVar11 = (float)AssetKits_ParticleImage_Particle__RotatePointAroundCenter
                              (0,uVar15,0,uVar12,uVar5 & 0xffffffff,fVar11);
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) goto LAB_07727ed8;
    uStack_98 = *(undefined8 *)(lVar7 + 0x5a0);
    local_a0 = *(undefined8 *)(lVar7 + 0x598);
    uStack_88 = *(undefined8 *)(lVar7 + 0x5b0);
    uStack_90 = *(undefined8 *)(lVar7 + 0x5a8);
    fVar22 = *(float *)(param_1 + 0xa8);
    uVar15 = 0;
    AssetKits_ParticleImage_Extensions__Remap
              (*(undefined4 *)(param_1 + 0x74),0,fVar22,0,0x3f800000,0);
    fVar21 = *(float *)(param_1 + 0xbc);
    fVar24 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate(&local_a0,0);
    if ((*(long *)(param_1 + 0x10) == 0) ||
       (lVar7 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x10),0), lVar7 == 0))
    goto LAB_07727ed8;
    uVar12 = UnityEngine_Transform__get_rotation(lVar7,0);
    local_80 = CONCAT44(fVar21,uVar12);
    uStack_78 = CONCAT44(uVar15,fVar22);
    uVar12 = UnityEngine_Quaternion__Internal_Inverse(&local_80,0);
    local_b0 = CONCAT44(fVar21,uVar12);
    local_a8 = CONCAT44(uVar15,fVar22);
    fVar13 = (float)UnityEngine_Quaternion__Internal_ToEulerRad(&local_b0,0);
    uVar5 = (ulong)(uint)(fVar21 * 57.29578);
    fVar22 = fVar22 * 57.29578;
    uVar15 = UnityEngine_Quaternion__Internal_MakePositive(fVar13 * 57.29578,uVar5,fVar22,0);
    AssetKits_ParticleImage_Particle__RotatePointAroundCenter
              (0,fVar24,0,uVar15,uVar5 & 0xffffffff,fVar22);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_07727ed8;
    if (*(int *)(*(long *)(param_1 + 0x10) + 0xf4) == 1) {
      fVar21 = (float)UnityEngine_Time__get_deltaTime(0);
    }
    else {
      fVar21 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
    }
    lVar7 = *(long *)(param_1 + 0x10);
    *(ulong *)(param_1 + 0x40) =
         CONCAT44((float)((ulong)uVar18 >> 0x20) + fVar24 * fVar21,(float)uVar18 + fVar11 * fVar21);
    if (lVar7 == 0) goto LAB_07727ed8;
  }
  if (*(char *)(lVar7 + 0x5ec) == '\0') {
    uVar18 = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    lVar9 = *(long *)(lVar7 + 0x7f0);
    if (*(int *)(lVar7 + 0xf0) == 0) {
      if (lVar9 == 0) goto LAB_07727ed8;
      fVar24 = *(float *)(param_1 + 0x20);
      fVar21 = *(float *)(param_1 + 0x24);
    }
    else {
      fVar24 = *(float *)(param_1 + 0x20);
      lVar7 = UnityEngine_Component__get_transform(lVar7,0);
      if (lVar7 == 0) goto LAB_07727ed8;
      fVar22 = (float)UnityEngine_Transform__get_localPosition(lVar7,0);
      if ((*(long *)(param_1 + 0x10) == 0) ||
         (lVar7 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x10),0), lVar7 == 0))
      goto LAB_07727ed8;
      UnityEngine_Transform__get_localPosition(lVar7,0);
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_07727ed8;
      fVar21 = *(float *)(param_1 + 0x24);
      lVar7 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x10),0);
      if (lVar7 == 0) goto LAB_07727ed8;
      UnityEngine_Transform__get_localPosition(lVar7,0);
      if (((*(long *)(param_1 + 0x10) == 0) ||
          (lVar7 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0x10),0), lVar7 == 0))
         || (UnityEngine_Transform__get_localPosition(lVar7,0), lVar9 == 0)) goto LAB_07727ed8;
      fVar24 = fVar24 + fVar22;
      fVar21 = fVar21 + fVar11;
    }
    fVar24 = (float)AssetKits_ParticleImage_Noise__GetNoise(fVar24,fVar21,lVar9);
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) goto LAB_07727ed8;
    sincosf(fVar24 * 3.1415927,&local_174,&local_178);
    uVar18 = CONCAT44((float)((ulong)_local_178 >> 0x20) * *(float *)(lVar7 + 0x800),
                      (float)_local_178 * *(float *)(lVar7 + 0x800));
    *(undefined8 *)(param_1 + 0x30) = uVar18;
  }
  uVar26 = *(undefined8 *)(param_1 + 0x40);
  uVar27 = *(undefined8 *)(param_1 + 0x18);
  fVar24 = (float)*(undefined8 *)(param_1 + 0x48) +
           (float)*(undefined8 *)(param_1 + 0x38) + (float)uVar18 + (float)uVar26;
  fVar11 = (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20) +
           (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20) + (float)((ulong)uVar18 >> 0x20)
           + (float)((ulong)uVar26 >> 0x20);
  *(ulong *)(param_1 + 0x48) = CONCAT44(fVar11,fVar24);
  if (*(int *)(lVar7 + 0xf4) == 1) {
    fVar21 = (float)UnityEngine_Time__get_deltaTime(0);
    uVar15 = (undefined4)uVar26;
  }
  else {
    fVar21 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
    uVar15 = (undefined4)uVar26;
  }
  fVar22 = 100.0;
  lVar7 = *(long *)(param_1 + 0x10);
  fVar11 = (float)((ulong)uVar27 >> 0x20) + fVar11 * fVar21 * 100.0;
  uVar18 = CONCAT44(fVar11,(float)uVar27 + fVar24 * fVar21 * 100.0);
  *(undefined8 *)(param_1 + 0x18) = uVar18;
  if (lVar7 == 0) goto LAB_07727ed8;
  if (*(char *)(lVar7 + 0x5ee) != '\0') {
    uStack_98 = *(undefined8 *)(lVar7 + 0x688);
    local_a0 = *(undefined8 *)(lVar7 + 0x680);
    uStack_88 = *(undefined8 *)(lVar7 + 0x698);
    uStack_90 = *(undefined8 *)(lVar7 + 0x690);
    uVar26 = AssetKits_ParticleImage_Extensions__Remap
                       (*(undefined4 *)(param_1 + 0x74),0,*(undefined4 *)(param_1 + 0xa8),0,
                        0x3f800000,0);
    fVar24 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                              (uVar26,*(undefined4 *)(param_1 + 0xc0),&local_a0,0);
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_07727ed8;
    if (*(int *)(*(long *)(param_1 + 0x10) + 0xf4) == 1) {
      fVar21 = (float)UnityEngine_Time__get_deltaTime(0);
    }
    else {
      fVar21 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
    }
    uVar15 = 0;
    fVar22 = fVar11;
    uVar12 = AssetKits_ParticleImage_Particle__RotatePointAroundCenter
                       (uVar18,fVar11,0,0,0,fVar24 * fVar21 * 100.0);
    lVar7 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x18) = uVar12;
    *(float *)(param_1 + 0x1c) = fVar22;
    if (lVar7 == 0) goto LAB_07727ed8;
  }
  uVar18 = *(undefined8 *)(lVar7 + 0x5c0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar18,0);
  if ((uVar5 & 1) == 0) {
LAB_077275f0:
    uVar18 = *(undefined8 *)(param_1 + 0x18);
    fVar24 = (float)uVar18;
    *(undefined8 *)(param_1 + 0x20) = uVar18;
    fVar11 = (float)((ulong)uVar18 >> 0x20);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) goto LAB_07727ed8;
    if (*(char *)(lVar7 + 0x5b8) == '\0') goto LAB_077275f0;
    if (DAT_09515ce6 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      lVar7 = *(long *)(param_1 + 0x10);
      DAT_09515ce6 = '\x01';
      if (lVar7 == 0) goto LAB_07727ed8;
    }
    plVar6 = *(long **)(lVar7 + 0x5c0);
    if (plVar6 == (long *)0x0) goto LAB_07727ed8;
    if (*plVar6 == DAT_09189c98) {
      lVar7 = *(long *)(param_1 + 0x98);
      UnityEngine_Transform__get_position(plVar6,0);
      if (lVar7 == 0) goto LAB_07727ed8;
      fVar21 = (float)UnityEngine_Transform__InverseTransformPoint(lVar7,0);
    }
    else {
      UnityEngine_Transform__get_position(plVar6,0);
      uVar12 = AssetKits_ParticleImage_ParticleImage__WorldToViewportPoint(lVar7);
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 == 0) goto LAB_07727ed8;
      *(undefined4 *)(lVar7 + 0x5e8) = 0;
      lVar7 = UnityEngine_UI_Graphic__get_canvas(lVar7,0);
      if (lVar7 == 0) goto LAB_07727ed8;
      iVar4 = UnityEngine_Canvas__get_renderMode(lVar7,0);
      lVar7 = *(long *)(param_1 + 0x10);
      if (iVar4 == 1) {
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0xe8) == 0)) goto LAB_07727ed8;
        UnityEngine_RectTransform__get_rect(*(long *)(lVar7 + 0xe8),0);
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar23 = 0;
        fVar24 = (float)AssetKits_ParticleImage_Extensions__Remap
                                  (uVar12,0x3f000000,0x3fc00000,0,uVar15,0);
        if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x98) == 0)) goto LAB_07727ed8;
        lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xe8);
        UnityEngine_Transform__get_position(*(long *)(param_1 + 0x98),0);
        if (lVar7 == 0) goto LAB_07727ed8;
        fVar11 = (float)UnityEngine_Transform__InverseTransformPoint(lVar7,0);
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xe8), lVar7 == 0)) goto LAB_07727ed8;
        fVar13 = (float)UnityEngine_Transform__get_localPosition(lVar7,0);
        if (*(long *)(param_1 + 0x98) == 0) goto LAB_07727ed8;
        fVar14 = (float)UnityEngine_Transform__get_lossyScale(*(long *)(param_1 + 0x98),0);
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xe8), lVar7 == 0)) goto LAB_07727ed8;
        fVar21 = (float)UnityEngine_Transform__get_localScale(lVar7,0);
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xe8), lVar7 == 0)) goto LAB_07727ed8;
        UnityEngine_RectTransform__get_rect(lVar7,0);
        fVar25 = 0.5;
        fVar17 = (float)AssetKits_ParticleImage_Extensions__Remap
                                  (fVar22,0x3f000000,0x3fc00000,0,uVar23,0);
        if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x98) == 0)) goto LAB_07727ed8;
        lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xe8);
        UnityEngine_Transform__get_position(*(long *)(param_1 + 0x98),0);
        if (lVar7 == 0) goto LAB_07727ed8;
        UnityEngine_Transform__InverseTransformPoint(lVar7,0);
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xe8), lVar7 == 0)) goto LAB_07727ed8;
        fVar19 = fVar25;
        UnityEngine_Transform__get_localPosition(lVar7,0);
        if (*(long *)(param_1 + 0x98) == 0) goto LAB_07727ed8;
        fVar22 = fVar19;
        UnityEngine_Transform__get_lossyScale(*(long *)(param_1 + 0x98),0);
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xe8), lVar7 == 0)) goto LAB_07727ed8;
        fVar20 = fVar22;
        UnityEngine_Transform__get_localScale(lVar7,0);
        fVar22 = ((fVar17 - fVar25) + fVar19) / fVar22;
        fVar21 = (((fVar24 - fVar11) + fVar13) / fVar14) * fVar21;
      }
      else {
        if ((lVar7 == 0) || (*(long *)(lVar7 + 0xe8) == 0)) goto LAB_07727ed8;
        UnityEngine_RectTransform__get_rect(*(long *)(lVar7 + 0xe8),0);
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar23 = 0;
        fVar24 = (float)AssetKits_ParticleImage_Extensions__Remap
                                  (uVar12,0x3f000000,0x3fc00000,0,uVar15,0);
        if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x98) == 0)) goto LAB_07727ed8;
        lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xe8);
        UnityEngine_Transform__get_position(*(long *)(param_1 + 0x98),0);
        if (lVar7 == 0) goto LAB_07727ed8;
        fVar11 = (float)UnityEngine_Transform__InverseTransformPoint(lVar7,0);
        if (*(long *)(param_1 + 0x98) == 0) goto LAB_07727ed8;
        fVar13 = (float)UnityEngine_Transform__get_lossyScale(*(long *)(param_1 + 0x98),0);
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xe8), lVar7 == 0)) goto LAB_07727ed8;
        fVar21 = (float)UnityEngine_Transform__get_localScale(lVar7,0);
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xe8), lVar7 == 0)) goto LAB_07727ed8;
        UnityEngine_RectTransform__get_rect(lVar7,0);
        fVar17 = 0.5;
        fVar14 = (float)AssetKits_ParticleImage_Extensions__Remap
                                  (fVar22,0x3f000000,0x3fc00000,0,uVar23,0);
        if ((*(long *)(param_1 + 0x10) == 0) || (*(long *)(param_1 + 0x98) == 0)) goto LAB_07727ed8;
        lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xe8);
        UnityEngine_Transform__get_position(*(long *)(param_1 + 0x98),0);
        if (lVar7 == 0) goto LAB_07727ed8;
        UnityEngine_Transform__InverseTransformPoint(lVar7,0);
        if (*(long *)(param_1 + 0x98) == 0) goto LAB_07727ed8;
        fVar22 = fVar17;
        UnityEngine_Transform__get_lossyScale(*(long *)(param_1 + 0x98),0);
        if ((*(long *)(param_1 + 0x10) == 0) ||
           (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xe8), lVar7 == 0)) goto LAB_07727ed8;
        fVar20 = fVar22;
        UnityEngine_Transform__get_localScale(lVar7,0);
        fVar22 = (fVar14 - fVar17) / fVar22;
        fVar21 = ((fVar24 - fVar11) / fVar13) * fVar21;
      }
      fVar22 = fVar22 * fVar20;
    }
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 == 0) goto LAB_07727ed8;
    if (*(int *)(lVar7 + 0x5e8) == 0) {
      uStack_98 = *(undefined8 *)(lVar7 + 0x5d0);
      local_a0 = *(undefined8 *)(lVar7 + 0x5c8);
      uStack_88 = *(undefined8 *)(lVar7 + 0x5e0);
      uStack_90 = *(undefined8 *)(lVar7 + 0x5d8);
      fVar24 = *(float *)(param_1 + 0x18);
      fVar11 = *(float *)(param_1 + 0x1c);
      uVar18 = AssetKits_ParticleImage_Extensions__Remap
                         (*(undefined4 *)(param_1 + 0x74),0,*(undefined4 *)(param_1 + 0xa8),0,
                          0x3f800000,0);
      fVar13 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                                (uVar18,*(undefined4 *)(param_1 + 0xb8),&local_a0,0);
      fVar24 = fVar24 + (fVar21 - fVar24) * fVar13;
      fVar11 = fVar11 + (fVar22 - fVar11) * fVar13;
    }
    else {
      plVar6 = *(long **)(lVar7 + 0x5c0);
      if ((plVar6 == (long *)0x0) || (*plVar6 != DAT_09189c98)) goto LAB_07727ed8;
      fVar24 = *(float *)(param_1 + 0x18);
      fVar11 = *(float *)(param_1 + 0x1c);
      uVar15 = *(undefined4 *)(param_1 + 0xe8);
      fVar13 = (float)UnityEngine_RectTransform__get_sizeDelta(plVar6,0);
      fVar14 = (float)UnityEngine_RectTransform__get_sizeDelta(plVar6,0);
      fVar17 = 0.0;
      fVar14 = (float)AssetKits_ParticleImage_Extensions__Remap
                                (uVar15,0,0x3f800000,fVar13 * -0.5,fVar14 * 0.5,0);
      uVar15 = *(undefined4 *)(param_1 + 0xec);
      UnityEngine_RectTransform__get_sizeDelta(plVar6,0);
      fVar13 = fVar17;
      UnityEngine_RectTransform__get_sizeDelta(plVar6,0);
      fVar13 = (float)AssetKits_ParticleImage_Extensions__Remap
                                (uVar15,0,0x3f800000,fVar17 * -0.5,fVar13 * 0.5,0);
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 == 0) goto LAB_07727ed8;
      uStack_98 = *(undefined8 *)(lVar7 + 0x5d0);
      local_a0 = *(undefined8 *)(lVar7 + 0x5c8);
      uStack_88 = *(undefined8 *)(lVar7 + 0x5e0);
      uStack_90 = *(undefined8 *)(lVar7 + 0x5d8);
      uVar18 = AssetKits_ParticleImage_Extensions__Remap
                         (*(undefined4 *)(param_1 + 0x74),0,*(undefined4 *)(param_1 + 0xa8),0,
                          0x3f800000,0);
      fVar17 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                                (uVar18,*(undefined4 *)(param_1 + 0xb8),&local_a0,0);
      fVar24 = fVar24 + ((fVar21 + fVar14) - fVar24) * fVar17;
      fVar11 = fVar11 + ((fVar22 + fVar13) - fVar11) * fVar17;
    }
    *(float *)(param_1 + 0x20) = fVar24;
    *(float *)(param_1 + 0x24) = fVar11;
  }
  fVar21 = *(float *)(param_1 + 0x118);
  lVar7 = *(long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x118) = *(undefined8 *)(param_1 + 0x20);
  *(float *)(param_1 + 0x120) = fVar24 - fVar21;
  *(float *)(param_1 + 0x124) = fVar11 - *(float *)(param_1 + 0x11c);
  cVar3 = DAT_09516ea4;
  if (lVar7 == 0) goto LAB_07727ed8;
  if ((*(char *)(lVar7 + 0x728) != '\0') &&
     (*(float *)(param_1 + 0xd8) <= *(float *)(lVar7 + 0x7cc))) {
    fVar11 = *(float *)(param_1 + 300) - fVar11;
    fVar24 = *(float *)(param_1 + 0x128) - (float)*(undefined8 *)(param_1 + 0x20);
    *(float *)(param_1 + 0x134) = fVar11;
    *(float *)(param_1 + 0x130) = fVar24;
    if (cVar3 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      fVar24 = *(float *)(param_1 + 0x130);
      fVar11 = *(float *)(param_1 + 0x134);
      DAT_09516ea4 = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(long *)(param_1 + 0x10) == 0) goto LAB_07727ed8;
    if (*(float *)(*(long *)(param_1 + 0x10) + 0x754) < SQRT(fVar24 * fVar24 + fVar11 * fVar11)) {
      uVar5 = *(ulong *)(param_1 + 0x20);
      lVar9 = *(long *)(param_1 + 0x158);
      *(ulong *)(param_1 + 0x128) = uVar5;
      lVar7 = DAT_091b3590;
      if (lVar9 == 0) goto LAB_07727ed8;
      lVar8 = *(long *)(lVar9 + 0x10);
      uVar15 = *(undefined4 *)(param_1 + 0x74);
      *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
      if (lVar8 == 0) goto LAB_07727ed8;
      uVar2 = *(uint *)(lVar9 + 0x18);
      if (uVar2 < *(uint *)(lVar8 + 0x18)) {
        lVar8 = lVar8 + (long)(int)uVar2 * 0xc;
        *(uint *)(lVar9 + 0x18) = uVar2 + 1;
        *(int *)(lVar8 + 0x20) = (int)uVar5;
        *(int *)(lVar8 + 0x24) = (int)(uVar5 >> 0x20);
        *(undefined4 *)(lVar8 + 0x28) = uVar15;
      }
      else {
        FUN_0596f08c(uVar5 & 0xffffffff,uVar5 >> 0x20,lVar9,
                     *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    uStack_168 = *(undefined8 *)(lVar7 + 0x248);
    local_170 = *(undefined8 *)(lVar7 + 0x240);
    uStack_158 = *(undefined8 *)(lVar7 + 600);
    local_160 = *(undefined8 *)(lVar7 + 0x250);
    fVar22 = 0.0;
    uStack_148 = *(undefined8 *)(lVar7 + 0x268);
    local_150 = *(undefined8 *)(lVar7 + 0x260);
    local_140 = *(undefined8 *)(lVar7 + 0x270);
    fVar21 = *(float *)(param_1 + 0xa8);
    AssetKits_ParticleImage_Extensions__Remap
              (*(undefined4 *)(param_1 + 0x74),0,fVar21,0,0x3f800000,0);
    fVar11 = *(float *)(param_1 + 0xb0);
    fVar24 = (float)UnityEngine_ParticleSystem_MinMaxGradient__Evaluate(&local_170,0);
    if (DAT_09516ea4 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09516ea4 = '\x01';
    }
    fVar13 = *(float *)(param_1 + 0x120);
    fVar14 = *(float *)(param_1 + 0x124);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar17 = (float)UnityEngine_Time__get_deltaTime(0);
    lVar7 = *(long *)(param_1 + 0x10);
    if (lVar7 != 0) {
      local_140 = *(undefined8 *)(lVar7 + 0x2a8);
      uStack_148 = *(undefined8 *)(lVar7 + 0x2a0);
      local_150 = *(undefined8 *)(lVar7 + 0x298);
      fVar20 = 0.0;
      fVar25 = (SQRT(fVar13 * fVar13 + fVar14 * fVar14) * (1.0 / fVar17)) / 100.0;
      uVar26 = *(undefined8 *)(param_1 + 0x90);
      uVar18 = *(undefined8 *)(param_1 + 0x88);
      fVar17 = *(float *)(lVar7 + 0x2b4);
      uStack_168 = *(undefined8 *)(lVar7 + 0x280);
      local_170 = *(undefined8 *)(lVar7 + 0x278);
      uStack_158 = *(undefined8 *)(lVar7 + 0x290);
      local_160 = *(undefined8 *)(lVar7 + 0x288);
      fVar14 = *(float *)(lVar7 + 0x2b0);
      AssetKits_ParticleImage_Extensions__Remap(fVar25,0);
      fVar13 = (float)UnityEngine_ParticleSystem_MinMaxGradient__Evaluate(&local_170,0);
      cVar3 = DAT_09515cf3;
      *(ulong *)(param_1 + 0x80) =
           CONCAT44(fVar22 * (float)((ulong)uVar26 >> 0x20) * fVar20,fVar21 * (float)uVar26 * fVar17
                   );
      *(ulong *)(param_1 + 0x78) =
           CONCAT44(fVar11 * (float)((ulong)uVar18 >> 0x20) * fVar14,fVar24 * (float)uVar18 * fVar13
                   );
      if (cVar3 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf3 = '\x01';
      }
      lVar7 = *(long *)(param_1 + 0x10);
      if (lVar7 != 0) {
        bVar1 = *(byte *)(lVar7 + 0x2b9);
        memcpy(auStack_138,(void *)(lVar7 + 0x2b8),0x88);
        uVar18 = AssetKits_ParticleImage_Extensions__Remap
                           (*(undefined4 *)(param_1 + 0x74),0,*(undefined4 *)(param_1 + 0xa8),0,
                            0x3f800000,0);
        if ((bVar1 & 1) == 0) {
          puVar10 = auStack_130;
          fVar24 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                                    (uVar18,*(undefined4 *)(param_1 + 0xac),puVar10,0);
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_07727ed8;
          memcpy(auStack_138,(void *)(*(long *)(param_1 + 0x10) + 0x2b8),0x88);
          uVar18 = AssetKits_ParticleImage_Extensions__Remap
                             (*(undefined4 *)(param_1 + 0x74),0,*(undefined4 *)(param_1 + 0xa8),0,
                              0x3f800000,0);
          fVar11 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                                    (uVar18,*(undefined4 *)(param_1 + 0xac),puVar10,0);
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_07727ed8;
          memcpy(auStack_138,(void *)(*(long *)(param_1 + 0x10) + 0x2b8),0x88);
        }
        else {
          fVar24 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                                    (uVar18,*(undefined4 *)(param_1 + 0xac),auStack_110,0);
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_07727ed8;
          memcpy(auStack_138,(void *)(*(long *)(param_1 + 0x10) + 0x2b8),0x88);
          uVar18 = AssetKits_ParticleImage_Extensions__Remap
                             (*(undefined4 *)(param_1 + 0x74),0,*(undefined4 *)(param_1 + 0xa8),0,
                              0x3f800000,0);
          fVar11 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                                    (uVar18,*(undefined4 *)(param_1 + 0xac),auStack_f0,0);
          if (*(long *)(param_1 + 0x10) == 0) goto LAB_07727ed8;
          memcpy(auStack_138,(void *)(*(long *)(param_1 + 0x10) + 0x2b8),0x88);
          puVar10 = auStack_d0;
        }
        uVar18 = AssetKits_ParticleImage_Extensions__Remap
                           (*(undefined4 *)(param_1 + 0x74),0,*(undefined4 *)(param_1 + 0xa8),0,
                            0x3f800000,0);
        fVar21 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                                  (uVar18,*(undefined4 *)(param_1 + 0xac),puVar10,0);
        if (DAT_09515cf3 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515cf3 = '\x01';
        }
        lVar7 = *(long *)(param_1 + 0x10);
        if (lVar7 != 0) {
          bVar1 = *(byte *)(lVar7 + 0x341);
          memcpy(auStack_138,(void *)(lVar7 + 0x340),0x88);
          uVar18 = AssetKits_ParticleImage_Extensions__Remap
                             (fVar25,*(undefined4 *)(lVar7 + 0x3c8),*(undefined4 *)(lVar7 + 0x3cc),0
                              ,0x3f800000,0);
          if ((bVar1 & 1) == 0) {
            puVar10 = auStack_130;
            fVar22 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                                      (uVar18,*(undefined4 *)(param_1 + 0xac),puVar10,0);
            lVar7 = *(long *)(param_1 + 0x10);
            if (lVar7 != 0) {
              memcpy(auStack_138,(void *)(lVar7 + 0x340),0x88);
              uVar18 = AssetKits_ParticleImage_Extensions__Remap
                                 (fVar25,*(undefined4 *)(lVar7 + 0x3c8),
                                  *(undefined4 *)(lVar7 + 0x3cc),0,0x3f800000,0);
              fVar13 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                                        (uVar18,*(undefined4 *)(param_1 + 0xac),puVar10,0);
              lVar7 = *(long *)(param_1 + 0x10);
              if (lVar7 != 0) {
                memcpy(auStack_138,(void *)(lVar7 + 0x340),0x88);
LAB_07727e50:
                uVar18 = AssetKits_ParticleImage_Extensions__Remap
                                   (fVar25,*(undefined4 *)(lVar7 + 0x3c8),
                                    *(undefined4 *)(lVar7 + 0x3cc),0,0x3f800000,0);
                fVar14 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                                          (uVar18,*(undefined4 *)(param_1 + 0xac),puVar10,0);
                *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x5c);
                *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 100);
                *(float *)(param_1 + 0x68) = fVar22 * fVar24 * *(float *)(param_1 + 0x68);
                *(float *)(param_1 + 0x6c) = fVar13 * fVar11 * *(float *)(param_1 + 0x6c);
                *(float *)(param_1 + 0x70) = fVar14 * fVar21 * *(float *)(param_1 + 0x70);
                return;
              }
            }
          }
          else {
            fVar22 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                                      (uVar18,*(undefined4 *)(param_1 + 0xac),auStack_110,0);
            lVar7 = *(long *)(param_1 + 0x10);
            if (lVar7 != 0) {
              memcpy(auStack_138,(void *)(lVar7 + 0x340),0x88);
              uVar18 = AssetKits_ParticleImage_Extensions__Remap
                                 (fVar25,*(undefined4 *)(lVar7 + 0x3c8),
                                  *(undefined4 *)(lVar7 + 0x3cc),0,0x3f800000,0);
              fVar13 = (float)UnityEngine_ParticleSystem_MinMaxCurve__Evaluate
                                        (uVar18,*(undefined4 *)(param_1 + 0xac),auStack_f0,0);
              lVar7 = *(long *)(param_1 + 0x10);
              if (lVar7 != 0) {
                memcpy(auStack_138,(void *)(lVar7 + 0x340),0x88);
                puVar10 = auStack_d0;
                goto LAB_07727e50;
              }
            }
          }
        }
      }
    }
  }
LAB_07727ed8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


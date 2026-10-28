// rea decompile_all
// name: ChocDino.UIFX.TrailEffectTMP$$InterpolateTrail
// address: 0x43b7c1c
// body: available
// range: 0x43b7c1c-0x43b80a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b809c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43b80a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TrailEffectTMP__InterpolateTrail(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar18;
  undefined1 extraout_q0 [16];
  undefined1 extraout_q0_00 [16];
  undefined1 extraout_q0_01 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar19;
  undefined1 auVar17 [16];
  undefined1 extraout_q0_02 [16];
  ulong uVar20;
  ulong uVar21;
  undefined1 auVar22 [16];
  ulong uVar23;
  undefined8 uVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  float fVar33;
  float local_100;
  float fStack_fc;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  if ((DAT_09517b3f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b3f30);
    FUN_03f5c2a4(&DAT_0918bff0);
    DAT_09517b3f = 1;
  }
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  ChocDino_UIFX_TrailEffectBase__get_DeltaTime(0);
  fVar12 = (float)ChocDino_UIFX_MathUtils__GetDampLerpFactor(0);
  ChocDino_UIFX_TrailEffectBase__get_DeltaTime(0);
  fVar13 = (float)ChocDino_UIFX_MathUtils__GetDampLerpFactor(0);
  uVar20 = NEON_fmov(0x3f800000,4);
  fVar33 = (float)(uVar20 >> 0x20);
  iVar11 = -(uint)(fVar13 < 0.0);
  iVar3 = -(uint)(fVar12 < 0.0);
  uVar23 = CONCAT44(fVar12,fVar13) ^
           (CONCAT44(fVar12,fVar13) ^ uVar20) &
           CONCAT44(-(uint)(fVar33 < fVar12),-(uint)((float)uVar20 < fVar13));
  fVar12 = *(float *)(param_1 + 0x60);
  bVar25 = (byte)uVar23 & ~(byte)iVar11;
  bVar26 = (byte)(uVar23 >> 8) & ~(byte)((uint)iVar11 >> 8);
  bVar27 = (byte)(uVar23 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10);
  bVar28 = (byte)(uVar23 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18);
  bVar29 = (byte)(uVar23 >> 0x20) & ~(byte)iVar3;
  bVar30 = (byte)(uVar23 >> 0x28) & ~(byte)((uint)iVar3 >> 8);
  bVar31 = (byte)(uVar23 >> 0x30) & ~(byte)((uint)iVar3 >> 0x10);
  bVar32 = (byte)(uVar23 >> 0x38) & ~(byte)((uint)iVar3 >> 0x18);
  if ((fVar12 < 1.0) && (*(int *)(param_1 + 0x5c) == 0)) {
    uVar24 = NEON_fmov(0xbf800000,4);
    fVar13 = ((float)CONCAT13(bVar28,CONCAT12(bVar27,CONCAT11(bVar26,bVar25))) + (float)uVar24) *
             fVar12 + (float)uVar20;
    bVar25 = SUB41(fVar13,0);
    bVar26 = (byte)((uint)fVar13 >> 8);
    bVar27 = (byte)((uint)fVar13 >> 0x10);
    bVar28 = (byte)((uint)fVar13 >> 0x18);
    fVar33 = ((float)CONCAT13(bVar32,CONCAT12(bVar31,CONCAT11(bVar30,bVar29))) +
             (float)((ulong)uVar24 >> 0x20)) * fVar12 + fVar33;
    bVar29 = SUB41(fVar33,0);
    bVar30 = (byte)((uint)fVar33 >> 8);
    bVar31 = (byte)((uint)fVar33 >> 0x10);
    bVar32 = (byte)((uint)fVar33 >> 0x18);
  }
  uVar4 = CONCAT13(bVar28,CONCAT12(bVar27,CONCAT11(bVar26,bVar25)));
  fStack_fc = (float)(CONCAT17(bVar32,CONCAT16(bVar31,CONCAT15(bVar30,CONCAT14(bVar29,uVar4)))) >>
                     0x20);
  if (*(int *)(param_1 + 0x20) < 1) {
    fVar33 = 0.0;
  }
  else {
    fVar33 = ((float)CONCAT13(bVar28,CONCAT12(bVar27,CONCAT11(bVar26,bVar25))) -
             (float)CONCAT13(bVar32,CONCAT12(bVar31,CONCAT11(bVar30,bVar29)))) /
             (float)*(int *)(param_1 + 0x20);
  }
  uVar20 = ChocDino_UIFX_TrailEffectBase__IsTrackingTransform(param_1,0);
  if ((uVar20 & 1) != 0) {
    lVar5 = UnityEngine_Component__get_transform(param_1,0);
    auVar16 = extraout_q0;
    if (lVar5 == 0) {
LAB_043b809c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(auVar16);
    }
    UnityEngine_Transform__get_localToWorldMatrix(&local_b0,lVar5,0);
    if (0 < *(int *)(param_1 + 0x20)) {
      auVar16._4_4_ = fStack_fc;
      auVar16._0_4_ = uVar4;
      auVar16._8_8_ = 0;
      iVar11 = 0;
      do {
        if ((*(long *)(param_1 + 0x98) == 0) ||
           (lVar5 = FUN_057e0998(*(long *)(param_1 + 0x98),iVar11,DAT_091b3f30),
           auVar16 = extraout_q0_00, lVar5 == 0)) goto LAB_043b809c;
        uStack_e8 = uStack_a8;
        local_f0 = local_b0;
        uStack_d8 = uStack_98;
        uStack_e0 = uStack_a0;
        uStack_c8 = uStack_88;
        local_d0 = local_90;
        uStack_b8 = uStack_78;
        uStack_c0 = uStack_80;
        ChocDino_UIFX_MathUtils__LerpUnclamped(lVar5 + 0x18,&local_f0,1,0);
        local_b0 = *(undefined8 *)(lVar5 + 0x18);
        uStack_a8 = *(undefined8 *)(lVar5 + 0x20);
        uStack_88 = *(undefined8 *)(lVar5 + 0x40);
        local_90 = *(undefined8 *)(lVar5 + 0x38);
        iVar11 = iVar11 + 1;
        uStack_98 = SUB168(*(undefined1 (*) [16])(lVar5 + 0x28),8);
        uStack_a0 = SUB168(*(undefined1 (*) [16])(lVar5 + 0x28),0);
        auVar16 = *(undefined1 (*) [16])(lVar5 + 0x48);
        uStack_78 = auVar16._8_8_;
        uStack_80 = auVar16._0_8_;
      } while (iVar11 < *(int *)(param_1 + 0x20));
    }
  }
  uVar20 = ChocDino_UIFX_TrailEffectBase__IsTrackingVertices(param_1,0);
  if (((uVar20 & 1) != 0) && (0 < *(int *)(param_1 + 0x20))) {
    iVar11 = 0;
    local_100 = fStack_fc;
    auVar16._8_4_ = 0x437f0000;
    auVar16._0_8_ = 0x437f0000437f0000;
    auVar16._12_4_ = 0x437f0000;
    lVar5 = *(long *)(param_1 + 0x88);
    do {
      if ((((*(long *)(param_1 + 0x98) == 0) ||
           (lVar6 = FUN_057e0998(*(long *)(param_1 + 0x98),iVar11,DAT_091b3f30),
           auVar16 = extraout_q0_01, lVar6 == 0)) || (*(long *)(param_1 + 0x88) == 0)) ||
         (lVar7 = *(long *)(*(long *)(param_1 + 0x88) + 0x10), lVar7 == 0)) goto LAB_043b809c;
      uVar20 = *(ulong *)(lVar7 + 0x18);
      lVar6 = *(long *)(lVar6 + 0x10);
      if (0 < (int)uVar20) {
        if (lVar6 == 0) goto LAB_043b809c;
        lVar7 = 0;
        uVar23 = 0;
        auVar16._4_4_ = local_100;
        auVar16._0_4_ = local_100;
        auVar16._8_4_ = local_100;
        auVar16._12_4_ = local_100;
        do {
          lVar8 = *(long *)(lVar6 + 0x10);
          if (lVar8 == 0) goto LAB_043b809c;
          if (*(uint *)(lVar8 + 0x18) <= uVar23) {
LAB_043b80a0:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if ((lVar5 == 0) || (lVar10 = *(long *)(lVar5 + 0x10), lVar10 == 0)) goto LAB_043b809c;
          if (*(uint *)(lVar10 + 0x18) <= uVar23) goto LAB_043b80a0;
          lVar8 = lVar8 + lVar7;
          uVar24 = *(undefined8 *)(lVar10 + lVar7 + 0x20);
          fVar12 = *(float *)(lVar10 + lVar7 + 0x28);
          fVar13 = (float)*(undefined8 *)(lVar8 + 0x20);
          fVar18 = (float)((ulong)*(undefined8 *)(lVar8 + 0x20) >> 0x20);
          auVar16._0_8_ =
               CONCAT44(fVar18 + local_100 * ((float)((ulong)uVar24 >> 0x20) - fVar18),
                        fVar13 + local_100 * ((float)uVar24 - fVar13));
          auVar16._8_8_ = 0;
          *(ulong *)(lVar8 + 0x20) = auVar16._0_8_;
          *(float *)(lVar8 + 0x28) =
               *(float *)(lVar8 + 0x28) + local_100 * (fVar12 - *(float *)(lVar8 + 0x28));
          lVar8 = *(long *)(lVar5 + 0x28);
          if (lVar8 == 0) goto LAB_043b809c;
          if (*(uint *)(lVar8 + 0x18) <= uVar23) goto LAB_043b80a0;
          lVar10 = *(long *)(lVar6 + 0x28);
          if (lVar10 == 0) goto LAB_043b809c;
          if (*(uint *)(lVar10 + 0x18) <= uVar23) goto LAB_043b80a0;
          auVar16._0_8_ = *(ulong *)(lVar8 + uVar23 * 8 + 0x20);
          auVar16._8_8_ = 0;
          *(ulong *)(lVar10 + uVar23 * 8 + 0x20) = auVar16._0_8_;
          lVar8 = *(long *)(lVar6 + 0x30);
          if (lVar8 == 0) goto LAB_043b809c;
          if (*(uint *)(lVar8 + 0x18) <= uVar23) goto LAB_043b80a0;
          lVar10 = *(long *)(lVar5 + 0x30);
          if (lVar10 == 0) goto LAB_043b809c;
          if (*(uint *)(lVar10 + 0x18) <= uVar23) goto LAB_043b80a0;
          lVar1 = lVar8 + uVar23 * 4;
          uVar4 = *(undefined4 *)(lVar1 + 0x20);
          uVar2 = *(undefined4 *)(lVar10 + uVar23 * 4 + 0x20);
          uVar24 = NEON_ushl(CONCAT44(uVar4,uVar4),0xffffffe8fffffff0,4);
          uVar14 = NEON_ushl(CONCAT44(uVar2,uVar2),0xffffffe8fffffff0,4);
          uVar21 = CONCAT26((short)((ulong)uVar24 >> 0x20),
                            CONCAT24((short)uVar24,CONCAT22((short)((uint)uVar4 >> 8),(short)uVar4))
                           ) & 0xff00ff00ff00ff;
          auVar15._2_2_ = 0;
          auVar15._0_2_ = (ushort)uVar21;
          auVar15._4_2_ = (short)(uVar21 >> 0x10);
          auVar15._6_2_ = 0;
          auVar15._8_2_ = (short)(uVar21 >> 0x20);
          auVar15._10_2_ = 0;
          auVar15._12_2_ = (short)(uVar21 >> 0x30);
          auVar15._14_2_ = 0;
          auVar16 = NEON_ucvtf(auVar15,4);
          uVar21 = CONCAT26((short)((ulong)uVar14 >> 0x20),
                            CONCAT24((short)uVar14,CONCAT22((short)((uint)uVar2 >> 8),(short)uVar2))
                           ) & 0xff00ff00ff00ff;
          auVar22._2_2_ = 0;
          auVar22._0_2_ = (ushort)uVar21;
          auVar22._4_2_ = (short)(uVar21 >> 0x10);
          auVar22._6_2_ = 0;
          auVar22._8_2_ = (short)(uVar21 >> 0x20);
          auVar22._10_2_ = 0;
          auVar22._12_2_ = (short)(uVar21 >> 0x30);
          auVar22._14_2_ = 0;
          fVar12 = auVar16._0_4_ / 255.0;
          fVar13 = auVar16._4_4_ / 255.0;
          fVar18 = auVar16._8_4_ / 255.0;
          fVar19 = auVar16._12_4_ / 255.0;
          auVar16 = NEON_ucvtf(auVar22,4);
          auVar17._0_4_ = fVar12 + (auVar16._0_4_ / 255.0 - fVar12) * local_100;
          auVar17._4_4_ = fVar13 + (auVar16._4_4_ / 255.0 - fVar13) * local_100;
          auVar17._8_4_ = fVar18 + (auVar16._8_4_ / 255.0 - fVar18) * local_100;
          auVar17._12_4_ = fVar19 + (auVar16._12_4_ / 255.0 - fVar19) * local_100;
          uVar4 = FUN_043b2fc4(auVar17,auVar17._4_4_,auVar17._8_4_,SUB41(auVar17._12_4_,0),0);
          if (*(uint *)(lVar8 + 0x18) <= uVar23) goto LAB_043b80a0;
          uVar23 = uVar23 + 1;
          lVar7 = lVar7 + 0xc;
          *(undefined4 *)(lVar1 + 0x20) = uVar4;
          auVar16 = extraout_q0_02;
        } while ((uVar20 & 0xffffffff) != uVar23);
      }
      if (*(int *)(DAT_0918bff0 + 0xe4) == 0) {
        auVar16 = FUN_03f5c424();
      }
      if (**(char **)(DAT_0918bff0 + 0xb8) == '\0') {
        if (((lVar5 == 0) || (lVar6 == 0)) || (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0))
        goto LAB_043b809c;
        puVar9 = (undefined8 *)(lVar6 + 0x18);
      }
      else {
        if (((lVar5 == 0) || (lVar6 == 0)) || (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0))
        goto LAB_043b809c;
        puVar9 = (undefined8 *)(lVar6 + 0x20);
      }
      System_Array__CopyTo(lVar5,*puVar9,0,0);
      iVar11 = iVar11 + 1;
      local_100 = fVar33 + local_100;
      auVar16 = ZEXT416((uint)local_100);
      lVar5 = lVar6;
    } while (iVar11 < *(int *)(param_1 + 0x20));
  }
  return;
}


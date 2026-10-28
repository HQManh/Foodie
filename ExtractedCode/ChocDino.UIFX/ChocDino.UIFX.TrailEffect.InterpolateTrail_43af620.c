// rea decompile_all
// name: ChocDino.UIFX.TrailEffect$$InterpolateTrail
// address: 0x43af620
// body: available
// range: 0x43af620-0x43afadf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43afad8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43afadc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TrailEffect__InterpolateTrail(long param_1)

{
  uint uVar1;
  undefined1 auVar2 [8];
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar19;
  undefined1 extraout_q0 [16];
  undefined1 extraout_q0_00 [16];
  undefined1 auVar15 [16];
  undefined8 uVar14;
  undefined1 extraout_q0_01 [16];
  undefined1 extraout_q0_02 [16];
  undefined1 auVar16 [16];
  float fVar18;
  float fVar20;
  undefined1 auVar17 [16];
  undefined1 extraout_q0_03 [16];
  undefined1 extraout_q0_04 [16];
  float fVar21;
  float fVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  undefined8 uVar25;
  int iVar26;
  int iVar27;
  float local_1f0;
  undefined1 local_1e0 [8];
  float local_1d8;
  undefined8 uStack_1d4;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined8 uStack_1ac;
  undefined8 local_1a4;
  undefined8 uStack_19c;
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((DAT_09517af9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b138);
    FUN_03f5c2a4(&DAT_091b1748);
    FUN_03f5c2a4(&DAT_091b3f08);
    DAT_09517af9 = 1;
  }
  fVar21 = *(float *)(param_1 + 0x24);
  uStack_e8 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  local_f0 = 0;
  local_d8 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  fVar11 = (float)ChocDino_UIFX_TrailEffectBase__get_DeltaTime();
  fVar22 = *(float *)(param_1 + 0x28);
  fVar12 = (float)ChocDino_UIFX_TrailEffectBase__get_DeltaTime();
  fVar11 = expf(fVar11 * -fVar21);
  fVar12 = expf(fVar12 * -fVar22);
  uVar23 = NEON_fmov(0x3f800000,4);
  fVar21 = (float)uVar23;
  fVar12 = fVar21 - fVar12;
  fVar22 = (float)(uVar23 >> 0x20);
  fVar11 = fVar22 - fVar11;
  iVar26 = -(uint)(fVar12 < 0.0);
  iVar27 = -(uint)(fVar11 < 0.0);
  uVar23 = CONCAT44(fVar11,fVar12) ^
           (CONCAT44(fVar11,fVar12) ^ uVar23) &
           CONCAT44(-(uint)(fVar22 < fVar11),-(uint)(fVar21 < fVar12));
  fVar11 = *(float *)(param_1 + 0x60);
  fVar12 = (float)CONCAT13((byte)(uVar23 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                           CONCAT12((byte)(uVar23 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                                    CONCAT11((byte)(uVar23 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                             (byte)uVar23 & ~(byte)iVar26)));
  uVar23 = CONCAT17((byte)(uVar23 >> 0x38) & ~(byte)((uint)iVar27 >> 0x18),
                    CONCAT16((byte)(uVar23 >> 0x30) & ~(byte)((uint)iVar27 >> 0x10),
                             CONCAT15((byte)(uVar23 >> 0x28) & ~(byte)((uint)iVar27 >> 8),
                                      CONCAT14((byte)(uVar23 >> 0x20) & ~(byte)iVar27,fVar12))));
  if ((fVar11 < 1.0) && (*(int *)(param_1 + 0x5c) == 0)) {
    uVar25 = NEON_fmov(0xbf800000,4);
    uVar23 = CONCAT44(((float)(uVar23 >> 0x20) + (float)((ulong)uVar25 >> 0x20)) * fVar11 + fVar22,
                      (fVar12 + (float)uVar25) * fVar11 + fVar21);
  }
  iVar26 = *(int *)(param_1 + 0x20);
  fVar11 = (float)(uVar23 >> 0x20);
  if (iVar26 < 1) {
    fVar12 = 0.0;
  }
  else {
    fVar12 = ((float)uVar23 - fVar11) / (float)iVar26;
  }
  if (*(int *)(param_1 + 0x38) != 1) {
    lVar4 = UnityEngine_Component__get_transform(param_1,0);
    auVar15 = extraout_q0;
    if (lVar4 == 0) {
LAB_043afad8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(auVar15);
    }
    UnityEngine_Transform__get_localToWorldMatrix(&local_d0,lVar4,0);
    iVar26 = *(int *)(param_1 + 0x20);
    if (0 < iVar26) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar23;
      iVar27 = 0;
      do {
        if ((*(long *)(param_1 + 0x88) == 0) ||
           (lVar4 = FUN_057e0998(*(long *)(param_1 + 0x88),iVar27,DAT_091b3f08),
           auVar15 = extraout_q0_00, lVar4 == 0)) goto LAB_043afad8;
        uStack_168 = uStack_c8;
        local_170 = local_d0;
        uStack_158 = uStack_b8;
        uStack_160 = uStack_c0;
        uStack_148 = uStack_a8;
        local_150 = local_b0;
        uStack_138 = uStack_98;
        uStack_140 = uStack_a0;
        auVar15 = ChocDino_UIFX_MathUtils__LerpUnclamped(lVar4 + 0x18,&local_170,1);
        if ((*(long *)(param_1 + 0x88) == 0) ||
           (lVar4 = FUN_057e0998(*(long *)(param_1 + 0x88),iVar27,DAT_091b3f08),
           auVar15 = extraout_q0_01, lVar4 == 0)) goto LAB_043afad8;
        local_d0 = *(undefined8 *)(lVar4 + 0x18);
        uStack_c8 = *(undefined8 *)(lVar4 + 0x20);
        iVar26 = *(int *)(param_1 + 0x20);
        uStack_a8 = *(undefined8 *)(lVar4 + 0x40);
        local_b0 = *(undefined8 *)(lVar4 + 0x38);
        iVar27 = iVar27 + 1;
        uStack_b8 = SUB168(*(undefined1 (*) [16])(lVar4 + 0x28),8);
        uStack_c0 = SUB168(*(undefined1 (*) [16])(lVar4 + 0x28),0);
        auVar15 = *(undefined1 (*) [16])(lVar4 + 0x48);
        uStack_98 = auVar15._8_8_;
        uStack_a0 = auVar15._0_8_;
      } while (iVar27 < iVar26);
    }
    uVar23 = (ulong)(uint)fVar11 << 0x20;
    if (*(int *)(param_1 + 0x38) == 0) {
      return;
    }
  }
  if (0 < iVar26) {
    iVar26 = 0;
    local_1f0 = (float)(uVar23 >> 0x20);
    auVar15._8_4_ = 0x437f0000;
    auVar15._0_8_ = 0x437f0000437f0000;
    auVar15._12_4_ = 0x437f0000;
    plVar10 = (long *)(param_1 + 0x80);
    do {
      if (*(long *)(param_1 + 0x88) == 0) goto LAB_043afad8;
      plVar10 = (long *)*plVar10;
      lVar4 = FUN_057e0998(*(long *)(param_1 + 0x88),iVar26,DAT_091b3f08);
      lVar6 = *(long *)(param_1 + 0x80);
      auVar15 = extraout_q0_02;
      if (lVar6 == 0) goto LAB_043afad8;
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar1) {
        if (lVar4 == 0) goto LAB_043afad8;
        uVar23 = 0;
        auVar15._4_4_ = local_1f0;
        auVar15._0_4_ = local_1f0;
        auVar15._8_4_ = local_1f0;
        auVar15._12_4_ = local_1f0;
        do {
          lVar6 = *(long *)(lVar4 + 0x10);
          if (lVar6 == 0) goto LAB_043afad8;
          if (*(uint *)(lVar6 + 0x18) <= uVar23) {
LAB_043afadc:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (plVar10 == (long *)0x0) goto LAB_043afad8;
          lVar6 = lVar6 + uVar23 * 0x6c;
          lVar7 = *plVar10;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          uVar25 = *(undefined8 *)(lVar6 + 0x20);
          fVar11 = *(float *)(lVar6 + 0x28);
          uVar3 = *(undefined4 *)(lVar6 + 0x48);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == DAT_0917b138) {
                puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_043af930;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar5 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917b138,0);
LAB_043af930:
          (*(code *)*puVar5)(local_1e0,plVar10,uVar23 & 0xffffffff,puVar5[1]);
          fVar21 = local_1d8;
          auVar2 = local_1e0;
          uStack_128 = uStack_1ac;
          local_130 = local_1b4;
          uStack_118 = uStack_19c;
          uStack_120 = local_1a4;
          uVar13 = NEON_ushl(CONCAT44(uVar3,uVar3),0xffffffe8fffffff0,4);
          uStack_108 = uStack_18c;
          local_110 = local_194;
          uStack_f8 = uStack_17c;
          uStack_100 = local_184;
          uVar14 = NEON_ushl(CONCAT44(local_1b8,local_1b8),0xffffffe8fffffff0,4);
          uVar8 = CONCAT26((short)((ulong)uVar13 >> 0x20),
                           CONCAT24((short)uVar13,CONCAT22((short)((uint)uVar3 >> 8),(short)uVar3)))
                  & 0xff00ff00ff00ff;
          auVar16._2_2_ = 0;
          auVar16._0_2_ = (ushort)uVar8;
          auVar16._4_2_ = (short)(uVar8 >> 0x10);
          auVar16._6_2_ = 0;
          auVar16._8_2_ = (short)(uVar8 >> 0x20);
          auVar16._10_2_ = 0;
          auVar16._12_2_ = (short)(uVar8 >> 0x30);
          auVar16._14_2_ = 0;
          auVar15 = NEON_ucvtf(auVar16,4);
          uVar8 = CONCAT26((short)((ulong)uVar14 >> 0x20),
                           CONCAT24((short)uVar14,
                                    CONCAT22((short)((uint)local_1b8 >> 8),(short)local_1b8))) &
                  0xff00ff00ff00ff;
          auVar24._2_2_ = 0;
          auVar24._0_2_ = (ushort)uVar8;
          auVar24._4_2_ = (short)(uVar8 >> 0x10);
          auVar24._6_2_ = 0;
          auVar24._8_2_ = (short)(uVar8 >> 0x20);
          auVar24._10_2_ = 0;
          auVar24._12_2_ = (short)(uVar8 >> 0x30);
          auVar24._14_2_ = 0;
          fVar22 = auVar15._0_4_ / 255.0;
          fVar18 = auVar15._4_4_ / 255.0;
          fVar19 = auVar15._8_4_ / 255.0;
          fVar20 = auVar15._12_4_ / 255.0;
          auVar15 = NEON_ucvtf(auVar24,4);
          auVar17._0_4_ = fVar22 + (auVar15._0_4_ / 255.0 - fVar22) * local_1f0;
          auVar17._4_4_ = fVar18 + (auVar15._4_4_ / 255.0 - fVar18) * local_1f0;
          auVar17._8_4_ = fVar19 + (auVar15._8_4_ / 255.0 - fVar19) * local_1f0;
          auVar17._12_4_ = fVar20 + (auVar15._12_4_ / 255.0 - fVar20) * local_1f0;
          uStack_e8 = uStack_1cc;
          local_f0 = uStack_1d4;
          uStack_dc = (undefined4)uStack_1c0;
          local_d8 = (undefined4)((ulong)uStack_1c0 >> 0x20);
          uStack_e4 = local_1c8;
          uStack_e0 = uStack_1c4;
          uVar3 = FUN_043b2fc4(auVar17,auVar17._4_4_,auVar17._8_4_,auVar17._12_4_,0);
          lVar6 = *(long *)(lVar4 + 0x10);
          auVar15 = extraout_q0_03;
          if (lVar6 == 0) goto LAB_043afad8;
          if (*(uint *)(lVar6 + 0x18) <= uVar23) goto LAB_043afadc;
          fVar22 = (float)uVar25;
          fVar18 = (float)((ulong)uVar25 >> 0x20);
          lVar6 = lVar6 + uVar23 * 0x6c;
          uVar23 = uVar23 + 1;
          *(ulong *)(lVar6 + 0x34) = CONCAT44(uStack_e4,uStack_e8);
          *(undefined8 *)(lVar6 + 0x2c) = local_f0;
          *(ulong *)(lVar6 + 0x40) = CONCAT44(local_d8,uStack_dc);
          *(ulong *)(lVar6 + 0x38) = CONCAT44(uStack_e0,uStack_e4);
          *(undefined4 *)(lVar6 + 0x48) = uVar3;
          auVar15._0_8_ =
               CONCAT44(fVar18 + local_1f0 * (auVar2._4_4_ - fVar18),
                        fVar22 + local_1f0 * (auVar2._0_4_ - fVar22));
          auVar15._8_8_ = 0;
          *(undefined8 *)(lVar6 + 0x54) = uStack_128;
          *(undefined8 *)(lVar6 + 0x4c) = local_130;
          *(undefined8 *)(lVar6 + 100) = uStack_118;
          *(undefined8 *)(lVar6 + 0x5c) = uStack_120;
          *(ulong *)(lVar6 + 0x20) = auVar15._0_8_;
          *(undefined8 *)(lVar6 + 0x74) = uStack_108;
          *(undefined8 *)(lVar6 + 0x6c) = local_110;
          *(float *)(lVar6 + 0x28) = fVar11 + local_1f0 * (fVar21 - fVar11);
          *(undefined8 *)(lVar6 + 0x84) = uStack_f8;
          *(undefined8 *)(lVar6 + 0x7c) = uStack_100;
        } while (uVar23 != uVar1);
      }
      if ((*(long *)(param_1 + 0x88) == 0) ||
         (lVar4 = FUN_057e0998(*(long *)(param_1 + 0x88),iVar26,DAT_091b3f08),
         auVar15 = extraout_q0_04, lVar4 == 0)) goto LAB_043afad8;
      iVar26 = iVar26 + 1;
      local_1f0 = fVar12 + local_1f0;
      auVar15 = ZEXT416((uint)local_1f0);
      plVar10 = (long *)(lVar4 + 0x10);
    } while (iVar26 < *(int *)(param_1 + 0x20));
  }
  return;
}


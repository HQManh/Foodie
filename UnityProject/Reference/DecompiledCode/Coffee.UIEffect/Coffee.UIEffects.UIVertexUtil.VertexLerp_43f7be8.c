// rea decompile_all
// name: Coffee.UIEffects.UIVertexUtil$$VertexLerp
// address: 0x43f7be8
// body: available
// range: 0x43f7be8-0x43f7e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_UIVertexUtil__VertexLerp
               (undefined8 *param_1,float param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar10;
  undefined1 auVar7 [16];
  float fVar9;
  float fVar11;
  undefined1 auVar8 [16];
  float fVar12;
  float fVar13;
  ulong uVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar15 [16];
  float fVar20;
  float fVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined8 uStack_1ec;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined8 local_1d4;
  undefined8 uStack_1cc;
  undefined8 local_1c4;
  undefined8 uStack_1bc;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_198 [108];
  undefined1 auStack_12c [108];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 local_5c;
  
  if ((DAT_09517e2d & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918c4c8);
    DAT_09517e2d = 1;
  }
  uVar1 = *(undefined4 *)(param_3 + 5);
  uVar2 = *(undefined4 *)(param_4 + 5);
  local_1b0 = 0;
  uStack_1a8 = 0;
  uVar5 = NEON_ushl(CONCAT44(uVar1,uVar1),0xffffffe8fffffff0,4);
  fVar23 = (float)param_3[4];
  fVar24 = (float)((ulong)param_3[4] >> 0x20);
  uVar6 = NEON_ushl(CONCAT44(uVar2,uVar2),0xffffffe8fffffff0,4);
  uVar14 = CONCAT62((int6)(((ulong)CONCAT22((short)((ulong)uVar5 >> 0x20),(short)uVar5) << 0x20) >>
                          0x10),(short)uVar1) & 0xffffffffffff00ff;
  uVar22 = CONCAT44((int)(uVar14 >> 0x20),CONCAT22((short)((uint)uVar1 >> 8),(short)uVar14)) &
           0xffffffff00ffffff;
  uVar14 = CONCAT26((short)(uVar22 >> 0x30),CONCAT24((short)(uVar14 >> 0x20),(int)uVar22)) &
           0xff00ffffffffff;
  auVar7._2_2_ = 0;
  auVar7._0_2_ = (ushort)uVar14;
  auVar7._4_2_ = (short)(uVar14 >> 0x10);
  auVar7._6_2_ = 0;
  auVar7._8_2_ = (short)(uVar14 >> 0x20);
  auVar7._10_2_ = 0;
  auVar7._12_2_ = (short)(uVar14 >> 0x30);
  auVar7._14_2_ = 0;
  auVar7 = NEON_ucvtf(auVar7,4);
  uVar14 = CONCAT26((short)((ulong)uVar6 >> 0x20),
                    CONCAT24((short)uVar6,CONCAT22((short)((uint)uVar2 >> 8),(short)uVar2))) &
           0xff00ff00ff00ff;
  auVar15._2_2_ = 0;
  auVar15._0_2_ = (ushort)uVar14;
  auVar15._4_2_ = (short)(uVar14 >> 0x10);
  auVar15._6_2_ = 0;
  auVar15._8_2_ = (short)(uVar14 >> 0x20);
  auVar15._10_2_ = 0;
  auVar15._12_2_ = (short)(uVar14 >> 0x30);
  auVar15._14_2_ = 0;
  fVar4 = auVar7._0_4_ / 255.0;
  fVar9 = auVar7._4_4_ / 255.0;
  fVar10 = auVar7._8_4_ / 255.0;
  fVar11 = auVar7._12_4_ / 255.0;
  auVar7 = NEON_ucvtf(auVar15,4);
  fVar12 = 1.0;
  if (param_2 <= 1.0) {
    fVar12 = param_2;
  }
  fVar27 = 0.0;
  if (0.0 <= param_2) {
    fVar27 = fVar12;
  }
  fVar12 = (float)*param_3;
  fVar16 = (float)((ulong)*param_3 >> 0x20);
  fVar18 = (float)param_3[1];
  fVar20 = (float)((ulong)param_3[1] >> 0x20);
  fVar13 = (float)param_3[2];
  fVar17 = (float)((ulong)param_3[2] >> 0x20);
  fVar19 = (float)param_3[3];
  fVar21 = (float)((ulong)param_3[3] >> 0x20);
  auVar8._0_4_ = fVar4 + (auVar7._0_4_ / 255.0 - fVar4) * fVar27;
  auVar8._4_4_ = fVar9 + (auVar7._4_4_ / 255.0 - fVar9) * fVar27;
  auVar8._8_4_ = fVar10 + (auVar7._8_4_ / 255.0 - fVar10) * fVar27;
  auVar8._12_4_ = fVar11 + (auVar7._12_4_ / 255.0 - fVar11) * fVar27;
  fVar12 = fVar12 + ((float)*param_4 - fVar12) * fVar27;
  fVar16 = fVar16 + ((float)((ulong)*param_4 >> 0x20) - fVar16) * fVar27;
  fVar18 = fVar18 + ((float)param_4[1] - fVar18) * fVar27;
  fVar20 = fVar20 + ((float)((ulong)param_4[1] >> 0x20) - fVar20) * fVar27;
  uVar5 = CONCAT44(fVar24 + fVar27 * ((float)((ulong)param_4[4] >> 0x20) - fVar24),
                   fVar23 + fVar27 * ((float)param_4[4] - fVar23));
  fVar13 = fVar13 + ((float)param_4[2] - fVar13) * fVar27;
  fVar17 = fVar17 + ((float)((ulong)param_4[2] >> 0x20) - fVar17) * fVar27;
  fVar19 = fVar19 + ((float)param_4[3] - fVar19) * fVar27;
  fVar21 = fVar21 + ((float)((ulong)param_4[3] >> 0x20) - fVar21) * fVar27;
  local_98 = FUN_043b2fc4(auVar8,auVar8._4_4_,auVar8._8_4_,auVar8._12_4_,0);
  fVar4 = (float)*(undefined8 *)((long)param_3 + 0x3c);
  fVar9 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x3c) >> 0x20);
  fVar10 = (float)*(undefined8 *)((long)param_3 + 0x44);
  fVar11 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x44) >> 0x20);
  fVar23 = (float)*(undefined8 *)((long)param_3 + 0x4c);
  fVar24 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x4c) >> 0x20);
  fVar25 = (float)*(undefined8 *)((long)param_3 + 0x54);
  fVar26 = (float)((ulong)*(undefined8 *)((long)param_3 + 0x54) >> 0x20);
  lVar3 = **(long **)(DAT_0918c4c8 + 0xb8);
  local_94 = CONCAT44(*(float *)(param_3 + 6) +
                      (*(float *)(param_4 + 6) - *(float *)(param_3 + 6)) * fVar27,
                      *(float *)((long)param_3 + 0x2c) +
                      (*(float *)((long)param_4 + 0x2c) - *(float *)((long)param_3 + 0x2c)) * fVar27
                     );
  uStack_8c = CONCAT44(*(float *)(param_3 + 7) +
                       (*(float *)(param_4 + 7) - *(float *)(param_3 + 7)) * fVar27,
                       *(float *)((long)param_3 + 0x34) +
                       (*(float *)((long)param_4 + 0x34) - *(float *)((long)param_3 + 0x34)) *
                       fVar27);
  local_84 = CONCAT44(fVar9 + ((float)((ulong)*(undefined8 *)((long)param_4 + 0x3c) >> 0x20) - fVar9
                              ) * fVar27,
                      fVar4 + ((float)*(undefined8 *)((long)param_4 + 0x3c) - fVar4) * fVar27);
  uStack_7c = CONCAT44(fVar11 + ((float)((ulong)*(undefined8 *)((long)param_4 + 0x44) >> 0x20) -
                                fVar11) * fVar27,
                       fVar10 + ((float)*(undefined8 *)((long)param_4 + 0x44) - fVar10) * fVar27);
  local_74 = CONCAT44(fVar24 + ((float)((ulong)*(undefined8 *)((long)param_4 + 0x4c) >> 0x20) -
                               fVar24) * fVar27,
                      fVar23 + ((float)*(undefined8 *)((long)param_4 + 0x4c) - fVar23) * fVar27);
  uStack_6c = CONCAT44(fVar26 + ((float)((ulong)*(undefined8 *)((long)param_4 + 0x54) >> 0x20) -
                                fVar26) * fVar27,
                       fVar25 + ((float)*(undefined8 *)((long)param_4 + 0x54) - fVar25) * fVar27);
  if (lVar3 == 0) {
    uStack_208 = CONCAT44(fVar21,fVar19);
    uStack_210 = CONCAT44(fVar17,fVar13);
    local_220 = CONCAT44(fVar16,fVar12);
    uStack_218 = CONCAT44(fVar20,fVar18);
  }
  else {
    memcpy(auStack_12c,param_3,0x6c);
    memcpy(auStack_198,param_4,0x6c);
    local_b0 = CONCAT44(fVar17,fVar13);
    uStack_a8 = CONCAT44(fVar21,fVar19);
    local_5c = 0;
    local_64 = 0;
    local_c0 = CONCAT44(fVar16,fVar12);
    uStack_b8 = CONCAT44(fVar20,fVar18);
    local_a0 = uVar5;
    (**(code **)(lVar3 + 0x18))
              (&local_220,*(undefined8 *)(lVar3 + 0x40),&local_c0,auStack_12c,auStack_198,
               *(undefined8 *)(lVar3 + 0x28));
    uStack_1a8 = uStack_1bc;
    local_1b0 = local_1c4;
    local_74 = local_1d4;
    uStack_6c = uStack_1cc;
    local_94 = local_1f4;
    uStack_8c = uStack_1ec;
    local_84 = local_1e4;
    uStack_7c = uStack_1dc;
    uVar5 = local_200;
    local_98 = local_1f8;
  }
  param_1[1] = uStack_218;
  *param_1 = local_220;
  param_1[3] = uStack_208;
  param_1[2] = uStack_210;
  param_1[4] = uVar5;
  *(undefined4 *)(param_1 + 5) = local_98;
  *(undefined8 *)((long)param_1 + 0x34) = uStack_8c;
  *(undefined8 *)((long)param_1 + 0x2c) = local_94;
  *(undefined8 *)((long)param_1 + 0x44) = uStack_7c;
  *(undefined8 *)((long)param_1 + 0x3c) = local_84;
  *(undefined8 *)((long)param_1 + 0x54) = uStack_6c;
  *(undefined8 *)((long)param_1 + 0x4c) = local_74;
  *(undefined8 *)((long)param_1 + 100) = uStack_1a8;
  *(undefined8 *)((long)param_1 + 0x5c) = local_1b0;
  return;
}


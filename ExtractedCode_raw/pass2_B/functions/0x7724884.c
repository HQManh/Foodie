// rea decompile_all
// name: AssetKits.ParticleImage.Noise$$SingleValue
// address: 0x7724884
// body: available
// range: 0x7724884-0x7724c53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AssetKits_ParticleImage_Noise__SingleValue
                (float param_1,float param_2,float param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  float fVar9;
  byte bVar11;
  byte bVar14;
  byte bVar15;
  int iVar12;
  byte bVar16;
  undefined8 uVar10;
  float fVar13;
  byte bVar17;
  byte bVar21;
  byte bVar23;
  byte bVar22;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  int iVar18;
  float fVar19;
  uint uVar27;
  undefined8 uVar20;
  float fVar28;
  byte bVar29;
  byte bVar34;
  byte bVar35;
  int iVar30;
  byte bVar36;
  int iVar31;
  float fVar32;
  int iVar37;
  int iVar38;
  undefined8 uVar33;
  int iVar39;
  int iVar41;
  undefined8 uVar40;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  float fVar42;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  
  if ((DAT_09522a2b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a2b = 1;
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09522a53 == '\0') {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a53 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a53 = '\x01';
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = 0x7fffffff;
  if (param_1 != INFINITY) {
    iVar1 = (int)param_1 + -1;
  }
  iVar6 = -0x80000000;
  if (param_1 != INFINITY) {
    iVar6 = (int)param_1;
  }
  bVar4 = param_3 == INFINITY;
  iVar8 = -(uint)bVar4;
  bVar5 = param_2 == INFINITY;
  iVar12 = -(uint)bVar5;
  if (0.0 <= param_1) {
    iVar1 = iVar6;
  }
  iVar30 = (int)param_3 + -1;
  iVar37 = (int)param_2 + -1;
  iVar6 = -0x80000000;
  if (!bVar5) {
    iVar6 = (int)param_2;
  }
  uVar7 = CONCAT44(iVar12,iVar8) & 0x7fffffff7fffffff;
  iVar18 = -0x80000000;
  if (!bVar4) {
    iVar18 = (int)param_3;
  }
  uVar7 = CONCAT17((byte)(uVar7 >> 0x38) |
                   (byte)((uint)iVar37 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18),
                   CONCAT16((byte)(uVar7 >> 0x30) |
                            (byte)((uint)iVar37 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                            CONCAT15((byte)(uVar7 >> 0x28) |
                                     (byte)((uint)iVar37 >> 8) & ~(byte)((uint)iVar12 >> 8),
                                     CONCAT14(bVar5 | (byte)iVar37 & ~bVar5,
                                              CONCAT13((byte)(uVar7 >> 0x18) |
                                                       (byte)((uint)iVar30 >> 0x18) &
                                                       ~(byte)((uint)iVar8 >> 0x18),
                                                       CONCAT12((byte)(uVar7 >> 0x10) |
                                                                (byte)((uint)iVar30 >> 0x10) &
                                                                ~(byte)((uint)iVar8 >> 0x10),
                                                                CONCAT11((byte)(uVar7 >> 8) |
                                                                         (byte)((uint)iVar30 >> 8) &
                                                                         ~(byte)((uint)iVar8 >> 8),
                                                                         bVar4 | (byte)iVar30 &
                                                                                 ~bVar4)))))));
  uVar7 = uVar7 ^ (uVar7 ^ CONCAT44(iVar6,iVar18)) &
                  CONCAT44(-(uint)(0.0 <= param_2),-(uint)(0.0 <= param_3));
  uVar2 = iVar1 * 0x1dde90c9 ^ param_5;
  iVar6 = (int)uVar7;
  iVar12 = iVar6 * 0x668b6e2f;
  iVar8 = (int)(uVar7 >> 0x20);
  uVar27 = iVar8 * 0x43c42e4d;
  param_5 = iVar1 * 0x1dde90c9 + 0x1dde90c9U ^ param_5;
  iVar30 = iVar12 + 0x668b6e2f;
  bVar17 = (byte)iVar12;
  bVar21 = (byte)((uint)iVar12 >> 8);
  bVar23 = (byte)((uint)iVar12 >> 0x10);
  bVar25 = (byte)((uint)iVar12 >> 0x18);
  bVar11 = (byte)uVar27 ^ (byte)uVar2;
  bVar14 = (byte)(uVar27 >> 8) ^ (byte)(uVar2 >> 8);
  bVar15 = (byte)(uVar27 >> 0x10) ^ (byte)(uVar2 >> 0x10);
  bVar16 = (byte)(uVar27 >> 0x18) ^ (byte)(uVar2 >> 0x18);
  uVar10 = NEON_ext(CONCAT17(bVar16,CONCAT16(bVar15,CONCAT15(bVar14,CONCAT14(bVar11,iVar12)))) ^
                    0x668b6e2f,CONCAT44(uVar27,iVar12),4,1);
  uVar3 = param_5 ^ uVar27;
  uVar2 = uVar27 + 0x43c42e4d ^ uVar2;
  param_5 = param_5 ^ uVar27 + 0x43c42e4d;
  bVar29 = (byte)iVar30;
  bVar34 = (byte)((uint)iVar30 >> 8);
  bVar35 = (byte)((uint)iVar30 >> 0x10);
  bVar36 = (byte)((uint)iVar30 >> 0x18);
  iVar12 = CONCAT13(bVar36 ^ (byte)((ulong)uVar10 >> 0x18),
                    CONCAT12(bVar35 ^ (byte)((ulong)uVar10 >> 0x10),
                             CONCAT11(bVar34 ^ (byte)((ulong)uVar10 >> 8),bVar29 ^ (byte)uVar10)));
  bVar43 = (byte)(uVar3 >> 8);
  bVar44 = (byte)(uVar3 >> 0x10);
  bVar45 = (byte)(uVar3 >> 0x18);
  bVar22 = (byte)(uVar2 >> 8);
  bVar24 = (byte)(uVar2 >> 0x10);
  bVar26 = (byte)(uVar2 >> 0x18);
  iVar37 = CONCAT13(bVar26 ^ bVar36,
                    CONCAT12(bVar24 ^ bVar35,CONCAT11(bVar22 ^ bVar34,(byte)uVar2 ^ bVar29)));
  bVar46 = (byte)(param_5 >> 8);
  bVar47 = (byte)(param_5 >> 0x10);
  bVar48 = (byte)(param_5 >> 0x18);
  iVar38 = CONCAT13(bVar48 ^ bVar36,
                    CONCAT12(bVar47 ^ bVar35,CONCAT11(bVar46 ^ bVar34,(byte)param_5 ^ bVar29)));
  iVar39 = CONCAT13(bVar45 ^ bVar36,
                    CONCAT12(bVar44 ^ bVar35,CONCAT11(bVar43 ^ bVar34,(byte)uVar3 ^ bVar29))) *
           0x27d4eb2d;
  iVar41 = CONCAT13(bVar45 ^ bVar25,
                    CONCAT12(bVar44 ^ bVar23,CONCAT11(bVar43 ^ bVar21,(byte)uVar3 ^ bVar17))) *
           0x27d4eb2d;
  iVar30 = iVar12 * 0x27d4eb2d;
  iVar12 = (int)(CONCAT17(bVar16 ^ (byte)((ulong)uVar10 >> 0x38),
                          CONCAT16(bVar15 ^ (byte)((ulong)uVar10 >> 0x30),
                                   CONCAT15(bVar14 ^ (byte)((ulong)uVar10 >> 0x28),
                                            CONCAT14(bVar11 ^ (byte)((ulong)uVar10 >> 0x20),iVar12))
                                  )) >> 0x20) * 0x27d4eb2d;
  iVar18 = iVar37 * 0x27d4eb2d;
  iVar37 = (int)(CONCAT17(bVar26 ^ bVar25,
                          CONCAT16(bVar24 ^ bVar23,
                                   CONCAT15(bVar22 ^ bVar21,CONCAT14((byte)uVar2 ^ bVar17,iVar37))))
                >> 0x20) * 0x27d4eb2d;
  iVar31 = iVar38 * 0x27d4eb2d;
  iVar38 = (int)(CONCAT17(bVar48 ^ bVar25,
                          CONCAT16(bVar47 ^ bVar23,
                                   CONCAT15(bVar46 ^ bVar21,CONCAT14((byte)param_5 ^ bVar17,iVar38))
                                  )) >> 0x20) * 0x27d4eb2d;
  iVar39 = iVar39 * iVar39;
  iVar41 = iVar41 * iVar41;
  iVar30 = iVar30 * iVar30;
  iVar12 = iVar12 * iVar12;
  param_1 = param_1 - (float)iVar1;
  iVar18 = iVar18 * iVar18;
  iVar37 = iVar37 * iVar37;
  iVar31 = iVar31 * iVar31;
  iVar38 = iVar38 * iVar38;
  uVar40 = NEON_scvtf(CONCAT17((byte)((uint)(iVar41 * 0x80000) >> 0x18) ^
                               (byte)((uint)iVar41 >> 0x18),
                               CONCAT16((byte)((uint)(iVar41 * 0x80000) >> 0x10) ^
                                        (byte)((uint)iVar41 >> 0x10),
                                        CONCAT15((char)((uint)iVar41 >> 8),
                                                 CONCAT14((char)iVar41,
                                                          CONCAT13((byte)((uint)(iVar39 * 0x80000)
                                                                         >> 0x18) ^
                                                                   (byte)((uint)iVar39 >> 0x18),
                                                                   CONCAT12((byte)((uint)(iVar39 * 
                                                  0x80000) >> 0x10) ^ (byte)((uint)iVar39 >> 0x10),
                                                  (short)iVar39)))))),4);
  uVar10 = NEON_scvtf(CONCAT17((byte)((uint)(iVar12 * 0x80000) >> 0x18) ^
                               (byte)((uint)iVar12 >> 0x18),
                               CONCAT16((byte)((uint)(iVar12 * 0x80000) >> 0x10) ^
                                        (byte)((uint)iVar12 >> 0x10),
                                        CONCAT15((char)((uint)iVar12 >> 8),
                                                 CONCAT14((char)iVar12,
                                                          CONCAT13((byte)((uint)(iVar30 * 0x80000)
                                                                         >> 0x18) ^
                                                                   (byte)((uint)iVar30 >> 0x18),
                                                                   CONCAT12((byte)((uint)(iVar30 * 
                                                  0x80000) >> 0x10) ^ (byte)((uint)iVar30 >> 0x10),
                                                  (short)iVar30)))))),4);
  uVar20 = NEON_scvtf(CONCAT17((byte)((uint)(iVar37 * 0x80000) >> 0x18) ^
                               (byte)((uint)iVar37 >> 0x18),
                               CONCAT16((byte)((uint)(iVar37 * 0x80000) >> 0x10) ^
                                        (byte)((uint)iVar37 >> 0x10),
                                        CONCAT15((char)((uint)iVar37 >> 8),
                                                 CONCAT14((char)iVar37,
                                                          CONCAT13((byte)((uint)(iVar18 * 0x80000)
                                                                         >> 0x18) ^
                                                                   (byte)((uint)iVar18 >> 0x18),
                                                                   CONCAT12((byte)((uint)(iVar18 * 
                                                  0x80000) >> 0x10) ^ (byte)((uint)iVar18 >> 0x10),
                                                  (short)iVar18)))))),4);
  uVar33 = NEON_scvtf(CONCAT17((byte)((uint)(iVar38 * 0x80000) >> 0x18) ^
                               (byte)((uint)iVar38 >> 0x18),
                               CONCAT16((byte)((uint)(iVar38 * 0x80000) >> 0x10) ^
                                        (byte)((uint)iVar38 >> 0x10),
                                        CONCAT15((char)((uint)iVar38 >> 8),
                                                 CONCAT14((char)iVar38,
                                                          CONCAT13((byte)((uint)(iVar31 * 0x80000)
                                                                         >> 0x18) ^
                                                                   (byte)((uint)iVar31 >> 0x18),
                                                                   CONCAT12((byte)((uint)(iVar31 * 
                                                  0x80000) >> 0x10) ^ (byte)((uint)iVar31 >> 0x10),
                                                  (short)iVar31)))))),4);
  fVar9 = (float)uVar10 * 4.656613e-10;
  fVar13 = (float)((ulong)uVar10 >> 0x20) * 4.656613e-10;
  fVar19 = (float)uVar20 * 4.656613e-10;
  fVar28 = (float)((ulong)uVar20 >> 0x20) * 4.656613e-10;
  fVar42 = param_1 * param_1 * (3.0 - (param_1 + param_1));
  param_2 = param_2 - (float)iVar8;
  param_3 = param_3 - (float)iVar6;
  fVar9 = fVar9 + ((float)uVar40 * 4.656613e-10 - fVar9) * fVar42;
  fVar13 = fVar13 + ((float)((ulong)uVar40 >> 0x20) * 4.656613e-10 - fVar13) * fVar42;
  fVar32 = param_2 * param_2 * (3.0 - (param_2 + param_2));
  fVar13 = fVar13 + ((fVar28 + ((float)((ulong)uVar33 >> 0x20) * 4.656613e-10 - fVar28) * fVar42) -
                    fVar13) * fVar32;
  return fVar13 + param_3 * param_3 * (3.0 - (param_3 + param_3)) *
                  ((fVar9 + ((fVar19 + ((float)uVar33 * 4.656613e-10 - fVar19) * fVar42) - fVar9) *
                            fVar32) - fVar13);
}


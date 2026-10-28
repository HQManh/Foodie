// rea decompile_all
// name: AssetKits.ParticleImage.Noise$$SingleValueCubic
// address: 0x77202dc
// body: available
// range: 0x77202dc-0x77208ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AssetKits_ParticleImage_Noise__SingleValueCubic
                (float param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte bVar14;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  int iVar15;
  int iVar16;
  float fVar17;
  byte bVar22;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  int iVar23;
  undefined8 uVar18;
  float fVar24;
  byte bVar32;
  byte bVar33;
  int iVar28;
  byte bVar34;
  int iVar29;
  float fVar30;
  int iVar35;
  int iVar36;
  undefined8 uVar31;
  float fVar37;
  int iVar38;
  int iVar39;
  float fVar40;
  int iVar45;
  undefined8 uVar41;
  float fVar46;
  int iVar47;
  int iVar48;
  float fVar49;
  int iVar54;
  undefined8 uVar50;
  float fVar55;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  float fVar56;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  
  if ((DAT_09522a28 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a28 = 1;
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09522a52 == '\0') {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a52 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a52 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a52 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a52 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a52 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a52 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a52 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a52 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a52 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a52 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a52 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a52 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a52 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a52 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a52 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar3 = 0x7fffffff;
  if (param_1 != INFINITY) {
    iVar3 = (int)param_1 + -1;
  }
  iVar28 = -0x80000000;
  if (param_1 != INFINITY) {
    iVar28 = (int)param_1;
  }
  if (0.0 <= param_1) {
    iVar3 = iVar28;
  }
  uVar7 = iVar3 * 0x1dde90c9;
  iVar28 = -0x80000000;
  iVar4 = 0x7fffffff;
  if (param_2 != INFINITY) {
    iVar28 = (int)param_2;
    iVar4 = (int)param_2 + -1;
  }
  if (0.0 <= param_2) {
    iVar4 = iVar28;
  }
  uVar5 = uVar7 ^ (uint)param_4;
  uVar8 = iVar4 * 0x43c42e4d;
  iVar28 = uVar7 + 0x1dde90c9;
  iVar35 = uVar7 + 0xe2216f37;
  uVar6 = uVar7 + 0x3bbd2192 ^ (uint)param_4;
  uVar7 = uVar8 + 0x87885c9a;
  uVar1 = uVar8 + 0x43c42e4d;
  uVar2 = uVar8 + 0xbc3bd1b3;
  bVar14 = (byte)iVar28 ^ (byte)param_4;
  bVar25 = (byte)((ulong)param_4 >> 8);
  bVar19 = (byte)((uint)iVar28 >> 8) ^ bVar25;
  bVar26 = (byte)((ulong)param_4 >> 0x10);
  bVar20 = (byte)((uint)iVar28 >> 0x10) ^ bVar26;
  bVar27 = (byte)((ulong)param_4 >> 0x18);
  bVar21 = (byte)((uint)iVar28 >> 0x18) ^ bVar27;
  bVar22 = (byte)iVar35 ^ (byte)param_4;
  bVar25 = (byte)((uint)iVar35 >> 8) ^ bVar25;
  bVar26 = (byte)((uint)iVar35 >> 0x10) ^ bVar26;
  bVar27 = (byte)((uint)iVar35 >> 0x18) ^ bVar27;
  bVar42 = (byte)(uVar8 >> 8);
  bVar43 = (byte)(uVar8 >> 0x10);
  bVar44 = (byte)(uVar8 >> 0x18);
  iVar38 = CONCAT13(bVar21 ^ bVar44,
                    CONCAT12(bVar20 ^ bVar43,CONCAT11(bVar19 ^ bVar42,bVar14 ^ (byte)uVar8)));
  bVar32 = (byte)(uVar1 >> 8);
  bVar33 = (byte)(uVar1 >> 0x10);
  bVar34 = (byte)(uVar1 >> 0x18);
  iVar35 = CONCAT13(bVar21 ^ bVar34,
                    CONCAT12(bVar20 ^ bVar33,CONCAT11(bVar19 ^ bVar32,bVar14 ^ (byte)uVar1)));
  bVar51 = (byte)(uVar7 >> 8);
  bVar52 = (byte)(uVar7 >> 0x10);
  bVar53 = (byte)(uVar7 >> 0x18);
  iVar47 = CONCAT13(bVar21 ^ bVar53,
                    CONCAT12(bVar20 ^ bVar52,CONCAT11(bVar19 ^ bVar51,bVar14 ^ (byte)uVar7)));
  bVar57 = (byte)(uVar2 >> 8);
  bVar58 = (byte)(uVar2 >> 0x10);
  bVar59 = (byte)(uVar2 >> 0x18);
  iVar15 = CONCAT13(bVar21 ^ bVar59,
                    CONCAT12(bVar20 ^ bVar58,CONCAT11(bVar19 ^ bVar57,bVar14 ^ (byte)uVar2)));
  iVar28 = (uVar6 ^ uVar8) * 0x27d4eb2d;
  iVar39 = iVar38 * 0x27d4eb2d;
  iVar45 = (int)(CONCAT17(bVar27 ^ bVar44,
                          CONCAT16(bVar26 ^ bVar43,
                                   CONCAT15(bVar25 ^ bVar42,CONCAT14(bVar22 ^ (byte)uVar8,iVar38))))
                >> 0x20) * 0x27d4eb2d;
  iVar29 = iVar35 * 0x27d4eb2d;
  iVar36 = (int)(CONCAT17(bVar27 ^ bVar34,
                          CONCAT16(bVar26 ^ bVar33,
                                   CONCAT15(bVar25 ^ bVar32,CONCAT14(bVar22 ^ (byte)uVar1,iVar35))))
                >> 0x20) * 0x27d4eb2d;
  iVar35 = (uVar5 ^ uVar8) * 0x27d4eb2d;
  iVar48 = iVar47 * 0x27d4eb2d;
  iVar54 = (int)(CONCAT17(bVar27 ^ bVar53,
                          CONCAT16(bVar26 ^ bVar52,
                                   CONCAT15(bVar25 ^ bVar51,CONCAT14(bVar22 ^ (byte)uVar7,iVar47))))
                >> 0x20) * 0x27d4eb2d;
  iVar16 = iVar15 * 0x27d4eb2d;
  iVar23 = (int)(CONCAT17(bVar27 ^ bVar59,
                          CONCAT16(bVar26 ^ bVar58,
                                   CONCAT15(bVar25 ^ bVar57,CONCAT14(bVar22 ^ (byte)uVar2,iVar15))))
                >> 0x20) * 0x27d4eb2d;
  iVar15 = (uVar7 ^ uVar5) * 0x27d4eb2d;
  iVar38 = (uVar6 ^ uVar1) * 0x27d4eb2d;
  iVar47 = (uVar1 ^ uVar5) * 0x27d4eb2d;
  iVar39 = iVar39 * iVar39;
  iVar45 = iVar45 * iVar45;
  iVar29 = iVar29 * iVar29;
  iVar36 = iVar36 * iVar36;
  iVar9 = (uVar6 ^ uVar2) * 0x27d4eb2d;
  iVar48 = iVar48 * iVar48;
  iVar54 = iVar54 * iVar54;
  iVar16 = iVar16 * iVar16;
  iVar23 = iVar23 * iVar23;
  iVar10 = (uVar2 ^ uVar5) * 0x27d4eb2d;
  iVar11 = (uVar6 ^ uVar7) * 0x27d4eb2d;
  uVar7 = iVar28 * iVar28;
  uVar1 = iVar35 * iVar35;
  uVar2 = iVar15 * iVar15;
  uVar5 = iVar38 * iVar38;
  uVar6 = iVar47 * iVar47;
  uVar8 = iVar9 * iVar9;
  uVar41 = NEON_scvtf(CONCAT17((byte)((uint)(iVar45 * 0x80000) >> 0x18) ^
                               (byte)((uint)iVar45 >> 0x18),
                               CONCAT16((byte)((uint)(iVar45 * 0x80000) >> 0x10) ^
                                        (byte)((uint)iVar45 >> 0x10),
                                        CONCAT15((char)((uint)iVar45 >> 8),
                                                 CONCAT14((char)iVar45,
                                                          CONCAT13((byte)((uint)(iVar39 * 0x80000)
                                                                         >> 0x18) ^
                                                                   (byte)((uint)iVar39 >> 0x18),
                                                                   CONCAT12((byte)((uint)(iVar39 * 
                                                  0x80000) >> 0x10) ^ (byte)((uint)iVar39 >> 0x10),
                                                  (short)iVar39)))))),4);
  uVar31 = NEON_scvtf(CONCAT17((byte)((uint)(iVar36 * 0x80000) >> 0x18) ^
                               (byte)((uint)iVar36 >> 0x18),
                               CONCAT16((byte)((uint)(iVar36 * 0x80000) >> 0x10) ^
                                        (byte)((uint)iVar36 >> 0x10),
                                        CONCAT15((char)((uint)iVar36 >> 8),
                                                 CONCAT14((char)iVar36,
                                                          CONCAT13((byte)((uint)(iVar29 * 0x80000)
                                                                         >> 0x18) ^
                                                                   (byte)((uint)iVar29 >> 0x18),
                                                                   CONCAT12((byte)((uint)(iVar29 * 
                                                  0x80000) >> 0x10) ^ (byte)((uint)iVar29 >> 0x10),
                                                  (short)iVar29)))))),4);
  uVar12 = iVar10 * iVar10;
  uVar50 = NEON_scvtf(CONCAT17((byte)((uint)(iVar54 * 0x80000) >> 0x18) ^
                               (byte)((uint)iVar54 >> 0x18),
                               CONCAT16((byte)((uint)(iVar54 * 0x80000) >> 0x10) ^
                                        (byte)((uint)iVar54 >> 0x10),
                                        CONCAT15((char)((uint)iVar54 >> 8),
                                                 CONCAT14((char)iVar54,
                                                          CONCAT13((byte)((uint)(iVar48 * 0x80000)
                                                                         >> 0x18) ^
                                                                   (byte)((uint)iVar48 >> 0x18),
                                                                   CONCAT12((byte)((uint)(iVar48 * 
                                                  0x80000) >> 0x10) ^ (byte)((uint)iVar48 >> 0x10),
                                                  (short)iVar48)))))),4);
  uVar18 = NEON_scvtf(CONCAT17((byte)((uint)(iVar23 * 0x80000) >> 0x18) ^
                               (byte)((uint)iVar23 >> 0x18),
                               CONCAT16((byte)((uint)(iVar23 * 0x80000) >> 0x10) ^
                                        (byte)((uint)iVar23 >> 0x10),
                                        CONCAT15((char)((uint)iVar23 >> 8),
                                                 CONCAT14((char)iVar23,
                                                          CONCAT13((byte)((uint)(iVar16 * 0x80000)
                                                                         >> 0x18) ^
                                                                   (byte)((uint)iVar16 >> 0x18),
                                                                   CONCAT12((byte)((uint)(iVar16 * 
                                                  0x80000) >> 0x10) ^ (byte)((uint)iVar16 >> 0x10),
                                                  (short)iVar16)))))),4);
  uVar13 = iVar11 * iVar11;
  fVar60 = (float)(int)(uVar1 ^ uVar1 * 0x80000) / 2.1474836e+09;
  fVar40 = (float)uVar41 * 4.656613e-10;
  fVar46 = (float)((ulong)uVar41 >> 0x20) * 4.656613e-10;
  fVar30 = (float)uVar31 * 4.656613e-10;
  fVar37 = (float)((ulong)uVar31 >> 0x20) * 4.656613e-10;
  fVar49 = (float)uVar50 * 4.656613e-10;
  fVar55 = (float)((ulong)uVar50 >> 0x20) * 4.656613e-10;
  fVar17 = (float)uVar18 * 4.656613e-10;
  fVar24 = (float)((ulong)uVar18 >> 0x20) * 4.656613e-10;
  fVar61 = (float)(int)(uVar2 ^ uVar2 * 0x80000) / 2.1474836e+09;
  fVar63 = (float)(int)(uVar6 ^ uVar6 * 0x80000) / 2.1474836e+09;
  fVar65 = (float)(int)(uVar12 ^ uVar12 * 0x80000) / 2.1474836e+09;
  param_1 = param_1 - (float)iVar3;
  fVar67 = fVar46 - fVar60;
  fVar68 = fVar37 - fVar63;
  fVar71 = param_1 * param_1;
  fVar69 = fVar24 - fVar65;
  fVar70 = fVar55 - fVar61;
  fVar56 = ((float)(int)(uVar7 ^ uVar7 * 0x80000) / 2.1474836e+09 - fVar40) - fVar67;
  fVar62 = ((float)(int)(uVar5 ^ uVar5 * 0x80000) / 2.1474836e+09 - fVar30) - fVar68;
  fVar72 = param_1 * fVar71;
  fVar64 = ((float)(int)(uVar8 ^ uVar8 * 0x80000) / 2.1474836e+09 - fVar17) - fVar69;
  fVar66 = ((float)(int)(uVar13 ^ uVar13 * 0x80000) / 2.1474836e+09 - fVar49) - fVar70;
  fVar60 = fVar60 + param_1 * (fVar40 - fVar46) + fVar72 * fVar56 + fVar71 * (fVar67 - fVar56);
  fVar63 = fVar63 + param_1 * (fVar30 - fVar37) + fVar72 * fVar62 + fVar71 * (fVar68 - fVar62);
  param_2 = param_2 - (float)iVar4;
  fVar65 = fVar65 + param_1 * (fVar17 - fVar24) + fVar72 * fVar64 + fVar71 * (fVar69 - fVar64);
  fVar24 = fVar65 - fVar60;
  fVar17 = ((fVar61 + param_1 * (fVar49 - fVar55) + fVar72 * fVar66 + fVar71 * (fVar70 - fVar66)) -
           fVar63) - fVar24;
  return (fVar60 + param_2 * (fVar63 - fVar65) +
                   param_2 * param_2 * param_2 * fVar17 + param_2 * param_2 * (fVar24 - fVar17)) *
         0.44444445;
}


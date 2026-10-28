// rea decompile_all
// name: Utilities.NoiseUtilities$$cellular
// address: 0x45088f8
// body: available
// range: 0x45088f8-0x45090ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float Utilities_NoiseUtilities__cellular(float param_1,float param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  ulong uVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  int iVar24;
  undefined8 uVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  ulong uVar29;
  byte bVar32;
  byte bVar33;
  float fVar30;
  int iVar31;
  byte bVar34;
  byte bVar37;
  byte bVar38;
  float fVar35;
  int iVar36;
  byte bVar39;
  int iVar40;
  int iVar41;
  
  if (DAT_0951853f == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951853f = '\x01';
  }
  if ((*(int *)(DAT_09187e80 + 0xe4) == 0) && (FUN_03f5c424(), DAT_0951853f == '\0')) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951853f = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar6 = (float)(int)param_2;
  fVar2 = (float)Utilities_NoiseUtilities__mod289((int)param_1);
  if (DAT_0951853f == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951853f = '\x01';
  }
  if ((*(int *)(DAT_09187e80 + 0xe4) == 0) && (FUN_03f5c424(), DAT_0951853f == '\0')) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951853f = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar25 = NEON_fmov(0x41200000,4);
  fVar7 = (fVar2 + 0.0) * ((fVar2 + 0.0) * 34.0 + (float)((ulong)uVar25 >> 0x20));
  fVar16 = (fVar2 + 1.0) * ((fVar2 + 1.0) * 34.0 + 10.0);
  fVar2 = (float)Utilities_NoiseUtilities__mod289();
  fVar2 = fVar6 + fVar2;
  fVar8 = (fVar2 + 0.0) * ((fVar2 + 0.0) * 34.0 + 10.0);
  fVar21 = (fVar2 + 1.0) * ((fVar2 + 1.0) * 34.0 + 10.0);
  fVar3 = (float)Utilities_NoiseUtilities__mod289((fVar2 + -1.0) * ((fVar2 + -1.0) * 34.0 + 10.0));
  fVar2 = fVar21 * 0.14285715;
  fVar19 = fVar8 * 0.14285715;
  fVar4 = (float)FUN_0451258c(fVar3 * 0.14285715,0);
  if (DAT_0951853f == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951853f = '\x01';
  }
  if ((*(int *)(DAT_09187e80 + 0xe4) == 0) && (FUN_03f5c424(), DAT_0951853f == '\0')) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951853f = '\x01';
  }
  if ((*(int *)(DAT_09187e80 + 0xe4) == 0) && (FUN_03f5c424(), DAT_0951853f == '\0')) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951853f = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar9 = (float)(int)(fVar8 * 0.14285715);
  fVar17 = (float)(int)(fVar21 * 0.14285715);
  fVar8 = (float)Utilities_NoiseUtilities__mod7((int)(fVar3 * 0.14285715));
  fVar7 = fVar6 + fVar7;
  fVar10 = (fVar7 + 0.0) * ((fVar7 + 0.0) * 34.0 + 10.0);
  fVar22 = (fVar7 + 1.0) * ((fVar7 + 1.0) * 34.0 + 10.0);
  fVar21 = (float)Utilities_NoiseUtilities__mod289((fVar7 + -1.0) * ((fVar7 + -1.0) * 34.0 + 10.0));
  fVar3 = fVar22 * 0.14285715;
  fVar7 = fVar10 * 0.14285715;
  fVar5 = (float)FUN_0451258c(fVar21 * 0.14285715,0);
  if (DAT_0951853f == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951853f = '\x01';
  }
  if ((*(int *)(DAT_09187e80 + 0xe4) == 0) && (FUN_03f5c424(), DAT_0951853f == '\0')) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951853f = '\x01';
  }
  if ((*(int *)(DAT_09187e80 + 0xe4) == 0) && (FUN_03f5c424(), DAT_0951853f == '\0')) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951853f = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar11 = (float)(int)(fVar10 * 0.14285715);
  fVar18 = (float)(int)(fVar22 * 0.14285715);
  fVar21 = (float)Utilities_NoiseUtilities__mod7((int)(fVar21 * 0.14285715));
  fVar6 = fVar6 + fVar16;
  fVar12 = (fVar6 + 0.0) * ((fVar6 + 0.0) * 34.0 + 10.0);
  fVar23 = (fVar6 + 1.0) * ((fVar6 + 1.0) * 34.0 + 10.0);
  fVar10 = (float)Utilities_NoiseUtilities__mod289((fVar6 + -1.0) * ((fVar6 + -1.0) * 34.0 + 10.0));
  fVar6 = fVar23 * 0.14285715;
  fVar16 = fVar12 * 0.14285715;
  fVar22 = (float)FUN_0451258c(fVar10 * 0.14285715,0);
  if (DAT_0951853f == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951853f = '\x01';
  }
  if ((*(int *)(DAT_09187e80 + 0xe4) == 0) && (FUN_03f5c424(), DAT_0951853f == '\0')) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951853f = '\x01';
  }
  if ((*(int *)(DAT_09187e80 + 0xe4) == 0) && (FUN_03f5c424(), DAT_0951853f == '\0')) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951853f = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar12 = (float)(int)(fVar12 * 0.14285715);
  fVar23 = (float)(int)(fVar23 * 0.14285715);
  fVar10 = (float)Utilities_NoiseUtilities__mod7((int)(fVar10 * 0.14285715));
  if (DAT_09518540 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09518540 = '\x01';
  }
  if ((*(int *)(DAT_09187e80 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09518540 == '\0')) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09518540 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  param_1 = param_1 - (float)(int)param_1;
  param_2 = param_2 - (float)(int)param_2;
  fVar27 = param_1 + -0.5;
  fVar28 = param_1 + 0.5;
  fVar13 = param_2 + -0.5;
  fVar15 = param_2 + 0.5;
  fVar30 = fVar27 + fVar7 + -0.42857143;
  fVar35 = fVar27 + fVar5 + -0.42857143;
  fVar7 = fVar13 + fVar11 * 0.14285715 + -0.42857143;
  fVar21 = fVar15 + fVar21 * 0.14285715 + -0.42857143;
  fVar5 = fVar13 + fVar9 * 0.14285715 + -0.42857143;
  fVar9 = fVar15 + fVar8 * 0.14285715 + -0.42857143;
  param_2 = param_2 + -1.5;
  param_1 = param_1 + -1.5;
  fVar19 = fVar28 + fVar19 + -0.42857143;
  fVar4 = fVar28 + fVar4 + -0.42857143;
  fVar7 = fVar30 * fVar30 + fVar7 * fVar7;
  fVar8 = fVar35 * fVar35 + fVar21 * fVar21;
  uVar14 = CONCAT44(fVar8,fVar7);
  fVar16 = param_1 + fVar16 + -0.42857143;
  fVar21 = param_1 + fVar22 + -0.42857143;
  fVar13 = fVar13 + fVar12 * 0.14285715 + -0.42857143;
  fVar15 = fVar15 + fVar10 * 0.14285715 + -0.42857143;
  fVar19 = fVar19 * fVar19 + fVar5 * fVar5;
  fVar4 = fVar4 * fVar4 + fVar9 * fVar9;
  uVar20 = CONCAT44(fVar4,fVar19);
  iVar24 = -(uint)(fVar7 < fVar19);
  iVar26 = -(uint)(fVar8 < fVar4);
  iVar40 = -(uint)(fVar19 < fVar7);
  iVar41 = -(uint)(fVar4 < fVar8);
  iVar31 = -(uint)(0x7f800000 < (uint)ABS(fVar7));
  iVar36 = -(uint)(0x7f800000 < (uint)ABS(fVar8));
  fVar19 = fVar16 * fVar16 + fVar13 * fVar13;
  fVar4 = fVar21 * fVar21 + fVar15 * fVar15;
  bVar32 = (byte)((uint)iVar31 >> 8);
  bVar33 = (byte)((uint)iVar31 >> 0x10);
  bVar34 = (byte)((uint)iVar31 >> 0x18);
  bVar37 = (byte)((uint)iVar36 >> 8);
  bVar38 = (byte)((uint)iVar36 >> 0x10);
  bVar39 = (byte)((uint)iVar36 >> 0x18);
  uVar29 = uVar14 ^ (uVar14 ^ uVar20) &
                    CONCAT17((byte)((uint)iVar26 >> 0x18) | bVar39,
                             CONCAT16((byte)((uint)iVar26 >> 0x10) | bVar38,
                                      CONCAT15((byte)((uint)iVar26 >> 8) | bVar37,
                                               CONCAT14((byte)iVar26 | (byte)iVar36,
                                                        CONCAT13((byte)((uint)iVar24 >> 0x18) |
                                                                 bVar34,CONCAT12((byte)((uint)iVar24
                                                                                       >> 0x10) |
                                                                                 bVar33,CONCAT11((
                                                  byte)((uint)iVar24 >> 8) | bVar32,
                                                  (byte)iVar24 | (byte)iVar31)))))));
  uVar20 = uVar20 ^ (uVar20 ^ uVar14) &
                    ~CONCAT17((byte)((uint)iVar41 >> 0x18) | bVar39,
                              CONCAT16((byte)((uint)iVar41 >> 0x10) | bVar38,
                                       CONCAT15((byte)((uint)iVar41 >> 8) | bVar37,
                                                CONCAT14((byte)iVar41 | (byte)iVar36,
                                                         CONCAT13((byte)((uint)iVar40 >> 0x18) |
                                                                  bVar34,CONCAT12((byte)((uint)
                                                  iVar40 >> 0x10) | bVar33,
                                                  CONCAT11((byte)((uint)iVar40 >> 8) | bVar32,
                                                           (byte)iVar40 | (byte)iVar31)))))));
  iVar31 = -(uint)((float)uVar29 < fVar19);
  iVar36 = -(uint)((float)(uVar29 >> 0x20) < fVar4);
  iVar24 = -(uint)(0x7f800000 < (uint)ABS(fVar19));
  iVar26 = -(uint)(0x7f800000 < (uint)ABS(fVar4));
  uVar14 = CONCAT44(fVar4,fVar19) ^
           (CONCAT44(fVar4,fVar19) ^ uVar29) &
           CONCAT17((byte)((uint)iVar36 >> 0x18) | (byte)((uint)iVar26 >> 0x18),
                    CONCAT16((byte)((uint)iVar36 >> 0x10) | (byte)((uint)iVar26 >> 0x10),
                             CONCAT15((byte)((uint)iVar36 >> 8) | (byte)((uint)iVar26 >> 8),
                                      CONCAT14((byte)iVar36 | (byte)iVar26,
                                               CONCAT13((byte)((uint)iVar31 >> 0x18) |
                                                        (byte)((uint)iVar24 >> 0x18),
                                                        CONCAT12((byte)((uint)iVar31 >> 0x10) |
                                                                 (byte)((uint)iVar24 >> 0x10),
                                                                 CONCAT11((byte)((uint)iVar31 >> 8)
                                                                          | (byte)((uint)iVar24 >> 8
                                                                                  ),
                                                                          (byte)iVar31 |
                                                                          (byte)iVar24)))))));
  fVar19 = (float)(uVar14 >> 0x20);
  iVar31 = -(uint)((float)uVar20 < (float)uVar14);
  iVar36 = -(uint)((float)(uVar20 >> 0x20) < fVar19);
  fVar28 = fVar28 + fVar2 + -0.42857143;
  iVar24 = -(uint)(0x7f800000 < (uint)ABS((float)uVar14));
  iVar26 = -(uint)(0x7f800000 < (uint)ABS(fVar19));
  uVar14 = uVar14 ^ (uVar14 ^ uVar20) &
                    CONCAT17((byte)((uint)iVar36 >> 0x18) | (byte)((uint)iVar26 >> 0x18),
                             CONCAT16((byte)((uint)iVar36 >> 0x10) | (byte)((uint)iVar26 >> 0x10),
                                      CONCAT15((byte)((uint)iVar36 >> 8) | (byte)((uint)iVar26 >> 8)
                                               ,CONCAT14((byte)iVar36 | (byte)iVar26,
                                                         CONCAT13((byte)((uint)iVar31 >> 0x18) |
                                                                  (byte)((uint)iVar24 >> 0x18),
                                                                  CONCAT12((byte)((uint)iVar31 >>
                                                                                 0x10) |
                                                                           (byte)((uint)iVar24 >>
                                                                                 0x10),
                                                                           CONCAT11((byte)((uint)
                                                  iVar31 >> 8) | (byte)((uint)iVar24 >> 8),
                                                  (byte)iVar31 | (byte)iVar24)))))));
  fVar2 = (float)(uVar14 >> 0x20);
  fVar19 = param_2 + fVar17 * 0.14285715 + -0.42857143;
  fVar27 = fVar27 + fVar3 + -0.42857143;
  fVar4 = param_2 + fVar18 * 0.14285715 + -0.42857143;
  fVar3 = (float)uVar14;
  if (fVar3 <= fVar2) {
    fVar2 = fVar3;
  }
  param_1 = param_1 + fVar6 + -0.42857143;
  param_2 = param_2 + fVar23 * 0.14285715 + -0.42857143;
  fVar19 = fVar28 * fVar28 + fVar19 * fVar19;
  fVar4 = fVar27 * fVar27 + fVar4 * fVar4;
  fVar3 = param_1 * param_1 + param_2 * param_2;
  fVar6 = fVar19;
  if ((uint)ABS(fVar4) < 0x7f800001 && fVar4 <= fVar19) {
    fVar6 = fVar4;
  }
  if ((uint)ABS(fVar4) < 0x7f800001 && fVar19 <= fVar4) {
    fVar19 = fVar4;
  }
  bVar1 = true;
  if (((uint)ABS(fVar3) < 0x7f800001) && (bVar1 = false, !NAN(fVar19) && !NAN(fVar3))) {
    bVar1 = fVar19 < fVar3;
  }
  if (!bVar1) {
    fVar19 = fVar3;
  }
  if ((uint)ABS(fVar19) < 0x7f800001 && fVar19 <= fVar6) {
    fVar6 = fVar19;
  }
  if (fVar6 <= fVar2) {
    fVar2 = fVar6;
  }
  return SQRT(fVar2);
}


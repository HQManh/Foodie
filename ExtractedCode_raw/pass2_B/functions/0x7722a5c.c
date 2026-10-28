// rea decompile_all
// name: AssetKits.ParticleImage.Noise$$SinglePerlin
// address: 0x7722a5c
// body: available
// range: 0x7722a5c-0x77231bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77231b8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77231bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AssetKits_ParticleImage_Noise__SinglePerlin
                (float param_1,float param_2,float param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
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
  int iVar32;
  ulong uVar30;
  undefined8 uVar31;
  int iVar33;
  int iVar34;
  ulong uVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  
  if ((DAT_09522a27 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a27 = 1;
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar11 = -0x80000000;
  if (param_3 != INFINITY) {
    iVar11 = (int)param_3;
  }
  iVar1 = 0x7fffffff;
  if (param_3 != INFINITY) {
    iVar1 = (int)param_3 + -1;
  }
  if (0.0 <= param_3) {
    iVar1 = iVar11;
  }
  if (DAT_09522a50 == '\0') {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a50 = '\x01';
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar10 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
  if (lVar10 != 0) {
    uVar4 = *(uint *)(lVar10 + 0x18);
    uVar35 = CONCAT44((int)param_1,(int)param_2);
    iVar11 = -(uint)(param_2 == INFINITY);
    iVar32 = -(uint)(param_1 == INFINITY);
    iVar33 = (int)param_2 + -1;
    iVar34 = (int)param_1 + -1;
    uVar30 = CONCAT44(iVar32,iVar11) & 0x7fffffff7fffffff;
    uVar30 = CONCAT17((byte)(uVar30 >> 0x38) |
                      (byte)((uint)iVar34 >> 0x18) & ~(byte)((uint)iVar32 >> 0x18),
                      CONCAT16((byte)(uVar30 >> 0x30) |
                               (byte)((uint)iVar34 >> 0x10) & ~(byte)((uint)iVar32 >> 0x10),
                               CONCAT15((byte)(uVar30 >> 0x28) |
                                        (byte)((uint)iVar34 >> 8) & ~(byte)((uint)iVar32 >> 8),
                                        CONCAT14((byte)(uVar30 >> 0x20) |
                                                 (byte)iVar34 & ~(byte)iVar32,
                                                 CONCAT13((byte)(uVar30 >> 0x18) |
                                                          (byte)((uint)iVar33 >> 0x18) &
                                                          ~(byte)((uint)iVar11 >> 0x18),
                                                          CONCAT12((byte)(uVar30 >> 0x10) |
                                                                   (byte)((uint)iVar33 >> 0x10) &
                                                                   ~(byte)((uint)iVar11 >> 0x10),
                                                                   CONCAT11((byte)(uVar30 >> 8) |
                                                                            (byte)((uint)iVar33 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar11 >> 8),
                                                  (byte)uVar30 | (byte)iVar33 & ~(byte)iVar11)))))))
    ;
    uVar30 = uVar30 ^ (uVar30 ^ uVar35 ^ (uVar35 ^ 0x8000000080000000) & CONCAT44(iVar32,iVar11)) &
                      CONCAT44(-(uint)(0.0 <= param_1),-(uint)(0.0 <= param_2));
    uVar6 = (int)uVar30 * 0x43c42e4d;
    uVar7 = (int)(uVar30 >> 0x20) * 0x1dde90c9;
    uVar8 = iVar1 * 0x668b6e2f;
    uVar2 = uVar7 ^ param_5;
    uVar3 = uVar2 ^ uVar6;
    uVar9 = (uVar3 ^ uVar8) * 0x27d4eb2d;
    uVar9 = (uVar9 ^ uVar9 >> 0xf) & 0xfc;
    if (((uVar9 < uVar4) && ((uVar9 | 1) < uVar4)) && ((uVar9 | 2) < uVar4)) {
      fVar12 = *(float *)(lVar10 + (ulong)uVar9 * 4 + 0x20);
      fVar13 = *(float *)(lVar10 + 0x20 + (ulong)(uVar9 | 1) * 4);
      fVar14 = *(float *)(lVar10 + 0x20 + (ulong)(uVar9 | 2) * 4);
      if (DAT_09522a50 == '\0') {
        FUN_03f5c2a4(&DAT_091888a0);
        DAT_09522a50 = '\x01';
      }
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar10 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
      if (lVar10 == 0) goto LAB_077231bc;
      uVar5 = *(uint *)(lVar10 + 0x18);
      param_5 = uVar7 + 0x1dde90c9 ^ param_5;
      uVar4 = param_5 ^ uVar6;
      uVar9 = (uVar4 ^ uVar8) * 0x27d4eb2d;
      uVar9 = (uVar9 ^ uVar9 >> 0xf) & 0xfc;
      if (((uVar9 < uVar5) && ((uVar9 | 1) < uVar5)) && ((uVar9 | 2) < uVar5)) {
        fVar15 = *(float *)(lVar10 + (ulong)uVar9 * 4 + 0x20);
        fVar16 = *(float *)(lVar10 + 0x20 + (ulong)(uVar9 | 1) * 4);
        fVar17 = *(float *)(lVar10 + 0x20 + (ulong)(uVar9 | 2) * 4);
        if (DAT_09522a50 == '\0') {
          FUN_03f5c2a4(&DAT_091888a0);
          DAT_09522a50 = '\x01';
        }
        if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar10 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
        if (lVar10 == 0) goto LAB_077231bc;
        uVar7 = *(uint *)(lVar10 + 0x18);
        uVar2 = uVar6 + 0x43c42e4d ^ uVar2;
        uVar9 = (uVar2 ^ uVar8) * 0x27d4eb2d;
        uVar9 = (uVar9 ^ uVar9 >> 0xf) & 0xfc;
        if (((uVar9 < uVar7) && ((uVar9 | 1) < uVar7)) && ((uVar9 | 2) < uVar7)) {
          fVar18 = *(float *)(lVar10 + (ulong)uVar9 * 4 + 0x20);
          fVar19 = *(float *)(lVar10 + 0x20 + (ulong)(uVar9 | 1) * 4);
          fVar20 = *(float *)(lVar10 + 0x20 + (ulong)(uVar9 | 2) * 4);
          if (DAT_09522a50 == '\0') {
            FUN_03f5c2a4(&DAT_091888a0);
            DAT_09522a50 = '\x01';
          }
          if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar10 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
          if (lVar10 == 0) goto LAB_077231bc;
          param_5 = param_5 ^ uVar6 + 0x43c42e4d;
          uVar6 = *(uint *)(lVar10 + 0x18);
          uVar9 = (param_5 ^ uVar8) * 0x27d4eb2d;
          uVar9 = (uVar9 ^ uVar9 >> 0xf) & 0xfc;
          if (((uVar9 < uVar6) && ((uVar9 | 1) < uVar6)) && ((uVar9 | 2) < uVar6)) {
            fVar21 = *(float *)(lVar10 + (ulong)uVar9 * 4 + 0x20);
            fVar22 = *(float *)(lVar10 + 0x20 + (ulong)(uVar9 | 1) * 4);
            fVar23 = *(float *)(lVar10 + 0x20 + (ulong)(uVar9 | 2) * 4);
            if (DAT_09522a50 == '\0') {
              FUN_03f5c2a4(&DAT_091888a0);
              DAT_09522a50 = '\x01';
            }
            if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar10 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
            if (lVar10 == 0) goto LAB_077231bc;
            uVar8 = uVar8 + 0x668b6e2f;
            uVar6 = *(uint *)(lVar10 + 0x18);
            uVar9 = (uVar8 ^ uVar3) * 0x27d4eb2d;
            uVar9 = (uVar9 ^ uVar9 >> 0xf) & 0xfc;
            if (((uVar9 < uVar6) && ((uVar9 | 1) < uVar6)) && ((uVar9 | 2) < uVar6)) {
              fVar24 = *(float *)(lVar10 + (ulong)uVar9 * 4 + 0x20);
              fVar25 = *(float *)(lVar10 + 0x20 + (ulong)(uVar9 | 1) * 4);
              fVar26 = *(float *)(lVar10 + 0x20 + (ulong)(uVar9 | 2) * 4);
              if (DAT_09522a50 == '\0') {
                FUN_03f5c2a4(&DAT_091888a0);
                DAT_09522a50 = '\x01';
              }
              if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar10 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
              if (lVar10 == 0) goto LAB_077231bc;
              uVar3 = *(uint *)(lVar10 + 0x18);
              uVar9 = (uVar4 ^ uVar8) * 0x27d4eb2d;
              uVar9 = (uVar9 ^ uVar9 >> 0xf) & 0xfc;
              if (((uVar9 < uVar3) && ((uVar9 | 1) < uVar3)) && ((uVar9 | 2) < uVar3)) {
                fVar27 = *(float *)(lVar10 + (ulong)uVar9 * 4 + 0x20);
                fVar28 = *(float *)(lVar10 + 0x20 + (ulong)(uVar9 | 1) * 4);
                fVar29 = *(float *)(lVar10 + 0x20 + (ulong)(uVar9 | 2) * 4);
                if (DAT_09522a50 == '\0') {
                  FUN_03f5c2a4(&DAT_091888a0);
                  DAT_09522a50 = '\x01';
                }
                if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                lVar10 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
                if (lVar10 == 0) goto LAB_077231bc;
                uVar3 = *(uint *)(lVar10 + 0x18);
                uVar9 = (uVar2 ^ uVar8) * 0x27d4eb2d;
                uVar9 = (uVar9 ^ uVar9 >> 0xf) & 0xfc;
                if (((uVar9 < uVar3) && ((uVar9 | 1) < uVar3)) && ((uVar9 | 2) < uVar3)) {
                  fVar41 = *(float *)(lVar10 + 0x20 + (ulong)(uVar9 | 1) * 4);
                  fVar42 = *(float *)(lVar10 + 0x20 + (ulong)(uVar9 | 2) * 4);
                  fVar40 = *(float *)(lVar10 + (ulong)uVar9 * 4 + 0x20);
                  if (DAT_09522a50 == '\0') {
                    FUN_03f5c2a4(&DAT_091888a0);
                    DAT_09522a50 = '\x01';
                  }
                  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar10 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
                  if (lVar10 == 0) goto LAB_077231bc;
                  uVar9 = *(uint *)(lVar10 + 0x18);
                  uVar8 = (param_5 ^ uVar8) * 0x27d4eb2d;
                  uVar8 = (uVar8 ^ uVar8 >> 0xf) & 0xfc;
                  if (((uVar8 < uVar9) && ((uVar8 | 1) < uVar9)) && ((uVar8 | 2) < uVar9)) {
                    uVar37 = NEON_fmov(0xbf800000,4);
                    uVar31 = NEON_scvtf(uVar30,4);
                    param_2 = param_2 - (float)uVar31;
                    param_1 = param_1 - (float)((ulong)uVar31 >> 0x20);
                    param_3 = param_3 - (float)iVar1;
                    fVar36 = param_2 + (float)uVar37;
                    fVar38 = param_1 + (float)((ulong)uVar37 >> 0x20);
                    uVar31 = NEON_rev64(CONCAT44(param_1,param_2),4);
                    fVar39 = param_3 + -1.0;
                    uVar37 = NEON_rev64(CONCAT44(fVar38,fVar36),4);
                    fVar24 = param_2 * fVar25 + (float)uVar31 * fVar24 + fVar39 * fVar26;
                    fVar12 = param_1 * fVar12 + (float)((ulong)uVar31 >> 0x20) * fVar13 +
                             param_3 * fVar14;
                    fVar25 = fVar40 * param_1 + fVar41 * fVar36 + fVar39 * fVar42;
                    fVar18 = fVar18 * param_1 + fVar19 * fVar36 + param_3 * fVar20;
                    fVar14 = param_1 * param_1 * param_1 *
                             ((param_1 * 6.0 + -15.0) * param_1 + 10.0);
                    fVar24 = fVar24 + ((fVar27 * fVar38 + fVar28 * param_2 + fVar39 * fVar29) -
                                      fVar24) * fVar14;
                    fVar12 = fVar12 + ((fVar15 * fVar38 + fVar16 * param_2 + param_3 * fVar17) -
                                      fVar12) * fVar14;
                    fVar13 = ((param_2 * 6.0 + -15.0) * param_2 + 10.0) *
                             param_2 * param_2 * param_2;
                    fVar12 = fVar12 + ((fVar18 + ((fVar38 * fVar21 +
                                                   (float)((ulong)uVar37 >> 0x20) * fVar22 +
                                                  param_3 * fVar23) - fVar18) * fVar14) - fVar12) *
                                      fVar13;
                    return (fVar12 + param_3 * param_3 * param_3 *
                                     (param_3 * (param_3 * 6.0 + -15.0) + 10.0) *
                                     ((fVar24 + ((fVar25 + ((fVar36 * *(float *)(lVar10 + 0x20 +
                                                                                (ulong)(uVar8 | 1) *
                                                                                4) +
                                                             (float)uVar37 *
                                                             *(float *)(lVar10 + (ulong)uVar8 * 4 +
                                                                       0x20) +
                                                            fVar39 * *(float *)(lVar10 + 0x20 +
                                                                               (ulong)(uVar8 | 2) *
                                                                               4)) - fVar25) *
                                                           fVar14) - fVar24) * fVar13) - fVar12)) *
                           0.9649214;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_077231bc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


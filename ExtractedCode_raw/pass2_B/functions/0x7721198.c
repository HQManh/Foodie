// rea decompile_all
// name: AssetKits.ParticleImage.Noise$$SingleOpenSimplex2S
// address: 0x7721198
// body: available
// range: 0x7721198-0x77222c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77222c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77222c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AssetKits_ParticleImage_Noise__SingleOpenSimplex2S
                (float param_1,float param_2,float param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  long lVar20;
  uint uVar21;
  int iVar22;
  int iVar24;
  ulong uVar23;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  int iVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  uint uVar42;
  
  if ((DAT_09522a23 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a23 = 1;
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar15 = 0x80000000;
  if (param_1 != INFINITY) {
    uVar15 = (int)param_1;
  }
  uVar1 = 0x7fffffff;
  if (param_1 != INFINITY) {
    uVar1 = (int)param_1 - 1;
  }
  if (0.0 <= param_1) {
    uVar1 = uVar15;
  }
  param_1 = param_1 - (float)(int)uVar1;
  uVar15 = 0x80000000;
  if (-0.5 - param_1 != INFINITY) {
    uVar15 = (int)(-0.5 - param_1);
  }
  if (DAT_09522a50 == '\0') {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a50 = '\x01';
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar20 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
  if (lVar20 == 0) goto LAB_077222c4;
  iVar12 = uVar1 * 0x1dde90c9;
  uVar25 = CONCAT44((int)param_3,(int)param_2);
  iVar28 = -(uint)(param_2 == INFINITY);
  iVar29 = -(uint)(param_3 == INFINITY);
  iVar22 = (int)param_2 + -1;
  iVar24 = (int)param_3 + -1;
  uVar23 = CONCAT44(iVar29,iVar28) & 0x7fffffff7fffffff;
  uVar23 = CONCAT17((byte)(uVar23 >> 0x38) |
                    (byte)((uint)iVar24 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                    CONCAT16((byte)(uVar23 >> 0x30) |
                             (byte)((uint)iVar24 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10),
                             CONCAT15((byte)(uVar23 >> 0x28) |
                                      (byte)((uint)iVar24 >> 8) & ~(byte)((uint)iVar29 >> 8),
                                      CONCAT14((byte)(uVar23 >> 0x20) | (byte)iVar24 & ~(byte)iVar29
                                               ,CONCAT13((byte)(uVar23 >> 0x18) |
                                                         (byte)((uint)iVar22 >> 0x18) &
                                                         ~(byte)((uint)iVar28 >> 0x18),
                                                         CONCAT12((byte)(uVar23 >> 0x10) |
                                                                  (byte)((uint)iVar22 >> 0x10) &
                                                                  ~(byte)((uint)iVar28 >> 0x10),
                                                                  CONCAT11((byte)(uVar23 >> 8) |
                                                                           (byte)((uint)iVar22 >> 8)
                                                                           & ~(byte)((uint)iVar28 >>
                                                                                    8),
                                                                           (byte)uVar23 |
                                                                           (byte)iVar22 &
                                                                           ~(byte)iVar28)))))));
  uVar23 = uVar23 ^ (uVar23 ^ uVar25 ^ (uVar25 ^ 0x8000000080000000) & CONCAT44(iVar29,iVar28)) &
                    CONCAT44(-(uint)(0.0 <= param_3),-(uint)(0.0 <= param_2));
  uVar26 = NEON_scvtf(uVar23,4);
  iVar22 = (int)uVar23 * 0x43c42e4d;
  param_2 = param_2 - (float)uVar26;
  param_3 = param_3 - (float)((ulong)uVar26 >> 0x20);
  iVar24 = (int)(uVar23 >> 0x20) * 0x668b6e2f;
  uVar4 = uVar15 & 0x1dde90c9;
  uVar23 = CONCAT44((int)(-0.5 - param_3),(int)(-0.5 - param_2));
  uVar23 = uVar23 ^ (uVar23 ^ 0x8000000080000000) &
                    CONCAT44(-(uint)(-0.5 - param_3 == INFINITY),-(uint)(-0.5 - param_2 == INFINITY)
                            );
  uVar21 = (uint)(uVar23 >> 0x20);
  uVar16 = (uint)uVar23;
  uVar5 = uVar16 & 0x43c42e4d;
  uVar6 = uVar21 & 0x668b6e2f;
  uVar1 = uVar5 + iVar22;
  uVar7 = uVar4 + iVar12 ^ param_5;
  uVar2 = uVar6 + iVar24;
  uVar9 = *(uint *)(lVar20 + 0x18);
  uVar13 = (uVar7 ^ uVar1 ^ uVar2) * 0x27d4eb2d;
  uVar13 = (uVar13 ^ uVar13 >> 0xf) & 0xfc;
  if (((uVar9 <= uVar13) || (uVar9 <= (uVar13 | 1))) || (uVar9 <= (uVar13 | 2))) goto LAB_077222c0;
  fVar37 = *(float *)(lVar20 + 0x20 + (ulong)(uVar13 | 1) * 4);
  fVar33 = *(float *)(lVar20 + 0x20 + (ulong)(uVar13 | 2) * 4);
  fVar35 = *(float *)(lVar20 + (ulong)uVar13 * 4 + 0x20);
  if (DAT_09522a50 == '\0') {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a50 = '\x01';
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar20 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
  if (lVar20 == 0) goto LAB_077222c4;
  uVar10 = *(uint *)(lVar20 + 0x18);
  uVar13 = param_5 + 0x13bc3d;
  uVar9 = iVar22 + 0x43c42e4d;
  uVar8 = iVar12 + 0x1dde90c9U ^ uVar13;
  uVar3 = iVar24 + 0x668b6e2f;
  uVar14 = (uVar8 ^ uVar9 ^ uVar3) * 0x27d4eb2d;
  uVar14 = (uVar14 ^ uVar14 >> 0xf) & 0xfc;
  if (((uVar10 <= uVar14) || (uVar10 <= (uVar14 | 1))) || (uVar10 <= (uVar14 | 2)))
  goto LAB_077222c0;
  uVar26 = NEON_scvtf(uVar23,4);
  uVar42 = uVar16 | 1;
  uVar23 = uVar23 | 0x100000001;
  fVar32 = param_1 + -0.5;
  param_1 = param_1 + (float)(int)uVar15;
  fVar40 = param_2 + -0.5;
  fVar41 = param_3 + -0.5;
  param_2 = param_2 + (float)uVar26;
  param_3 = param_3 + (float)((ulong)uVar26 >> 0x20);
  uVar10 = uVar15 | 1;
  fVar30 = ((0.75 - fVar32 * fVar32) - fVar40 * fVar40) - fVar41 * fVar41;
  fVar36 = ((0.75 - param_1 * param_1) - param_2 * param_2) - param_3 * param_3;
  iVar28 = (int)(uVar23 >> 0x20);
  fVar31 = fVar32 * (float)(int)(uVar10 << 1);
  fVar38 = fVar31 + fVar36;
  fVar34 = fVar40 * (float)(int)(uVar42 << 1);
  fVar37 = fVar36 * fVar36 * fVar36 * fVar36 *
           (param_1 * fVar35 + param_2 * fVar37 + param_3 * fVar33) +
           fVar30 * fVar30 * fVar30 * fVar30 *
           (fVar32 * *(float *)(lVar20 + (ulong)uVar14 * 4 + 0x20) +
            fVar40 * *(float *)(lVar20 + 0x20 + (ulong)(uVar14 | 1) * 4) +
           fVar41 * *(float *)(lVar20 + 0x20 + (ulong)(uVar14 | 2) * 4));
  fVar35 = fVar41 * (float)(iVar28 << 1);
  fVar33 = fVar32 * (float)(int)(uVar15 << 2 ^ 0xfffffffe) + -1.0;
  if (fVar38 <= 0.0) {
    fVar38 = fVar36 + fVar34 + fVar35;
    if (0.0 < fVar38) {
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09522a50 == '\0') {
        FUN_03f5c2a4(&DAT_091888a0);
        DAT_09522a50 = '\x01';
      }
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar20 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
      if (lVar20 == 0) goto LAB_077222c4;
      uVar11 = *(uint *)(lVar20 + 0x18);
      uVar14 = ((uVar5 ^ 0x43c42e4d) + iVar22 ^ (uVar6 ^ 0x668b6e2f) + iVar24 ^ uVar7) * 0x27d4eb2d;
      uVar14 = (uVar14 ^ uVar14 >> 0xf) & 0xfc;
      if (((uVar11 <= uVar14) || (uVar11 <= (uVar14 | 1))) || (uVar11 <= (uVar14 | 2)))
      goto LAB_077222c0;
      uVar26 = NEON_scvtf(uVar23,4);
      uVar27 = *(undefined8 *)(lVar20 + (ulong)(uVar14 | 1) * 4 + 0x20);
      fVar37 = fVar37 + fVar38 * fVar38 * fVar38 * fVar38 *
                        (param_1 * *(float *)(lVar20 + (ulong)uVar14 * 4 + 0x20) +
                         (param_2 - (float)uVar26) * (float)uVar27 +
                        (param_3 - (float)((ulong)uVar26 >> 0x20)) * (float)((ulong)uVar27 >> 0x20))
      ;
    }
    fVar38 = fVar30 + fVar33;
    if (fVar38 <= 0.0) goto LAB_077218bc;
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522a50 == '\0') {
      FUN_03f5c2a4(&DAT_091888a0);
      DAT_09522a50 = '\x01';
    }
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar20 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
    if (lVar20 == 0) goto LAB_077222c4;
    uVar11 = *(uint *)(lVar20 + 0x18);
    uVar14 = (uVar13 ^ (uVar15 & 0x3bbd2192) + iVar12 ^ uVar9 ^ uVar3) * 0x27d4eb2d;
    uVar14 = (uVar14 ^ uVar14 >> 0xf) & 0xfc;
    if (((uVar11 <= uVar14) || (uVar11 <= (uVar14 | 1))) || (uVar11 <= (uVar14 | 2)))
    goto LAB_077222c0;
    uVar26 = *(undefined8 *)(lVar20 + (ulong)(uVar14 | 1) * 4 + 0x20);
    bVar19 = true;
    fVar37 = fVar37 + fVar38 * fVar38 * fVar38 * fVar38 *
                      ((fVar32 + (float)(int)uVar10) * *(float *)(lVar20 + (ulong)uVar14 * 4 + 0x20)
                       + fVar40 * (float)uVar26 + fVar41 * (float)((ulong)uVar26 >> 0x20));
  }
  else {
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522a50 == '\0') {
      FUN_03f5c2a4(&DAT_091888a0);
      DAT_09522a50 = '\x01';
    }
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar20 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
    if (lVar20 == 0) goto LAB_077222c4;
    uVar11 = *(uint *)(lVar20 + 0x18);
    uVar14 = ((uVar4 ^ 0x1dde90c9) + iVar12 ^ param_5 ^ uVar1 ^ uVar2) * 0x27d4eb2d;
    uVar14 = (uVar14 ^ uVar14 >> 0xf) & 0xfc;
    if (((uVar11 <= uVar14) || (uVar11 <= (uVar14 | 1))) || (uVar11 <= (uVar14 | 2)))
    goto LAB_077222c0;
    uVar26 = *(undefined8 *)(lVar20 + (ulong)(uVar14 | 1) * 4 + 0x20);
    fVar37 = fVar37 + fVar38 * fVar38 * fVar38 * fVar38 *
                      ((param_1 - (float)(int)uVar10) *
                       *(float *)(lVar20 + (ulong)uVar14 * 4 + 0x20) + param_2 * (float)uVar26 +
                      param_3 * (float)((ulong)uVar26 >> 0x20));
LAB_077218bc:
    bVar19 = false;
  }
  fVar39 = fVar34 + fVar36;
  fVar38 = fVar40 * (float)(int)(uVar16 << 2 ^ 0xfffffffe) + -1.0;
  if (fVar39 <= 0.0) {
    fVar39 = fVar36 + fVar31 + fVar35;
    if (0.0 < fVar39) {
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09522a50 == '\0') {
        FUN_03f5c2a4(&DAT_091888a0);
        DAT_09522a50 = '\x01';
      }
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar20 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
      if (lVar20 == 0) goto LAB_077222c4;
      uVar11 = *(uint *)(lVar20 + 0x18);
      uVar14 = ((uVar4 ^ 0x1dde90c9) + iVar12 ^ (uVar6 ^ 0x668b6e2f) + iVar24 ^ param_5 ^ uVar1) *
               0x27d4eb2d;
      uVar14 = (uVar14 ^ uVar14 >> 0xf) & 0xfc;
      if (((uVar11 <= uVar14) || (uVar11 <= (uVar14 | 1))) || (uVar11 <= (uVar14 | 2)))
      goto LAB_077222c0;
      fVar37 = fVar37 + fVar39 * fVar39 * fVar39 * fVar39 *
                        ((param_1 - (float)(int)uVar10) *
                         *(float *)(lVar20 + (ulong)uVar14 * 4 + 0x20) +
                         param_2 * *(float *)(lVar20 + 0x20 + (ulong)(uVar14 | 1) * 4) +
                        (param_3 - (float)iVar28) *
                        *(float *)(lVar20 + 0x20 + (ulong)(uVar14 | 2) * 4));
    }
    fVar39 = fVar30 + fVar38;
    if (fVar39 <= 0.0) goto LAB_07721bf8;
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522a50 == '\0') {
      FUN_03f5c2a4(&DAT_091888a0);
      DAT_09522a50 = '\x01';
    }
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar20 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
    if (lVar20 == 0) goto LAB_077222c4;
    uVar11 = *(uint *)(lVar20 + 0x18);
    uVar14 = (uVar8 ^ (uVar16 & 0x87885c9a) + iVar22 ^ uVar3) * 0x27d4eb2d;
    uVar14 = (uVar14 ^ uVar14 >> 0xf) & 0xfc;
    if (((uVar11 <= uVar14) || (uVar11 <= (uVar14 | 1))) || (uVar11 <= (uVar14 | 2)))
    goto LAB_077222c0;
    bVar17 = true;
    uVar26 = *(undefined8 *)(lVar20 + (ulong)(uVar14 | 1) * 4 + 0x20);
    fVar37 = fVar37 + fVar39 * fVar39 * fVar39 * fVar39 *
                      (fVar32 * *(float *)(lVar20 + (ulong)uVar14 * 4 + 0x20) +
                       (fVar40 + (float)(int)uVar42) * (float)uVar26 +
                      fVar41 * (float)((ulong)uVar26 >> 0x20));
  }
  else {
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522a50 == '\0') {
      FUN_03f5c2a4(&DAT_091888a0);
      DAT_09522a50 = '\x01';
    }
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar20 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
    if (lVar20 == 0) goto LAB_077222c4;
    uVar11 = *(uint *)(lVar20 + 0x18);
    uVar14 = ((uVar5 ^ 0x43c42e4d) + iVar22 ^ uVar7 ^ uVar2) * 0x27d4eb2d;
    uVar14 = (uVar14 ^ uVar14 >> 0xf) & 0xfc;
    if (((uVar11 <= uVar14) || (uVar11 <= (uVar14 | 1))) || (uVar11 <= (uVar14 | 2)))
    goto LAB_077222c0;
    fVar37 = fVar37 + fVar39 * fVar39 * fVar39 * fVar39 *
                      (param_1 * *(float *)(lVar20 + (ulong)uVar14 * 4 + 0x20) +
                       (param_2 - (float)(int)uVar42) *
                       *(float *)(lVar20 + 0x20 + (ulong)(uVar14 | 1) * 4) +
                      param_3 * *(float *)(lVar20 + 0x20 + (ulong)(uVar14 | 2) * 4));
LAB_07721bf8:
    bVar17 = false;
  }
  fVar35 = fVar35 + fVar36;
  fVar39 = fVar41 * (float)(int)(uVar21 << 2 ^ 0xfffffffe) + -1.0;
  if (fVar35 <= 0.0) {
    fVar36 = fVar31 + fVar34 + fVar36;
    if (0.0 < fVar36) {
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09522a50 == '\0') {
        FUN_03f5c2a4(&DAT_091888a0);
        DAT_09522a50 = '\x01';
      }
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar20 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
      if (lVar20 == 0) goto LAB_077222c4;
      uVar6 = *(uint *)(lVar20 + 0x18);
      uVar1 = ((uVar4 ^ 0x1dde90c9) + iVar12 ^ (uVar5 ^ 0x43c42e4d) + iVar22 ^ param_5 ^ uVar2) *
              0x27d4eb2d;
      uVar1 = (uVar1 ^ uVar1 >> 0xf) & 0xfc;
      if (((uVar6 <= uVar1) || (uVar6 <= (uVar1 | 1))) || (uVar6 <= (uVar1 | 2))) goto LAB_077222c0;
      fVar37 = fVar37 + fVar36 * fVar36 * fVar36 * fVar36 *
                        ((param_1 - (float)(int)uVar10) *
                         *(float *)(lVar20 + (ulong)uVar1 * 4 + 0x20) +
                         (param_2 - (float)(int)uVar42) *
                         *(float *)(lVar20 + 0x20 + (ulong)(uVar1 | 1) * 4) +
                        param_3 * *(float *)(lVar20 + 0x20 + (ulong)(uVar1 | 2) * 4));
    }
    fVar35 = fVar30 + fVar39;
    if (fVar35 <= 0.0) goto LAB_07721f30;
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522a50 == '\0') {
      FUN_03f5c2a4(&DAT_091888a0);
      DAT_09522a50 = '\x01';
    }
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar20 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
    if (lVar20 == 0) goto LAB_077222c4;
    uVar2 = *(uint *)(lVar20 + 0x18);
    uVar1 = ((uVar21 & 0xcd16dc5e) + iVar24 ^ uVar8 ^ uVar9) * 0x27d4eb2d;
    uVar1 = (uVar1 ^ uVar1 >> 0xf) & 0xfc;
    if (((uVar2 <= uVar1) || (uVar2 <= (uVar1 | 1))) || (uVar2 <= (uVar1 | 2))) goto LAB_077222c0;
    bVar18 = true;
    fVar37 = fVar37 + fVar35 * fVar35 * fVar35 * fVar35 *
                      (fVar32 * *(float *)(lVar20 + (ulong)uVar1 * 4 + 0x20) +
                       fVar40 * *(float *)(lVar20 + 0x20 + (ulong)(uVar1 | 1) * 4) +
                      (fVar41 + (float)iVar28) * *(float *)(lVar20 + 0x20 + (ulong)(uVar1 | 2) * 4))
    ;
  }
  else {
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522a50 == '\0') {
      FUN_03f5c2a4(&DAT_091888a0);
      DAT_09522a50 = '\x01';
    }
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar20 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
    if (lVar20 == 0) goto LAB_077222c4;
    uVar2 = *(uint *)(lVar20 + 0x18);
    uVar1 = ((uVar6 ^ 0x668b6e2f) + iVar24 ^ uVar7 ^ uVar1) * 0x27d4eb2d;
    uVar1 = (uVar1 ^ uVar1 >> 0xf) & 0xfc;
    if (((uVar2 <= uVar1) || (uVar2 <= (uVar1 | 1))) || (uVar2 <= (uVar1 | 2))) goto LAB_077222c0;
    fVar37 = fVar37 + fVar35 * fVar35 * fVar35 * fVar35 *
                      (param_1 * *(float *)(lVar20 + (ulong)uVar1 * 4 + 0x20) +
                       param_2 * *(float *)(lVar20 + 0x20 + (ulong)(uVar1 | 1) * 4) +
                      (param_3 - (float)iVar28) * *(float *)(lVar20 + 0x20 + (ulong)(uVar1 | 2) * 4)
                      );
LAB_07721f30:
    bVar18 = false;
  }
  if ((!bVar19) && (fVar35 = fVar30 + fVar38 + fVar39, 0.0 < fVar35)) {
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522a50 == '\0') {
      FUN_03f5c2a4(&DAT_091888a0);
      DAT_09522a50 = '\x01';
    }
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar20 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
    if (lVar20 == 0) goto LAB_077222c4;
    uVar2 = *(uint *)(lVar20 + 0x18);
    uVar1 = ((uVar16 & 0x87885c9a) + iVar22 ^ (uVar21 & 0xcd16dc5e) + iVar24 ^ uVar8) * 0x27d4eb2d;
    uVar1 = (uVar1 ^ uVar1 >> 0xf) & 0xfc;
    if (((uVar2 <= uVar1) || (uVar2 <= (uVar1 | 1))) || (uVar2 <= (uVar1 | 2))) goto LAB_077222c0;
    uVar26 = NEON_scvtf(uVar23,4);
    uVar27 = *(undefined8 *)(lVar20 + (ulong)(uVar1 | 1) * 4 + 0x20);
    fVar37 = fVar37 + fVar35 * fVar35 * fVar35 * fVar35 *
                      (fVar32 * *(float *)(lVar20 + (ulong)uVar1 * 4 + 0x20) +
                       (fVar40 + (float)uVar26) * (float)uVar27 +
                      (fVar41 + (float)((ulong)uVar26 >> 0x20)) * (float)((ulong)uVar27 >> 0x20));
  }
  if ((!bVar17) && (fVar35 = fVar30 + fVar33 + fVar39, 0.0 < fVar35)) {
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522a50 == '\0') {
      FUN_03f5c2a4(&DAT_091888a0);
      DAT_09522a50 = '\x01';
    }
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar20 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
    if (lVar20 == 0) goto LAB_077222c4;
    uVar2 = *(uint *)(lVar20 + 0x18);
    uVar1 = ((uVar15 & 0x3bbd2192) + iVar12 ^ (uVar21 & 0xcd16dc5e) + iVar24 ^ uVar13 ^ uVar9) *
            0x27d4eb2d;
    uVar1 = (uVar1 ^ uVar1 >> 0xf) & 0xfc;
    if (((uVar2 <= uVar1) || (uVar2 <= (uVar1 | 1))) || (uVar2 <= (uVar1 | 2))) goto LAB_077222c0;
    fVar37 = fVar37 + fVar35 * fVar35 * fVar35 * fVar35 *
                      ((fVar32 + (float)(int)uVar10) * *(float *)(lVar20 + (ulong)uVar1 * 4 + 0x20)
                       + fVar40 * *(float *)(lVar20 + 0x20 + (ulong)(uVar1 | 1) * 4) +
                      (fVar41 + (float)iVar28) * *(float *)(lVar20 + 0x20 + (ulong)(uVar1 | 2) * 4))
    ;
  }
  if ((!bVar18) && (fVar30 = fVar30 + fVar33 + fVar38, 0.0 < fVar30)) {
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522a50 == '\0') {
      FUN_03f5c2a4(&DAT_091888a0);
      DAT_09522a50 = '\x01';
    }
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar20 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
    if (lVar20 == 0) {
LAB_077222c4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(uint *)(lVar20 + 0x18);
    uVar15 = ((uVar15 & 0x3bbd2192) + iVar12 ^ (uVar16 & 0x87885c9a) + iVar22 ^ uVar13 ^ uVar3) *
             0x27d4eb2d;
    uVar15 = (uVar15 ^ uVar15 >> 0xf) & 0xfc;
    if (((uVar1 <= uVar15) || (uVar1 <= (uVar15 | 1))) || (uVar1 <= (uVar15 | 2))) {
LAB_077222c0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    fVar37 = fVar37 + fVar30 * fVar30 * fVar30 * fVar30 *
                      ((fVar32 + (float)(int)uVar10) * *(float *)(lVar20 + (ulong)uVar15 * 4 + 0x20)
                       + (fVar40 + (float)(int)uVar42) *
                         *(float *)(lVar20 + 0x20 + (ulong)(uVar15 | 1) * 4) +
                      fVar41 * *(float *)(lVar20 + 0x20 + (ulong)(uVar15 | 2) * 4));
  }
  return fVar37 * 9.046026;
}


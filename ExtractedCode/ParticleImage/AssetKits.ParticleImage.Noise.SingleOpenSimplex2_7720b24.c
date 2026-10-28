// rea decompile_all
// name: AssetKits.ParticleImage.Noise$$SingleOpenSimplex2
// address: 0x7720b24
// body: available
// range: 0x7720b24-0x7721197 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7721190 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7721194 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AssetKits_ParticleImage_Noise__SingleOpenSimplex2
                (float param_1,float param_2,float param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  float local_f0;
  float fStack_ec;
  
  if ((DAT_09522a21 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a21 = 1;
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar20 = 0.0;
  iVar9 = 1;
  uVar12 = ~CONCAT44(-(uint)(0.0 <= param_2),-(uint)(0.0 <= param_1)) & 0x8000000080000000 ^
           0x3f0000003f000000;
  fVar15 = (float)uVar12 + param_1;
  fVar16 = (float)(uVar12 >> 0x20) + param_2;
  fVar11 = -0.5;
  if (0.0 <= param_3) {
    fVar11 = 0.5;
  }
  uVar12 = CONCAT44((int)fVar16,(int)fVar15);
  uVar12 = uVar12 ^ (uVar12 ^ 0x8000000080000000) &
                    CONCAT44(-(uint)(fVar16 == INFINITY),-(uint)(fVar15 == INFINITY));
  uVar13 = NEON_fmov(0xbf800000,4);
  uVar14 = NEON_scvtf(uVar12,4);
  iVar1 = -0x80000000;
  if (fVar11 + param_3 != INFINITY) {
    iVar1 = (int)(fVar11 + param_3);
  }
  local_f0 = param_1 - (float)uVar14;
  fStack_ec = param_2 - (float)((ulong)uVar14 >> 0x20);
  fVar11 = (float)uVar13 - local_f0;
  fVar15 = (float)((ulong)uVar13 >> 0x20) - fStack_ec;
  param_3 = param_3 - (float)iVar1;
  uVar23 = CONCAT44((int)fVar15,(int)fVar11) | 0x100000001;
  uVar23 = uVar23 ^ (uVar23 ^ 0x8000000180000001) &
                    CONCAT44(-(uint)(fVar15 == INFINITY),-(uint)(fVar11 == INFINITY));
  uVar7 = 0x80000001;
  if (-1.0 - param_3 != INFINITY) {
    uVar7 = (int)(-1.0 - param_3) | 1;
  }
  uVar8 = (int)uVar12 * 0x1dde90c9;
  uVar13 = NEON_scvtf(uVar23,4);
  fVar21 = (0.6 - local_f0 * local_f0) - (fStack_ec * fStack_ec + param_3 * param_3);
  fVar16 = -(param_3 * (float)(int)uVar7);
  uVar17 = iVar1 * 0x668b6e2f;
  uVar18 = (int)(uVar12 >> 0x20) * 0x43c42e4d;
  fVar11 = -local_f0 * (float)uVar13;
  fVar15 = -fStack_ec * (float)((ulong)uVar13 >> 0x20);
  do {
    if (0.0 < fVar21) {
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
      lVar6 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
      if (lVar6 == 0) goto LAB_07721194;
      uVar24 = *(uint *)(lVar6 + 0x18);
      uVar22 = (uVar17 ^ param_5 ^ uVar8 ^ uVar18) * 0x27d4eb2d;
      uVar22 = (uVar22 ^ uVar22 >> 0xf) & 0xfc;
      if (((uVar24 <= uVar22) || (uVar24 <= (uVar22 | 1))) || (uVar24 <= (uVar22 | 2)))
      goto LAB_07721190;
      uVar13 = *(undefined8 *)(lVar6 + (ulong)(uVar22 | 1) * 4 + 0x20);
      fVar20 = fVar20 + fVar21 * fVar21 * fVar21 * fVar21 *
                        (*(float *)(lVar6 + (ulong)uVar22 * 4 + 0x20) * local_f0 +
                         fStack_ec * (float)uVar13 + param_3 * (float)((ulong)uVar13 >> 0x20));
    }
    bVar4 = true;
    bVar5 = false;
    if (fVar15 <= fVar11) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar11) && !NAN(fVar16)) {
        bVar4 = fVar11 < fVar16;
        bVar5 = false;
      }
    }
    uVar24 = (uint)(uVar23 >> 0x20);
    uVar22 = (uint)uVar23;
    if (bVar4 == bVar5) {
      fVar19 = fVar11 + fVar21 + fVar11;
      if (1.0 < fVar19) {
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
        lVar6 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
        if (lVar6 == 0) goto LAB_07721194;
        uVar2 = *(uint *)(lVar6 + 0x18);
        uVar3 = (uVar17 ^ uVar8 + uVar22 * -0x1dde90c9 ^ uVar18 ^ param_5) * 0x27d4eb2d;
        uVar3 = (uVar3 ^ uVar3 >> 0xf) & 0xfc;
        if (((uVar2 <= uVar3) || (uVar2 <= (uVar3 | 1))) || (uVar2 <= (uVar3 | 2)))
        goto LAB_07721190;
        uVar13 = *(undefined8 *)(lVar6 + (ulong)(uVar3 | 1) * 4 + 0x20);
        fVar19 = fVar19 + -1.0;
        fVar19 = fVar19 * fVar19;
        param_3 = param_3 * (float)((ulong)uVar13 >> 0x20);
        fVar10 = (local_f0 + (float)(int)uVar22) * *(float *)(lVar6 + (ulong)uVar3 * 4 + 0x20) +
                 fStack_ec * (float)uVar13;
        goto LAB_077210d8;
      }
    }
    else if ((fVar15 < fVar16) || (fVar15 <= fVar11)) {
      fVar19 = fVar16 + fVar21 + fVar16;
      if (1.0 < fVar19) {
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
        lVar6 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
        if (lVar6 == 0) {
LAB_07721194:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = *(uint *)(lVar6 + 0x18);
        uVar3 = (uVar17 + uVar7 * -0x668b6e2f ^ uVar18 ^ uVar8 ^ param_5) * 0x27d4eb2d;
        uVar3 = (uVar3 ^ uVar3 >> 0xf) & 0xfc;
        if (((uVar2 <= uVar3) || (uVar2 <= (uVar3 | 1))) || (uVar2 <= (uVar3 | 2))) {
LAB_07721190:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        fVar19 = fVar19 + -1.0;
        fVar19 = fVar19 * fVar19;
        param_3 = (param_3 + (float)(int)uVar7) * *(float *)(lVar6 + 0x20 + (ulong)(uVar3 | 2) * 4);
        fVar10 = local_f0 * *(float *)(lVar6 + (ulong)uVar3 * 4 + 0x20) +
                 fStack_ec * *(float *)(lVar6 + 0x20 + (ulong)(uVar3 | 1) * 4);
LAB_077210d8:
        fVar20 = fVar20 + fVar19 * fVar19 * (fVar10 + param_3);
      }
    }
    else {
      fVar19 = fVar15 + fVar21 + fVar15;
      if (1.0 < fVar19) {
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
        lVar6 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x10);
        if (lVar6 == 0) goto LAB_07721194;
        uVar2 = *(uint *)(lVar6 + 0x18);
        uVar3 = (uVar18 + uVar24 * -0x43c42e4d ^ uVar17 ^ uVar8 ^ param_5) * 0x27d4eb2d;
        uVar3 = (uVar3 ^ uVar3 >> 0xf) & 0xfc;
        if (((uVar2 <= uVar3) || (uVar2 <= (uVar3 | 1))) || (uVar2 <= (uVar3 | 2)))
        goto LAB_07721190;
        fVar19 = fVar19 + -1.0;
        fVar10 = *(float *)(lVar6 + (ulong)uVar3 * 4 + 0x20) * local_f0 +
                 (fStack_ec + (float)(int)uVar24) *
                 *(float *)(lVar6 + 0x20 + (ulong)(uVar3 | 1) * 4);
        param_3 = param_3 * *(float *)(lVar6 + 0x20 + (ulong)(uVar3 | 2) * 4);
        fVar19 = fVar19 * fVar19;
        goto LAB_077210d8;
      }
    }
    if (iVar9 == 0) {
      return fVar20 * 32.694283;
    }
    fVar16 = 0.5 - fVar16;
    param_5 = ~param_5;
    uVar13 = NEON_scvtf(uVar23,4);
    iVar9 = iVar9 + -1;
    uVar23 = CONCAT44(-uVar24,-uVar22);
    fVar11 = 0.5 - fVar11;
    fVar15 = 0.5 - fVar15;
    uVar8 = uVar8 + (uVar22 >> 1 & 0x1dde90c9);
    local_f0 = fVar11 * (float)uVar13;
    fStack_ec = fVar15 * (float)((ulong)uVar13 >> 0x20);
    uVar12 = CONCAT44(uVar24 >> 1,uVar7 >> 1) & 0x43c42e4d668b6e2f;
    uVar17 = uVar17 + (int)uVar12;
    uVar18 = uVar18 + (int)(uVar12 >> 0x20);
    param_3 = (float)(int)uVar7;
    uVar7 = -uVar7;
    param_3 = fVar16 * param_3;
    fVar21 = fVar21 + ((0.75 - fVar11) - (fVar16 + fVar15));
  } while( true );
}


// rea decompile_all
// name: AssetKits.ParticleImage.Noise$$SingleDomainWarpOpenSimplex2Gradient
// address: 0x7725804
// body: available
// range: 0x7725804-0x7725ddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7725dd4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7725dd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AssetKits_ParticleImage_Noise__SingleDomainWarpOpenSimplex2Gradient
               (float param_1,float param_2,float param_3,float param_4,float param_5,
               undefined8 param_6,uint param_7,float *param_8,float *param_9,float *param_10,
               ulong param_11)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ulong uVar30;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  
  if ((DAT_09522a2f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a2f = 1;
  }
  param_5 = param_2 * param_5;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  param_4 = param_4 * param_2;
  param_3 = param_3 * param_2;
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar28 = 0.0;
  uVar15 = CONCAT44(-(uint)(0.0 <= param_3),-(uint)(0.0 <= param_4)) & 0x8000000080000000 ^
           0xbf000000bf000000;
  fVar18 = -0.5;
  fVar27 = 0.0;
  iVar7 = 1;
  if (0.0 <= param_5) {
    fVar18 = 0.5;
  }
  fVar13 = param_4 + (float)uVar15;
  fVar16 = param_3 + (float)(uVar15 >> 0x20);
  uVar15 = CONCAT44((int)fVar16,(int)fVar13);
  uVar15 = uVar15 ^ (uVar15 ^ 0x8000000080000000) &
                    CONCAT44(-(uint)(fVar16 == INFINITY),-(uint)(fVar13 == INFINITY));
  uVar20 = NEON_fmov(0xbf800000,4);
  uVar23 = NEON_scvtf(uVar15,4);
  iVar1 = -0x80000000;
  if (param_5 + fVar18 != INFINITY) {
    iVar1 = (int)(param_5 + fVar18);
  }
  uVar8 = iVar1 * 0x668b6e2f;
  param_4 = param_4 - (float)uVar23;
  param_3 = param_3 - (float)((ulong)uVar23 >> 0x20);
  uVar30 = CONCAT44(param_3,param_4);
  fVar16 = 0.0;
  fVar18 = (float)uVar20 - param_4;
  fVar13 = (float)((ulong)uVar20 >> 0x20) - param_3;
  param_5 = param_5 - (float)iVar1;
  uVar22 = CONCAT44((int)(uVar15 >> 0x20) * 0x1dde90c9,(int)uVar15 * 0x43c42e4d);
  uVar15 = ((CONCAT44((int)fVar13,(int)fVar18) | 0x100000001) ^ 0x8000000180000001) &
           ~CONCAT44(-(uint)(fVar13 == INFINITY),-(uint)(fVar18 == INFINITY)) ^ 0x8000000180000001;
  uVar12 = 0x80000001;
  if (-1.0 - param_5 != INFINITY) {
    uVar12 = (int)(-1.0 - param_5) | 1;
  }
  uVar20 = NEON_scvtf(uVar15,4);
  fVar26 = (0.6 - param_3 * param_3) - (param_5 * param_5 + param_4 * param_4);
  fVar29 = -(param_5 * (float)(int)uVar12);
  fVar18 = -param_4 * (float)uVar20;
  fVar13 = -param_3 * (float)((ulong)uVar20 >> 0x20);
  do {
    uVar3 = (uint)uVar22;
    uVar25 = (uint)(uVar22 >> 0x20);
    if (0.0 < fVar26) {
      if ((param_11 & 1) == 0) {
        if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_0772de60(uVar30 >> 0x20,uVar30 & 0xffffffff,param_5,param_7,uVar22 >> 0x20,
                     uVar22 & 0xffffffff,uVar8,(long)&local_a8 + 4,&local_a8,(long)&local_b0 + 4,0);
        fVar17 = (float)local_a8;
        fVar19 = local_b0._4_4_;
        fVar14 = local_a8._4_4_;
      }
      else {
        if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09522a56 == '\0') {
          FUN_03f5c2a4(&DAT_091888a0);
          DAT_09522a56 = '\x01';
        }
        if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x18);
        if (lVar6 == 0) goto LAB_07725dd8;
        uVar11 = *(uint *)(lVar6 + 0x18);
        uVar10 = (uVar3 ^ uVar8 ^ param_7 ^ uVar25) * 0x32d & 0x3fc;
        if (uVar11 <= uVar10) goto LAB_07725dd4;
        fVar14 = *(float *)(lVar6 + (ulong)uVar10 * 4 + 0x20);
        local_a8 = CONCAT44(fVar14,(float)local_a8);
        if (uVar11 <= (uVar10 | 1)) goto LAB_07725dd4;
        fVar17 = *(float *)(lVar6 + (ulong)(uVar10 | 1) * 4 + 0x20);
        local_a8 = CONCAT44(fVar14,fVar17);
        if (uVar11 <= (uVar10 | 2)) goto LAB_07725dd4;
        fVar19 = *(float *)(lVar6 + (ulong)(uVar10 | 2) * 4 + 0x20);
        local_b0 = CONCAT44(fVar19,(float)local_b0);
      }
      fVar21 = fVar26 * fVar26 * fVar26 * fVar26;
      fVar16 = fVar16 + fVar21 * fVar14;
      fVar27 = fVar27 + fVar21 * fVar17;
      fVar28 = fVar28 + fVar21 * fVar19;
    }
    bVar4 = true;
    bVar5 = false;
    if (fVar18 <= fVar13) {
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar13) && !NAN(fVar29)) {
        bVar4 = fVar13 < fVar29;
        bVar5 = false;
      }
    }
    fVar17 = (float)(uVar30 >> 0x20);
    iVar1 = (int)uVar15;
    uVar24 = (uint)(uVar15 >> 0x20);
    uVar10 = uVar3;
    uVar11 = uVar8;
    if (bVar4 == bVar5) {
      uVar9 = uVar25 + uVar24 * -0x1dde90c9;
      fVar19 = fVar13 + fVar26 + fVar13;
      uVar30 = CONCAT44(fVar17 + (float)(int)uVar24,(float)uVar30);
    }
    else {
      uVar9 = uVar25;
      if ((fVar18 < fVar29) || (fVar18 <= fVar13)) {
        param_5 = param_5 + (float)(int)uVar12;
        fVar19 = fVar29 + fVar26 + fVar29;
        uVar11 = uVar8 + uVar12 * -0x668b6e2f;
      }
      else {
        fVar19 = fVar18 + fVar26 + fVar18;
        uVar30 = CONCAT44(fVar17,(float)uVar30 + (float)iVar1);
        uVar10 = uVar3 + iVar1 * -0x43c42e4d;
      }
    }
    if (1.0 < fVar19) {
      if ((param_11 & 1) == 0) {
        if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_0772de60(uVar30 >> 0x20,uVar30 & 0xffffffff,param_5,param_7,uVar9,uVar10,uVar11,
                     &local_b0,(long)&local_b8 + 4,&local_b8,0);
        fVar17 = local_b8._4_4_;
        fVar14 = (float)local_b8;
        fVar21 = (float)local_b0;
      }
      else {
        if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09522a56 == '\0') {
          FUN_03f5c2a4(&DAT_091888a0);
          DAT_09522a56 = '\x01';
        }
        if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar6 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 0x18);
        if (lVar6 == 0) {
LAB_07725dd8:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar2 = *(uint *)(lVar6 + 0x18);
        uVar10 = (uVar11 ^ param_7 ^ uVar10 ^ uVar9) * 0x32d & 0x3fc;
        if (uVar2 <= uVar10) {
LAB_07725dd4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        fVar21 = *(float *)(lVar6 + (ulong)uVar10 * 4 + 0x20);
        local_b0 = CONCAT44(local_b0._4_4_,fVar21);
        if (uVar2 <= (uVar10 | 1)) goto LAB_07725dd4;
        fVar17 = *(float *)(lVar6 + (ulong)(uVar10 | 1) * 4 + 0x20);
        local_b8 = CONCAT44(fVar17,(float)local_b8);
        if (uVar2 <= (uVar10 | 2)) goto LAB_07725dd4;
        fVar14 = *(float *)(lVar6 + (ulong)(uVar10 | 2) * 4 + 0x20);
        local_b8 = CONCAT44(fVar17,fVar14);
      }
      fVar19 = (fVar19 + -1.0) * (fVar19 + -1.0);
      fVar19 = fVar19 * fVar19;
      fVar16 = fVar16 + fVar19 * fVar21;
      fVar27 = fVar27 + fVar19 * fVar17;
      fVar28 = fVar28 + fVar19 * fVar14;
    }
    if (iVar7 == 0) {
      *param_8 = fVar16 * param_1 + *param_8;
      *param_9 = fVar27 * param_1 + *param_9;
      *param_10 = fVar28 * param_1 + *param_10;
      return;
    }
    uVar22 = uVar15 >> 1;
    uVar20 = NEON_scvtf(uVar15,4);
    param_7 = param_7 + 0x13bc3d;
    uVar15 = CONCAT44(-uVar24,-iVar1);
    uVar8 = uVar8 + (uVar12 >> 1 & 0x668b6e2f);
    iVar7 = iVar7 + -1;
    fVar18 = 0.5 - fVar18;
    fVar13 = 0.5 - fVar13;
    uVar22 = CONCAT44(uVar24 >> 1,(int)uVar22) & 0x1dde90c943c42e4d;
    fVar29 = 0.5 - fVar29;
    uVar22 = CONCAT44(uVar25 + (int)(uVar22 >> 0x20),uVar3 + (int)uVar22);
    uVar30 = CONCAT44(fVar13 * (float)((ulong)uVar20 >> 0x20),fVar18 * (float)uVar20);
    param_5 = (float)(int)uVar12;
    uVar12 = -uVar12;
    param_5 = fVar29 * param_5;
    fVar26 = fVar26 + ((0.75 - fVar13) - (fVar29 + fVar18));
  } while( true );
}


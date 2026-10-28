// rea decompile_all
// name: AssetKits.ParticleImage.Noise$$SingleOpenSimplex2S
// address: 0x771f08c
// body: available
// range: 0x771f08c-0x771f96f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x771f968 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x771f96c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AssetKits_ParticleImage_Noise__SingleOpenSimplex2S
                (float param_1,float param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  if ((DAT_09522a22 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a22 = 1;
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar2 = -0x80000000;
  if (param_1 != INFINITY) {
    iVar2 = (int)param_1;
  }
  iVar1 = 0x7fffffff;
  if (param_1 != INFINITY) {
    iVar1 = (int)param_1 + -1;
  }
  if (0.0 <= param_1) {
    iVar1 = iVar2;
  }
  iVar2 = 0x7fffffff;
  iVar8 = -0x80000000;
  if (param_2 != INFINITY) {
    iVar2 = (int)param_2 + -1;
    iVar8 = (int)param_2;
  }
  if (0.0 <= param_2) {
    iVar2 = iVar8;
  }
  if (DAT_09522a4f == '\0') {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a4f = '\x01';
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar9 = **(long **)(DAT_091888a0 + 0xb8);
  if (lVar9 == 0) goto LAB_0771f96c;
  uVar4 = iVar1 * 0x1dde90c9;
  uVar5 = iVar2 * 0x43c42e4d;
  uVar3 = uVar4 ^ param_4;
  uVar6 = (uVar3 ^ uVar5) * 0x27d4eb2d;
  uVar6 = (uVar6 ^ uVar6 >> 0xf) & 0xfe;
  if ((*(uint *)(lVar9 + 0x18) <= uVar6) || (*(uint *)(lVar9 + 0x18) <= (uVar6 | 1)))
  goto LAB_0771f968;
  fVar16 = *(float *)(lVar9 + 0x20 + (ulong)uVar6 * 4);
  fVar18 = *(float *)(lVar9 + 0x20 + (ulong)(uVar6 | 1) * 4);
  if (DAT_09522a4f == '\0') {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a4f = '\x01';
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar9 = **(long **)(DAT_091888a0 + 0xb8);
  if (lVar9 == 0) goto LAB_0771f96c;
  uVar6 = uVar5 + 0x43c42e4d;
  uVar10 = uVar4 + 0x1dde90c9 ^ param_4;
  uVar7 = (uVar10 ^ uVar6) * 0x27d4eb2d;
  uVar7 = (uVar7 ^ uVar7 >> 0xf) & 0xfe;
  if ((*(uint *)(lVar9 + 0x18) <= uVar7) || (*(uint *)(lVar9 + 0x18) <= (uVar7 | 1)))
  goto LAB_0771f968;
  param_1 = param_1 - (float)iVar1;
  param_2 = param_2 - (float)iVar2;
  fVar11 = (param_1 + param_2) * 0.21132487;
  fVar15 = param_1 - fVar11;
  fVar14 = param_2 - fVar11;
  fVar12 = (0.6666667 - fVar15 * fVar15) - fVar14 * fVar14;
  fVar13 = fVar11 * 3.1547005 + fVar12 + -0.6666666;
  fVar17 = param_1 - param_2;
  fVar13 = fVar13 * fVar13;
  fVar16 = fVar12 * fVar12 * fVar12 * fVar12 * (fVar15 * fVar16 + fVar14 * fVar18) +
           fVar13 * fVar13 *
           ((fVar15 + -0.57735026) * *(float *)(lVar9 + 0x20 + (ulong)uVar7 * 4) +
           (fVar14 + -0.57735026) * *(float *)(lVar9 + 0x20 + (ulong)(uVar7 | 1) * 4));
  if (fVar11 <= 0.21132487) {
    if (0.0 <= param_1 + fVar17) {
      fVar11 = fVar14 + 0.21132487;
      fVar18 = fVar15 + -0.7886751;
      fVar12 = (0.6666667 - fVar18 * fVar18) - fVar11 * fVar11;
      if (0.0 < fVar12) {
        if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09522a4f == '\0') {
          FUN_03f5c2a4(&DAT_091888a0);
          DAT_09522a4f = '\x01';
        }
        if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = **(long **)(DAT_091888a0 + 0xb8);
        if (lVar9 == 0) goto LAB_0771f96c;
        uVar4 = (uVar10 ^ uVar5) * 0x27d4eb2d;
        uVar4 = (uVar4 ^ uVar4 >> 0xf) & 0xfe;
        if ((*(uint *)(lVar9 + 0x18) <= uVar4) || (*(uint *)(lVar9 + 0x18) <= (uVar4 | 1)))
        goto LAB_0771f968;
        fVar18 = fVar18 * *(float *)(lVar9 + 0x20 + (ulong)uVar4 * 4);
        fVar11 = fVar11 * *(float *)(lVar9 + 0x20 + (ulong)(uVar4 | 1) * 4);
        fVar12 = fVar12 * fVar12;
        goto LAB_0771f66c;
      }
    }
    else {
      fVar18 = fVar15 + 0.7886751;
      fVar11 = fVar14 + -0.21132487;
      fVar12 = (0.6666667 - fVar18 * fVar18) - fVar11 * fVar11;
      if (0.0 < fVar12) {
        if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09522a4f == '\0') {
          FUN_03f5c2a4(&DAT_091888a0);
          DAT_09522a4f = '\x01';
        }
        if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = **(long **)(DAT_091888a0 + 0xb8);
        if (lVar9 == 0) goto LAB_0771f96c;
        uVar4 = (uVar4 + 0xe2216f37 ^ param_4 ^ uVar5) * 0x27d4eb2d;
        uVar4 = (uVar4 ^ uVar4 >> 0xf) & 0xfe;
        if ((*(uint *)(lVar9 + 0x18) <= uVar4) || (*(uint *)(lVar9 + 0x18) <= (uVar4 | 1)))
        goto LAB_0771f968;
        fVar18 = fVar18 * *(float *)(lVar9 + 0x20 + (ulong)uVar4 * 4);
        fVar11 = fVar11 * *(float *)(lVar9 + 0x20 + (ulong)(uVar4 | 1) * 4);
        fVar12 = fVar12 * fVar12;
LAB_0771f66c:
        fVar16 = fVar16 + fVar12 * fVar12 * (fVar18 + fVar11);
      }
    }
    if (param_2 < fVar17) {
      fVar15 = fVar15 + -0.21132487;
      fVar14 = fVar14 + 0.7886751;
      fVar18 = (0.6666667 - fVar15 * fVar15) - fVar14 * fVar14;
      if (fVar18 <= 0.0) goto LAB_0771f92c;
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09522a4f == '\0') {
        FUN_03f5c2a4(&DAT_091888a0);
        DAT_09522a4f = '\x01';
      }
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar9 = **(long **)(DAT_091888a0 + 0xb8);
      if (lVar9 == 0) goto LAB_0771f96c;
      uVar10 = uVar5 + 0xbc3bd1b3 ^ uVar3;
      goto LAB_0771f7b8;
    }
    fVar15 = fVar15 + 0.21132487;
    fVar14 = fVar14 + -0.7886751;
    fVar18 = (0.6666667 - fVar15 * fVar15) - fVar14 * fVar14;
    if (fVar18 <= 0.0) goto LAB_0771f92c;
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522a4f == '\0') {
      FUN_03f5c2a4(&DAT_091888a0);
      DAT_09522a4f = '\x01';
    }
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar9 = **(long **)(DAT_091888a0 + 0xb8);
    if (lVar9 == 0) goto LAB_0771f96c;
    uVar10 = uVar6 ^ uVar3;
LAB_0771f8e0:
    uVar6 = (uVar10 * 0x27d4eb2d ^ uVar10 * 0x27d4eb2d >> 0xf) & 0xfe;
    if ((*(uint *)(lVar9 + 0x18) <= uVar6) || (*(uint *)(lVar9 + 0x18) <= (uVar6 | 1))) {
LAB_0771f968:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    fVar15 = fVar15 * *(float *)(lVar9 + 0x20 + (ulong)uVar6 * 4);
    fVar14 = fVar14 * *(float *)(lVar9 + 0x20 + (ulong)(uVar6 | 1) * 4);
  }
  else {
    if (param_1 + fVar17 <= 1.0) {
      fVar18 = fVar15 + 0.21132487;
      fVar11 = fVar14 + -0.7886751;
      fVar12 = (0.6666667 - fVar18 * fVar18) - fVar11 * fVar11;
      if (0.0 < fVar12) {
        if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09522a4f == '\0') {
          FUN_03f5c2a4(&DAT_091888a0);
          DAT_09522a4f = '\x01';
        }
        if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = **(long **)(DAT_091888a0 + 0xb8);
        if (lVar9 == 0) goto LAB_0771f96c;
        uVar6 = (uVar6 ^ uVar3) * 0x27d4eb2d;
        uVar6 = (uVar6 ^ uVar6 >> 0xf) & 0xfe;
        if ((*(uint *)(lVar9 + 0x18) <= uVar6) || (*(uint *)(lVar9 + 0x18) <= (uVar6 | 1)))
        goto LAB_0771f968;
        fVar18 = fVar18 * *(float *)(lVar9 + 0x20 + (ulong)uVar6 * 4);
        fVar11 = fVar11 * *(float *)(lVar9 + 0x20 + (ulong)(uVar6 | 1) * 4);
        fVar12 = fVar12 * fVar12;
        goto LAB_0771f594;
      }
    }
    else {
      fVar18 = fVar15 + -1.3660254;
      fVar11 = fVar14 + -0.3660254;
      fVar12 = (0.6666667 - fVar18 * fVar18) - fVar11 * fVar11;
      if (0.0 < fVar12) {
        if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09522a4f == '\0') {
          FUN_03f5c2a4(&DAT_091888a0);
          DAT_09522a4f = '\x01';
        }
        if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = **(long **)(DAT_091888a0 + 0xb8);
        if (lVar9 == 0) goto LAB_0771f96c;
        uVar6 = (uVar4 + 0x3bbd2192 ^ param_4 ^ uVar6) * 0x27d4eb2d;
        uVar6 = (uVar6 ^ uVar6 >> 0xf) & 0xfe;
        if ((*(uint *)(lVar9 + 0x18) <= uVar6) || (*(uint *)(lVar9 + 0x18) <= (uVar6 | 1)))
        goto LAB_0771f968;
        fVar18 = fVar18 * *(float *)(lVar9 + 0x20 + (ulong)uVar6 * 4);
        fVar11 = fVar11 * *(float *)(lVar9 + 0x20 + (ulong)(uVar6 | 1) * 4);
        fVar12 = fVar12 * fVar12;
LAB_0771f594:
        fVar16 = fVar16 + fVar12 * fVar12 * (fVar18 + fVar11);
      }
    }
    if (param_2 - fVar17 <= 1.0) {
      fVar14 = fVar14 + 0.21132487;
      fVar15 = fVar15 + -0.7886751;
      fVar18 = (0.6666667 - fVar15 * fVar15) - fVar14 * fVar14;
      if (fVar18 <= 0.0) goto LAB_0771f92c;
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09522a4f == '\0') {
        FUN_03f5c2a4(&DAT_091888a0);
        DAT_09522a4f = '\x01';
      }
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar9 = **(long **)(DAT_091888a0 + 0xb8);
      if (lVar9 == 0) {
LAB_0771f96c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar10 = uVar10 ^ uVar5;
      goto LAB_0771f8e0;
    }
    fVar15 = fVar15 + -0.3660254;
    fVar14 = fVar14 + -1.3660254;
    fVar18 = (0.6666667 - fVar15 * fVar15) - fVar14 * fVar14;
    if (fVar18 <= 0.0) goto LAB_0771f92c;
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522a4f == '\0') {
      FUN_03f5c2a4(&DAT_091888a0);
      DAT_09522a4f = '\x01';
    }
    if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar9 = **(long **)(DAT_091888a0 + 0xb8);
    if (lVar9 == 0) goto LAB_0771f96c;
    uVar10 = uVar10 ^ uVar5 + 0x87885c9a;
LAB_0771f7b8:
    uVar6 = (uVar10 * 0x27d4eb2d ^ uVar10 * 0x27d4eb2d >> 0xf) & 0xfe;
    if ((*(uint *)(lVar9 + 0x18) <= uVar6) || (*(uint *)(lVar9 + 0x18) <= (uVar6 | 1)))
    goto LAB_0771f968;
    fVar15 = fVar15 * *(float *)(lVar9 + 0x20 + (ulong)uVar6 * 4);
    fVar14 = fVar14 * *(float *)(lVar9 + 0x20 + (ulong)(uVar6 | 1) * 4);
  }
  fVar16 = fVar16 + fVar18 * fVar18 * fVar18 * fVar18 * (fVar15 + fVar14);
LAB_0771f92c:
  return fVar16 * 18.241962;
}


// rea decompile_all
// name: AssetKits.ParticleImage.Noise$$SingleCellular
// address: 0x77222c8
// body: available
// range: 0x77222c8-0x7722a5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7722a54 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7722a58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AssetKits_ParticleImage_Noise__SingleCellular
                (float param_1,float param_2,float param_3,long param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  if ((DAT_09522a25 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a25 = 1;
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar21 = -0.5;
  if (0.0 <= param_1) {
    fVar21 = 0.5;
  }
  iVar6 = -0x80000000;
  if (fVar21 + param_1 != INFINITY) {
    iVar6 = (int)(fVar21 + param_1);
  }
  iVar14 = iVar6 + -1;
  fVar21 = -0.5;
  if (0.0 <= param_2) {
    fVar21 = 0.5;
  }
  iVar3 = -0x80000000;
  if (fVar21 + param_2 != INFINITY) {
    iVar3 = (int)(fVar21 + param_2);
  }
  iVar9 = iVar3 + -1;
  fVar21 = -0.5;
  if (0.0 <= param_3) {
    fVar21 = 0.5;
  }
  uVar13 = iVar14 * 0x1dde90c9;
  fVar28 = *(float *)(param_4 + 0x48) * 0.39614353;
  iVar4 = -0x80000000;
  if (fVar21 + param_3 != INFINITY) {
    iVar4 = (int)(fVar21 + param_3);
  }
  uVar7 = iVar9 * 0x43c42e4d;
  iVar10 = iVar4 + -1;
  uVar8 = iVar10 * 0x668b6e2f;
  uVar17 = *(uint *)(param_4 + 0x40);
  if (uVar17 < 2) {
    if (iVar6 + 1 < iVar14) {
      uVar17 = 0;
      fVar27 = 3.4028235e+38;
      fVar21 = fVar27;
    }
    else {
      uVar17 = 0;
      fVar27 = 3.4028235e+38;
      fVar21 = fVar27;
      do {
        if (iVar9 <= iVar3 + 1) {
          uVar19 = uVar7;
          iVar1 = iVar9;
          do {
            if (iVar10 <= iVar4 + 1) {
              lVar11 = DAT_091888a0;
              uVar18 = uVar17;
              iVar15 = iVar10;
              uVar16 = uVar8;
              do {
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  FUN_03f5c424();
                  lVar11 = DAT_091888a0;
                }
                lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
                if (lVar12 == 0) goto LAB_07722a58;
                uVar5 = *(uint *)(lVar12 + 0x18);
                uVar17 = (uVar13 ^ param_5 ^ uVar19 ^ uVar16) * 0x27d4eb2d;
                uVar2 = uVar17 & 0x3fc;
                if (((uVar5 <= uVar2) || (uVar5 <= (uVar2 | 1))) || (uVar5 <= (uVar2 | 2)))
                goto LAB_07722a54;
                fVar22 = (float)iVar15;
                iVar15 = iVar15 + 1;
                uVar16 = uVar16 + 0x668b6e2f;
                fVar23 = ((float)iVar1 - param_2) +
                         fVar28 * *(float *)(lVar12 + 0x20 + (ulong)(uVar2 | 1) * 4);
                fVar20 = ((float)iVar14 - param_1) +
                         fVar28 * *(float *)(lVar12 + (ulong)uVar2 * 4 + 0x20);
                fVar22 = (fVar22 - param_3) +
                         fVar28 * *(float *)(lVar12 + 0x20 + (ulong)(uVar2 | 2) * 4);
                fVar23 = fVar20 * fVar20 + fVar23 * fVar23 + fVar22 * fVar22;
                if (fVar23 <= fVar21) {
                  fVar21 = fVar23;
                }
                if (fVar21 <= fVar27) {
                  fVar21 = fVar27;
                }
                if (fVar27 <= fVar23) {
                  uVar17 = uVar18;
                  fVar23 = fVar27;
                }
                fVar27 = fVar23;
                uVar18 = uVar17;
              } while (iVar15 <= iVar4 + 1);
            }
            iVar1 = iVar1 + 1;
            uVar19 = uVar19 + 0x43c42e4d;
          } while (iVar1 <= iVar3 + 1);
        }
        iVar14 = iVar14 + 1;
        uVar13 = uVar13 + 0x1dde90c9;
      } while (iVar14 <= iVar6 + 1);
    }
LAB_077228d8:
    if ((*(int *)(param_4 + 0x40) == 0) && (0 < *(int *)(param_4 + 0x44))) {
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_09522a51 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09522a51 = '\x01';
      }
      if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar27 = SQRT(fVar27);
      if (1 < *(int *)(param_4 + 0x44)) {
        if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (DAT_09522a51 == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_09522a51 = '\x01';
        }
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fVar21 = SQRT(fVar21);
      }
    }
  }
  else {
    if (uVar17 == 2) {
      if (iVar14 <= iVar6 + 1) {
        fVar27 = 3.4028235e+38;
        uVar17 = 0;
        fVar21 = fVar27;
        do {
          if (iVar9 <= iVar3 + 1) {
            uVar19 = uVar7;
            iVar1 = iVar9;
            do {
              if (iVar10 <= iVar4 + 1) {
                lVar11 = DAT_091888a0;
                uVar18 = uVar17;
                iVar15 = iVar10;
                uVar16 = uVar8;
                do {
                  if (*(int *)(lVar11 + 0xe4) == 0) {
                    FUN_03f5c424();
                    lVar11 = DAT_091888a0;
                  }
                  lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
                  if (lVar12 == 0) goto LAB_07722a58;
                  uVar5 = *(uint *)(lVar12 + 0x18);
                  uVar17 = (uVar13 ^ param_5 ^ uVar19 ^ uVar16) * 0x27d4eb2d;
                  uVar2 = uVar17 & 0x3fc;
                  if (((uVar5 <= uVar2) || (uVar5 <= (uVar2 | 1))) || (uVar5 <= (uVar2 | 2)))
                  goto LAB_07722a54;
                  fVar23 = (float)iVar15;
                  iVar15 = iVar15 + 1;
                  uVar16 = uVar16 + 0x668b6e2f;
                  fVar22 = ((float)iVar1 - param_2) +
                           fVar28 * *(float *)(lVar12 + 0x20 + (ulong)(uVar2 | 1) * 4);
                  fVar20 = ((float)iVar14 - param_1) +
                           fVar28 * *(float *)(lVar12 + (ulong)uVar2 * 4 + 0x20);
                  fVar24 = (fVar23 - param_3) +
                           fVar28 * *(float *)(lVar12 + 0x20 + (ulong)(uVar2 | 2) * 4);
                  fVar23 = -fVar20;
                  if (0.0 <= fVar20) {
                    fVar23 = fVar20;
                  }
                  fVar20 = -fVar22;
                  if (0.0 <= fVar22) {
                    fVar20 = fVar22;
                  }
                  fVar22 = -fVar24;
                  if (0.0 <= fVar24) {
                    fVar22 = fVar24;
                  }
                  fVar22 = fVar23 + fVar20 + fVar22;
                  if (fVar22 <= fVar21) {
                    fVar21 = fVar22;
                  }
                  if (fVar21 <= fVar27) {
                    fVar21 = fVar27;
                  }
                  if (fVar27 <= fVar22) {
                    uVar17 = uVar18;
                    fVar22 = fVar27;
                  }
                  fVar27 = fVar22;
                  uVar18 = uVar17;
                } while (iVar15 <= iVar4 + 1);
              }
              iVar1 = iVar1 + 1;
              uVar19 = uVar19 + 0x43c42e4d;
            } while (iVar1 <= iVar3 + 1);
          }
          iVar14 = iVar14 + 1;
          uVar13 = uVar13 + 0x1dde90c9;
        } while (iVar14 <= iVar6 + 1);
        goto LAB_077228d8;
      }
    }
    else if ((uVar17 == 3) && (iVar14 <= iVar6 + 1)) {
      fVar27 = 3.4028235e+38;
      uVar17 = 0;
      fVar21 = fVar27;
      do {
        if (iVar9 <= iVar3 + 1) {
          uVar19 = uVar7;
          iVar1 = iVar9;
          do {
            if (iVar10 <= iVar4 + 1) {
              lVar11 = DAT_091888a0;
              uVar18 = uVar17;
              iVar15 = iVar10;
              uVar16 = uVar8;
              do {
                if (*(int *)(lVar11 + 0xe4) == 0) {
                  FUN_03f5c424();
                  lVar11 = DAT_091888a0;
                }
                lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x18);
                if (lVar12 == 0) {
LAB_07722a58:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar5 = *(uint *)(lVar12 + 0x18);
                uVar17 = (uVar13 ^ param_5 ^ uVar19 ^ uVar16) * 0x27d4eb2d;
                uVar2 = uVar17 & 0x3fc;
                if (((uVar5 <= uVar2) || (uVar5 <= (uVar2 | 1))) || (uVar5 <= (uVar2 | 2))) {
LAB_07722a54:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                fVar23 = (float)iVar15;
                iVar15 = iVar15 + 1;
                uVar16 = uVar16 + 0x668b6e2f;
                fVar22 = ((float)iVar1 - param_2) +
                         fVar28 * *(float *)(lVar12 + 0x20 + (ulong)(uVar2 | 1) * 4);
                fVar20 = ((float)iVar14 - param_1) +
                         fVar28 * *(float *)(lVar12 + (ulong)uVar2 * 4 + 0x20);
                fVar24 = (fVar23 - param_3) +
                         fVar28 * *(float *)(lVar12 + 0x20 + (ulong)(uVar2 | 2) * 4);
                fVar23 = -fVar20;
                if (0.0 <= fVar20) {
                  fVar23 = fVar20;
                }
                fVar25 = -fVar22;
                if (0.0 <= fVar22) {
                  fVar25 = fVar22;
                }
                fVar26 = -fVar24;
                if (0.0 <= fVar24) {
                  fVar26 = fVar24;
                }
                fVar23 = fVar20 * fVar20 + fVar22 * fVar22 + fVar24 * fVar24 +
                         fVar23 + fVar25 + fVar26;
                if (fVar23 <= fVar21) {
                  fVar21 = fVar23;
                }
                if (fVar21 <= fVar27) {
                  fVar21 = fVar27;
                }
                if (fVar27 <= fVar23) {
                  uVar17 = uVar18;
                  fVar23 = fVar27;
                }
                fVar27 = fVar23;
                uVar18 = uVar17;
              } while (iVar15 <= iVar4 + 1);
            }
            iVar1 = iVar1 + 1;
            uVar19 = uVar19 + 0x43c42e4d;
          } while (iVar1 <= iVar3 + 1);
        }
        iVar14 = iVar14 + 1;
        uVar13 = uVar13 + 0x1dde90c9;
      } while (iVar14 <= iVar6 + 1);
      goto LAB_077228d8;
    }
    uVar17 = 0;
    fVar21 = 3.4028235e+38;
    fVar27 = 3.4028235e+38;
  }
  iVar6 = *(int *)(param_4 + 0x44);
  if (iVar6 < 3) {
    if (iVar6 == 0) {
      return (float)(int)uVar17 / 2.1474836e+09;
    }
    if (iVar6 != 1) {
      if (iVar6 != 2) {
        return 0.0;
      }
      return fVar21 + -1.0;
    }
    return fVar27 + -1.0;
  }
  if (iVar6 < 5) {
    if (iVar6 != 3) {
      if (iVar6 != 4) {
        return 0.0;
      }
      fVar21 = fVar21 - fVar27;
      goto LAB_07722a10;
    }
    fVar21 = fVar21 + fVar27;
  }
  else {
    if (iVar6 != 5) {
      if (iVar6 != 6) {
        return 0.0;
      }
      fVar21 = fVar27 / fVar21;
      goto LAB_07722a10;
    }
    fVar21 = fVar21 * fVar27;
  }
  fVar21 = fVar21 * 0.5;
LAB_07722a10:
  return fVar21 + -1.0;
}


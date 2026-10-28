// rea decompile_all
// name: AssetKits.ParticleImage.Noise$$SingleCellular
// address: 0x771f970
// body: available
// range: 0x771f970-0x771ff4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x771ff44 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x771ff48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AssetKits_ParticleImage_Noise__SingleCellular
                (float param_1,float param_2,long param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  ulong uVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if ((DAT_09522a24 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a24 = 1;
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar20 = -0.5;
  fVar18 = fVar20;
  if (0.0 <= param_1) {
    fVar18 = 0.5;
  }
  iVar1 = -0x80000000;
  if (fVar18 + param_1 != INFINITY) {
    iVar1 = (int)(fVar18 + param_1);
  }
  iVar10 = iVar1 + -1;
  iVar1 = iVar1 + 1;
  if (0.0 <= param_2) {
    fVar20 = 0.5;
  }
  uVar11 = iVar10 * 0x1dde90c9;
  fVar18 = *(float *)(param_3 + 0x48) * 0.43701595;
  iVar3 = -0x80000000;
  if (fVar20 + param_2 != INFINITY) {
    iVar3 = (int)(fVar20 + param_2);
  }
  iVar13 = *(int *)(param_3 + 0x40);
  iVar5 = iVar3 + -1;
  uVar4 = iVar5 * 0x43c42e4d;
  if (iVar13 == 3) {
    if (iVar10 <= iVar1) {
      fVar19 = 3.4028235e+38;
      uVar8 = 0;
      fVar20 = fVar19;
      do {
        if (iVar5 <= iVar3 + 1) {
          lVar6 = DAT_091888a0;
          uVar9 = uVar8;
          uVar12 = uVar4;
          iVar13 = iVar5;
          do {
            if (*(int *)(lVar6 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar6 = DAT_091888a0;
            }
            lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
            if (lVar7 == 0) goto LAB_0771ff48;
            uVar8 = (uVar11 ^ param_4 ^ uVar12) * 0x27d4eb2d;
            uVar2 = uVar8 & 0x1fe;
            if ((*(uint *)(lVar7 + 0x18) <= uVar2) || (*(uint *)(lVar7 + 0x18) <= (uVar2 | 1)))
            goto LAB_0771ff44;
            fVar14 = (float)iVar13;
            iVar13 = iVar13 + 1;
            uVar12 = uVar12 + 0x43c42e4d;
            uVar17 = *(undefined8 *)(lVar7 + (ulong)uVar2 * 4 + 0x20);
            fVar15 = ((float)iVar10 - param_1) + (float)uVar17 * fVar18;
            fVar14 = (fVar14 - param_2) + (float)((ulong)uVar17 >> 0x20) * fVar18;
            uVar16 = CONCAT44(fVar14,fVar15) ^
                     (CONCAT44(fVar14,fVar15) ^ CONCAT44(-fVar14,-fVar15)) &
                     CONCAT44(-(uint)(fVar14 < 0.0),-(uint)(fVar15 < 0.0));
            fVar14 = fVar15 * fVar15 + fVar14 * fVar14 + (float)uVar16 + (float)(uVar16 >> 0x20);
            if (fVar14 <= fVar20) {
              fVar20 = fVar14;
            }
            if (fVar20 <= fVar19) {
              fVar20 = fVar19;
            }
            if (fVar19 <= fVar14) {
              uVar8 = uVar9;
              fVar14 = fVar19;
            }
            fVar19 = fVar14;
            uVar9 = uVar8;
          } while (iVar13 <= iVar3 + 1);
        }
        iVar10 = iVar10 + 1;
        uVar11 = uVar11 + 0x1dde90c9;
      } while (iVar10 <= iVar1);
      goto LAB_0771fdd4;
    }
LAB_0771fb90:
    uVar8 = 0;
    fVar20 = 3.4028235e+38;
    fVar19 = 3.4028235e+38;
  }
  else {
    if (iVar13 == 2) {
      if (iVar1 < iVar10) goto LAB_0771fb90;
      fVar19 = 3.4028235e+38;
      uVar8 = 0;
      fVar20 = fVar19;
      do {
        if (iVar5 <= iVar3 + 1) {
          lVar6 = DAT_091888a0;
          uVar9 = uVar8;
          uVar12 = uVar4;
          iVar13 = iVar5;
          do {
            if (*(int *)(lVar6 + 0xe4) == 0) {
              FUN_03f5c424();
              lVar6 = DAT_091888a0;
            }
            lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
            if (lVar7 == 0) {
LAB_0771ff48:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar8 = (uVar11 ^ param_4 ^ uVar12) * 0x27d4eb2d;
            uVar2 = uVar8 & 0x1fe;
            if ((*(uint *)(lVar7 + 0x18) <= uVar2) || (*(uint *)(lVar7 + 0x18) <= (uVar2 | 1))) {
LAB_0771ff44:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            fVar14 = (float)iVar13;
            iVar13 = iVar13 + 1;
            uVar12 = uVar12 + 0x43c42e4d;
            uVar17 = *(undefined8 *)(lVar7 + (ulong)uVar2 * 4 + 0x20);
            fVar15 = ((float)iVar10 - param_1) + (float)uVar17 * fVar18;
            fVar14 = (fVar14 - param_2) + (float)((ulong)uVar17 >> 0x20) * fVar18;
            uVar16 = CONCAT44(fVar14,fVar15) ^
                     (CONCAT44(fVar14,fVar15) ^ CONCAT44(-fVar14,-fVar15)) &
                     CONCAT44(-(uint)(fVar14 < 0.0),-(uint)(fVar15 < 0.0));
            fVar14 = (float)uVar16 + (float)(uVar16 >> 0x20);
            if (fVar14 <= fVar20) {
              fVar20 = fVar14;
            }
            if (fVar20 <= fVar19) {
              fVar20 = fVar19;
            }
            if (fVar19 <= fVar14) {
              uVar8 = uVar9;
              fVar14 = fVar19;
            }
            fVar19 = fVar14;
            uVar9 = uVar8;
          } while (iVar13 <= iVar3 + 1);
        }
        iVar10 = iVar10 + 1;
        uVar11 = uVar11 + 0x1dde90c9;
      } while (iVar10 <= iVar1);
LAB_0771fdd4:
      iVar13 = *(int *)(param_3 + 0x40);
    }
    else {
      if (iVar10 <= iVar1) {
        fVar19 = 3.4028235e+38;
        uVar8 = 0;
        fVar20 = fVar19;
        do {
          if (iVar5 <= iVar3 + 1) {
            lVar6 = DAT_091888a0;
            uVar9 = uVar8;
            uVar12 = uVar4;
            iVar13 = iVar5;
            do {
              if (*(int *)(lVar6 + 0xe4) == 0) {
                FUN_03f5c424();
                lVar6 = DAT_091888a0;
              }
              lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
              if (lVar7 == 0) goto LAB_0771ff48;
              uVar8 = (uVar11 ^ param_4 ^ uVar12) * 0x27d4eb2d;
              uVar2 = uVar8 & 0x1fe;
              if ((*(uint *)(lVar7 + 0x18) <= uVar2) || (*(uint *)(lVar7 + 0x18) <= (uVar2 | 1)))
              goto LAB_0771ff44;
              fVar14 = (float)iVar13;
              iVar13 = iVar13 + 1;
              uVar12 = uVar12 + 0x43c42e4d;
              uVar17 = *(undefined8 *)(lVar7 + (ulong)uVar2 * 4 + 0x20);
              fVar15 = ((float)iVar10 - param_1) + (float)uVar17 * fVar18;
              fVar14 = (fVar14 - param_2) + (float)((ulong)uVar17 >> 0x20) * fVar18;
              fVar14 = fVar15 * fVar15 + fVar14 * fVar14;
              if (fVar14 <= fVar20) {
                fVar20 = fVar14;
              }
              if (fVar20 <= fVar19) {
                fVar20 = fVar19;
              }
              if (fVar19 <= fVar14) {
                uVar8 = uVar9;
                fVar14 = fVar19;
              }
              fVar19 = fVar14;
              uVar9 = uVar8;
            } while (iVar13 <= iVar3 + 1);
          }
          iVar10 = iVar10 + 1;
          uVar11 = uVar11 + 0x1dde90c9;
        } while (iVar10 <= iVar1);
        goto LAB_0771fdd4;
      }
      uVar8 = 0;
      fVar19 = 3.4028235e+38;
      fVar20 = fVar19;
    }
    if ((iVar13 == 0) && (0 < *(int *)(param_3 + 0x44))) {
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
      fVar19 = SQRT(fVar19);
      if (1 < *(int *)(param_3 + 0x44)) {
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
        fVar20 = SQRT(fVar20);
      }
    }
  }
  iVar1 = *(int *)(param_3 + 0x44);
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      return (float)(int)uVar8 / 2.1474836e+09;
    }
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0.0;
      }
      return fVar20 + -1.0;
    }
    return fVar19 + -1.0;
  }
  if (iVar1 < 5) {
    if (iVar1 != 3) {
      if (iVar1 != 4) {
        return 0.0;
      }
      fVar20 = fVar20 - fVar19;
      goto LAB_0771ff08;
    }
    fVar20 = fVar20 + fVar19;
  }
  else {
    if (iVar1 != 5) {
      if (iVar1 != 6) {
        return 0.0;
      }
      fVar20 = fVar19 / fVar20;
      goto LAB_0771ff08;
    }
    fVar20 = fVar20 * fVar19;
  }
  fVar20 = fVar20 * 0.5;
LAB_0771ff08:
  return fVar20 + -1.0;
}


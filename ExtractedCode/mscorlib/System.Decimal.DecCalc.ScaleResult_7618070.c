// rea decompile_all
// name: System.Decimal.DecCalc$$ScaleResult
// address: 0x7618070
// body: available
// range: 0x7618070-0x7618c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7618c90 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Decimal_DecCalc__ScaleResult(uint *param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  int local_64;
  
  uVar14 = (ulong)param_2;
  if ((DAT_095220b9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ff90);
    DAT_095220b9 = 1;
  }
  if (param_2 < 3) {
    iVar6 = 0;
  }
  else {
    uVar15 = param_1[uVar14];
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = 0x11;
    uVar9 = uVar15 << 0x10;
    if (0xffff < uVar15) {
      uVar8 = 1;
      uVar9 = uVar15;
    }
    bVar3 = uVar9 >> 0x18 != 0;
    uVar15 = uVar9 << 8;
    if (bVar3) {
      uVar15 = uVar9;
    }
    uVar9 = uVar8 | 8;
    if (bVar3) {
      uVar9 = uVar8;
    }
    uVar8 = uVar9 | 4;
    uVar7 = uVar15 << 4;
    if (uVar15 >> 0x1c != 0) {
      uVar8 = uVar9;
      uVar7 = uVar15;
    }
    uVar15 = uVar7 << 2;
    uVar9 = uVar8 | 2;
    if (uVar7 >> 0x1e != 0) {
      uVar15 = uVar7;
      uVar9 = uVar8;
    }
    iVar6 = (int)(((param_2 * 0x20 - uVar9) - ((int)uVar15 >> 0x1f)) * 0x4d + -0x138d) >> 8;
    if (param_3 <= iVar6) {
LAB_07618c4c:
      thunk_FUN_03fc39d4(&DAT_09188d78);
      uVar4 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_09212d08);
      System_OverflowException___ctor(uVar4,uVar5,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091e8c70);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar5);
    }
    iVar6 = iVar6 + 1;
  }
  if (iVar6 <= param_3 + -0x1c) {
    iVar6 = param_3 + -0x1c;
  }
  if (iVar6 == 0) {
    return param_3;
  }
  uVar15 = 0;
  local_64 = param_3 - iVar6;
  uVar9 = 0;
LAB_07618250:
  do {
    iVar1 = *(int *)(DAT_0918ff90 + 0xe4);
    iVar13 = (int)uVar14;
    if (iVar6 < 5) {
      if (iVar6 < 3) {
        if (iVar6 == 1) {
          if (iVar1 == 0) {
            FUN_03f5c424();
          }
          uVar7 = param_1[uVar14];
          uVar8 = uVar7 % 10;
          if (-1 < (int)(iVar13 - 1U)) {
            lVar12 = (ulong)(iVar13 - 1U) << 2;
            do {
              iVar1 = *(int *)((long)param_1 + lVar12);
              iVar10 = (int)(CONCAT44(uVar8,iVar1) / 10);
              *(int *)((long)param_1 + lVar12) = iVar10;
              lVar12 = lVar12 + -4;
              uVar8 = iVar1 + iVar10 * -10;
            } while (lVar12 != -4);
          }
          uVar11 = 5;
          uVar7 = uVar7 / 10;
        }
        else if (iVar6 == 2) {
          if (iVar1 == 0) {
            FUN_03f5c424();
          }
          uVar2 = param_1[uVar14];
          uVar7 = uVar2 / 100;
          uVar8 = uVar2 % 100;
          if ((int)(iVar13 - 1U) < 0) {
            uVar11 = 0x32;
            uVar7 = uVar2 / 100;
          }
          else {
            lVar12 = (ulong)(iVar13 - 1U) << 2;
            do {
              iVar1 = *(int *)((long)param_1 + lVar12);
              iVar10 = (int)(CONCAT44(uVar8,iVar1) / 100);
              *(int *)((long)param_1 + lVar12) = iVar10;
              lVar12 = lVar12 + -4;
              uVar8 = iVar1 + iVar10 * -100;
            } while (lVar12 != -4);
            uVar11 = 0x32;
          }
        }
        else {
LAB_07618a70:
          if (iVar1 == 0) {
            FUN_03f5c424();
          }
          uVar7 = (uint)((ulong)(param_1[uVar14] >> 9) * 0x44b83 >> 0x20);
          uVar8 = param_1[uVar14] + (uVar7 >> 7) * -1000000000;
          if (-1 < (int)(iVar13 - 1U)) {
            lVar12 = (ulong)(iVar13 - 1U) << 2;
            do {
              iVar1 = *(int *)((long)param_1 + lVar12);
              iVar10 = (int)(CONCAT44(uVar8,iVar1) / 1000000000);
              *(int *)((long)param_1 + lVar12) = iVar10;
              lVar12 = lVar12 + -4;
              uVar8 = iVar1 + iVar10 * -1000000000;
            } while (lVar12 != -4);
          }
          uVar11 = 500000000;
          uVar7 = uVar7 >> 7;
        }
      }
      else if (iVar6 == 3) {
        if (iVar1 == 0) {
          FUN_03f5c424();
        }
        uVar2 = param_1[uVar14];
        uVar7 = uVar2 / 1000;
        uVar8 = uVar2 % 1000;
        if ((int)(iVar13 - 1U) < 0) {
          uVar11 = 500;
          uVar7 = uVar2 / 1000;
        }
        else {
          lVar12 = (ulong)(iVar13 - 1U) << 2;
          do {
            iVar1 = *(int *)((long)param_1 + lVar12);
            iVar10 = (int)(CONCAT44(uVar8,iVar1) / 1000);
            *(int *)((long)param_1 + lVar12) = iVar10;
            lVar12 = lVar12 + -4;
            uVar8 = iVar1 + iVar10 * -1000;
          } while (lVar12 != -4);
          uVar11 = 500;
        }
      }
      else {
        if (iVar6 != 4) goto LAB_07618a70;
        if (iVar1 == 0) {
          FUN_03f5c424();
        }
        uVar2 = param_1[uVar14];
        uVar7 = uVar2 / 10000;
        uVar8 = uVar2 % 10000;
        if ((int)(iVar13 - 1U) < 0) {
          uVar11 = 5000;
          uVar7 = uVar2 / 10000;
        }
        else {
          lVar12 = (ulong)(iVar13 - 1U) << 2;
          do {
            iVar1 = *(int *)((long)param_1 + lVar12);
            iVar10 = (int)(CONCAT44(uVar8,iVar1) / 10000);
            *(int *)((long)param_1 + lVar12) = iVar10;
            lVar12 = lVar12 + -4;
            uVar8 = iVar1 + iVar10 * -10000;
          } while (lVar12 != -4);
          uVar11 = 5000;
        }
      }
    }
    else if (iVar6 < 7) {
      if (iVar6 == 5) {
        if (iVar1 == 0) {
          FUN_03f5c424();
        }
        uVar2 = param_1[uVar14] >> 5;
        uVar7 = uVar2 / 0xc35;
        uVar8 = param_1[uVar14] + (uVar2 / 0xc35) * -100000;
        if ((int)(iVar13 - 1U) < 0) {
          uVar11 = 50000;
          uVar7 = uVar2 / 0xc35;
        }
        else {
          lVar12 = (ulong)(iVar13 - 1U) << 2;
          do {
            iVar1 = *(int *)((long)param_1 + lVar12);
            iVar10 = (int)(CONCAT44(uVar8,iVar1) / 100000);
            *(int *)((long)param_1 + lVar12) = iVar10;
            lVar12 = lVar12 + -4;
            uVar8 = iVar1 + iVar10 * -100000;
          } while (lVar12 != -4);
          uVar11 = 50000;
        }
      }
      else {
        if (iVar6 != 6) goto LAB_07618a70;
        if (iVar1 == 0) {
          FUN_03f5c424();
        }
        uVar7 = param_1[uVar14];
        uVar8 = uVar7 % 1000000;
        if (-1 < (int)(iVar13 - 1U)) {
          lVar12 = (ulong)(iVar13 - 1U) << 2;
          do {
            iVar1 = *(int *)((long)param_1 + lVar12);
            iVar10 = (int)(CONCAT44(uVar8,iVar1) / 1000000);
            *(int *)((long)param_1 + lVar12) = iVar10;
            lVar12 = lVar12 + -4;
            uVar8 = iVar1 + iVar10 * -1000000;
          } while (lVar12 != -4);
        }
        uVar11 = 500000;
        uVar7 = uVar7 / 1000000;
      }
    }
    else if (iVar6 == 7) {
      if (iVar1 == 0) {
        FUN_03f5c424();
      }
      uVar7 = param_1[uVar14] / 10000000;
      uVar8 = param_1[uVar14] % 10000000;
      if (-1 < (int)(iVar13 - 1U)) {
        lVar12 = (ulong)(iVar13 - 1U) << 2;
        do {
          iVar1 = *(int *)((long)param_1 + lVar12);
          iVar10 = (int)(CONCAT44(uVar8,iVar1) / 10000000);
          *(int *)((long)param_1 + lVar12) = iVar10;
          lVar12 = lVar12 + -4;
          uVar8 = iVar1 + iVar10 * -10000000;
        } while (lVar12 != -4);
      }
      uVar11 = 5000000;
    }
    else {
      if (iVar6 != 8) goto LAB_07618a70;
      if (iVar1 == 0) {
        FUN_03f5c424();
      }
      uVar7 = param_1[uVar14] / 100000000;
      uVar8 = param_1[uVar14] % 100000000;
      if (-1 < (int)(iVar13 - 1U)) {
        lVar12 = (ulong)(iVar13 - 1U) << 2;
        do {
          iVar1 = *(int *)((long)param_1 + lVar12);
          iVar10 = (int)(CONCAT44(uVar8,iVar1) / 100000000);
          *(int *)((long)param_1 + lVar12) = iVar10;
          lVar12 = lVar12 + -4;
          uVar8 = iVar1 + iVar10 * -100000000;
        } while (lVar12 != -4);
      }
      uVar11 = 50000000;
    }
    uVar15 = uVar15 | uVar9;
    param_1[uVar14] = uVar7;
    iVar1 = iVar6 + -9;
    uVar7 = iVar13 - (uint)(uVar7 == 0 && iVar13 != 0);
    uVar14 = (ulong)uVar7;
    bVar3 = 8 < iVar6;
    iVar6 = iVar1;
    uVar9 = uVar8;
  } while (iVar1 != 0 && bVar3);
  if (uVar7 < 3) {
    if (uVar8 < uVar11) {
      return local_64;
    }
    uVar9 = *param_1;
    if (uVar8 <= uVar11 && ((uVar9 & 1) == 0 && uVar15 == 0)) {
      return local_64;
    }
    *param_1 = uVar9 + 1;
    if (uVar9 != 0xffffffff) {
      return local_64;
    }
    uVar14 = 0;
    do {
      uVar15 = (int)uVar14 + 1;
      uVar14 = (ulong)uVar15;
      uVar9 = param_1[uVar14];
      param_1[uVar14] = uVar9 + 1;
    } while (0xfffffffe < uVar9);
    if (uVar15 < 3) {
      return local_64;
    }
    if (local_64 == 0) goto LAB_07618c4c;
    uVar9 = 0;
    uVar15 = 0;
  }
  else if (local_64 == 0) goto LAB_07618c4c;
  local_64 = local_64 + -1;
  iVar6 = 1;
  goto LAB_07618250;
}


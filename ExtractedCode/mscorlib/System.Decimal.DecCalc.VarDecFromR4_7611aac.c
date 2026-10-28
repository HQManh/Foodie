// rea decompile_all
// name: System.Decimal.DecCalc$$VarDecFromR4
// address: 0x7611aac
// body: available
// range: 0x7611aac-0x7611eaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7611ea4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7611ea8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7611eac to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Decimal_DecCalc__VarDecFromR4(float param_1,uint *param_2)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  
  if ((DAT_095220c0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ff90);
    DAT_095220c0 = 1;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar11 = (uint)param_1 >> 0x17 & 0xff;
  if (0x1f < uVar11) {
    if (0xde < uVar11) {
      thunk_FUN_03fc39d4(&DAT_09188d78);
      uVar4 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_09212d08);
      System_OverflowException___ctor(uVar4,uVar5,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091e8c90);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar5);
    }
    fVar2 = -param_1;
    if (param_1 >= 0.0) {
      fVar2 = param_1;
    }
    iVar1 = (int)(uVar11 * 0x4d10 + -0x25ede0) >> 0x10;
    uVar11 = 6 - iVar1;
    uVar6 = iVar1 - 6;
    dVar15 = (double)fVar2;
    if (uVar6 == 0 || iVar1 < 6) {
      if (0x1b < uVar11) {
        uVar11 = 0x1c;
      }
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *(long *)(*(long *)(DAT_0918ff90 + 0xb8) + 0x10);
      if (lVar7 == 0) goto LAB_07611ea8;
      if (*(uint *)(lVar7 + 0x18) <= uVar11) goto LAB_07611eac;
      dVar15 = *(double *)(lVar7 + (ulong)uVar11 * 8 + 0x20) * dVar15;
    }
    else if ((1e+07 <= fVar2) || (iVar1 != 7)) {
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *(long *)(*(long *)(DAT_0918ff90 + 0xb8) + 0x10);
      if (lVar7 == 0) goto LAB_07611ea8;
      if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_07611eac;
      dVar15 = dVar15 / *(double *)(lVar7 + (ulong)uVar6 * 8 + 0x20);
    }
    else {
      uVar11 = 0;
    }
    uVar6 = (uint)((int)uVar11 < 0x1c && dVar15 < 1000000.0);
    dVar14 = dVar15 * 10.0;
    if (uVar6 == 0) {
      dVar14 = dVar15;
    }
    uVar10 = 0x80000000;
    if (dVar14 != INFINITY) {
      uVar10 = (int)dVar14;
    }
    if ((0.5 < dVar14 - (double)(int)uVar10) ||
       (((uVar10 & 1) != 0 && (dVar14 - (double)(int)uVar10 == 0.5)))) {
      uVar10 = uVar10 + 1;
    }
    if (uVar10 != 0) {
      uVar9 = (uint)(param_1 < 0.0) << 0x1f;
      uVar11 = uVar11 + uVar6;
      if ((int)uVar11 < 0) {
        uVar6 = -uVar11;
        if (uVar6 < 10) {
          if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar7 = **(long **)(DAT_0918ff90 + 0xb8);
          if (lVar7 == 0) goto LAB_07611ea8;
          if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_07611eac;
          *(ulong *)(param_2 + 2) =
               (ulong)*(uint *)(lVar7 + (ulong)uVar6 * 4 + 0x20) * (ulong)uVar10;
        }
        else if (uVar6 < 0x13) {
          if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar7 = **(long **)(DAT_0918ff90 + 0xb8);
          if (lVar7 == 0) {
LAB_07611ea8:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(uint *)(lVar7 + 0x18) <= -uVar11 - 9) {
LAB_07611eac:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar13 = (ulong)*(uint *)(lVar7 + (ulong)(-uVar11 - 9) * 4 + 0x20) * (ulong)uVar10;
          uVar8 = (uVar13 & 0xffffffff) * 1000000000;
          lVar7 = (uVar8 >> 0x20) + (uVar13 >> 0x20) * 1000000000;
          param_2[2] = (uint)uVar8;
          param_2[3] = (uint)lVar7;
          param_2[1] = (uint)((ulong)lVar7 >> 0x20);
        }
        else {
          if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar7 = **(long **)(DAT_0918ff90 + 0xb8);
          if (lVar7 == 0) goto LAB_07611ea8;
          if (*(uint *)(lVar7 + 0x18) <= -uVar11 - 0x12) goto LAB_07611eac;
          System_Decimal_DecCalc__UInt64x64To128
                    ((ulong)*(uint *)(lVar7 + (ulong)(-uVar11 - 0x12) * 4 + 0x20) * (ulong)uVar10,
                     1000000000000000000,param_2);
        }
      }
      else {
        uVar6 = uVar11;
        if (5 < uVar11) {
          uVar6 = 6;
        }
        if (((3 < uVar11) && ((uVar10 & 0xf) == 0)) && (uVar10 == (uVar10 / 10000) * 10000)) {
          uVar6 = uVar6 - 4;
          uVar10 = uVar10 / 10000;
          uVar11 = uVar11 - 4;
        }
        if (((uVar6 < 2) || ((uVar10 & 3) != 0)) ||
           (uVar13 = (ulong)uVar10 / 100, uVar10 != (uVar10 / 100) * 100)) {
          uVar13 = (ulong)uVar10;
        }
        else {
          uVar11 = uVar11 - 2;
          uVar6 = uVar6 - 2;
        }
        uVar12 = (uint)uVar13;
        uVar10 = uVar12;
        if ((uVar6 != 0) && ((uVar13 & 1) == 0)) {
          bVar3 = uVar12 == (int)(uVar13 / 10) * 10;
          uVar10 = (uint)(uVar13 / 10);
          if (!bVar3) {
            uVar10 = uVar12;
          }
          uVar11 = uVar11 - bVar3;
        }
        uVar9 = uVar9 | uVar11 << 0x10;
        if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        param_2[2] = uVar10;
      }
      *param_2 = uVar9;
    }
  }
  return;
}


// rea decompile_all
// name: System.Decimal.DecCalc$$VarDecFromR8
// address: 0x7611f38
// body: available
// range: 0x7611f38-0x7612347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x761233c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7612340 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7612344 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Decimal_DecCalc__VarDecFromR8(double param_1,uint *param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  double dVar14;
  double dVar15;
  
  if ((DAT_095220c1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ff90);
    DAT_095220c1 = 1;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = (uint)((ulong)param_1 >> 0x34) & 0x7ff;
  if (0x39f < uVar5) {
    if (0x45e < uVar5) {
      thunk_FUN_03fc39d4(&DAT_09188d78);
      uVar3 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_09212d08);
      System_OverflowException___ctor(uVar3,uVar4,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091e8c98);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar4);
    }
    dVar15 = -param_1;
    if (param_1 >= 0.0) {
      dVar15 = param_1;
    }
    iVar1 = (int)(uVar5 * 0x4d10 + -0x133a5e0) >> 0x10;
    uVar5 = 0xe - iVar1;
    uVar6 = iVar1 - 0xe;
    if (uVar6 == 0 || iVar1 < 0xe) {
      if (0x1b < uVar5) {
        uVar5 = 0x1c;
      }
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *(long *)(*(long *)(DAT_0918ff90 + 0xb8) + 0x10);
      if (lVar7 == 0) goto LAB_07612340;
      if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_07612344;
      dVar15 = dVar15 * *(double *)(lVar7 + (ulong)uVar5 * 8 + 0x20);
    }
    else if ((1e+15 <= dVar15) || (iVar1 != 0xf)) {
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = *(long *)(*(long *)(DAT_0918ff90 + 0xb8) + 0x10);
      if (lVar7 == 0) goto LAB_07612340;
      if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_07612344;
      dVar15 = dVar15 / *(double *)(lVar7 + (ulong)uVar6 * 8 + 0x20);
    }
    else {
      uVar5 = 0;
    }
    uVar6 = (uint)((int)uVar5 < 0x1c && dVar15 < 100000000000000.0);
    dVar14 = dVar15 * 10.0;
    if (uVar6 == 0) {
      dVar14 = dVar15;
    }
    uVar12 = 0x8000000000000000;
    if (dVar14 != INFINITY) {
      uVar12 = (long)dVar14;
    }
    if ((0.5 < dVar14 - (double)(long)uVar12) ||
       (((uVar12 & 1) != 0 && (dVar14 - (double)(long)uVar12 == 0.5)))) {
      uVar12 = uVar12 + 1;
    }
    if (uVar12 != 0) {
      uVar13 = (uint)(param_1 < 0.0) << 0x1f;
      uVar5 = uVar5 + uVar6;
      if ((int)uVar5 < 0) {
        uVar6 = -uVar5;
        if (uVar6 < 10) {
          if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar7 = **(long **)(DAT_0918ff90 + 0xb8);
          if (lVar7 == 0) goto LAB_07612340;
          if (*(uint *)(lVar7 + 0x18) <= uVar6) goto LAB_07612344;
          uVar5 = *(uint *)(lVar7 + (ulong)uVar6 * 4 + 0x20);
          uVar8 = (uVar12 & 0xffffffff) * (ulong)uVar5;
          lVar7 = (uVar8 >> 0x20) + (uVar12 >> 0x20) * (ulong)uVar5;
          param_2[2] = (uint)uVar8;
          param_2[3] = (uint)lVar7;
          param_2[1] = (uint)((ulong)lVar7 >> 0x20);
        }
        else {
          if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar7 = *(long *)(*(long *)(DAT_0918ff90 + 0xb8) + 8);
          if (lVar7 == 0) {
LAB_07612340:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(uint *)(lVar7 + 0x18) <= ~uVar5) {
LAB_07612344:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          System_Decimal_DecCalc__UInt64x64To128
                    (uVar12,*(undefined8 *)(lVar7 + (ulong)~uVar5 * 8 + 0x20),param_2);
        }
      }
      else {
        uVar6 = uVar5;
        if (0xd < uVar5) {
          uVar6 = 0xe;
        }
        uVar9 = (uint)uVar12;
        if ((7 < uVar5) && ((uVar12 & 0xff) == 0)) {
          uVar11 = (uint)(uVar12 / 100000000);
          if (uVar11 * 100000000 == uVar9) {
            uVar6 = uVar6 - 8;
            uVar12 = uVar12 / 100000000;
            uVar5 = uVar5 - 8;
            uVar9 = uVar11;
          }
        }
        if (((uVar6 < 4) || ((uVar9 & 0xf) != 0)) ||
           (uVar8 = uVar12 / 10000, (int)uVar8 * 10000 != uVar9)) {
          uVar8 = (ulong)uVar9;
        }
        else {
          uVar5 = uVar5 - 4;
          uVar12 = uVar8;
          uVar6 = uVar6 - 4;
        }
        if (((uVar6 < 2) || ((uVar8 & 3) != 0)) ||
           (uVar10 = uVar12 / 100, (int)uVar10 * 100 != (int)uVar8)) {
          uVar10 = uVar8 & 0xffffffff;
        }
        else {
          uVar5 = uVar5 - 2;
          uVar12 = uVar10;
          uVar6 = uVar6 - 2;
        }
        uVar8 = uVar12;
        if ((uVar6 != 0) && ((uVar10 & 1) == 0)) {
          bVar2 = (int)(uVar12 / 10) * 10 == (int)uVar10;
          uVar8 = uVar12 / 10;
          if (!bVar2) {
            uVar8 = uVar12;
          }
          uVar5 = uVar5 - bVar2;
        }
        uVar13 = uVar13 | uVar5 << 0x10;
        if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        *(ulong *)(param_2 + 2) = uVar8;
      }
      *param_2 = uVar13;
    }
  }
  return;
}


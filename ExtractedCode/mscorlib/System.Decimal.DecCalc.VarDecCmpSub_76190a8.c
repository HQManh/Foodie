// rea decompile_all
// name: System.Decimal.DecCalc$$VarDecCmpSub
// address: 0x76190a8
// body: available
// range: 0x76190a8-0x761926b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7619264 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7619268 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_Decimal_DecCalc__VarDecCmpSub(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  
  if ((DAT_095220be & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ff90);
    FUN_03f5c2a4(&DAT_091837d8);
    DAT_095220be = 1;
  }
  iVar2 = *param_2;
  iVar3 = *param_1;
  if (*(int *)(DAT_091837d8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((DAT_09522068 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091837d8);
    DAT_09522068 = 1;
  }
  uVar15 = *(ulong *)(param_1 + 2);
  uVar14 = (ulong)(uint)param_1[1];
  uVar10 = *(ulong *)(param_2 + 2);
  uVar7 = (ulong)(uint)param_2[1];
  uVar12 = iVar2 >> 0x1f | 1;
  if (iVar2 != iVar3) {
    uVar13 = iVar2 - iVar3 >> 0x10;
    bVar5 = (uVar13 & 0x80000000) != 0;
    uVar11 = uVar15;
    uVar16 = uVar14;
    if (bVar5) {
      uVar11 = uVar10;
      uVar16 = uVar7;
      uVar10 = uVar15;
      uVar7 = uVar14;
    }
    uVar14 = uVar16;
    uVar1 = -uVar13;
    if (!bVar5) {
      uVar1 = uVar13;
    }
    uVar16 = (ulong)uVar1;
    lVar6 = DAT_0918ff90;
    uVar1 = -uVar12;
    if ((uVar13 & 0x80000000) == 0) {
      uVar1 = uVar12;
    }
    do {
      uVar12 = uVar1;
      if (uVar16 < 9) {
        if (*(int *)(lVar6 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar6 = DAT_0918ff90;
        }
        lVar8 = **(long **)(lVar6 + 0xb8);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar13 = *(uint *)(lVar8 + uVar16 * 4 + 0x20);
      }
      else {
        uVar13 = 1000000000;
      }
      uVar15 = (ulong)uVar13;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar6 = DAT_0918ff90;
      }
      uVar9 = (uVar11 & 0xffffffff) * uVar15;
      uVar11 = (uVar9 >> 0x20) + (uVar11 >> 0x20) * uVar15;
      uVar14 = uVar15 * uVar14 + (uVar11 >> 0x20);
      if (uVar14 >> 0x20 != 0) {
        return uVar12;
      }
      uVar11 = uVar9 & 0xffffffff | uVar11 << 0x20;
      uVar16 = uVar16 - 9;
      uVar14 = uVar14 & 0xffffffff;
      uVar15 = uVar11;
      uVar1 = uVar12;
    } while (0 < (int)uVar16);
  }
  if (uVar14 == uVar7) {
    if (uVar15 == uVar10) {
      return 0;
    }
    bVar4 = uVar15 <= uVar10;
    bVar5 = uVar10 == uVar15;
  }
  else {
    bVar4 = uVar14 <= uVar7;
    bVar5 = uVar7 == uVar14;
  }
  uVar13 = -uVar12;
  if (!bVar4 || bVar5) {
    uVar13 = uVar12;
  }
  return uVar13;
}


// rea decompile_all
// name: System.Number$$NumberBufferToDecimal
// address: 0x75c2f40
// body: available
// range: 0x75c2f40-0x75c324f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75c324c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Number__NumberBufferToDecimal(long param_1,undefined8 *param_2)

{
  short *psVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  ushort *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if ((DAT_09521d70 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09521d70 = 1;
  }
  puVar7 = (ushort *)System_Number_NumberBuffer__get_digits(param_1,0);
  iVar14 = *(int *)(param_1 + 4);
  uVar6 = System_Number_NumberBuffer__get_sign(param_1,0);
  uVar11 = (uint)*puVar7;
  if (*puVar7 == 0) {
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar11 = -iVar14;
    if (DAT_0951da49 == '\0') {
      FUN_03f5c2a4(&DAT_091d2b28);
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_0951da49 = '\x01';
    }
    if (0x1b < (int)uVar11) {
      uVar11 = 0x1c;
    }
    uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
    uVar9 = 0;
    uVar12 = 0;
    uVar10 = 0;
    goto LAB_075c30a0;
  }
  if (iVar14 < 0x1e) {
    uVar12 = 0;
    iVar2 = iVar14;
    if (-0x1d < iVar14) {
      iVar2 = -0x1c;
    }
    do {
      uVar9 = uVar12;
      iVar15 = iVar2;
      if (iVar14 < -0x1b) goto LAB_075c30c8;
      uVar12 = (ulong)(uVar11 - 0x30) + uVar12 * 10;
      iVar14 = iVar14 + -1;
      puVar7 = puVar7 + 1;
      uVar11 = (uint)*puVar7;
      uVar9 = uVar12;
      iVar15 = iVar14;
      if (0x1999999999999998 < uVar12) goto LAB_075c30c8;
    } while (*puVar7 != 0);
    do {
      uVar9 = uVar12;
      iVar15 = iVar14;
      if (iVar14 < 1) break;
      iVar14 = iVar14 + -1;
      uVar9 = uVar12 * 10;
      bVar5 = uVar12 < 0x28f5c28f5c28f5d;
      uVar12 = uVar9;
      iVar15 = iVar14;
    } while (bVar5);
LAB_075c30c8:
    uVar10 = 0;
    do {
      if ((iVar15 < 1) && ((uVar11 == 0 || (iVar15 < -0x1b)))) goto LAB_075c3174;
      if (0x19999998 < uVar10) {
        if (uVar10 != 0x19999999) goto LAB_075c3174;
        if ((0x9999999999999998 < uVar9) && ((uVar9 != 0x9999999999999999 || (0x35 < uVar11))))
        goto LAB_075c316c;
      }
      uVar12 = (uVar9 & 0xffffffff) * 4 + (uVar9 & 0xffffffff);
      lVar13 = (uVar12 >> 0x1f) + (uVar9 >> 0x20) * 10;
      uVar10 = (int)((ulong)lVar13 >> 0x20) + uVar10 * 10;
      uVar9 = (uVar12 & 0x7fffffff) << 1 | lVar13 << 0x20;
      if (uVar11 != 0) {
        uVar3 = uVar11 - 0x30;
        puVar7 = puVar7 + 1;
        uVar11 = (uint)*puVar7;
        bVar5 = CARRY8(uVar9,(ulong)uVar3);
        uVar9 = uVar9 + uVar3;
        if (bVar5) {
          uVar10 = uVar10 + 1;
        }
      }
      iVar15 = iVar15 + -1;
    } while( true );
  }
  goto LAB_075c31e0;
LAB_075c316c:
  uVar10 = 0x19999999;
LAB_075c3174:
  if (0x34 < uVar11) {
    if ((uVar11 == 0x35) && ((uVar9 & 1) == 0)) {
      lVar13 = 2;
      do {
        psVar1 = (short *)((long)puVar7 + lVar13);
        iVar14 = (int)lVar13;
        if (iVar14 == 0x2a) break;
        lVar13 = lVar13 + 2;
      } while (*psVar1 == 0x30);
      if ((iVar14 == 0x2a) || (*psVar1 == 0)) goto LAB_075c31d8;
    }
    bVar5 = uVar9 == 0xffffffffffffffff;
    uVar9 = uVar9 + 1;
    if (bVar5) {
      bVar5 = uVar10 == 0xffffffff;
      uVar10 = uVar10 + 1;
      if (bVar5) {
        iVar15 = iVar15 + 1;
        uVar9 = 0x999999999999999a;
        uVar10 = 0x19999999;
      }
      else {
        uVar9 = 0;
      }
    }
  }
LAB_075c31d8:
  if (iVar15 < 1) {
    if (iVar15 < -0x1c) {
      uVar9 = 0;
      uVar12 = 0;
      uVar10 = 0;
      uVar11 = 0x1c;
    }
    else {
      uVar12 = uVar9 >> 0x20;
      uVar11 = -iVar15;
    }
LAB_075c30a0:
    uStack_50 = 0;
    local_58 = 0;
    System_Decimal___ctor(&local_58,uVar9,uVar12,uVar10,uVar6 & 1,uVar11,0);
    uVar8 = 1;
    param_2[1] = uStack_50;
    *param_2 = local_58;
    goto LAB_075c31e4;
  }
LAB_075c31e0:
  uVar8 = 0;
LAB_075c31e4:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


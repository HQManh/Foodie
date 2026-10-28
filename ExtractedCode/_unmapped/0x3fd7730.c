// rea decompile_all
// name: FUN_03fd7730
// address: 0x3fd7730
// body: available
// range: 0x3fd7730-0x3fd7aef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_03fd7730(long *param_1,long *param_2,ulong param_3,long param_4,long param_5,int param_6)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  
  if (param_2 <= param_1) {
    DAT_09748728 = 5;
    DAT_09748758 = 1;
    if (DAT_09535be0 != 0) {
      FUN_03fcb51c("Mark stack overflow; current size = %lu entries\n",DAT_09748708);
    }
    return param_1 + -0x400;
  }
  lVar10 = (long)param_6;
  uVar2 = (param_3 >> 2) << 4 | 1;
  uVar12 = 0;
  if (lVar10 != 0) {
    uVar12 = (param_5 - param_4 >> 3) / lVar10;
  }
  uVar4 = 0;
  if (param_6 != 0) {
    uVar4 = 0x3e / param_6;
  }
  uVar9 = (ulong)(int)uVar4;
  if (uVar4 < 2) {
    if (uVar12 < 0x101) {
      if (uVar12 == 0) {
        return param_1;
      }
    }
    else {
      plVar5 = param_1 + 2;
      if (param_2 <= plVar5) {
        DAT_09748728 = 5;
        DAT_09748758 = 1;
        if (DAT_09535be0 != 0) {
          FUN_03fcb51c("Mark stack overflow; current size = %lu entries\n",DAT_09748708);
        }
        plVar5 = param_1 + -0x3fe;
      }
      uVar12 = 0x100;
      uVar4 = iRam0000000009748a70 << 2;
      *plVar5 = param_4 + lVar10 * 0x800;
      plVar5[1] = (long)(int)(uVar4 | 0x102);
      param_1 = plVar5;
    }
    do {
      plVar5 = param_1 + 2;
      if (param_2 <= param_1 + 2) {
        DAT_09748728 = 5;
        DAT_09748758 = 1;
        if (DAT_09535be0 != 0) {
          FUN_03fcb51c("Mark stack overflow; current size = %lu entries\n",DAT_09748708);
        }
        plVar5 = param_1 + -0x3fe;
      }
      param_1 = plVar5;
      uVar12 = uVar12 - 1;
      *param_1 = param_4;
      param_1[1] = uVar2;
      param_4 = param_4 + lVar10 * 8;
    } while (uVar12 != 0);
    return param_1;
  }
  uVar13 = 0;
  if (uVar9 != 0) {
    uVar13 = uVar12 / uVar9;
  }
  lVar11 = uVar12 - uVar13 * uVar9;
  if (uVar9 <= uVar12) {
    uVar7 = 0;
    uVar6 = 0;
    uVar8 = uVar9;
    do {
      uVar3 = uVar7 & 0x3f;
      uVar8 = uVar8 - 1;
      uVar7 = uVar7 + lVar10;
      uVar6 = ((param_3 & 0x3ffffffffffffffc) << 2) >> uVar3 | uVar6;
    } while (uVar8 != 0);
    if (uVar13 < 0x101) {
      if (uVar12 < uVar9) goto LAB_03fd77a0;
    }
    else {
      plVar5 = param_1 + 2;
      if (param_2 <= plVar5) {
        DAT_09748728 = 5;
        DAT_09748758 = 1;
        if (DAT_09535be0 != 0) {
          FUN_03fcb51c("Mark stack overflow; current size = %lu entries\n",DAT_09748708);
        }
        plVar5 = param_1 + -0x3fe;
      }
      lVar11 = 0;
      uVar13 = 0x100;
      uVar1 = iRam0000000009748a70 << 2;
      *plVar5 = param_4 + (long)(int)uVar4 * (long)param_6 * 0x800;
      plVar5[1] = (long)(int)(uVar1 | 0x102);
      param_1 = plVar5;
    }
    plVar5 = param_1;
    do {
      param_1 = plVar5 + 2;
      if (param_2 <= param_1) {
        DAT_09748728 = 5;
        DAT_09748758 = 1;
        if (DAT_09535be0 != 0) {
          FUN_03fcb51c("Mark stack overflow; current size = %lu entries\n",DAT_09748708);
        }
        param_1 = plVar5 + -0x3fe;
      }
      uVar13 = uVar13 - 1;
      *param_1 = param_4;
      param_1[1] = uVar6 | 1;
      param_4 = param_4 + (long)(int)uVar4 * (long)param_6 * 8;
      plVar5 = param_1;
    } while (uVar13 != 0);
  }
LAB_03fd77a0:
  if (lVar11 != 0) {
    do {
      plVar5 = param_1 + 2;
      if (param_2 <= param_1 + 2) {
        DAT_09748728 = 5;
        DAT_09748758 = 1;
        if (DAT_09535be0 != 0) {
          FUN_03fcb51c("Mark stack overflow; current size = %lu entries\n",DAT_09748708);
        }
        plVar5 = param_1 + -0x3fe;
      }
      param_1 = plVar5;
      lVar11 = lVar11 + -1;
      *param_1 = param_4;
      param_1[1] = uVar2;
      param_4 = param_4 + lVar10 * 8;
    } while (lVar11 != 0);
  }
  return param_1;
}


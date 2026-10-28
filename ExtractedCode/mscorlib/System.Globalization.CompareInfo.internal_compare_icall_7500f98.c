// rea decompile_all
// name: System.Globalization.CompareInfo$$internal_compare_icall
// address: 0x7500f98
// body: available
// range: 0x7500f98-0x7500f9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_Globalization_CompareInfo__internal_compare_icall
                (long param_1,uint param_2,long param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar1 = param_2;
  if ((int)param_2 <= (int)param_4) {
    uVar1 = param_4;
  }
  bVar4 = 0 < (int)param_2;
  uVar8 = 0;
  uVar6 = (uint)(0 < (int)param_4);
  if ((0 < (int)param_2) && (0 < (int)param_4)) {
    uVar9 = 0;
    uVar8 = param_4 - 1;
    if (param_2 - 1 <= param_4 - 1) {
      uVar8 = param_2 - 1;
    }
    uVar8 = uVar8 + 1;
    do {
      uVar5 = FUN_03f62708(*(undefined2 *)(param_1 + uVar9 * 2),*(undefined2 *)(param_3 + uVar9 * 2)
                           ,param_5);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar9 = uVar9 + 1;
    } while (uVar8 != uVar9);
    uVar6 = (uint)(uVar9 < param_4);
    bVar4 = uVar9 < param_2;
  }
  if (uVar8 != uVar1) {
    if (bVar4) {
      if (uVar6 != 0) {
        uVar2 = *(undefined2 *)(param_3 + (ulong)uVar8 * 2);
        uVar3 = *(undefined2 *)(param_1 + (ulong)uVar8 * 2);
        goto LAB_03f626b4;
      }
      uVar9 = 1;
    }
    else {
      uVar9 = (ulong)-uVar6;
    }
    return uVar9;
  }
  lVar7 = (-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) - 2;
  uVar2 = *(undefined2 *)(param_3 + lVar7);
  uVar3 = *(undefined2 *)(param_1 + lVar7);
LAB_03f626b4:
  uVar9 = FUN_03f62708(uVar3,uVar2,param_5);
  return uVar9;
}


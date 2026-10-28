// rea decompile_all
// name: FUN_03f849f4
// address: 0x3f849f4
// body: available
// range: 0x3f849f4-0x3f84ab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_03f849f4(double param_1,long param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar6 = cos(6.283185307179586 / param_1);
  if (param_3 == 0) {
    dVar9 = 0.0;
    dVar10 = 0.0;
  }
  else {
    lVar5 = -(ulong)param_3;
    lVar4 = (long)*(int *)(DAT_09534880 + 0x164);
    dVar8 = 0.0;
    dVar9 = 0.0;
    do {
      dVar10 = dVar9;
      lVar1 = *(long *)(DAT_09534880 + 0x1c0) + lVar5;
      lVar2 = 0;
      if (lVar4 != 0) {
        lVar2 = lVar1 / lVar4;
      }
      bVar3 = lVar5 != -1;
      lVar5 = lVar5 + 1;
      dVar9 = ((dVar6 + dVar6) * dVar10 - dVar8) +
              *(double *)(param_2 + (lVar1 - lVar2 * lVar4) * 8);
      dVar8 = dVar10;
    } while (bVar3);
  }
  sin(6.283185307179586 / param_1);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = (dVar9 - dVar6 * dVar10) / (double)param_3;
  return auVar7;
}


// rea decompile_all
// name: FUN_03f952b8
// address: 0x3f952b8
// body: available
// range: 0x3f952b8-0x3f95497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong * FUN_03f952b8(ulong *param_1,ulong *param_2,ulong *param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  ulong uVar14;
  
  puVar12 = param_3;
  if (param_1 != param_2) {
    lVar11 = (long)param_2 - (long)param_1 >> 4;
    puVar6 = param_2;
    puVar12 = param_2;
    if (1 < lVar11) {
      uVar4 = lVar11 - 2U >> 1;
      puVar5 = param_1 + uVar4 * 2;
      lVar13 = uVar4 + 1;
      do {
        FUN_03f95498(param_1,param_4,lVar11,puVar5);
        lVar13 = lVar13 + -1;
        puVar5 = puVar5 + -2;
      } while (lVar13 != 0);
    }
    for (; puVar6 != param_3; puVar6 = puVar6 + 2) {
      if (*puVar6 < *param_1) {
        uVar4 = *param_1;
        uVar9 = puVar6[1];
        uVar7 = *puVar6;
        puVar6[1] = param_1[1];
        *puVar6 = uVar4;
        param_1[1] = uVar9;
        *param_1 = uVar7;
        FUN_03f95498(param_1,param_4,lVar11,param_1);
      }
      puVar12 = param_3;
    }
    if (1 < lVar11) {
      do {
        uVar9 = param_1[1];
        uVar7 = *param_1;
        puVar6 = param_1;
        uVar4 = 0;
        do {
          uVar2 = uVar4 << 1 | 1;
          uVar14 = uVar4 * 2 + 2;
          puVar5 = puVar6 + uVar4 * 2 + 2;
          uVar8 = uVar2;
          if (((long)uVar14 < lVar11) &&
             (puVar5 = puVar6 + uVar4 * 2 + 4, uVar8 = uVar14,
             puVar6[uVar4 * 2 + 4] <= puVar6[uVar4 * 2 + 2])) {
            puVar5 = puVar6 + uVar4 * 2 + 2;
            uVar8 = uVar2;
          }
          uVar4 = *puVar5;
          puVar6[1] = puVar5[1];
          *puVar6 = uVar4;
          puVar6 = puVar5;
          uVar4 = uVar8;
        } while ((long)uVar8 <= (long)(lVar11 - 2U >> 1));
        puVar6 = param_2 + -2;
        if (puVar5 == puVar6) {
          puVar5[1] = uVar9;
          *puVar5 = uVar7;
        }
        else {
          uVar4 = *puVar6;
          puVar5[1] = param_2[-1];
          *puVar5 = uVar4;
          lVar13 = (long)puVar5 + (0x10 - (long)param_1) >> 4;
          param_2[-1] = uVar9;
          *puVar6 = uVar7;
          if (1 < lVar13) {
            uVar4 = lVar13 - 2U >> 1;
            uVar7 = *puVar5;
            if (param_1[uVar4 * 2] < uVar7) {
              uVar9 = puVar5[1];
              puVar3 = param_1 + uVar4 * 2;
              do {
                puVar10 = puVar3;
                uVar14 = *puVar10;
                puVar5[1] = puVar10[1];
                *puVar5 = uVar14;
                if (uVar4 == 0) break;
                uVar4 = uVar4 - 1 >> 1;
                puVar5 = puVar10;
                puVar3 = param_1 + uVar4 * 2;
              } while (param_1[uVar4 * 2] < uVar7);
              *puVar10 = uVar7;
              puVar10[1] = uVar9;
            }
          }
        }
        bVar1 = 2 < lVar11;
        param_2 = puVar6;
        lVar11 = lVar11 + -1;
      } while (bVar1);
    }
  }
  return puVar12;
}


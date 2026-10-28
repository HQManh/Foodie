// rea decompile_all
// name: FUN_03fc9a34
// address: 0x3fc9a34
// body: available
// range: 0x3fc9a34-0x3fc9b7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong * FUN_03fc9a34(ulong *param_1,ulong *param_2,ulong *param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  
  puVar6 = param_3;
  if (param_1 != param_2) {
    lVar5 = (long)param_2 - (long)param_1 >> 4;
    puVar3 = param_2;
    puVar6 = param_2;
    if (1 < lVar5) {
      uVar4 = lVar5 - 2U >> 1;
      puVar7 = param_1 + uVar4 * 2;
      lVar8 = uVar4 + 1;
      do {
        FUN_03fc9b7c(param_1,param_4,lVar5,puVar7);
        lVar8 = lVar8 + -1;
        puVar7 = puVar7 + -2;
      } while (lVar8 != 0);
    }
    for (; puVar3 != param_3; puVar3 = puVar3 + 2) {
      uVar4 = *puVar3;
      if (uVar4 < *param_1) {
        *puVar3 = *param_1;
        *param_1 = uVar4;
        uVar4 = puVar3[1];
        puVar3[1] = param_1[1];
        param_1[1] = uVar4;
        FUN_03fc9b7c(param_1,param_4,lVar5,param_1);
      }
      puVar6 = param_3;
    }
    if (1 < lVar5) {
      do {
        puVar7 = param_2 + -2;
        uVar4 = *param_1;
        uVar2 = param_1[1];
        puVar3 = (ulong *)FUN_03fc9c50(param_1,param_4,lVar5);
        if (puVar7 == puVar3) {
          *puVar3 = uVar4;
          puVar3[1] = uVar2;
        }
        else {
          *puVar3 = *puVar7;
          puVar3[1] = param_2[-1];
          *puVar7 = uVar4;
          param_2[-1] = uVar2;
          FUN_03fc9ccc(param_1,puVar3 + 2,param_4,(long)(puVar3 + 2) - (long)param_1 >> 4);
        }
        bVar1 = 2 < lVar5;
        lVar5 = lVar5 + -1;
        param_2 = puVar7;
      } while (bVar1);
    }
  }
  return puVar6;
}


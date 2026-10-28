// rea decompile_all
// name: FUN_03fc9c50
// address: 0x3fc9c50
// body: available
// range: 0x3fc9c50-0x3fc9ccb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong * FUN_03fc9c50(ulong *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar7 = 0;
  lVar4 = param_3 + -1;
  if (-1 < param_3 + -2) {
    lVar4 = param_3 + -2;
  }
  do {
    uVar3 = uVar7 << 1 | 1;
    uVar1 = uVar7 * 2 + 2;
    puVar2 = param_1 + uVar7 * 2 + 2;
    if ((long)uVar1 < param_3) {
      uVar8 = param_1[uVar7 * 2 + 4];
      lVar5 = uVar7 * 2;
      puVar6 = param_1 + uVar7 * 2 + 4;
      uVar7 = uVar1;
      if (uVar8 <= param_1[lVar5 + 2]) {
        puVar6 = puVar2;
        uVar7 = uVar3;
        uVar8 = param_1[lVar5 + 2];
      }
    }
    else {
      puVar6 = puVar2;
      uVar7 = uVar3;
      uVar8 = *puVar2;
    }
    *param_1 = uVar8;
    param_1[1] = puVar6[1];
    param_1 = puVar6;
  } while ((long)uVar7 <= lVar4 >> 1);
  return puVar6;
}


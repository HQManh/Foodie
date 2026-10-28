// rea decompile_all
// name: FUN_03fc7f8c
// address: 0x3fc7f8c
// body: available
// range: 0x3fc7f8c-0x3fc804f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_03fc7f8c(undefined8 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar3 = param_3 + -1;
  if (-1 < param_3 + -2) {
    lVar3 = param_3 + -2;
  }
  uVar5 = 0;
  do {
    uVar2 = uVar5 << 1 | 1;
    uVar1 = uVar5 * 2 + 2;
    uVar6 = uVar2;
    puVar7 = param_1 + uVar5 * 7 + 7;
    if ((long)uVar1 < param_3) {
      uVar4 = FUN_03f7bacc(param_2 + 1,param_1[uVar5 * 7 + 0xd],param_1[uVar5 * 7 + 0x14]);
      uVar6 = uVar1;
      puVar7 = param_1 + uVar5 * 7 + 0xe;
      if ((uVar4 & 1) == 0) {
        uVar6 = uVar2;
        puVar7 = param_1 + uVar5 * 7 + 7;
      }
    }
    uVar13 = puVar7[3];
    uVar12 = puVar7[2];
    uVar9 = puVar7[5];
    uVar8 = puVar7[4];
    uVar11 = puVar7[1];
    uVar10 = *puVar7;
    param_1[6] = puVar7[6];
    param_1[3] = uVar13;
    param_1[2] = uVar12;
    param_1[5] = uVar9;
    param_1[4] = uVar8;
    param_1[1] = uVar11;
    *param_1 = uVar10;
    uVar5 = uVar6;
    param_1 = puVar7;
  } while ((long)uVar6 <= lVar3 >> 1);
  return puVar7;
}


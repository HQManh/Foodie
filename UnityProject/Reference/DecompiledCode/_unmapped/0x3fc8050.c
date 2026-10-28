// rea decompile_all
// name: FUN_03fc8050
// address: 0x3fc8050
// body: available
// range: 0x3fc8050-0x3fc8127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc8050(long param_1,long param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (1 < param_4) {
    uVar5 = param_4 - 2U >> 1;
    uVar1 = FUN_03f7bacc(param_3 + 1,*(undefined8 *)(param_1 + uVar5 * 0x38 + 0x30),
                         *(undefined8 *)(param_2 + -8));
    if ((uVar1 & 1) != 0) {
      uVar8 = *(undefined8 *)(param_2 + -0x30);
      uVar6 = *(undefined8 *)(param_2 + -0x38);
      uVar12 = *(undefined8 *)(param_2 + -0x20);
      uVar10 = *(undefined8 *)(param_2 + -0x28);
      uVar16 = *(undefined8 *)(param_2 + -0x10);
      uVar14 = *(undefined8 *)(param_2 + -0x18);
      uVar2 = *(undefined8 *)(param_2 + -8);
      puVar3 = (undefined8 *)(param_2 + -0x38);
      do {
        puVar4 = (undefined8 *)(param_1 + uVar5 * 0x38);
        uVar17 = puVar4[3];
        uVar15 = puVar4[2];
        uVar9 = puVar4[5];
        uVar7 = puVar4[4];
        uVar13 = puVar4[1];
        uVar11 = *puVar4;
        puVar3[6] = puVar4[6];
        puVar3[3] = uVar17;
        puVar3[2] = uVar15;
        puVar3[5] = uVar9;
        puVar3[4] = uVar7;
        puVar3[1] = uVar13;
        *puVar3 = uVar11;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1 >> 1;
        uVar1 = FUN_03f7bacc(param_3 + 1,*(undefined8 *)(param_1 + uVar5 * 0x38 + 0x30),uVar2);
        puVar3 = puVar4;
      } while ((uVar1 & 1) != 0);
      puVar4[6] = uVar2;
      puVar4[5] = uVar16;
      puVar4[4] = uVar14;
      puVar4[1] = uVar8;
      *puVar4 = uVar6;
      puVar4[3] = uVar12;
      puVar4[2] = uVar10;
    }
  }
  return;
}


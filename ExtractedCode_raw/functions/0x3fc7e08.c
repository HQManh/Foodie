// rea decompile_all
// name: FUN_03fc7e08
// address: 0x3fc7e08
// body: available
// range: 0x3fc7e08-0x3fc7f8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fc7e08(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  if (1 < param_3) {
    uVar6 = param_3 - 2U >> 1;
    lVar4 = (long)param_4 - param_1 >> 3;
    if (lVar4 * 0x6db6db6db6db6db7 <= (long)uVar6) {
      uVar1 = lVar4 * -0x2492492492492492 | 1;
      puVar7 = (undefined8 *)(param_1 + uVar1 * 0x38);
      uVar3 = lVar4 * -0x2492492492492492 + 2;
      uVar9 = uVar1;
      if ((long)uVar3 < param_3) {
        uVar2 = FUN_03f7bacc(param_2 + 1,*(undefined8 *)(param_1 + uVar1 * 0x38 + 0x30),puVar7[0xd])
        ;
        puVar7 = puVar7 + (uVar2 & 1) * 7;
        uVar9 = uVar3;
        if ((uVar2 & 1) == 0) {
          uVar9 = uVar1;
        }
      }
      uVar3 = FUN_03f7bacc(param_2 + 1,puVar7[6],param_4[6]);
      if ((uVar3 & 1) == 0) {
        uVar12 = param_4[1];
        uVar10 = *param_4;
        uVar16 = param_4[3];
        uVar14 = param_4[2];
        uVar20 = param_4[5];
        uVar18 = param_4[4];
        uVar5 = param_4[6];
        do {
          puVar8 = puVar7;
          uVar21 = puVar8[3];
          uVar19 = puVar8[2];
          uVar13 = puVar8[5];
          uVar11 = puVar8[4];
          uVar17 = puVar8[1];
          uVar15 = *puVar8;
          param_4[6] = puVar8[6];
          param_4[3] = uVar21;
          param_4[2] = uVar19;
          param_4[5] = uVar13;
          param_4[4] = uVar11;
          param_4[1] = uVar17;
          *param_4 = uVar15;
          if ((long)uVar6 < (long)uVar9) break;
          uVar1 = uVar9 << 1 | 1;
          uVar3 = uVar9 * 2 + 2;
          puVar7 = (undefined8 *)(param_1 + uVar1 * 0x38);
          uVar9 = uVar1;
          if ((long)uVar3 < param_3) {
            uVar2 = FUN_03f7bacc(param_2 + 1,*(undefined8 *)(param_1 + uVar1 * 0x38 + 0x30),
                                 puVar7[0xd]);
            puVar7 = puVar7 + (uVar2 & 1) * 7;
            uVar9 = uVar3;
            if ((uVar2 & 1) == 0) {
              uVar9 = uVar1;
            }
          }
          uVar3 = FUN_03f7bacc(param_2 + 1,puVar7[6],uVar5);
          param_4 = puVar8;
        } while ((uVar3 & 1) == 0);
        puVar8[6] = uVar5;
        puVar8[1] = uVar12;
        *puVar8 = uVar10;
        puVar8[3] = uVar16;
        puVar8[2] = uVar14;
        puVar8[5] = uVar20;
        puVar8[4] = uVar18;
      }
    }
  }
  return;
}


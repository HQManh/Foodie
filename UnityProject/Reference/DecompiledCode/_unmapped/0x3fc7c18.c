// rea decompile_all
// name: FUN_03fc7c18
// address: 0x3fc7c18
// body: available
// range: 0x3fc7c18-0x3fc7e07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_03fc7c18(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
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
  
  puVar5 = param_3;
  if (param_1 != param_2) {
    uVar8 = (long)param_2 - (long)param_1;
    lVar6 = ((long)uVar8 >> 3) * 0x6db6db6db6db6db7;
    puVar2 = param_2;
    puVar5 = param_2;
    if (0x38 < (long)uVar8) {
      uVar3 = lVar6 - 2U >> 1;
      puVar7 = param_1 + uVar3 * 7;
      lVar9 = uVar3 + 1;
      do {
        FUN_03fc7e08(param_1,param_4,lVar6,puVar7);
        lVar9 = lVar9 + -1;
        puVar7 = puVar7 + -7;
      } while (lVar9 != 0);
    }
    for (; puVar2 != param_3; puVar2 = puVar2 + 7) {
      uVar3 = FUN_03f7bacc(param_4 + 1,puVar2[6],param_1[6]);
      if ((uVar3 & 1) != 0) {
        uVar16 = param_1[3];
        uVar14 = param_1[2];
        uVar21 = param_1[5];
        uVar19 = param_1[4];
        uVar17 = puVar2[1];
        uVar15 = *puVar2;
        uVar12 = puVar2[3];
        uVar10 = puVar2[2];
        uVar4 = puVar2[6];
        uVar20 = param_1[1];
        uVar18 = *param_1;
        uVar13 = puVar2[5];
        uVar11 = puVar2[4];
        puVar2[6] = param_1[6];
        puVar2[1] = uVar20;
        *puVar2 = uVar18;
        puVar2[3] = uVar16;
        puVar2[2] = uVar14;
        puVar2[5] = uVar21;
        puVar2[4] = uVar19;
        param_1[1] = uVar17;
        *param_1 = uVar15;
        param_1[3] = uVar12;
        param_1[2] = uVar10;
        param_1[5] = uVar13;
        param_1[4] = uVar11;
        param_1[6] = uVar4;
        FUN_03fc7e08(param_1,param_4,lVar6,param_1);
      }
      puVar5 = param_3;
    }
    if (0x38 < (long)uVar8) {
      uVar8 = uVar8 / 0x38;
      do {
        puVar7 = param_2 + -7;
        uVar12 = param_1[1];
        uVar10 = *param_1;
        uVar16 = param_1[3];
        uVar14 = param_1[2];
        uVar20 = param_1[5];
        uVar18 = param_1[4];
        uVar4 = param_1[6];
        puVar2 = (undefined8 *)FUN_03fc7f8c(param_1,param_4,uVar8);
        if (puVar7 == puVar2) {
          puVar2[5] = uVar20;
          puVar2[4] = uVar18;
          puVar2[1] = uVar12;
          *puVar2 = uVar10;
          puVar2[3] = uVar16;
          puVar2[2] = uVar14;
          puVar2[6] = uVar4;
        }
        else {
          uVar17 = param_2[-6];
          uVar15 = *puVar7;
          uVar21 = param_2[-4];
          uVar19 = param_2[-5];
          uVar13 = param_2[-2];
          uVar11 = param_2[-3];
          puVar2[6] = param_2[-1];
          puVar2[1] = uVar17;
          *puVar2 = uVar15;
          puVar2[3] = uVar21;
          puVar2[2] = uVar19;
          puVar2[5] = uVar13;
          puVar2[4] = uVar11;
          param_2[-1] = uVar4;
          param_2[-2] = uVar20;
          param_2[-3] = uVar18;
          param_2[-6] = uVar12;
          *puVar7 = uVar10;
          param_2[-4] = uVar16;
          param_2[-5] = uVar14;
          FUN_03fc8050(param_1,puVar2 + 7,param_4,
                       ((long)(puVar2 + 7) - (long)param_1 >> 3) * 0x6db6db6db6db6db7);
        }
        bVar1 = 2 < (long)uVar8;
        uVar8 = uVar8 - 1;
        param_2 = puVar7;
      } while (bVar1);
    }
  }
  return puVar5;
}


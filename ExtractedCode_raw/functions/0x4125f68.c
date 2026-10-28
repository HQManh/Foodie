// rea decompile_all
// name: FUN_04125f68
// address: 0x4125f68
// body: available
// range: 0x4125f68-0x412600b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_04125f68(undefined8 *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar2 = *param_3;
  fVar3 = param_3[1];
  fVar14 = param_3[4];
  fVar15 = param_3[5];
  fVar19 = param_3[8];
  fVar20 = param_3[9];
  fVar4 = (float)*param_2;
  fVar5 = (float)((ulong)*param_2 >> 0x20);
  fVar6 = (float)param_2[1];
  fVar7 = (float)((ulong)param_2[1] >> 0x20);
  fVar10 = (float)param_2[2];
  fVar11 = (float)((ulong)param_2[2] >> 0x20);
  fVar12 = (float)param_2[3];
  fVar13 = (float)((ulong)param_2[3] >> 0x20);
  fVar22 = param_3[0xc];
  fVar24 = param_3[0xd];
  fVar8 = param_3[2];
  fVar1 = param_3[3];
  fVar16 = param_3[6];
  fVar18 = param_3[7];
  fVar23 = param_3[0xe];
  fVar21 = param_3[0xf];
  fVar25 = (float)param_2[4];
  fVar26 = (float)((ulong)param_2[4] >> 0x20);
  fVar27 = (float)param_2[5];
  fVar28 = (float)((ulong)param_2[5] >> 0x20);
  fVar29 = (float)param_2[6];
  fVar30 = (float)((ulong)param_2[6] >> 0x20);
  fVar31 = (float)param_2[7];
  fVar32 = (float)((ulong)param_2[7] >> 0x20);
  fVar9 = param_3[10];
  fVar17 = param_3[0xb];
  param_1[1] = CONCAT44(fVar7 * fVar2 + fVar13 * fVar3 + fVar28 * fVar8 + fVar32 * fVar1,
                        fVar6 * fVar2 + fVar12 * fVar3 + fVar27 * fVar8 + fVar31 * fVar1);
  *param_1 = CONCAT44(fVar5 * fVar2 + fVar11 * fVar3 + fVar26 * fVar8 + fVar30 * fVar1,
                      fVar4 * fVar2 + fVar10 * fVar3 + fVar25 * fVar8 + fVar29 * fVar1);
  param_1[3] = CONCAT44(fVar7 * fVar14 + fVar13 * fVar15 + fVar28 * fVar16 + fVar32 * fVar18,
                        fVar6 * fVar14 + fVar12 * fVar15 + fVar27 * fVar16 + fVar31 * fVar18);
  param_1[2] = CONCAT44(fVar5 * fVar14 + fVar11 * fVar15 + fVar26 * fVar16 + fVar30 * fVar18,
                        fVar4 * fVar14 + fVar10 * fVar15 + fVar25 * fVar16 + fVar29 * fVar18);
  param_1[5] = CONCAT44(fVar7 * fVar19 + fVar13 * fVar20 + fVar28 * fVar9 + fVar32 * fVar17,
                        fVar6 * fVar19 + fVar12 * fVar20 + fVar27 * fVar9 + fVar31 * fVar17);
  param_1[4] = CONCAT44(fVar5 * fVar19 + fVar11 * fVar20 + fVar26 * fVar9 + fVar30 * fVar17,
                        fVar4 * fVar19 + fVar10 * fVar20 + fVar25 * fVar9 + fVar29 * fVar17);
  param_1[7] = CONCAT44(fVar7 * fVar22 + fVar13 * fVar24 + fVar28 * fVar23 + fVar32 * fVar21,
                        fVar6 * fVar22 + fVar12 * fVar24 + fVar27 * fVar23 + fVar31 * fVar21);
  param_1[6] = CONCAT44(fVar5 * fVar22 + fVar11 * fVar24 + fVar26 * fVar23 + fVar30 * fVar21,
                        fVar4 * fVar22 + fVar10 * fVar24 + fVar25 * fVar23 + fVar29 * fVar21);
  return;
}


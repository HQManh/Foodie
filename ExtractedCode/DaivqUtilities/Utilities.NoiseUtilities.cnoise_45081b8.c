// rea decompile_all
// name: Utilities.NoiseUtilities$$cnoise
// address: 0x45081b8
// body: available
// range: 0x45081b8-0x45084af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float Utilities_NoiseUtilities__cnoise(float param_1,float param_2)

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
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar18 = param_1;
  fVar19 = param_2;
  fVar17 = param_2;
  fVar1 = (float)FUN_0451248c(0);
  fVar18 = fVar18 + 1.0;
  fVar19 = fVar19 + 1.0;
  fVar17 = fVar17 + 0.0;
  fVar3 = param_2;
  fVar9 = param_1;
  fVar14 = param_2;
  fVar2 = (float)FUN_0451248c(param_1,0);
  fVar2 = param_1 - fVar2;
  fVar3 = param_2 - fVar3;
  fVar4 = (float)Utilities_NoiseUtilities__mod289(fVar1 + 0.0);
  fVar1 = fVar18;
  fVar5 = (float)Utilities_NoiseUtilities__permute();
  fVar18 = fVar17 + fVar18;
  fVar4 = fVar19 + fVar4;
  fVar19 = fVar19 + fVar1;
  fVar6 = (float)Utilities_NoiseUtilities__permute(fVar17 + fVar5);
  fVar7 = fVar2 * fVar2 * fVar2 * (fVar2 * (fVar2 * 6.0 + -15.0) + 10.0);
  fVar17 = fVar18 * 0.024390243;
  fVar1 = fVar4 * 0.024390243;
  fVar5 = fVar19 * 0.024390243;
  fVar8 = (float)FUN_0451248c(fVar6 * 0.024390243,0);
  fVar1 = fVar4 * 0.024390243 - fVar1;
  fVar8 = fVar6 * 0.024390243 - fVar8;
  fVar5 = fVar19 * 0.024390243 - fVar5;
  fVar17 = fVar18 * 0.024390243 - fVar17;
  uVar10 = NEON_fmov(0xbf800000,4);
  fVar16 = (float)uVar10;
  fVar1 = fVar1 + fVar1 + fVar16;
  fVar4 = (float)((ulong)uVar10 >> 0x20);
  fVar6 = fVar8 + fVar8 + fVar4;
  fVar18 = fVar5 + fVar5 + fVar16;
  fVar4 = fVar17 + fVar17 + fVar4;
  fVar11 = fVar1 + -0.5;
  fVar12 = fVar6 + -0.5;
  fVar13 = fVar18 + -0.5;
  fVar15 = fVar4 + -0.5;
  fVar17 = fVar4 + 0.5;
  fVar8 = fVar18 + 0.5;
  fVar5 = fVar1 + 0.5;
  fVar19 = (float)FUN_0451248c(CONCAT44(fVar17,fVar6 + 0.5),fVar17,fVar5,fVar8,0);
  fVar1 = fVar1 - fVar5;
  fVar6 = fVar6 - fVar19;
  fVar18 = fVar18 - fVar8;
  fVar4 = fVar4 - fVar17;
  fVar19 = 1.7928429 - (fVar1 * fVar1 + fVar11 * fVar11) * 0.85373473;
  fVar17 = 1.7928429 - (fVar6 * fVar6 + fVar12 * fVar12) * 0.85373473;
  fVar5 = 1.7928429 - (fVar18 * fVar18 + fVar13 * fVar13) * 0.85373473;
  fVar8 = 1.7928429 - (fVar4 * fVar4 + fVar15 * fVar15) * 0.85373473;
  fVar14 = (param_2 - fVar14) + fVar16;
  fVar16 = (param_1 - fVar9) + fVar16;
  fVar19 = fVar1 * fVar19 * fVar2 + fVar14 * ABS(fVar11) * fVar19;
  fVar17 = fVar6 * fVar17 * fVar2 + ABS(fVar12) * fVar17 * fVar3;
  fVar17 = fVar17 + ((fVar16 * fVar4 * fVar8 + ABS(fVar15) * fVar8 * fVar3) - fVar17) * fVar7;
  return (fVar17 + fVar3 * fVar3 * fVar3 * (fVar3 * (fVar3 * 6.0 + -15.0) + 10.0) *
                   ((fVar19 + ((fVar14 * ABS(fVar13) * fVar5 + fVar16 * fVar18 * fVar5) - fVar19) *
                              fVar7) - fVar17)) * 2.3;
}


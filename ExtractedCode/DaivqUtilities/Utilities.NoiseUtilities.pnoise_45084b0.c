// rea decompile_all
// name: Utilities.NoiseUtilities$$pnoise
// address: 0x45084b0
// body: available
// range: 0x45084b0-0x45087f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float Utilities_NoiseUtilities__pnoise(float param_1,float param_2,float param_3,float param_4)

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
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar11 = param_1;
  fVar7 = param_2;
  fVar4 = param_2;
  fVar1 = (float)FUN_0451248c(0);
  fVar3 = param_2;
  fVar12 = param_1;
  fVar17 = param_2;
  fVar2 = (float)FUN_0451248c(param_1,0);
  fVar2 = param_1 - fVar2;
  fVar3 = param_2 - fVar3;
  fVar1 = fmodf(fVar1 + 0.0,param_3);
  fVar4 = fmodf(fVar4 + 0.0,param_4);
  fVar5 = fmodf(fVar11 + 1.0,param_3);
  fVar6 = fmodf(fVar7 + 1.0,param_4);
  fVar1 = (float)Utilities_NoiseUtilities__mod289(fVar1);
  fVar11 = fVar5;
  fVar7 = (float)Utilities_NoiseUtilities__permute();
  fVar5 = fVar4 + fVar5;
  fVar1 = fVar6 + fVar1;
  fVar6 = fVar6 + fVar11;
  fVar8 = (float)Utilities_NoiseUtilities__permute(fVar4 + fVar7);
  fVar9 = fVar2 * fVar2 * fVar2 * (fVar2 * (fVar2 * 6.0 + -15.0) + 10.0);
  fVar11 = fVar5 * 0.024390243;
  fVar7 = fVar1 * 0.024390243;
  fVar4 = fVar6 * 0.024390243;
  fVar10 = (float)FUN_0451248c(fVar8 * 0.024390243,0);
  fVar7 = fVar1 * 0.024390243 - fVar7;
  fVar10 = fVar8 * 0.024390243 - fVar10;
  fVar4 = fVar6 * 0.024390243 - fVar4;
  fVar11 = fVar5 * 0.024390243 - fVar11;
  uVar13 = NEON_fmov(0xbf800000,4);
  fVar19 = (float)uVar13;
  fVar1 = fVar7 + fVar7 + fVar19;
  fVar5 = (float)((ulong)uVar13 >> 0x20);
  fVar6 = fVar10 + fVar10 + fVar5;
  fVar7 = fVar4 + fVar4 + fVar19;
  fVar5 = fVar11 + fVar11 + fVar5;
  fVar14 = fVar1 + -0.5;
  fVar15 = fVar6 + -0.5;
  fVar16 = fVar7 + -0.5;
  fVar18 = fVar5 + -0.5;
  fVar4 = fVar5 + 0.5;
  fVar10 = fVar7 + 0.5;
  fVar8 = fVar1 + 0.5;
  fVar11 = (float)FUN_0451248c(CONCAT44(fVar4,fVar6 + 0.5),fVar4,fVar8,fVar10,0);
  fVar1 = fVar1 - fVar8;
  fVar6 = fVar6 - fVar11;
  fVar7 = fVar7 - fVar10;
  fVar5 = fVar5 - fVar4;
  fVar11 = 1.7928429 - (fVar1 * fVar1 + fVar14 * fVar14) * 0.85373473;
  fVar4 = 1.7928429 - (fVar6 * fVar6 + fVar15 * fVar15) * 0.85373473;
  fVar8 = 1.7928429 - (fVar7 * fVar7 + fVar16 * fVar16) * 0.85373473;
  fVar10 = 1.7928429 - (fVar5 * fVar5 + fVar18 * fVar18) * 0.85373473;
  fVar17 = (param_2 - fVar17) + fVar19;
  fVar19 = (param_1 - fVar12) + fVar19;
  fVar11 = fVar1 * fVar11 * fVar2 + fVar17 * ABS(fVar14) * fVar11;
  fVar4 = fVar6 * fVar4 * fVar2 + ABS(fVar15) * fVar4 * fVar3;
  fVar4 = fVar4 + ((fVar19 * fVar5 * fVar10 + ABS(fVar18) * fVar10 * fVar3) - fVar4) * fVar9;
  return (fVar4 + fVar3 * fVar3 * fVar3 * (fVar3 * (fVar3 * 6.0 + -15.0) + 10.0) *
                  ((fVar11 + ((fVar17 * ABS(fVar16) * fVar8 + fVar19 * fVar7 * fVar8) - fVar11) *
                             fVar9) - fVar4)) * 2.3;
}


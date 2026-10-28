// rea decompile_all
// name: Utilities.NoiseUtilities$$snoise
// address: 0x4507d8c
// body: available
// range: 0x4507d8c-0x450814f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float Utilities_NoiseUtilities__snoise(float param_1,float param_2)

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
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((DAT_095184ed & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918dc08);
    DAT_095184ed = 1;
  }
  if (DAT_0951853f == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951853f = '\x01';
  }
  fVar13 = param_1 * 0.36602542 + param_2 * 0.36602542;
  if ((*(int *)(DAT_09187e80 + 0xe4) == 0) && (FUN_03f5c424(), DAT_0951853f == '\0')) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951853f = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  fVar1 = (float)(int)(param_1 + fVar13);
  fVar3 = (float)(int)(param_2 + fVar13);
  fVar4 = fVar1 * 0.21132487 + fVar3 * 0.21132487;
  fVar7 = (param_1 - fVar1) + fVar4;
  fVar4 = (param_2 - fVar3) + fVar4;
  fVar1 = 1.0;
  fVar13 = 0.0;
  if (fVar7 <= fVar4) {
    fVar1 = 0.0;
    fVar13 = 1.0;
  }
  fVar2 = (float)Utilities_NoiseUtilities__mod289();
  uVar12 = NEON_fmov(0x41200000,4);
  fVar9 = (fVar13 + fVar3) * ((fVar13 + fVar3) * 34.0 + (float)((ulong)uVar12 >> 0x20));
  fVar5 = (fVar3 + 1.0) * ((fVar3 + 1.0) * 34.0 + 10.0);
  fVar3 = (float)Utilities_NoiseUtilities__mod289
                           ((fVar3 + 0.0) * ((fVar3 + 0.0) * 34.0 + (float)uVar12),fVar9);
  fVar3 = fVar2 + fVar3 + 0.0;
  fVar9 = fVar1 + fVar2 + fVar9;
  fVar2 = fVar2 + fVar5 + 1.0;
  fVar9 = fVar9 * (fVar9 * 34.0 + 10.0);
  fVar2 = fVar2 * (fVar2 * 34.0 + 10.0);
  fVar3 = (float)Utilities_NoiseUtilities__mod289(fVar3 * (fVar3 * 34.0 + 10.0),fVar9);
  fVar9 = fVar9 * 0.024390243;
  fVar2 = fVar2 * 0.024390243;
  fVar3 = (float)FUN_0451258c(fVar3 * 0.024390243,fVar9,0);
  if (DAT_0951853f == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951853f = '\x01';
  }
  if ((*(int *)(DAT_09187e80 + 0xe4) == 0) && (FUN_03f5c424(), DAT_0951853f == '\0')) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951853f = '\x01';
  }
  if ((*(int *)(DAT_09187e80 + 0xe4) == 0) && (FUN_03f5c424(), DAT_0951853f == '\0')) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0951853f = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar12 = NEON_fmov(0xbf800000,4);
  fVar11 = fVar9 + fVar9 + -1.0;
  fVar13 = (fVar4 + 0.21132487) - fVar13;
  fVar9 = fVar7 + -0.57735026;
  fVar5 = fVar4 + -0.57735026;
  fVar1 = (fVar7 + 0.21132487) - fVar1;
  fVar2 = fVar2 + fVar2 + (float)uVar12;
  fVar6 = fVar3 + fVar3 + (float)((ulong)uVar12 >> 0x20);
  fVar15 = fVar2 + -0.5;
  fVar16 = fVar6 + -0.5;
  fVar14 = fVar11 - (float)(int)(fVar11 + 0.5);
  fVar2 = fVar2 - (float)(int)(fVar2 + 0.5);
  fVar6 = fVar6 - (float)(int)(fVar6 + 0.5);
  fVar11 = fVar11 + -0.5;
  fVar3 = 0.5 - (fVar1 * fVar1 + fVar13 * fVar13);
  uVar12 = NEON_fmaxnm(CONCAT44(0.5 - (fVar7 * fVar7 + fVar4 * fVar4),
                                0.5 - (fVar9 * fVar9 + fVar5 * fVar5)),0,4);
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  fVar10 = (float)((ulong)uVar12 >> 0x20);
  fVar8 = (float)uVar12 * (float)uVar12;
  fVar10 = fVar10 * fVar10;
  return ((fVar5 * ABS(fVar15) + fVar9 * fVar2) *
          fVar8 * fVar8 * ((fVar15 * fVar15 + fVar2 * fVar2) * -0.85373473 + 1.7928429) +
         (fVar4 * ABS(fVar16) + fVar7 * fVar6) *
         fVar10 * fVar10 * ((fVar16 * fVar16 + fVar6 * fVar6) * -0.85373473 + 1.7928429) +
         (fVar13 * ABS(fVar11) + fVar1 * fVar14) *
         fVar3 * fVar3 * fVar3 * fVar3 *
         ((fVar11 * fVar11 + fVar14 * fVar14) * -0.85373473 + 1.7928429)) * 130.0;
}


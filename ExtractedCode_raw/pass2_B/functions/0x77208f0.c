// rea decompile_all
// name: AssetKits.ParticleImage.Noise$$SingleValue
// address: 0x77208f0
// body: available
// range: 0x77208f0-0x7720b23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AssetKits_ParticleImage_Noise__SingleValue
                (float param_1,float param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_09522a2a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a2a = 1;
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09522a52 == '\0') {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a52 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a52 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if ((*(int *)(DAT_091888a0 + 0xe4) == 0) && (FUN_03f5c424(), DAT_09522a52 == '\0')) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a52 = '\x01';
  }
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar4 = 0x7fffffff;
  if (param_1 != INFINITY) {
    iVar4 = (int)param_1 + -1;
  }
  iVar5 = -0x80000000;
  if (param_1 != INFINITY) {
    iVar5 = (int)param_1;
  }
  if (0.0 <= param_1) {
    iVar4 = iVar5;
  }
  iVar5 = -0x80000000;
  iVar1 = 0x7fffffff;
  if (param_2 != INFINITY) {
    iVar5 = (int)param_2;
    iVar1 = (int)param_2 + -1;
  }
  param_1 = param_1 - (float)iVar4;
  if (0.0 <= param_2) {
    iVar1 = iVar5;
  }
  uVar3 = iVar1 * 0x43c42e4d;
  uVar2 = iVar4 * 0x1dde90c9 ^ param_4;
  param_4 = iVar4 * 0x1dde90c9 + 0x1dde90c9U ^ param_4;
  iVar4 = (param_4 ^ uVar3) * 0x27d4eb2d;
  iVar5 = (uVar2 ^ uVar3) * 0x27d4eb2d;
  iVar6 = (uVar3 + 0x43c42e4d ^ uVar2) * 0x27d4eb2d;
  iVar7 = (param_4 ^ uVar3 + 0x43c42e4d) * 0x27d4eb2d;
  uVar2 = iVar4 * iVar4;
  uVar3 = iVar5 * iVar5;
  fVar10 = param_1 * param_1 * (3.0 - (param_1 + param_1));
  uVar8 = iVar6 * iVar6;
  uVar9 = iVar7 * iVar7;
  fVar11 = (float)(int)(uVar3 ^ uVar3 * 0x80000) / 2.1474836e+09;
  fVar12 = (float)(int)(uVar8 ^ uVar8 * 0x80000) / 2.1474836e+09;
  param_2 = param_2 - (float)iVar1;
  fVar11 = fVar11 + fVar10 * ((float)(int)(uVar2 ^ uVar2 * 0x80000) / 2.1474836e+09 - fVar11);
  return fVar11 + param_2 * param_2 * (3.0 - (param_2 + param_2)) *
                  ((fVar12 + fVar10 * ((float)(int)(uVar9 ^ uVar9 * 0x80000) / 2.1474836e+09 -
                                      fVar12)) - fVar11);
}


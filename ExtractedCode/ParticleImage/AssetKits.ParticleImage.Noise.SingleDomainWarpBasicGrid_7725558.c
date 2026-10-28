// rea decompile_all
// name: AssetKits.ParticleImage.Noise$$SingleDomainWarpBasicGrid
// address: 0x7725558
// body: available
// range: 0x7725558-0x77257bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77257b8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77257bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AssetKits_ParticleImage_Noise__SingleDomainWarpBasicGrid
               (float param_1,float param_2,float param_3,float param_4,undefined8 param_5,
               uint param_6,float *param_7,float *param_8)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((DAT_09522a2c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a2c = 1;
  }
  param_4 = param_2 * param_4;
  param_2 = param_2 * param_3;
  if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar4 = -0x80000000;
  if (param_2 != INFINITY) {
    iVar4 = (int)param_2;
  }
  iVar3 = 0x7fffffff;
  if (param_2 != INFINITY) {
    iVar3 = (int)param_2 + -1;
  }
  if (0.0 <= param_2) {
    iVar3 = iVar4;
  }
  iVar4 = 0x7fffffff;
  iVar8 = -0x80000000;
  if (param_4 != INFINITY) {
    iVar4 = (int)param_4 + -1;
    iVar8 = (int)param_4;
  }
  lVar9 = *(long *)(*(long *)(DAT_091888a0 + 0xb8) + 8);
  if (0.0 <= param_4) {
    iVar4 = iVar8;
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar6 = *(uint *)(lVar9 + 0x18);
  uVar7 = iVar4 * 0x2e4d;
  uVar5 = iVar3 * 0x1dde90c9 ^ param_6;
  uVar1 = (uVar5 ^ uVar7) * 0x12d & 0x1fe;
  if (uVar1 < uVar6) {
    param_6 = iVar3 * 0x1dde90c9 + 0x1dde90c9U ^ param_6;
    uVar2 = (param_6 ^ uVar7) * 0x12d & 0x1fe;
    if (((uVar2 < uVar6) && ((uVar1 | 1) < uVar6)) && ((uVar2 | 1) < uVar6)) {
      uVar5 = (uVar7 + 0x2e4d ^ uVar5) * 0x12d & 0x1fe;
      if (uVar5 < uVar6) {
        uVar7 = (param_6 ^ uVar7 + 0x2e4d) * 0x12d & 0x1fe;
        if (((uVar7 < uVar6) && ((uVar5 | 1) < uVar6)) && ((uVar7 | 1) < uVar6)) {
          fVar12 = *(float *)(lVar9 + 0x20 + (ulong)uVar5 * 4);
          fVar13 = *(float *)(lVar9 + 0x20 + (ulong)uVar1 * 4);
          param_2 = param_2 - (float)iVar3;
          param_4 = param_4 - (float)iVar4;
          fVar15 = *(float *)(lVar9 + 0x20 + (ulong)(uVar5 | 1) * 4);
          fVar16 = *(float *)(lVar9 + 0x20 + (ulong)(uVar7 | 1) * 4);
          fVar10 = param_2 * param_2 * (3.0 - (param_2 + param_2));
          fVar14 = *(float *)(lVar9 + 0x20 + (ulong)(uVar1 | 1) * 4);
          fVar11 = param_4 * param_4 * (3.0 - (param_4 + param_4));
          fVar13 = fVar13 + fVar10 * (*(float *)(lVar9 + 0x20 + (ulong)uVar2 * 4) - fVar13);
          fVar14 = fVar14 + fVar10 * (*(float *)(lVar9 + 0x20 + (ulong)(uVar2 | 1) * 4) - fVar14);
          *param_7 = (fVar13 + fVar11 * ((fVar12 + fVar10 * (*(float *)(lVar9 + 0x20 +
                                                                       (ulong)uVar7 * 4) - fVar12))
                                        - fVar13)) * param_1 + *param_7;
          *param_8 = *param_8 +
                     (fVar14 + fVar11 * ((fVar15 + fVar10 * (fVar16 - fVar15)) - fVar14)) * param_1;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}


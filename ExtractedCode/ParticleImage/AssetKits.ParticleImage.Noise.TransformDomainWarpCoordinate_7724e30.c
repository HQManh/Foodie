// rea decompile_all
// name: AssetKits.ParticleImage.Noise$$TransformDomainWarpCoordinate
// address: 0x7724e30
// body: available
// range: 0x7724e30-0x7724f53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AssetKits_ParticleImage_Noise__TransformDomainWarpCoordinate
               (long param_1,float *param_2,float *param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 3) {
    fVar2 = (*param_2 + *param_3 + *param_4) * 0.6666667;
    *param_2 = fVar2 - *param_2;
    *param_3 = fVar2 - *param_3;
    fVar2 = fVar2 - *param_4;
  }
  else {
    if (iVar1 == 2) {
      fVar2 = *param_2;
      fVar3 = *param_4;
      fVar5 = *param_3;
      fVar4 = (fVar2 + fVar3) * -0.21132487;
      *param_3 = fVar5 * 0.57735026;
      *param_2 = *param_2 + (fVar4 - fVar5 * 0.57735026);
      *param_4 = *param_4 + (fVar4 - *param_3);
      *param_3 = (fVar2 + fVar3) * 0.57735026 + *param_3;
      return;
    }
    if (iVar1 != 1) {
      return;
    }
    fVar2 = *param_2;
    fVar3 = *param_3;
    fVar5 = *param_4;
    fVar4 = (fVar2 + fVar3) * -0.21132487;
    *param_4 = fVar5 * 0.57735026;
    *param_2 = *param_2 + (fVar4 - fVar5 * 0.57735026);
    *param_3 = (fVar4 + *param_3) - *param_4;
    fVar2 = (fVar2 + fVar3) * 0.57735026 + *param_4;
  }
  *param_4 = fVar2;
  return;
}


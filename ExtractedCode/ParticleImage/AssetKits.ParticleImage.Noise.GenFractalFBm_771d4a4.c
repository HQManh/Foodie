// rea decompile_all
// name: AssetKits.ParticleImage.Noise$$GenFractalFBm
// address: 0x771d4a4
// body: available
// range: 0x771d4a4-0x771d5bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AssetKits_ParticleImage_Noise__GenFractalFBm(float param_1,float param_2,long param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((DAT_09522a1a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091888a0);
    DAT_09522a1a = 1;
  }
  if (*(int *)(param_3 + 0x28) < 1) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = 0.0;
    fVar6 = *(float *)(param_3 + 0x3c);
    iVar1 = *(int *)(param_3 + 0x10);
    iVar2 = 0;
    do {
      fVar3 = (float)AssetKits_ParticleImage_Noise__GenNoiseSingle
                               (param_1,param_2,param_3,iVar1 + iVar2);
      if (*(int *)(DAT_091888a0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = iVar2 + 1;
      param_1 = param_1 * *(float *)(param_3 + 0x2c);
      param_2 = param_2 * *(float *)(param_3 + 0x2c);
      fVar4 = (float)NEON_fminnm(fVar3 + 1.0,0x40000000);
      fVar5 = fVar5 + fVar6 * fVar3;
      fVar6 = *(float *)(param_3 + 0x30) *
              fVar6 * ((fVar4 * 0.5 + -1.0) * *(float *)(param_3 + 0x34) + 1.0);
    } while (iVar2 < *(int *)(param_3 + 0x28));
  }
  return fVar5;
}


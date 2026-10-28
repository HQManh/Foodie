// rea decompile_all
// name: AssetKits.ParticleImage.Noise$$GetNoise
// address: 0x771d3e8
// body: available
// range: 0x771d3e8-0x771d44b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x771d438 to 0x771d6d8 AssetKits.ParticleImage.Noise$$GenFractalPingPong (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x771d43c to 0x771d5bc AssetKits.ParticleImage.Noise$$GenFractalRidged (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x771d440 to 0x771d4a4 AssetKits.ParticleImage.Noise$$GenFractalFBm (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x771d448 to 0x771d44c AssetKits.ParticleImage.Noise$$GenNoiseSingle (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AssetKits_ParticleImage_Noise__GetNoise(float param_1,float param_2,long param_3)

{
  int iVar1;
  float fVar2;
  
  param_1 = *(float *)(param_3 + 0x14) * param_1;
  param_2 = *(float *)(param_3 + 0x14) * param_2;
  iVar1 = *(int *)(param_3 + 0x24);
  fVar2 = (param_2 + param_1) * 0.3660254;
  if (1 < *(uint *)(param_3 + 0x18)) {
    fVar2 = -0.0;
  }
  if (iVar1 == 1) {
    AssetKits_ParticleImage_Noise__GenFractalFBm(param_1 + fVar2,param_2 + fVar2);
    return;
  }
  if (iVar1 == 2) {
    AssetKits_ParticleImage_Noise__GenFractalRidged();
    return;
  }
  if (iVar1 == 3) {
    AssetKits_ParticleImage_Noise__GenFractalPingPong();
    return;
  }
  AssetKits_ParticleImage_Noise__GenNoiseSingle(param_3,*(undefined4 *)(param_3 + 0x10));
  return;
}


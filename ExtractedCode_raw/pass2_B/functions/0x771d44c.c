// rea decompile_all
// name: AssetKits.ParticleImage.Noise$$GenNoiseSingle
// address: 0x771d44c
// body: available
// range: 0x771d44c-0x771d4a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x771d46c to 0x771f970 AssetKits.ParticleImage.Noise$$SingleCellular (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x771d488 to 0x77208f0 AssetKits.ParticleImage.Noise$$SingleValue (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x771d48c to 0x771ec0c AssetKits.ParticleImage.Noise$$SingleSimplex (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x771d490 to 0x771ff4c AssetKits.ParticleImage.Noise$$SinglePerlin (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x771d49c to 0x771f08c AssetKits.ParticleImage.Noise$$SingleOpenSimplex2S (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x771d4a0 to 0x77202dc AssetKits.ParticleImage.Noise$$SingleValueCubic (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] AssetKits_ParticleImage_Noise__GenNoiseSingle(long param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 < 3) {
    if (iVar1 == 0) {
      auVar2 = AssetKits_ParticleImage_Noise__SingleSimplex();
      return auVar2;
    }
    if (iVar1 == 1) {
      auVar2 = AssetKits_ParticleImage_Noise__SingleOpenSimplex2S();
      return auVar2;
    }
    if (iVar1 == 2) {
      auVar2 = AssetKits_ParticleImage_Noise__SingleCellular();
      return auVar2;
    }
  }
  else {
    if (iVar1 == 3) {
      auVar2 = AssetKits_ParticleImage_Noise__SinglePerlin();
      return auVar2;
    }
    if (iVar1 == 4) {
      auVar2 = AssetKits_ParticleImage_Noise__SingleValueCubic();
      return auVar2;
    }
    if (iVar1 == 5) {
      auVar2 = AssetKits_ParticleImage_Noise__SingleValue();
      return auVar2;
    }
  }
  return ZEXT816(0);
}


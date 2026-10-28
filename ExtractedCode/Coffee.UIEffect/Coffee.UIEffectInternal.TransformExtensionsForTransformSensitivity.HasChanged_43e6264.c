// rea decompile_all
// name: Coffee.UIEffectInternal.TransformExtensionsForTransformSensitivity$$HasChanged
// address: 0x43e6264
// body: available
// range: 0x43e6264-0x43e629f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43e629c to 0x43e62d0 Coffee.UIEffectInternal.TransformExtensionsForTransformSensitivity$$HasChanged_Internal (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffectInternal_TransformExtensionsForTransformSensitivity__HasChanged
               (undefined8 param_1,undefined8 param_2,uint param_3)

{
  float fVar1;
  
  if (param_3 < 3) {
    fVar1 = *(float *)(&DAT_01a8fa20 + (ulong)param_3 * 4);
  }
  else {
    fVar1 = 1.0 / (float)(1 << (ulong)(param_3 & 0x1f));
  }
  Coffee_UIEffectInternal_TransformExtensionsForTransformSensitivity__HasChanged_Internal
            (fVar1,param_1,0,param_2);
  return;
}


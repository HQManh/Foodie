// rea decompile_all
// name: Coffee.UIEffectInternal.TransformExtensionsForTransformSensitivity$$Approximately
// address: 0x43e663c
// body: available
// range: 0x43e663c-0x43e6713 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Switch with 1 destination removed at 0x043e6710 */

bool Coffee_UIEffectInternal_TransformExtensionsForTransformSensitivity__Approximately
               (float param_1,float *param_2,float *param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  bVar2 = false;
  uVar3 = 0;
  do {
    if (param_1 < ABS(*param_2 - *param_3)) {
      return bVar2;
    }
    uVar1 = uVar3 + 1;
    bVar2 = 0xe < uVar3;
    uVar3 = uVar1;
  } while (uVar1 != 0x10);
  return bVar2;
}


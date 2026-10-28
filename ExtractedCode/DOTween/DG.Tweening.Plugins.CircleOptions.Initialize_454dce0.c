// rea decompile_all
// name: DG.Tweening.Plugins.CircleOptions$$Initialize
// address: 0x454dce0
// body: available
// range: 0x454dce0-0x454ddab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void DG_Tweening_Plugins_CircleOptions__Initialize
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  float fVar1;
  
  *(undefined1 *)(param_5 + 0x18) = 1;
  *(float *)(param_5 + 8) = param_3;
  *(float *)(param_5 + 0xc) = param_4;
  if (*(char *)(param_5 + 4) != '\0') {
    param_3 = param_1 + param_3;
    param_4 = param_2 + param_4;
    *(float *)(param_5 + 8) = param_3;
    *(float *)(param_5 + 0xc) = param_4;
  }
  if (DAT_09515fab == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515fab = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  *(float *)(param_5 + 0x10) =
       SQRT((param_3 - param_1) * (param_3 - param_1) + (param_4 - param_2) * (param_4 - param_2));
  fVar1 = atan2f(param_1 - *(float *)(param_5 + 8),param_2 - *(float *)(param_5 + 0xc));
  *(float *)(param_5 + 0x14) = fVar1 * 57.29578;
  return;
}


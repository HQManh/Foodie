// rea decompile_all
// name: DG.Tweening.TweenSettingsExtensions$$SetLookAt
// address: 0x454d23c
// body: available
// range: 0x454d23c-0x454d31f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long DG_Tweening_TweenSettingsExtensions__SetLookAt
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,long param_5,
               int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11,byte param_12)

{
  float fVar1;
  
  if ((param_5 != 0) && (*(char *)(param_5 + 0xe8) != '\0')) {
    *(int *)(param_5 + 0x144) = param_6;
    if (param_6 == 1) {
      fVar1 = 0.0001;
      if (0.0001 <= param_4) {
        fVar1 = param_4;
      }
      *(float *)(param_5 + 0x168) = fVar1;
    }
    else if (param_6 == 2) {
      *(undefined8 *)(param_5 + 0x160) = param_7;
      thunk_FUN_03f5d7b8(param_5 + 0x160,param_7);
    }
    else if (param_6 == 3) {
      *(undefined4 *)(param_5 + 0x154) = param_1;
      *(undefined4 *)(param_5 + 0x158) = param_2;
      *(undefined4 *)(param_5 + 0x15c) = param_3;
    }
    *(undefined4 *)(param_5 + 0x154) = param_1;
    *(undefined4 *)(param_5 + 0x158) = param_2;
    *(undefined4 *)(param_5 + 0x15c) = param_3;
    *(byte *)(param_5 + 0x192) = param_12 & 1;
    DG_Tweening_TweenSettingsExtensions__SetPathForwardDirection
              (param_5,param_8,param_9,param_10,param_11);
  }
  return param_5;
}


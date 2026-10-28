// rea decompile_all
// name: ChocDino.UIFX.ColorAdjust$$Process
// address: 0x43c9694
// body: available
// range: 0x43c9694-0x43c9767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ChocDino_UIFX_ColorAdjust__Process(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_09517bd4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184e48);
    DAT_09517bd4 = 1;
  }
  ChocDino_UIFX_ColorAdjust__SetupResources(param_1,param_2);
  if (*(char *)(param_1 + 0xb8) == '\0') {
    if (*(char *)(param_1 + 0xb9) == '\0') goto LAB_043c9724;
  }
  else {
    *(undefined1 *)(param_1 + 0xb8) = 0;
    ChocDino_UIFX_ColorAdjust__BuildHSVMatrix
              (*(undefined4 *)(param_1 + 0x10),
               *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x5c),
               *(float *)(param_1 + 0x5c) * *(float *)(param_1 + 0x18),param_1 + 0x78);
    *(undefined1 *)(param_1 + 0xb9) = 1;
  }
  ChocDino_UIFX_ColorAdjust__UpdateMaterials(param_1);
  *(undefined1 *)(param_1 + 0xb9) = 0;
LAB_043c9724:
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(DAT_09184e48 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Graphics__Blit(uVar2,uVar1,uVar3,0,0);
  return *(undefined8 *)(param_1 + 0x68);
}


// rea decompile_all
// name: Utilities.GizmoUtility$$DrawFilledRect
// address: 0x4516ab0
// body: available
// range: 0x4516ab0-0x4516be7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4516be4 to 0x85ffe0c UnityEngine.Gizmos$$set_color (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_GizmoUtility__DrawFilledRect
               (float param_1,float param_2,float param_3,float param_4,undefined4 param_5,
               undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = param_2;
  fVar5 = param_4;
  fVar4 = param_3;
  if ((DAT_0951856f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_0951856f = 1;
  }
  uVar2 = UnityEngine_Gizmos__get_color(0);
  UnityEngine_Gizmos__set_color(param_5,param_6,param_7,param_8,0);
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_09517b1f == '\0') {
    FUN_03f5c2a4(&DAT_0918cbd0);
    DAT_09517b1f = '\x01';
  }
  lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
  UnityEngine_Gizmos__DrawCube
            (param_1 + param_3 * 0.5,param_2 + param_4 * 0.5,0,param_3 + *(float *)(lVar1 + 0x48),
             param_4 + *(float *)(lVar1 + 0x4c),*(float *)(lVar1 + 0x50) + 0.0,0);
  UnityEngine_Gizmos__set_color(uVar2,fVar3,fVar4,fVar5,0);
  return;
}


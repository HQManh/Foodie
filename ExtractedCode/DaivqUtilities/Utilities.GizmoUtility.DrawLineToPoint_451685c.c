// rea decompile_all
// name: Utilities.GizmoUtility$$DrawLineToPoint
// address: 0x451685c
// body: available
// range: 0x451685c-0x4516917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4516914 to 0x85ffe0c UnityEngine.Gizmos$$set_color (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_GizmoUtility__DrawLineToPoint
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  
  uVar2 = param_2;
  uVar3 = param_3;
  uVar4 = param_4;
  uVar1 = UnityEngine_Gizmos__get_color(0);
  UnityEngine_Gizmos__set_color
            (uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
             uStack000000000000000c,0);
  UnityEngine_Gizmos__DrawSphere(param_4,param_5,param_6,0x3dcccccd,0);
  UnityEngine_Gizmos__DrawLine(param_1,param_2,param_3,param_4,param_5,param_6,0);
  UnityEngine_Gizmos__set_color(uVar1,uVar2,uVar3,uVar4,0);
  return;
}


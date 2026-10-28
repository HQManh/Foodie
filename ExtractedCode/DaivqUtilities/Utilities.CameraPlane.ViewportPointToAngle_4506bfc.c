// rea decompile_all
// name: Utilities.CameraPlane$$ViewportPointToAngle
// address: 0x4506bfc
// body: available
// range: 0x4506bfc-0x4506cdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4506cdc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float Utilities_CameraPlane__ViewportPointToAngle(float param_1,float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  
  if (param_3 != 0) {
    fVar1 = (float)UnityEngine_Camera__get_fieldOfView(param_3,0);
    fVar2 = (float)UnityEngine_Camera__get_aspect(param_3,0);
    fVar1 = tanf(fVar1 * 0.5 * 0.017453292);
    fVar1 = atanf(fVar2 * fVar1);
    fVar1 = tanf((fVar1 * 57.29578 + fVar1 * 57.29578) * 0.5 * 0.017453292);
    fVar1 = atanf((param_1 + -0.5 + param_1 + -0.5) * fVar1);
    fVar2 = (float)UnityEngine_Camera__get_fieldOfView(param_3,0);
    fVar2 = tanf(fVar2 * 0.5 * 0.017453292);
    atanf((param_2 + -0.5 + param_2 + -0.5) * fVar2);
    return fVar1 * 57.29578 * 0.017453292;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


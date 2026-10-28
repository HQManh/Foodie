// rea decompile_all
// name: ChocDino.UIFX.BlurDirectionalFilter.CompositeShader$$Apply
// address: 0x43c3dec
// body: available
// range: 0x43c3dec-0x43c401f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c3f94 to 0x8613164 UnityEngine.Material$$EnableKeyword (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43c4018 to 0x8613368 UnityEngine.Material$$DisableKeyword (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43c401c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_BlurDirectionalFilter_CompositeShader__Apply
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,int param_9)

{
  if ((DAT_09517b92 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09196430);
    FUN_03f5c2a4(&DAT_09190980);
    FUN_03f5c2a4(&DAT_091fc6d8);
    FUN_03f5c2a4(&DAT_091fc6f0);
    FUN_03f5c2a4(&DAT_091fc6e0);
    DAT_09517b92 = 1;
  }
  if (*(int *)(DAT_09190980 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  UnityEngine_Material__SetFloat
            (param_1,param_8,*(undefined4 *)(*(long *)(DAT_09190980 + 0xb8) + 8),0);
  if (*(int *)(DAT_09196430 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  UnityEngine_Material__SetColorImpl
            (param_6,param_7,0,0,param_8,*(undefined4 *)(*(long *)(DAT_09196430 + 0xb8) + 4),0);
  UnityEngine_Material__SetColorImpl
            (param_2,param_3,param_4,param_5,param_8,**(undefined4 **)(DAT_09196430 + 0xb8),0);
  if (param_9 == 1) {
    UnityEngine_Material__EnableKeyword(param_8,DAT_091fc6e0,0);
  }
  else {
    if (param_9 == 2) {
      UnityEngine_Material__DisableKeyword(param_8,DAT_091fc6e0,0);
      UnityEngine_Material__EnableKeyword(param_8,DAT_091fc6f0,0);
      goto LAB_043c3fe8;
    }
    if (param_9 == 3) {
      UnityEngine_Material__DisableKeyword(param_8,DAT_091fc6e0,0);
      UnityEngine_Material__DisableKeyword(param_8,DAT_091fc6f0,0);
      UnityEngine_Material__EnableKeyword(param_8,DAT_091fc6d8,0);
      return;
    }
    UnityEngine_Material__DisableKeyword(param_8,DAT_091fc6e0,0);
  }
  UnityEngine_Material__DisableKeyword(param_8,DAT_091fc6f0,0);
LAB_043c3fe8:
  UnityEngine_Material__DisableKeyword(param_8,DAT_091fc6d8,0);
  return;
}


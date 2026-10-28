// rea decompile_all
// name: ChocDino.UIFX.UIToolkitTextSource$$ReleaseTexture
// address: 0x43c2d64
// body: available
// range: 0x43c2d64-0x43c2e23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43c2e10 to 0x43a0a34 ChocDino.UIFX.RenderTextureHelper$$ReleaseTemporary (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43c2e20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_UIToolkitTextSource__ReleaseTexture(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((DAT_09517b8b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517b8b = 1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x170);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 400);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_1 + 400) != 0) {
      UnityEngine_UIElements_PanelSettings__set_targetTexture(*(long *)(param_1 + 400),0,0);
      if (*(long *)(param_1 + 400) != 0) {
        *(undefined1 *)(*(long *)(param_1 + 400) + 0x71) = 0;
        goto LAB_043c2e00;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_043c2e00:
  ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(param_1 + 0x170,0);
  return;
}


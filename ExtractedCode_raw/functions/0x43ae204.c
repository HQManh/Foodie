// rea decompile_all
// name: ChocDino.UIFX.MotionBlurSimple$$ModifyMesh
// address: 0x43ae204
// body: available
// range: 0x43ae204-0x43ae317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43ae278 to 0x89b82bc UnityEngine.UI.VertexHelper$$AddUIVertexTriangleStream (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43ae310 to 0x43abbdc ChocDino.UIFX.MotionBlurSimple$$CacheState (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43ae314 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_MotionBlurSimple__ModifyMesh(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_09517aeb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188408);
    DAT_09517aeb = 1;
  }
  if (((*(char *)(*(long *)(DAT_09188408 + 0xb8) + 1) != '\0') &&
      (*(char *)(param_1 + 0xe8) != '\0')) && (*(long *)(param_1 + 0x50) != 0)) {
    if (param_2 != 0) {
      UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream(param_2,*(long *)(param_1 + 0x50),0);
      return;
    }
LAB_043ae314:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined1 *)(param_1 + 0xe8) = 0;
  uVar2 = ChocDino_UIFX_MotionBlurSimple__CanApply(param_1);
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x40) = 0;
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x108);
  if ((bVar1 & 6) == 4) {
    *(undefined1 *)(param_1 + 0x108) = 0;
    if ((bVar1 & 1) == 0) {
      ChocDino_UIFX_MotionBlurSimple__PrepareBuffers(param_1,param_2);
      goto LAB_043ae300;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x108) = 0;
  }
  uVar2 = ChocDino_UIFX_MotionBlurSimple__PrepareBuffers(param_1,param_2);
  if ((uVar2 & 1) != 0) {
    uVar3 = ChocDino_UIFX_MotionBlurSimple__CreateMotionBlurMesh(param_1);
    if (param_2 == 0) goto LAB_043ae314;
    UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream(param_2,uVar3,0);
    *(undefined1 *)(param_1 + 0xe8) = 1;
  }
LAB_043ae300:
  ChocDino_UIFX_MotionBlurSimple__CacheState(param_1);
  return;
}


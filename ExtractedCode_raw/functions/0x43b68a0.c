// rea decompile_all
// name: ChocDino.UIFX.MotionBlurSimpleTMP$$WillRenderCanvases
// address: 0x43b68a0
// body: available
// range: 0x43b68a0-0x43b69a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b69a0 to 0x43b69a8 ChocDino.UIFX.MotionBlurSimpleTMP$$ApplyOutputMeshAndMaterial (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43b69a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_MotionBlurSimpleTMP__WillRenderCanvases(long param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  
  if ((DAT_09517b2f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517b2f = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0xf8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  plVar5 = *(long **)(param_1 + 0xf8);
  if (plVar5 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x34) != 1) {
      return;
    }
    uVar4 = ChocDino_UIFX_MotionBlurSimpleTMP__CanApply(param_1);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if (*(char *)(param_1 + 0x40) == '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x100) == '\0') {
      return;
    }
    if (*(long *)(param_1 + 0x58) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0x44) < 1) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x11c);
    iVar2 = UnityEngine_Time__get_frameCount(0);
    if (iVar1 == iVar2) {
      return;
    }
    uVar3 = UnityEngine_Time__get_frameCount(0);
    *(undefined4 *)(param_1 + 0x11c) = uVar3;
    if (*(long *)(param_1 + 0xf8) != 0) {
      uVar6 = TMPro_TMP_Text__get_textInfo(*(long *)(param_1 + 0xf8),0);
      ChocDino_UIFX_MotionBlurSimpleTMP__ApplyOutputMeshAndMaterial(param_1,uVar6);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: ChocDino.UIFX.MotionBlurSimpleTMP$$UpdateCanvasCamera
// address: 0x43b45ec
// body: available
// range: 0x43b45ec-0x43b474f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b473c to 0x85f7548 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43b474c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_MotionBlurSimpleTMP__UpdateCanvasCamera(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  if ((DAT_09517b2a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09213f58);
    DAT_09517b2a = 1;
  }
  puVar5 = (undefined8 *)(param_1 + 0xe0);
  *puVar5 = 0;
  thunk_FUN_03f5d7b8(puVar5,0);
  lVar2 = ChocDino_UIFX_MotionBlurSimpleTMP__get_GraphicComponent(param_1);
  if ((lVar2 != 0) && (lVar2 = UnityEngine_UI_Graphic__get_canvas(lVar2,0), lVar2 != 0)) {
    iVar1 = UnityEngine_Canvas__get_renderMode(lVar2,0);
    if (iVar1 == 2) {
      lVar2 = ChocDino_UIFX_MotionBlurSimpleTMP__get_GraphicComponent(param_1);
      if ((lVar2 == 0) || (lVar2 = UnityEngine_UI_Graphic__get_canvas(lVar2,0), lVar2 == 0))
      goto LAB_043b474c;
      uVar3 = UnityEngine_Canvas__get_worldCamera(lVar2,0);
      *puVar5 = uVar3;
      thunk_FUN_03f5d7b8(puVar5,uVar3);
      uVar3 = *puVar5;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Equality(uVar3,0,0);
      if ((uVar4 & 1) != 0) {
        uVar3 = UnityEngine_Camera__get_main(0);
        *puVar5 = uVar3;
        thunk_FUN_03f5d7b8(puVar5,uVar3);
        uVar3 = *puVar5;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Equality(uVar3,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_Debug__LogWarning(DAT_09213f58,0);
          return;
        }
      }
    }
    return;
  }
LAB_043b474c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: ChocDino.UIFX.FilterStackTextMeshPro$$OnDisable
// address: 0x43bbc0c
// body: available
// range: 0x43bbc0c-0x43bbef3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43bbeec to 0x89b9c0c UnityEngine.EventSystems.UIBehaviour$$OnDisable (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43bbef0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FilterStackTextMeshPro__OnDisable(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((DAT_09517b60 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174858);
    FUN_03f5c2a4(&DAT_091a77f8);
    FUN_03f5c2a4(&DAT_091cc5b8);
    FUN_03f5c2a4(&DAT_091cc5c0);
    FUN_03f5c2a4(&DAT_091cc5c8);
    FUN_03f5c2a4(&DAT_091cc5d0);
    FUN_03f5c2a4(&DAT_091d4eb8);
    FUN_03f5c2a4(&DAT_091d4ec0);
    FUN_03f5c2a4(&DAT_091d4ed0);
    FUN_03f5c2a4(&DAT_091d4ee0);
    FUN_03f5c2a4(&DAT_0918b838);
    FUN_03f5c2a4(&DAT_0918c678);
    FUN_03f5c2a4(&DAT_0918eb28);
    DAT_09517b60 = 1;
  }
  FUN_04c37370(param_1 + 0x80,DAT_091d4ec0);
  ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(param_1 + 0x58,0);
  ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(param_1 + 0x50,0);
  ChocDino_UIFX_RenderTextureHelper__ReleaseTemporary(param_1 + 0xd0,0);
  FUN_04c37370(param_1 + 0xd8,DAT_091d4eb8);
  FUN_04c37370(param_1 + 0xe0,DAT_091d4ed0);
  if (*(long *)(param_1 + 0x48) != 0) {
    ChocDino_UIFX_Compositor__FreeResources(*(long *)(param_1 + 0x48),0);
    lVar1 = ChocDino_UIFX_FilterStackTextMeshPro__get_GraphicComponent(param_1);
    uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
    UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091cc5b8,0);
    if (lVar1 != 0) {
      UnityEngine_UI_Graphic__UnregisterDirtyMaterialCallback(lVar1,uVar2,0);
      lVar1 = ChocDino_UIFX_FilterStackTextMeshPro__get_GraphicComponent(param_1);
      uVar2 = thunk_FUN_03f9944c(DAT_0918c678);
      UnityEngine_Events_UnityAction___ctor(uVar2,param_1,DAT_091cc5c0,0);
      if (lVar1 != 0) {
        UnityEngine_UI_Graphic__UnregisterDirtyVerticesCallback(lVar1,uVar2,0);
        uVar2 = thunk_FUN_03f9944c(DAT_0918eb28);
        UnityEngine_Canvas_WillRenderCanvases___ctor(uVar2,param_1,DAT_091cc5d0,0);
        UnityEngine_Canvas__remove_willRenderCanvases(uVar2,0);
        if (*(int *)(DAT_0918b838 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar1 = *(long *)(*(long *)(DAT_0918b838 + 0xb8) + 0x58);
        uVar2 = thunk_FUN_03f9944c(DAT_09174858);
        FUN_070a8c30(uVar2,param_1,DAT_091cc5c8,0);
        if (lVar1 != 0) {
          FUN_0523ae30(lVar1,uVar2,DAT_091a77f8);
          FUN_04c373e8(param_1 + 0x78,DAT_091d4ee0);
          FUN_04c37370(param_1 + 0x60,DAT_091d4eb8);
          *(undefined8 *)(param_1 + 0x68) = 0;
          thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x68),0);
          ChocDino_UIFX_FilterStackTextMeshPro__UpdateClipParent(param_1);
          plVar3 = *(long **)(param_1 + 0x30);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x2d8))(plVar3,*(undefined8 *)(*plVar3 + 0x2e0));
            UnityEngine_EventSystems_UIBehaviour__OnDisable(param_1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


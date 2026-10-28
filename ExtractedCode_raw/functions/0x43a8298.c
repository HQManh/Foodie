// rea decompile_all
// name: ChocDino.UIFX.MotionBlurReal$$ModifyMesh
// address: 0x43a8298
// body: available
// range: 0x43a8298-0x43a852f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43a833c to 0x43a8530 ChocDino.UIFX.MotionBlurReal$$GenerateQuad (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43a8394 to 0x43aa968 ChocDino.UIFX.MotionBlurReal$$CacheState (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43a852c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_MotionBlurReal__ModifyMesh(long param_1,long param_2)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_09517ad5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188400);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517ad5 = 1;
  }
  if (*(int *)(DAT_09188400 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (((*(char *)(*(long *)(DAT_09188400 + 0xb8) + 0x15) != '\0') &&
      (uVar2 = ChocDino_UIFX_MotionBlurReal__HasRendered(param_1), (uVar2 & 1) != 0)) &&
     (*(char *)(param_1 + 0x108) != '\0')) {
    uVar3 = ChocDino_UIFX_MotionBlurReal__GetRenderCamera(param_1);
    ChocDino_UIFX_MotionBlurReal__GenerateQuad(param_1,param_2,uVar3);
    return;
  }
  *(undefined1 *)(param_1 + 0x108) = 0;
  uVar2 = ChocDino_UIFX_MotionBlurReal__CanApply(param_1);
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x40) = 0;
    return;
  }
  uVar3 = ChocDino_UIFX_MotionBlurReal__GetRenderCamera(param_1);
  bVar1 = *(byte *)(param_1 + 0x1c0);
  if ((bVar1 & 6) == 4) {
    *(undefined1 *)(param_1 + 0x1c0) = 0;
    if ((bVar1 & 1) == 0) {
      ChocDino_UIFX_MotionBlurReal__PrepareBuffers(param_1,param_2);
      ChocDino_UIFX_MotionBlurReal__CacheState(param_1);
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x1c0) = 0;
  }
  uVar2 = ChocDino_UIFX_MotionBlurReal__PrepareBuffers(param_1,param_2);
  if ((uVar2 & 1) == 0) goto LAB_043a8510;
  ChocDino_UIFX_MotionBlurReal__CreateMotionBlurMesh(param_1);
  if (*(long *)(param_1 + 0x110) == 0) goto LAB_043a852c;
  UnityEngine_Mesh__Clear(*(long *)(param_1 + 0x110),0);
  if (*(long *)(param_1 + 0x110) == 0) goto LAB_043a852c;
  UnityEngine_Mesh__SetVertices
            (*(long *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0xe8),0,
             *(undefined4 *)(param_1 + 0xe0),7,0);
  if (*(long *)(param_1 + 0x110) == 0) goto LAB_043a852c;
  UnityEngine_Mesh__SetUVs
            (*(long *)(param_1 + 0x110),0,*(undefined8 *)(param_1 + 0xf0),0,
             *(undefined4 *)(param_1 + 0xe0),7,0);
  if (*(long *)(param_1 + 0x110) == 0) goto LAB_043a852c;
  UnityEngine_Mesh__SetColors
            (*(long *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0xf8),0,
             *(undefined4 *)(param_1 + 0xe0),7,0);
  lVar4 = *(long *)(param_1 + 0x100);
  if ((lVar4 == 0) || (*(long *)(param_1 + 0x110) == 0)) goto LAB_043a852c;
  UnityEngine_Mesh__SetTriangles
            (*(long *)(param_1 + 0x110),lVar4,0,*(undefined4 *)(lVar4 + 0x18),0,1,0,0);
  if (*(long *)(param_1 + 0x110) == 0) goto LAB_043a852c;
  UnityEngine_Mesh__get_bounds(&local_48,*(long *)(param_1 + 0x110),0);
  *(undefined8 *)(param_1 + 0x120) = uStack_40;
  *(undefined8 *)(param_1 + 0x118) = local_48;
  *(undefined8 *)(param_1 + 0x128) = local_38;
  ChocDino_UIFX_MotionBlurReal__GenerateRenderMetrics(param_1,uVar3);
  ChocDino_UIFX_MotionBlurReal__LateUpdate5(param_1);
  uVar2 = ChocDino_UIFX_MotionBlurReal__HasRendered(param_1);
  if ((uVar2 & 1) == 0) goto LAB_043a8510;
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (*(float *)(param_1 + 0x158) <= 0.0) {
LAB_043a84f8:
    if (param_2 == 0) {
LAB_043a852c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_UI_VertexHelper__Clear(param_2,0);
  }
  else {
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(float *)(param_1 + 0x15c) <= 0.0) goto LAB_043a84f8;
    ChocDino_UIFX_MotionBlurReal__GenerateQuad(param_1,param_2,uVar3);
  }
  *(undefined1 *)(param_1 + 0x108) = 1;
LAB_043a8510:
  ChocDino_UIFX_MotionBlurReal__CacheState(param_1);
  return;
}


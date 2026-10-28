// rea decompile_all
// name: CW.Common.CwHelper$$.cctor
// address: 0x44ebe5c
// body: available
// range: 0x44ebe5c-0x44ec257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ec1a8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ec254 to 0x869b6a0 UnityEngine.Rendering.RenderPipelineManager$$add_endCameraRendering (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CW_Common_CwHelper___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((DAT_095183dd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174d80);
    FUN_03f5c2a4(&DAT_0918eac0);
    FUN_03f5c2a4(&DAT_091822e8);
    FUN_03f5c2a4(&DAT_09183140);
    FUN_03f5c2a4(&DAT_091ae5f8);
    FUN_03f5c2a4(&DAT_091ae640);
    FUN_03f5c2a4(&DAT_0917c6f0);
    FUN_03f5c2a4(&DAT_0917c6f8);
    FUN_03f5c2a4(&DAT_091bb640);
    FUN_03f5c2a4(&DAT_091bb300);
    FUN_03f5c2a4(&DAT_0917e918);
    FUN_03f5c2a4(&DAT_0917e9d0);
    FUN_03f5c2a4(&DAT_091e8458);
    FUN_03f5c2a4(&DAT_091e8460);
    FUN_03f5c2a4(&DAT_091e8468);
    FUN_03f5c2a4(&DAT_091e8470);
    FUN_03f5c2a4(&DAT_0918f9e8);
    DAT_095183dd = 1;
  }
  uVar2 = thunk_FUN_03f9944c(DAT_0917e9d0);
  FUN_061a842c(uVar2,DAT_091bb640);
  **(undefined8 **)(DAT_09183140 + 0xb8) = uVar2;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09183140 + 0xb8),uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917c6f0);
  FUN_057e0400(uVar2,DAT_091ae5f8);
  puVar3 = (undefined8 *)(*(long *)(DAT_09183140 + 0xb8) + 8);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917c6f8);
  FUN_057e0400(uVar2,DAT_091ae640);
  puVar3 = (undefined8 *)(*(long *)(DAT_09183140 + 0xb8) + 0x10);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917e918);
  FUN_061a1268(uVar2,DAT_091bb300);
  puVar3 = (undefined8 *)(*(long *)(DAT_09183140 + 0xb8) + 0x28);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  uVar2 = thunk_FUN_03f9944c(DAT_0917c6f0);
  FUN_057e0400(uVar2,DAT_091ae5f8);
  puVar3 = (undefined8 *)(*(long *)(DAT_09183140 + 0xb8) + 0x48);
  *puVar3 = uVar2;
  thunk_FUN_03f5d7b8(puVar3,uVar2);
  uVar2 = *(undefined8 *)(*(long *)(DAT_091822e8 + 0xb8) + 8);
  if (*(int *)(DAT_0918f9e8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar7 = **(undefined8 **)(DAT_0918f9e8 + 0xb8);
  uVar4 = thunk_FUN_03f9944c(DAT_0918eac0);
  UnityEngine_Camera_CameraCallback___ctor(uVar4,uVar7,DAT_091e8458,0);
  plVar5 = (long *)System_Delegate__Combine(uVar2,uVar4,0);
  lVar1 = DAT_0918eac0;
  if (plVar5 == (long *)0x0) {
    plVar6 = (long *)(*(long *)(DAT_091822e8 + 0xb8) + 8);
    *plVar6 = 0;
  }
  else {
    if (*plVar5 != DAT_0918eac0) goto LAB_044ec1a4;
    plVar6 = (long *)(*(long *)(DAT_091822e8 + 0xb8) + 8);
    *plVar6 = (long)plVar5;
    if (*plVar5 != lVar1) goto LAB_044ec1a4;
  }
  thunk_FUN_03f5d7b8(plVar6,plVar5);
  uVar4 = *(undefined8 *)(*(long *)(DAT_091822e8 + 0xb8) + 0x10);
  uVar7 = **(undefined8 **)(DAT_0918f9e8 + 0xb8);
  uVar2 = thunk_FUN_03f9944c(DAT_0918eac0);
  UnityEngine_Camera_CameraCallback___ctor(uVar2,uVar7,DAT_091e8460,0);
  plVar5 = (long *)System_Delegate__Combine(uVar4,uVar2,0);
  lVar1 = DAT_0918eac0;
  if (plVar5 == (long *)0x0) {
    plVar6 = (long *)(*(long *)(DAT_091822e8 + 0xb8) + 0x10);
    *plVar6 = 0;
LAB_044ec1b8:
    thunk_FUN_03f5d7b8(plVar6,plVar5);
    uVar4 = **(undefined8 **)(DAT_0918f9e8 + 0xb8);
    uVar2 = thunk_FUN_03f9944c(DAT_09174d80);
    FUN_071ce238(uVar2,uVar4,DAT_091e8468,0);
    UnityEngine_Rendering_RenderPipelineManager__add_beginCameraRendering(uVar2,0);
    uVar4 = **(undefined8 **)(DAT_0918f9e8 + 0xb8);
    uVar2 = thunk_FUN_03f9944c(DAT_09174d80);
    FUN_071ce238(uVar2,uVar4,DAT_091e8470,0);
    UnityEngine_Rendering_RenderPipelineManager__add_endCameraRendering(uVar2,0);
    return;
  }
  if (*plVar5 == DAT_0918eac0) {
    plVar6 = (long *)(*(long *)(DAT_091822e8 + 0xb8) + 0x10);
    *plVar6 = (long)plVar5;
    if (*plVar5 == lVar1) goto LAB_044ec1b8;
  }
LAB_044ec1a4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c8d0(plVar5);
}


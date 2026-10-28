// rea decompile_all
// name: ChocDino.UIFX.FilterStackTextMeshPro$$ApplyOutputMeshAndMaterial
// address: 0x43bf820
// body: available
// range: 0x43bf820-0x43bfb4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43bfb48 to 0x898c5a4 UnityEngine.CanvasRenderer$$SetMaterial (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43bfb4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FilterStackTextMeshPro__ApplyOutputMeshAndMaterial(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  
  if ((DAT_09517b6e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184608);
    FUN_03f5c2a4(&DAT_09188058);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c760);
    DAT_09517b6e = 1;
  }
  if (*(int *)(param_1 + 0xac) == 0) {
    lVar8 = *(long *)(param_1 + 0x40);
    if (*(float *)(param_1 + 0x70) == 1.0) {
      if (*(int *)(DAT_09184608 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar8 == 0) goto LAB_043bfb4c;
      uVar5 = *(undefined8 *)(param_1 + 0x78);
      uVar1 = *(undefined4 *)(*(long *)(DAT_09184608 + 0xb8) + 8);
    }
    else {
      uVar1 = FUN_043b2fc4(0x3f800000,0x3f800000,0x3f800000,0);
      if (lVar8 == 0) goto LAB_043bfb4c;
      uVar5 = *(undefined8 *)(param_1 + 0x78);
    }
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = ChocDino_UIFX_FilterStackTextMeshPro__GetRenderCamera(param_1);
    fVar9 = *(float *)(param_1 + 0x70);
    lVar8 = *(long *)(param_1 + 0x40);
    uVar3 = UnityEngine_Component__get_transform(param_1,0);
    if (fVar9 == 1.0) {
      if (*(int *)(DAT_09184608 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar8 == 0) goto LAB_043bfb4c;
      uVar5 = *(undefined8 *)(param_1 + 0x78);
      uVar1 = *(undefined4 *)(*(long *)(DAT_09184608 + 0xb8) + 8);
    }
    else {
      uVar1 = FUN_043b2fc4(0x3f800000,0x3f800000,0x3f800000,fVar9,0);
      if (lVar8 == 0) goto LAB_043bfb4c;
      uVar5 = *(undefined8 *)(param_1 + 0x78);
    }
  }
  ChocDino_UIFX_ScreenRectFromMeshes__BuildScreenQuad(lVar8,uVar2,uVar3,uVar1,uVar5,0);
  puVar6 = (undefined8 *)(param_1 + 0x80);
  uVar5 = *puVar6;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(uVar5,0,0);
  if ((uVar4 & 1) != 0) {
    uVar5 = thunk_FUN_03f9944c(DAT_09188058);
    UnityEngine_Mesh___ctor(uVar5,0);
    *puVar6 = uVar5;
    thunk_FUN_03f5d7b8(puVar6,uVar5);
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    UnityEngine_UI_VertexHelper__FillMesh
              (*(long *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),0);
    uVar5 = ChocDino_UIFX_FilterStackTextMeshPro__get_DisplayMaterial(param_1);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar4 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar4 & 1) == 0) {
      return;
    }
    plVar7 = *(long **)(param_1 + 0x30);
    if (plVar7 != (long *)0x0) {
      if ((char)plVar7[0x17] == '\0') {
        uVar5 = ChocDino_UIFX_FilterStackTextMeshPro__get_DisplayMaterial(param_1);
        if (*(int *)(DAT_0918c760 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918c760);
        }
        ChocDino_UIFX_UnityShaderProp__ResetStencilProperties(uVar5,0);
      }
      else {
        uVar5 = (**(code **)(*plVar7 + 0x568))(plVar7,*(undefined8 *)(*plVar7 + 0x570));
        uVar5 = (**(code **)(*plVar7 + 0x4d8))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x4e0));
        uVar2 = ChocDino_UIFX_FilterStackTextMeshPro__get_DisplayMaterial(param_1);
        if (*(int *)(DAT_0918c760 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918c760);
        }
        ChocDino_UIFX_UnityShaderProp__CopyStencilProperties(uVar5,uVar2,0);
      }
      if ((*(long *)(param_1 + 0x30) != 0) &&
         (lVar8 = TMPro_TextMeshProUGUI__get_canvasRenderer(*(long *)(param_1 + 0x30),0), lVar8 != 0
         )) {
        UnityEngine_CanvasRenderer__SetMesh(lVar8,*(undefined8 *)(param_1 + 0x80),0);
        UnityEngine_CanvasRenderer__set_materialCount(lVar8,1,0);
        uVar5 = ChocDino_UIFX_FilterStackTextMeshPro__get_DisplayMaterial(param_1);
        UnityEngine_CanvasRenderer__SetMaterial(lVar8,uVar5,0,0);
        return;
      }
    }
  }
LAB_043bfb4c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


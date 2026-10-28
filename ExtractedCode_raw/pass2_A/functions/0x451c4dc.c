// rea decompile_all
// name: Utilities.CameraBlurSnapshot$$RenderCamera
// address: 0x451c4dc
// body: available
// range: 0x451c4dc-0x451c78f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x451c760 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c764 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c768 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c76c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c770 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c774 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c778 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c77c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c780 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c784 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x451c78c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0451c788) */
/* WARNING: Removing unreachable block (ram,0x0451c768) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void Utilities_CameraBlurSnapshot__RenderCamera
               (float param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_09518598 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d7918);
    FUN_03f5c2a4(&DAT_091d7920);
    FUN_03f5c2a4(&DAT_09193bd8);
    DAT_09518598 = 1;
  }
  if (param_2 != 0) {
    uVar1 = UnityEngine_Camera__get_cullingMask(param_2,0);
    fVar5 = (float)UnityEngine_Camera__get_orthographicSize(param_2,0);
    fVar6 = (float)UnityEngine_Camera__get_fieldOfView(param_2,0);
    UnityEngine_Camera__set_cullingMask(param_2,param_4,0);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = UnityEngine_Camera__get_orthographic(param_2,0);
    if ((uVar2 & 1) == 0) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar7 = tanf(fVar6 * 0.5 * 0.017453292);
      fVar7 = atanf(fVar7 * param_1);
      UnityEngine_Camera__set_fieldOfView(fVar7 * 114.59156,param_2,0);
    }
    else {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Camera__set_orthographicSize(fVar5 * param_1,param_2,0);
    }
    lVar3 = thunk_FUN_03f9944c(DAT_09193bd8);
    UnityEngine_Rendering_RenderPipeline_StandardRequest___ctor(lVar3,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(lVar3 + 0x10) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar3 + 0x10),param_3);
    uVar2 = FUN_04d17710(param_2,lVar3,DAT_091d7920);
    if ((uVar2 & 1) == 0) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = UnityEngine_Camera__get_targetTexture(param_2,0);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Camera__set_targetTexture(param_2,param_3,0);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Camera__Render(param_2,0);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      UnityEngine_Camera__set_targetTexture(param_2,uVar4,0);
    }
    else {
      FUN_04d175e0(param_2,lVar3,DAT_091d7918);
    }
    if (((param_2 != 0) && (UnityEngine_Camera__set_cullingMask(param_2,uVar1,0), param_2 != 0)) &&
       (UnityEngine_Camera__set_orthographicSize(fVar5,param_2,0), param_2 != 0)) {
      UnityEngine_Camera__set_fieldOfView(fVar6,param_2,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


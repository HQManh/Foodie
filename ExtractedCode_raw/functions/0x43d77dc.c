// rea decompile_all
// name: ChocDino.UIFX.FilterBase$$ApplyMesh
// address: 0x43d77dc
// body: available
// range: 0x43d77dc-0x43d7acb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43d7a7c to 0x898c5a4 UnityEngine.CanvasRenderer$$SetMaterial (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43d7ab0 to 0x898d1b0 UnityEngine.CanvasRenderer$$SetMesh (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43d7ac8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FilterBase__ApplyMesh(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  
  if ((DAT_09517c99 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188058);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918cce8);
    DAT_09517c99 = 1;
  }
  lVar1 = ChocDino_UIFX_FilterBase__get_CanvasRenderComponent(param_1);
  *(undefined1 *)((long)param_1 + 0xa1) = 0;
  if (DAT_09517cab == '\0') {
    FUN_03f5c2a4(&DAT_0918cb90);
    DAT_09517cab = '\x01';
  }
  lVar4 = **(long **)(DAT_0918cb90 + 0xb8);
  *(undefined1 *)(param_1 + 0x32) = 1;
  param_1[0x2e] = lVar4;
  param_1[0x2f] = lVar4;
  uVar2 = (**(code **)(*param_1 + 0x2d8))(param_1,*(undefined8 *)(*param_1 + 0x2e0));
  if ((uVar2 & 1) == 0) {
    if (lVar1 != 0) {
      lVar4 = param_1[0xf];
      goto LAB_043d7a9c;
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0xa1) = 1;
    uVar3 = ChocDino_UIFX_FilterBase__get_GraphicComponent(param_1);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      lVar4 = ChocDino_UIFX_FilterBase__get_GraphicComponent(param_1);
      if (lVar4 == 0) goto LAB_043d7ac8;
      uVar3 = UnityEngine_UI_Graphic__get_canvas(lVar4,0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar2 = UnityEngine_Object__op_Equality(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        return;
      }
    }
    fVar7 = (float)(**(code **)(*param_1 + 0x328))(param_1,*(undefined8 *)(*param_1 + 0x330));
    *(float *)((long)param_1 + 0x16c) = fVar7;
    if (0.0 < fVar7) {
      ChocDino_UIFX_FilterBase__GrabMesh(param_1,param_2);
      uVar2 = (**(code **)(*param_1 + 0x348))(param_1,1,*(undefined8 *)(*param_1 + 0x350));
      if ((uVar2 & 1) != 0) {
        plVar5 = param_1 + 0x11;
        lVar4 = *plVar5;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Equality(lVar4,0,0);
        if ((uVar2 & 1) != 0) {
          lVar4 = thunk_FUN_03f9944c(DAT_09188058);
          UnityEngine_Mesh___ctor(lVar4,0);
          *plVar5 = lVar4;
          thunk_FUN_03f5d7b8(plVar5,lVar4);
        }
        if (*plVar5 != 0) {
          UnityEngine_Mesh__Clear(*plVar5,0);
          lVar6 = param_1[0x11];
          lVar4 = thunk_FUN_03f9944c(DAT_0918cce8);
          UnityEngine_UI_VertexHelper___ctor(lVar4,lVar6,0);
          ChocDino_UIFX_FilterBase__BuildOutputQuad(param_1,lVar4);
          if (lVar4 != 0) {
            UnityEngine_UI_VertexHelper__FillMesh(lVar4,*plVar5,0);
            UnityEngine_UI_VertexHelper__Dispose(lVar4,0);
            if (lVar1 != 0) {
              UnityEngine_CanvasRenderer__SetMesh(lVar1,param_1[0x11],0);
              lVar4 = param_1[0xe];
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar2 = UnityEngine_Object__op_Implicit(lVar4,0);
              if ((uVar2 & 1) == 0) {
                return;
              }
              UnityEngine_CanvasRenderer__set_materialCount(lVar1,1,0);
              UnityEngine_CanvasRenderer__SetMaterial(lVar1,param_1[0xe],0,0);
              return;
            }
          }
        }
        goto LAB_043d7ac8;
      }
    }
    if (lVar1 != 0) {
      lVar4 = 0;
LAB_043d7a9c:
      UnityEngine_CanvasRenderer__SetMesh(lVar1,lVar4,0);
      return;
    }
  }
LAB_043d7ac8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


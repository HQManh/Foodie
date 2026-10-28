// rea decompile_all
// name: ChocDino.UIFX.FilterBase$$GrabMesh
// address: 0x43d751c
// body: available
// range: 0x43d751c-0x43d773f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43d7728 to 0x43a064c ChocDino.UIFX.ColorUtils$$ConvertMeshVertexColorsToLinear (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43d773c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_FilterBase__GrabMesh(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  
  if ((DAT_09517c98 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182738);
    FUN_03f5c2a4(&DAT_091d4b28);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517c98 = 1;
  }
  plVar4 = (long *)(param_1 + 0x78);
  lVar5 = *plVar4;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(lVar5,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = FUN_04c350c8(param_2,DAT_091d4b28);
    *plVar4 = lVar5;
    thunk_FUN_03f5d7b8(plVar4,lVar5);
LAB_043d76e4:
    iVar1 = UnityEngine_QualitySettings__get_activeColorSpace(0);
    if (iVar1 == 1) {
      uVar3 = *(undefined8 *)(param_1 + 0x78);
      if (*(int *)(DAT_09182738 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      ChocDino_UIFX_ColorUtils__ConvertMeshVertexColorsToLinear(uVar3,param_1 + 0x80,0);
      return;
    }
    return;
  }
  if ((*plVar4 != 0) && (UnityEngine_Mesh__Clear(*plVar4,0), param_2 != 0)) {
    lVar5 = *plVar4;
    uVar3 = UnityEngine_Mesh__get_vertices(param_2,0);
    if (lVar5 != 0) {
      UnityEngine_Mesh__set_vertices(lVar5,uVar3,0);
      lVar5 = *plVar4;
      uVar3 = UnityEngine_Mesh__get_colors(param_2,0);
      if (lVar5 != 0) {
        UnityEngine_Mesh__set_colors(lVar5,uVar3,0);
        lVar5 = *plVar4;
        uVar3 = UnityEngine_Mesh__get_uv(param_2,0);
        if (lVar5 != 0) {
          UnityEngine_Mesh__set_uv(lVar5,uVar3,0);
          lVar5 = *plVar4;
          uVar3 = UnityEngine_Mesh__get_uv2(param_2,0);
          if (lVar5 != 0) {
            UnityEngine_Mesh__set_uv2(lVar5,uVar3,0);
            lVar5 = *plVar4;
            uVar3 = UnityEngine_Mesh__get_normals(param_2,0);
            if (lVar5 != 0) {
              UnityEngine_Mesh__set_normals(lVar5,uVar3,0);
              lVar5 = *plVar4;
              uVar3 = UnityEngine_Mesh__get_tangents(param_2,0);
              if (lVar5 != 0) {
                UnityEngine_Mesh__set_tangents(lVar5,uVar3,0);
                lVar5 = *plVar4;
                uVar3 = UnityEngine_Mesh__get_triangles(param_2,0);
                if (lVar5 != 0) {
                  UnityEngine_Mesh__set_triangles(lVar5,uVar3,0);
                  goto LAB_043d76e4;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


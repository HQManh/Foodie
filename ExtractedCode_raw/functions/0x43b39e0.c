// rea decompile_all
// name: ChocDino.UIFX.MotionBlurSimpleTMP$$ModifyGeometry
// address: 0x43b39e0
// body: available
// range: 0x43b39e0-0x43b3c0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b3c08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43b3c0c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_MotionBlurSimpleTMP__ModifyGeometry(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long local_80 [10];
  
  if ((DAT_09517b27 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188410);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b7b8);
    DAT_09517b27 = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0xf8);
  local_80[3] = 0;
  local_80[2] = 0;
  local_80[5] = 0;
  local_80[4] = 0;
  local_80[7] = 0;
  local_80[6] = 0;
  local_80[9] = 0;
  local_80[8] = 0;
  local_80[1] = 0;
  local_80[0] = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar7,0,0);
  if ((uVar3 & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0xf8);
    if (plVar4 == (long *)0x0) goto LAB_043b3c08;
    uVar3 = (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
    if ((uVar3 & 1) != 0) {
      lVar5 = ChocDino_UIFX_MotionBlurSimpleTMP__ModifyMesh(param_1,param_2);
      if (*(int *)(param_1 + 0x34) == 0) {
        if (lVar5 != 0) {
          if (param_2 != 0) {
            if (*(int *)(param_2 + 0x34) != 1) {
              return;
            }
            lVar6 = *(long *)(param_2 + 0x60);
            if (lVar6 != 0) {
              if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              memmove(local_80,(void *)(lVar6 + 0x20),0x50);
              iVar2 = *(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x44);
              iVar1 = iVar2 + 3;
              if (-1 < iVar2) {
                iVar1 = iVar2;
              }
              if (*(int *)(DAT_0918b7b8 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              TMPro_TMP_MeshInfo__ResizeMeshInfo(local_80,iVar1 >> 2,0);
              if (((local_80[0] != 0) &&
                  (UnityEngine_Mesh__set_triangles(local_80[0],local_80[8],0), local_80[0] != 0)) &&
                 (UnityEngine_Mesh__set_vertices(local_80[0],*(undefined8 *)(lVar5 + 0x10),0),
                 local_80[0] != 0)) {
                UnityEngine_Mesh__SetColors(local_80[0],*(undefined8 *)(lVar5 + 0x30),0);
                if (*(int *)(DAT_09188410 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if (**(char **)(DAT_09188410 + 0xb8) == '\0') {
                  if (local_80[0] == 0) goto LAB_043b3c08;
                  UnityEngine_Mesh__SetUVs(local_80[0],0,*(undefined8 *)(lVar5 + 0x18),0);
                }
                else {
                  if (local_80[0] == 0) goto LAB_043b3c08;
                  UnityEngine_Mesh__SetUVs(local_80[0],0,*(undefined8 *)(lVar5 + 0x20),0);
                }
                if (local_80[0] != 0) {
                  UnityEngine_Mesh__SetUVs(local_80[0],1,*(undefined8 *)(lVar5 + 0x28),0);
                  plVar4 = *(long **)(param_1 + 0xf8);
                  if (plVar4 != (long *)0x0) {
                    (**(code **)(*plVar4 + 0x7e8))
                              (plVar4,local_80[0],0,*(undefined8 *)(*plVar4 + 0x7f0));
                    return;
                  }
                }
              }
            }
          }
LAB_043b3c08:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      else {
        *(bool *)(param_1 + 0x100) = lVar5 != 0;
      }
    }
  }
  return;
}


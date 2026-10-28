// rea decompile_all
// name: CookOrder.Cooking.Implement.RectSpaceUVMeshEffect$$ModifyMesh
// address: 0x44e7af0
// body: available
// range: 0x44e7af0-0x44e7ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44e7ddc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_RectSpaceUVMeshEffect__ModifyMesh
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5,
               long param_6)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  float fVar4;
  float local_ec [15];
  float local_b0;
  float fStack_ac;
  float local_a8;
  undefined4 local_a4;
  
  if ((DAT_095183b3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1710);
    FUN_03f5c2a4(&DAT_091b1748);
    FUN_03f5c2a4(&DAT_091b1750);
    FUN_03f5c2a4(&DAT_091b1760);
    FUN_03f5c2a4(&DAT_09189c90);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_095183b3 = 1;
  }
  uVar1 = (**(code **)(*param_5 + 0x1c8))(param_5,*(undefined8 *)(*param_5 + 0x1d0));
  if ((uVar1 & 1) != 0) {
    lVar2 = UnityEngine_UI_BaseMeshEffect__get_graphic(param_5,0);
    if ((lVar2 == 0) || (lVar2 = UnityEngine_UI_Graphic__get_rectTransform(lVar2,0), lVar2 == 0)) {
LAB_044e7ddc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    fVar4 = (float)UnityEngine_RectTransform__get_rect(lVar2,0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (0.0 < param_3) {
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (0.0 < param_4) {
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(int *)(DAT_09189c90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar2 = **(long **)(DAT_09189c90 + 0xb8);
        if (lVar2 != 0) {
          *(undefined4 *)(lVar2 + 0x18) = 0;
          *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
          if (param_6 != 0) {
            UnityEngine_UI_VertexHelper__GetUIVertexStream(param_6,lVar2,0);
            iVar3 = 0;
            while( true ) {
              if (*(int *)(DAT_09189c90 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar2 = **(long **)(DAT_09189c90 + 0xb8);
              if (lVar2 == 0) break;
              if (*(int *)(lVar2 + 0x18) <= iVar3) {
                UnityEngine_UI_VertexHelper__Clear(param_6,0);
                if (*(int *)(DAT_09189c90 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                UnityEngine_UI_VertexHelper__AddUIVertexTriangleStream
                          (param_6,**(undefined8 **)(DAT_09189c90 + 0xb8),0);
                return;
              }
              if (*(int *)(DAT_09189c90 + 0xe4) == 0) {
                FUN_03f5c424();
                lVar2 = **(long **)(DAT_09189c90 + 0xb8);
                if (lVar2 == 0) break;
              }
              FUN_05894708(local_ec,lVar2,iVar3,DAT_091b1750);
              if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if (**(long **)(DAT_09189c90 + 0xb8) == 0) break;
              local_b0 = (local_ec[0] - fVar4) / param_3;
              local_a4 = 0;
              fStack_ac = ((float)local_ec._4_8_ - param_2) / param_4;
              local_a8 = param_3 / param_4;
              FUN_0589476c(**(long **)(DAT_09189c90 + 0xb8),iVar3,local_ec,DAT_091b1760);
              iVar3 = iVar3 + 1;
            }
          }
        }
        goto LAB_044e7ddc;
      }
    }
  }
  return;
}


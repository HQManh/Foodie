// rea decompile_all
// name: ChocDino.UIFX.FilterBase$$HasMeshChanged
// address: 0x43d717c
// body: available
// range: 0x43d717c-0x43d73ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43d73f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43d73fc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 ChocDino_UIFX_FilterBase__HasMeshChanged(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_09517c96 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091845d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517c96 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x78);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  if (param_2 != 0) {
    iVar1 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_2,0);
    if (*(long *)(param_1 + 0x78) != 0) {
      iVar2 = UnityEngine_Mesh__get_vertexCount(*(long *)(param_1 + 0x78),0);
      if (iVar1 != iVar2) {
        return 1;
      }
      iVar1 = UnityEngine_UI_VertexHelper__get_currentIndexCount(param_2,0);
      if (*(long *)(param_1 + 0x78) != 0) {
        uVar4 = UnityEngine_Mesh__GetIndexCount(*(long *)(param_1 + 0x78),0,0);
        if ((long)iVar1 != (uVar4 & 0xffffffff)) {
          return 1;
        }
        uVar3 = UnityEngine_UI_VertexHelper__get_currentVertCount(param_2,0);
        if ((int)uVar3 < 1) {
          return 0;
        }
        uVar4 = 0;
        lVar7 = 0x20;
        lVar8 = 0x20;
        while( true ) {
          if (*(int *)(DAT_091845d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          UnityEngine_UI_VertexHelper__PopulateUIVertex
                    (param_2,*(long *)(DAT_091845d0 + 0xb8) + 0x18,uVar4 & 0xffffffff,0);
          if (*(long *)(param_1 + 0x78) == 0) break;
          uVar6 = *(undefined8 *)(*(long *)(DAT_091845d0 + 0xb8) + 0x18);
          fVar12 = *(float *)(*(long *)(DAT_091845d0 + 0xb8) + 0x20);
          lVar5 = UnityEngine_Mesh__get_vertices(*(long *)(param_1 + 0x78),0);
          if (lVar5 == 0) break;
          if (*(uint *)(lVar5 + 0x18) <= uVar4) {
LAB_043d73fc:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar10 = *(undefined8 *)(lVar5 + lVar8);
          fVar9 = (float)uVar6 - (float)uVar10;
          fVar11 = (float)((ulong)uVar6 >> 0x20) - (float)((ulong)uVar10 >> 0x20);
          fVar12 = fVar12 - *(float *)((undefined8 *)(lVar5 + lVar8) + 1);
          if (9.9999994e-11 <= fVar12 * fVar12 + fVar9 * fVar9 + fVar11 * fVar11) {
            return 1;
          }
          if (*(int *)(DAT_091845d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (*(long *)(param_1 + 0x78) == 0) break;
          fVar12 = *(float *)(*(long *)(DAT_091845d0 + 0xb8) + 0x44);
          lVar5 = UnityEngine_Mesh__get_uv(*(long *)(param_1 + 0x78),0);
          if (lVar5 == 0) break;
          if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_043d73fc;
          if (fVar12 != *(float *)(lVar5 + lVar7)) {
            return 1;
          }
          if (*(int *)(DAT_091845d0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (*(long *)(param_1 + 0x78) == 0) break;
          fVar12 = *(float *)(*(long *)(DAT_091845d0 + 0xb8) + 0x48);
          lVar5 = UnityEngine_Mesh__get_uv(*(long *)(param_1 + 0x78),0);
          if (lVar5 == 0) break;
          if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_043d73fc;
          if (fVar12 != *(float *)(lVar5 + lVar7 + 4)) {
            return 1;
          }
          uVar4 = uVar4 + 1;
          lVar8 = lVar8 + 0xc;
          lVar7 = lVar7 + 8;
          if (uVar3 == uVar4) {
            return 0;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


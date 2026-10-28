// rea decompile_all
// name: ChocDino.UIFX.TrailEffectTMP$$AssignTrailGeometryToMesh
// address: 0x43b8b68
// body: available
// range: 0x43b8b68-0x43b8fa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43b8f9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43b8fa0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ChocDino_UIFX_TrailEffectTMP__AssignTrailGeometryToMesh(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_09517b42 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b7b8);
    FUN_03f5c2a4(&DAT_0918bff0);
    DAT_09517b42 = 1;
  }
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x34) != 1) {
      if (1 < *(int *)(param_2 + 0x34)) {
        if ((*(long *)(param_1 + 0x88) == 0) ||
           (lVar7 = *(long *)(*(long *)(param_1 + 0x88) + 0x10), lVar7 == 0)) goto LAB_043b8f9c;
        uVar3 = *(uint *)(lVar7 + 0x18);
        uVar9 = 0;
        iVar12 = 0;
        uVar2 = uVar3 + 3;
        if (-1 < (int)uVar3) {
          uVar2 = uVar3;
        }
        do {
          lVar7 = *(long *)(param_2 + 0x60);
          if (lVar7 == 0) goto LAB_043b8f9c;
          if (*(uint *)(lVar7 + 0x18) <= uVar9) goto LAB_043b8fa0;
          memmove(&local_100,(void *)(lVar7 + uVar9 * 0x50 + 0x20),0x50);
          iVar13 = *(int *)(param_1 + 0x20);
          bVar4 = *(byte *)(param_1 + 0x54);
          iVar1 = (int)uStack_f8 + 3;
          if (-1 < (int)uStack_f8) {
            iVar1 = (int)uStack_f8;
          }
          if (*(int *)(DAT_0918b7b8 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar1 = iVar1 >> 2;
          iVar13 = iVar13 + (bVar4 ^ 1);
          TMPro_TMP_MeshInfo__ResizeMeshInfo(&local_100,iVar13 * iVar1,0);
          if (0 < iVar13) {
            iVar5 = iVar1 * 4;
            iVar10 = iVar12 << 2;
            iVar11 = 0;
            do {
              if (*(long *)(param_1 + 0x90) == 0) goto LAB_043b8f9c;
              System_Array__Copy(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x10),iVar10,local_f0,
                                 iVar11,iVar5,0);
              if (*(int *)(DAT_0918bff0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar7 = *(long *)(param_1 + 0x90);
              if (**(char **)(DAT_0918bff0 + 0xb8) == '\0') {
                if (lVar7 == 0) goto LAB_043b8f9c;
                puVar8 = (undefined8 *)(lVar7 + 0x18);
              }
              else {
                if (lVar7 == 0) goto LAB_043b8f9c;
                puVar8 = (undefined8 *)(lVar7 + 0x20);
              }
              System_Array__Copy(*puVar8,iVar10,uStack_d8,iVar11,iVar5,0);
              if (*(long *)(param_1 + 0x90) == 0) goto LAB_043b8f9c;
              System_Array__Copy(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x28),iVar10,local_d0,
                                 iVar11,iVar5,0);
              if (*(long *)(param_1 + 0x90) == 0) goto LAB_043b8f9c;
              System_Array__Copy(*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x30),iVar10,local_c8,
                                 iVar11,iVar5,0);
              iVar13 = iVar13 + -1;
              iVar10 = iVar10 + (uVar2 & 0xfffffffc);
              iVar11 = iVar11 + iVar5;
            } while (iVar13 != 0);
          }
          if ((((local_100 == 0) ||
               (UnityEngine_Mesh__set_triangles(local_100,local_c0,0), local_100 == 0)) ||
              (UnityEngine_Mesh__set_vertices(local_100,local_f0,0), local_100 == 0)) ||
             ((UnityEngine_Mesh__SetColors(local_100,local_c8,0), local_100 == 0 ||
              (UnityEngine_Mesh__SetUVs(local_100,0,uStack_d8,0), local_100 == 0))))
          goto LAB_043b8f9c;
          UnityEngine_Mesh__SetUVs(local_100,1,local_d0,0);
          plVar6 = *(long **)(param_1 + 0x80);
          if (plVar6 == (long *)0x0) goto LAB_043b8f9c;
          iVar12 = iVar1 + iVar12;
          (**(code **)(*plVar6 + 0x7e8))
                    (plVar6,local_100,uVar9 & 0xffffffff,*(undefined8 *)(*plVar6 + 0x7f0));
          uVar9 = uVar9 + 1;
        } while ((long)uVar9 < (long)*(int *)(param_2 + 0x34));
      }
      return;
    }
    lVar7 = *(long *)(param_2 + 0x60);
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) == 0) {
LAB_043b8fa0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      memmove(&local_b0,(void *)(lVar7 + 0x20),0x50);
      iVar13 = *(int *)(param_1 + 0x20);
      iVar12 = (int)local_a8 + 3;
      if (-1 < (int)local_a8) {
        iVar12 = (int)local_a8;
      }
      iVar1 = iVar12 >> 2;
      if (*(char *)(param_1 + 0x54) != '\0') {
        iVar1 = 0;
      }
      if (*(int *)(DAT_0918b7b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      TMPro_TMP_MeshInfo__ResizeMeshInfo(&local_b0,iVar1 + iVar13 * (iVar12 >> 2),0);
      if (local_b0 != 0) {
        UnityEngine_Mesh__set_triangles(local_b0,local_70,0);
        if ((*(long *)(param_1 + 0x90) != 0) && (local_b0 != 0)) {
          UnityEngine_Mesh__set_vertices
                    (local_b0,*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x10),0);
          if ((*(long *)(param_1 + 0x90) != 0) && (local_b0 != 0)) {
            UnityEngine_Mesh__SetColors
                      (local_b0,*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x30),0);
            if (*(int *)(DAT_0918bff0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            lVar7 = *(long *)(param_1 + 0x90);
            if (**(char **)(DAT_0918bff0 + 0xb8) == '\0') {
              if ((lVar7 == 0) || (local_b0 == 0)) goto LAB_043b8f9c;
              UnityEngine_Mesh__SetUVs(local_b0,0,*(undefined8 *)(lVar7 + 0x18),0);
            }
            else {
              if ((lVar7 == 0) || (local_b0 == 0)) goto LAB_043b8f9c;
              UnityEngine_Mesh__SetUVs(local_b0,0,*(undefined8 *)(lVar7 + 0x20),0);
            }
            if ((*(long *)(param_1 + 0x90) != 0) && (local_b0 != 0)) {
              UnityEngine_Mesh__SetUVs
                        (local_b0,1,*(undefined8 *)(*(long *)(param_1 + 0x90) + 0x28),0);
              plVar6 = *(long **)(param_1 + 0x80);
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 0x7e8))(plVar6,local_b0,0,*(undefined8 *)(*plVar6 + 0x7f0));
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_043b8f9c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


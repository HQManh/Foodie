// rea decompile_all
// name: Utilities.SpriteShapeUtilities$$GetNearestPointInShape
// address: 0x451902c
// body: available
// range: 0x451902c-0x45192d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45192d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float Utilities_SpriteShapeUtilities__GetNearestPointInShape
                (float param_1,float param_2,long param_3,int *param_4,int *param_5,float *param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStack_b8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_48;
  
  local_48 = 0;
  local_a0 = 0;
  local_98 = 0;
  if (param_3 != 0) {
    fVar8 = param_2;
    lVar2 = UnityEngine_Component__get_transform(param_3,0);
    if (DAT_09516afb == '\0') {
      FUN_03f5c2a4(&DAT_0918cb68);
      DAT_09516afb = '\x01';
    }
    *(undefined8 *)param_6 = *(undefined8 *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x10);
    lVar3 = *(long *)(param_3 + 0x130);
    *param_5 = -1;
    *param_4 = -1;
    if (lVar3 != 0) {
      iVar1 = UnityEngine_U2D_Spline__GetPointCount(lVar3,0);
      fStack_b8 = param_1;
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          lVar3 = *(long *)(param_3 + 0x130);
          *param_5 = 0;
          *param_4 = 0;
          if ((lVar3 == 0) || (UnityEngine_U2D_Spline__GetPosition(lVar3,0,0), lVar2 == 0))
          goto LAB_045192d0;
          fStack_b8 = (float)UnityEngine_Transform__TransformPoint(lVar2,0);
        }
        else if (0 < iVar1 + -1) {
          fVar12 = -1.0;
          iVar4 = 1;
          do {
            if (*(long *)(param_3 + 0x130) == 0) goto LAB_045192d0;
            UnityEngine_U2D_Spline__GetPosition(*(long *)(param_3 + 0x130),iVar4 + -1,0);
            if (lVar2 == 0) goto LAB_045192d0;
            fVar5 = (float)UnityEngine_Transform__TransformPoint(lVar2,0);
            if (*(long *)(param_3 + 0x130) == 0) goto LAB_045192d0;
            fVar10 = fVar8;
            UnityEngine_U2D_Spline__GetPosition(*(long *)(param_3 + 0x130),iVar4,0);
            fVar6 = (float)UnityEngine_Transform__TransformPoint(lVar2,0);
            fVar13 = fVar6 - fVar5;
            fVar11 = fVar10 - fVar8;
            local_a0 = CONCAT44(fVar11,fVar13);
            fVar9 = fVar10;
            fVar7 = (float)UnityEngine_Vector2__Normalize(&local_a0,0);
            Utilities_GeometryUtilities__ProjectFromPointToLine
                      (param_1,param_2,fVar5,fVar8,(long)&local_48 + 4,&local_48,&local_98,0);
            if (0.0 <= (float)local_48) {
              local_a0 = CONCAT44(fVar11,fVar13);
              if (fVar13 * fVar13 + fVar11 * fVar11 < (float)local_48 * (float)local_48) {
                local_98 = CONCAT44(fVar10,fVar6);
                goto LAB_04519230;
              }
              fVar5 = local_48._4_4_ * local_48._4_4_;
            }
            else {
              local_98 = CONCAT44(fVar8,fVar5);
              fVar10 = fVar8;
              fVar6 = fVar5;
LAB_04519230:
              fVar6 = param_1 - fVar6;
              fVar10 = param_2 - fVar10;
              local_a0 = CONCAT44(fVar10,fVar6);
              fVar5 = fVar6 * fVar6 + fVar10 * fVar10;
            }
            if ((fVar12 < 0.0) || (fVar8 = fVar12 * fVar12, fVar5 < fVar12 * fVar12)) {
              fVar12 = SQRT(fVar5);
              *param_4 = iVar4 + -1;
              *param_5 = iVar4;
              fStack_b8 = (float)local_98;
              *param_6 = -fVar9;
              param_6[1] = fVar7;
              fVar8 = local_98._4_4_;
            }
            iVar4 = iVar4 + 1;
          } while (iVar1 != iVar4);
        }
      }
      return fStack_b8;
    }
  }
LAB_045192d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


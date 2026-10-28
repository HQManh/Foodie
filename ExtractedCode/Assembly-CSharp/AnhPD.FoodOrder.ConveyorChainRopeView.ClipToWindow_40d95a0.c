// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorChainRopeView$$ClipToWindow
// address: 0x40d95a0
// body: available
// range: 0x40d95a0-0x40d97eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d97e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_ConveyorChainRopeView__ClipToWindow
          (float param_1,float param_2,float param_3,float param_4,long param_5,undefined4 *param_6,
          undefined4 *param_7)

{
  float fVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_78;
  
  if ((DAT_09516028 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09516028 = 1;
  }
  uVar3 = *(undefined8 *)(param_5 + 0x38);
  local_78 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar2 & 1) == 0) {
    return 1;
  }
  if (*(long *)(param_5 + 0x38) != 0) {
    fVar7 = (float)param_6[1];
    fVar10 = (float)param_6[2];
    fVar4 = (float)UnityEngine_Transform__InverseTransformPoint
                             (*param_6,*(long *)(param_5 + 0x38),0);
    if (*(long *)(param_5 + 0x38) != 0) {
      fVar8 = (float)param_7[1];
      fVar11 = (float)param_7[2];
      fVar5 = (float)UnityEngine_Transform__InverseTransformPoint
                               (*param_7,*(long *)(param_5 + 0x38),0);
      fVar5 = fVar5 - fVar4;
      local_78 = 0x3f800000;
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = AnhPD_FoodOrder_ConveyorChainRopeView__ClipEdge
                        (-fVar5,fVar4 - param_1,(long)&local_78 + 4,&local_78);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = AnhPD_FoodOrder_ConveyorChainRopeView__ClipEdge
                          (fVar5,(param_3 + param_1) - fVar4,(long)&local_78 + 4,&local_78);
        if ((uVar2 & 1) != 0) {
          fVar8 = fVar8 - fVar7;
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = AnhPD_FoodOrder_ConveyorChainRopeView__ClipEdge
                            (-fVar8,fVar7 - param_2,(long)&local_78 + 4,&local_78);
          if ((uVar2 & 1) != 0) {
            if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = AnhPD_FoodOrder_ConveyorChainRopeView__ClipEdge
                              (fVar8,(param_4 + param_2) - fVar7,(long)&local_78 + 4,&local_78);
            if ((uVar2 & 1) != 0) {
              if (*(long *)(param_5 + 0x38) != 0) {
                fVar1 = (float)local_78;
                fVar12 = fVar10 + (fVar11 - fVar10) * local_78._4_4_;
                fVar9 = fVar7 + fVar8 * local_78._4_4_;
                uVar6 = UnityEngine_Transform__TransformPoint
                                  (fVar4 + fVar5 * local_78._4_4_,*(long *)(param_5 + 0x38),0);
                *param_6 = uVar6;
                param_6[1] = fVar9;
                param_6[2] = fVar12;
                if (*(long *)(param_5 + 0x38) != 0) {
                  fVar7 = fVar7 + fVar8 * fVar1;
                  fVar10 = fVar10 + (fVar11 - fVar10) * fVar1;
                  uVar6 = UnityEngine_Transform__TransformPoint
                                    (fVar4 + fVar5 * fVar1,*(long *)(param_5 + 0x38),0);
                  *param_7 = uVar6;
                  param_7[1] = fVar7;
                  param_7[2] = fVar10;
                  return 1;
                }
              }
              goto LAB_040d97e8;
            }
          }
        }
      }
      return 0;
    }
  }
LAB_040d97e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorGrid$$TryGetWindowRect
// address: 0x40df714
// body: available
// range: 0x40df714-0x40df8df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40df8dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_ConveyorGrid__TryGetWindowRect
          (undefined1 param_1 [16],float param_2,long param_3,long param_4,int param_5,
          undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  float extraout_s0;
  float fVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  float fVar9;
  
  if ((DAT_09516051 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091abe40);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09516051 = 1;
  }
  *param_6 = 0;
  param_6[1] = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_4,0);
  uVar3 = 0;
  if ((0 < param_5) && ((uVar2 & 1) != 0)) {
    if (*(long *)(param_3 + 0x18) == 0) {
LAB_040df8dc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar3);
    }
    if (*(int *)(*(long *)(param_3 + 0x18) + 0x18) != 0) {
      uVar3 = *(undefined8 *)(param_3 + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
      if ((uVar2 & 1) != 0) {
        iVar1 = AnhPD_FoodOrder_ConveyorGrid__get_Capacity(param_3);
        if (iVar1 <= param_5) {
          param_5 = iVar1;
        }
        uVar3 = AnhPD_FoodOrder_ConveyorGrid__CellCenter(param_3,0,0);
        if (param_4 != 0) {
          uVar3 = UnityEngine_Transform__InverseTransformPoint(param_4,0);
          if (*(long *)(param_3 + 0x18) != 0) {
            fVar9 = param_2;
            AnhPD_FoodOrder_ConveyorGrid__CellCenter
                      (param_3,*(int *)(*(long *)(param_3 + 0x18) + 0x18) + -1,param_5 + -1);
            fVar5 = (float)UnityEngine_Transform__InverseTransformPoint(param_4,0);
            lVar4 = *(long *)(param_3 + 0x10);
            uVar3 = 0;
            if (lVar4 != 0) {
              fVar6 = *(float *)(lVar4 + 0xa8);
              fVar7 = (float)AnhPD_FoodOrder_IngredientSpawnerController__get_RowPitch(lVar4,0);
              uVar8 = CONCAT44(fVar9,fVar5);
              fVar6 = fVar6 * 0.5;
              uVar2 = uVar8 ^ (uVar8 ^ CONCAT44(param_2,extraout_s0)) &
                              CONCAT44(-(uint)(param_2 < fVar9),-(uint)(extraout_s0 < fVar5));
              uVar8 = uVar8 ^ (uVar8 ^ CONCAT44(param_2,extraout_s0)) &
                              CONCAT44(-(uint)(fVar9 < param_2),-(uint)(fVar5 < extraout_s0));
              fVar9 = (float)uVar2 - fVar6;
              fVar5 = (float)(uVar2 >> 0x20) - fVar7 * 0.5;
              if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              *param_6 = CONCAT44(fVar5,fVar9);
              param_6[1] = CONCAT44(((float)(uVar8 >> 0x20) + fVar7 * 0.5) - fVar5,
                                    ((float)uVar8 + fVar6) - fVar9);
              return 1;
            }
          }
        }
        goto LAB_040df8dc;
      }
    }
  }
  return 0;
}


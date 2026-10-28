// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$SetRectFromWorldCorners
// address: 0x422d9f8
// body: available
// range: 0x422d9f8-0x422dadb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422dad0 to 0x422d248 AnhPD.FoodOrder.OrderIngredientList$$SetParentSpaceRect (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x422dad4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422dad8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderIngredientList__SetRectFromWorldCorners
               (long param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_3 != 0) {
    if (*(int *)(param_3 + 0x18) != 0) {
      if (*(long *)(param_1 + 0xb0) == 0) goto LAB_0422dad4;
      fVar5 = *(float *)(param_3 + 0x24);
      fVar3 = (float)UnityEngine_Transform__InverseTransformPoint
                               (*(undefined4 *)(param_3 + 0x20),fVar5,
                                *(undefined4 *)(param_3 + 0x28),*(long *)(param_1 + 0xb0),0);
      puVar1 = (undefined4 *)(param_3 + 0x34);
      uVar2 = 1;
      fVar7 = fVar3;
      fVar8 = fVar5;
      while (uVar2 < *(uint *)(param_3 + 0x18)) {
        if (*(long *)(param_1 + 0xb0) == 0) goto LAB_0422dad4;
        fVar6 = (float)puVar1[-1];
        fVar4 = (float)UnityEngine_Transform__InverseTransformPoint
                                 (puVar1[-2],fVar6,*puVar1,*(long *)(param_1 + 0xb0),0);
        uVar2 = uVar2 + 1;
        puVar1 = puVar1 + 3;
        if (fVar4 <= fVar3) {
          fVar3 = fVar4;
        }
        if (fVar6 <= fVar5) {
          fVar5 = fVar6;
        }
        if (fVar7 <= fVar4) {
          fVar7 = fVar4;
        }
        if (fVar8 <= fVar6) {
          fVar8 = fVar6;
        }
        if (uVar2 == 4) {
          AnhPD_FoodOrder_OrderIngredientList__SetParentSpaceRect(fVar3,fVar5,fVar7,fVar8,param_2);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0422dad4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


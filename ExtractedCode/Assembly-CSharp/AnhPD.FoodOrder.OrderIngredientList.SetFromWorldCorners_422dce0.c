// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$SetFromWorldCorners
// address: 0x422dce0
// body: available
// range: 0x422dce0-0x422de87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422de7c to 0x866b148 UnityEngine.RectTransform$$set_anchoredPosition (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x422de80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422de84 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderIngredientList__SetFromWorldCorners
               (long param_1,long param_2,long param_3)

{
  float *pfVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_s3;
  float fVar12;
  float fVar13;
  
  if ((DAT_09516d9a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09516d9a = 1;
  }
  if (param_3 != 0) {
    if (*(int *)(param_3 + 0x18) == 0) {
LAB_0422de84:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      fVar8 = *(float *)(param_3 + 0x24);
      fVar3 = (float)UnityEngine_Transform__InverseTransformPoint
                               (*(undefined4 *)(param_3 + 0x20),fVar8,
                                *(undefined4 *)(param_3 + 0x28),*(long *)(param_1 + 0xb0),0);
      pfVar1 = (float *)(param_3 + 0x34);
      uVar2 = 1;
      fVar13 = fVar3;
      fVar12 = fVar8;
      do {
        if (*(uint *)(param_3 + 0x18) <= uVar2) goto LAB_0422de84;
        if (*(long *)(param_1 + 0xb0) == 0) goto LAB_0422de80;
        fVar9 = pfVar1[-1];
        fVar11 = *pfVar1;
        fVar4 = (float)UnityEngine_Transform__InverseTransformPoint
                                 (pfVar1[-2],fVar9,fVar11,*(long *)(param_1 + 0xb0),0);
        uVar2 = uVar2 + 1;
        pfVar1 = pfVar1 + 3;
        if (fVar4 <= fVar3) {
          fVar3 = fVar4;
        }
        if (fVar9 <= fVar8) {
          fVar8 = fVar9;
        }
        if (fVar13 <= fVar4) {
          fVar13 = fVar4;
        }
        if (fVar12 <= fVar9) {
          fVar12 = fVar9;
        }
      } while (uVar2 != 4);
      if (*(long *)(param_1 + 0xb0) != 0) {
        fVar5 = (float)UnityEngine_RectTransform__get_rect(*(long *)(param_1 + 0xb0),0);
        fVar4 = fVar9;
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (param_2 != 0) {
          fVar6 = (float)UnityEngine_RectTransform__get_anchorMin(param_2,0);
          fVar12 = fVar12 - fVar8;
          fVar10 = fVar12;
          UnityEngine_RectTransform__set_sizeDelta(fVar13 - fVar3,fVar12,param_2,0);
          fVar7 = (float)UnityEngine_RectTransform__get_pivot(param_2,0);
          UnityEngine_RectTransform__set_anchoredPosition
                    ((fVar3 + (fVar13 - fVar3) * fVar7) - (fVar5 + fVar11 * fVar6),
                     (fVar8 + fVar12 * fVar10) - (fVar9 + in_s3 * fVar4),param_2,0);
          return;
        }
      }
    }
  }
LAB_0422de80:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


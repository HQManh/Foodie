// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$SetParentSpaceRect
// address: 0x422d248
// body: available
// range: 0x422d248-0x422d43b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422d430 to 0x866b148 UnityEngine.RectTransform$$set_anchoredPosition (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x422d434 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422d438 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderIngredientList__SetParentSpaceRect
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar8 = param_2;
  fVar10 = param_3;
  fVar11 = param_4;
  if ((DAT_09516d97 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09516d97 = 1;
  }
  if ((param_5 != 0) &&
     (plVar1 = (long *)UnityEngine_Transform__GetParent(param_5,0), plVar1 != (long *)0x0)) {
    if (*plVar1 == DAT_09189c98) {
      fVar2 = (float)UnityEngine_RectTransform__get_rect(plVar1,0);
      fVar12 = fVar8;
      fVar3 = (float)UnityEngine_Transform__get_localScale(param_5,0);
      fVar7 = fVar12;
      fVar4 = (float)UnityEngine_RectTransform__get_anchorMax(param_5,0);
      fVar6 = fVar7;
      fVar5 = (float)UnityEngine_RectTransform__get_anchorMin(param_5,0);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar9 = (param_4 - param_2) / fVar12 - fVar11 * (fVar7 - fVar6);
      UnityEngine_RectTransform__set_sizeDelta
                ((param_3 - param_1) / fVar3 - fVar10 * (fVar4 - fVar5),fVar9,param_5,0);
      fVar6 = (float)UnityEngine_RectTransform__get_anchorMin(param_5,0);
      fVar12 = fVar9;
      fVar3 = (float)UnityEngine_RectTransform__get_anchorMax(param_5,0);
      fVar7 = fVar12;
      fVar4 = (float)UnityEngine_RectTransform__get_anchorMin(param_5,0);
      fVar12 = fVar12 - fVar7;
      fVar5 = (float)UnityEngine_RectTransform__get_pivot(param_5,0);
      fVar12 = fVar12 * fVar7;
      fVar9 = fVar9 + fVar12;
      fVar7 = (float)UnityEngine_RectTransform__get_pivot(param_5,0);
      UnityEngine_RectTransform__set_anchoredPosition
                ((param_1 + (param_3 - param_1) * fVar7) -
                 (fVar2 + fVar10 * (fVar6 + (fVar3 - fVar4) * fVar5)),
                 (param_2 + (param_4 - param_2) * fVar12) - (fVar8 + fVar11 * fVar9),param_5,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


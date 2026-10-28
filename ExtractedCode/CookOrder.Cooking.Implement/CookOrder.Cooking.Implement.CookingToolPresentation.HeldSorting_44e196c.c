// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingToolPresentation$$HeldSorting
// address: 0x44e196c
// body: available
// range: 0x44e196c-0x44e1b9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44e1b98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44e1b9c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingToolPresentation__HeldSorting
               (long param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  
  if ((DAT_09518367 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5848);
    FUN_03f5c2a4(&DAT_091c5858);
    DAT_09518367 = 1;
  }
  uVar7 = DAT_091c5848;
  *param_3 = 0;
  *param_4 = 0;
  lVar6 = FUN_04a6ac70(param_1,1,uVar7);
  if (lVar6 == 0) {
LAB_044e1b98:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(uint *)(lVar6 + 0x18);
  if ((int)uVar1 < 1) {
    iVar5 = -0x80000000;
  }
  else {
    uVar9 = 0;
    iVar5 = -0x80000000;
    do {
      if (uVar1 <= uVar9) goto LAB_044e1b9c;
      lVar8 = *(long *)(lVar6 + (long)(int)uVar9 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_044e1b98;
      uVar7 = UnityEngine_Renderer__get_sortingLayerID(lVar8,0);
      iVar2 = UnityEngine_SortingLayer__GetLayerValueFromID(uVar7,0);
      if ((iVar5 <= iVar2) &&
         ((iVar2 != iVar5 ||
          (iVar3 = UnityEngine_Renderer__get_sortingOrder(lVar8,0), *param_4 < iVar3)))) {
        uVar4 = UnityEngine_Renderer__get_sortingLayerID(lVar8,0);
        *param_3 = uVar4;
        iVar5 = UnityEngine_Renderer__get_sortingOrder(lVar8,0);
        *param_4 = iVar5;
        iVar5 = iVar2;
      }
      uVar1 = *(uint *)(lVar6 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar1);
  }
  lVar6 = FUN_04a6ac70(param_1,1,DAT_091c5858);
  if (lVar6 == 0) goto LAB_044e1b98;
  uVar1 = *(uint *)(lVar6 + 0x18);
  if (0 < (int)uVar1) {
    uVar9 = 0;
    do {
      if (uVar1 <= uVar9) goto LAB_044e1b9c;
      lVar8 = *(long *)(lVar6 + (long)(int)uVar9 * 8 + 0x20);
      if (lVar8 == 0) goto LAB_044e1b98;
      uVar7 = UnityEngine_Rendering_SortingGroup__get_sortingLayerID(lVar8,0);
      iVar2 = UnityEngine_SortingLayer__GetLayerValueFromID(uVar7,0);
      if ((iVar5 <= iVar2) &&
         ((iVar2 != iVar5 ||
          (iVar3 = UnityEngine_Rendering_SortingGroup__get_sortingOrder(lVar8,0), *param_4 < iVar3))
         )) {
        uVar4 = UnityEngine_Rendering_SortingGroup__get_sortingLayerID(lVar8,0);
        *param_3 = uVar4;
        iVar5 = UnityEngine_Rendering_SortingGroup__get_sortingOrder(lVar8,0);
        *param_4 = iVar5;
        iVar5 = iVar2;
      }
      uVar1 = *(uint *)(lVar6 + 0x18);
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (int)uVar1);
  }
  if (((-1 < (int)param_2) && (lVar6 = *(long *)(param_1 + 0x30), lVar6 != 0)) &&
     ((int)param_2 < (int)*(uint *)(lVar6 + 0x18))) {
    if (*(uint *)(lVar6 + 0x18) <= param_2) {
LAB_044e1b9c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    lVar6 = *(long *)(lVar6 + (ulong)param_2 * 8 + 0x20);
    if (lVar6 != 0) {
      iVar5 = *(int *)(lVar6 + 0x24);
      goto LAB_044e1b70;
    }
  }
  iVar5 = 1;
LAB_044e1b70:
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  *param_4 = iVar5 + *param_4;
  return;
}


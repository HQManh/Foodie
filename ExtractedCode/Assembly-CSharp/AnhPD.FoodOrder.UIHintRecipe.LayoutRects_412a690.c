// rea decompile_all
// name: AnhPD.FoodOrder.UIHintRecipe$$LayoutRects
// address: 0x412a690
// body: available
// range: 0x412a690-0x412a9f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x412a9f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_UIHintRecipe__LayoutRects
               (float param_1,float param_2,float param_3,float param_4,long param_5,long param_6,
               long param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar12 = param_3;
  if ((DAT_095162fa & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_091af770);
    FUN_03f5c2a4(&DAT_091af778);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_095162fa = 1;
  }
  if (param_6 != 0) {
    iVar2 = *(int *)(param_6 + 0x18);
    lVar5 = AnhPD_FoodOrder_UIHintRecipe__get_Rt(param_5);
    if (lVar5 != 0) {
      plVar6 = (long *)UnityEngine_Transform__GetParent(lVar5,0);
      if ((plVar6 != (long *)0x0) && (*plVar6 == DAT_09189c98)) {
        if (*(int *)(DAT_09187680 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(plVar6,0);
      }
      UnityEngine_Canvas__ForceUpdateCanvases(0);
      lVar5 = AnhPD_FoodOrder_UIHintRecipe__get_Rt(param_5);
      if (lVar5 != 0) {
        UnityEngine_RectTransform__get_rect(lVar5,0);
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar10 = *(int *)(param_5 + 0x30);
        if (DAT_095163ce == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_095163ce = '\x01';
        }
        fVar13 = (float)iVar2 / (float)iVar10;
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar10 = -0x80000000;
        if ((float)(int)fVar13 != INFINITY) {
          iVar10 = (int)fVar13;
        }
        lVar5 = AnhPD_FoodOrder_UIHintRecipe__get_Rt(param_5);
        if (lVar5 != 0) {
          UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                    ((float)iVar10 * param_2 + *(float *)(param_5 + 0x34) * (float)(iVar10 + -1),
                     lVar5,1,0);
          if (0 < iVar10) {
            iVar7 = 0;
            iVar9 = 0;
            do {
              iVar3 = *(int *)(param_5 + 0x30) * iVar9;
              iVar1 = iVar3 + *(int *)(param_5 + 0x30);
              if (iVar2 <= iVar1) {
                iVar1 = iVar2;
              }
              iVar1 = iVar1 - iVar3;
              iVar4 = iVar1 + -1;
              iVar8 = iVar4 + iVar1 + -1;
              fVar13 = (fVar12 - param_1) * 0.5;
              fVar11 = 0.0;
              if (iVar8 != 0 && 0 < iVar4 + iVar1) {
                fVar11 = fVar12 - ((float)iVar1 * param_1 + (float)iVar4 * param_3);
                if (*(char *)(param_5 + 0x38) == '\0') {
                  fVar13 = 0.0;
                  fVar11 = fVar11 / (float)iVar8;
                }
                else {
                  fVar13 = fVar11 / (float)(iVar1 * 2);
                  fVar11 = fVar13;
                }
              }
              if (0 < iVar1) {
                iVar8 = 0;
                fVar14 = -((*(float *)(param_5 + 0x34) + param_2) * (float)iVar9);
                do {
                  FUN_057e0998(param_6,iVar3 + iVar8,DAT_091af778);
                  AnhPD_FoodOrder_UIHintRecipe__SetRect(fVar13,fVar14);
                  fVar13 = fVar13 + param_1;
                  if (iVar8 < iVar4) {
                    if (param_7 == 0) goto LAB_0412a9f0;
                    if (iVar7 < *(int *)(param_7 + 0x18)) {
                      FUN_057e0998(param_7,iVar7,DAT_091af778);
                      AnhPD_FoodOrder_UIHintRecipe__SetRect
                                (fVar11 + fVar13,fVar14 - (param_2 - param_4) * 0.5);
                      fVar13 = fVar11 + param_3 + fVar11 + fVar13;
                      iVar7 = iVar7 + 1;
                    }
                  }
                  iVar8 = iVar8 + 1;
                } while (iVar8 < iVar1);
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 != iVar10);
          }
          return;
        }
      }
    }
  }
LAB_0412a9f0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


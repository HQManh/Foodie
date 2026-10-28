// rea decompile_all
// name: IngameDebugConsole.DebugLogManager$$Resize
// address: 0x733d474
// body: available
// range: 0x733d474-0x733d73b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733d734 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x733d738 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogManager__Resize
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5,long param_6)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float local_68;
  float fStack_64;
  
  if ((DAT_09520663 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189ca0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09520663 = 1;
  }
  local_68 = 0.0;
  fStack_64 = 0.0;
  if (param_6 != 0) {
    uVar5 = *(undefined8 *)(param_5 + 0x110);
    uVar12 = *(undefined4 *)(param_6 + 0x144);
    fVar13 = *(float *)(param_6 + 0x148);
    uVar1 = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(param_6,0);
    if (*(int *)(DAT_09189ca0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189ca0);
    }
    uVar2 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                      (uVar12,uVar5,uVar1,&local_68,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (((*(long *)(param_5 + 400) != 0) &&
        (lVar3 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)(param_5 + 400),0), lVar3 != 0))
       && (plVar4 = (long *)UnityEngine_Transform__GetParent(lVar3,0), plVar4 != (long *)0x0)) {
      if (*plVar4 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      UnityEngine_RectTransform__get_rect(plVar4,0);
      fVar8 = param_3;
      fVar10 = param_4;
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(long *)(param_5 + 0x110) != 0) {
        fVar6 = (float)UnityEngine_RectTransform__get_pivot(*(long *)(param_5 + 0x110),0);
        if (*(long *)(param_5 + 0x110) != 0) {
          fVar11 = fVar13;
          UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0x110),0);
          if (*(long *)(param_5 + 0x108) != 0) {
            fVar7 = (float)UnityEngine_RectTransform__get_anchorMin(*(long *)(param_5 + 0x108),0);
            if (*(char *)(param_5 + 0x30) != '\0') {
              if (*(char *)(param_5 + 0x31) == '\0') {
                local_68 = (fVar6 * fVar8 - param_3) + local_68;
                fVar6 = fVar8 - *(float *)(param_5 + 0x34);
                if (fVar6 < local_68) {
                  local_68 = fVar6;
                }
                fVar8 = local_68 / fVar8;
                fVar11 = 1.0;
                if (fVar8 <= 1.0) {
                  fVar11 = fVar8;
                }
                fVar7 = 0.0;
                if (0.0 <= fVar8) {
                  fVar7 = fVar11;
                }
              }
              else {
                fVar11 = param_3 + fVar6 * fVar8 + local_68;
                local_68 = fVar11;
                if (fVar11 < *(float *)(param_5 + 0x34)) {
                  local_68 = *(float *)(param_5 + 0x34);
                }
                if (*(long *)(param_5 + 0x108) == 0) goto LAB_0733d734;
                UnityEngine_RectTransform__get_anchorMax(*(long *)(param_5 + 0x108),0);
                if (*(long *)(param_5 + 0x108) == 0) goto LAB_0733d734;
                fVar8 = local_68 / fVar8;
                fVar6 = 1.0;
                if (fVar8 <= 1.0) {
                  fVar6 = fVar8;
                }
                fVar9 = 0.0;
                if (0.0 <= fVar8) {
                  fVar9 = fVar6;
                }
                UnityEngine_RectTransform__set_anchorMax(fVar9,*(long *)(param_5 + 0x108),0);
              }
            }
            if (*(long *)(param_5 + 0x108) != 0) {
              UnityEngine_RectTransform__get_sizeDelta(*(long *)(param_5 + 0x108),0);
              fVar11 = fVar11 + (fVar10 - *(float *)(param_5 + 0x2c));
              fStack_64 = (fVar13 * fVar10 - param_4) + fStack_64;
              if (fVar11 < fStack_64) {
                fStack_64 = fVar11;
              }
              if (*(long *)(param_5 + 0x108) != 0) {
                fVar10 = fStack_64 / fVar10;
                fVar13 = 1.0;
                if (fVar10 <= 1.0) {
                  fVar13 = fVar10;
                }
                fVar8 = 0.0;
                if (0.0 <= fVar10) {
                  fVar8 = fVar13;
                }
                UnityEngine_RectTransform__set_anchorMin(fVar7,fVar8,*(long *)(param_5 + 0x108),0);
                if (*(long *)(param_5 + 0x1c8) != 0) {
                  IngameDebugConsole_DebugLogRecycledListView__UpdateItemsInTheList
                            (*(long *)(param_5 + 0x1c8),0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0733d734:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


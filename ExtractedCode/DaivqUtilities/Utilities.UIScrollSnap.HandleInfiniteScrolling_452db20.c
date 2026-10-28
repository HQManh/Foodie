// rea decompile_all
// name: Utilities.UIScrollSnap$$HandleInfiniteScrolling
// address: 0x452db20
// body: available
// range: 0x452db20-0x452de8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x452de84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x452de88 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIScrollSnap__HandleInfiniteScrolling
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
               ulong param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  
  if ((DAT_09518629 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09518629 = 1;
  }
  if (*(char *)(param_5 + 0x48) != '\0') {
    uVar7 = *(undefined8 *)(param_5 + 0xb0);
    if (DAT_09516ea4 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09516ea4 = '\x01';
    }
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar5 = (float)uVar7;
    fVar8 = (float)((ulong)uVar7 >> 0x20);
    if ((0.0 < SQRT(fVar5 * fVar5 + fVar8 * fVar8)) || ((param_6 & 1) != 0)) {
      if (*(int *)(param_5 + 0x24) == 0) {
        iVar1 = Utilities_UIScrollSnap__get_NumberOfPanels(param_5);
        if (0 < iVar1) {
          uVar3 = 0;
          do {
            fVar8 = *(float *)(param_5 + 0xa0);
            fVar5 = (float)Utilities_UIScrollSnap__GetDisplacementFromCenter
                                     (param_5,uVar3 & 0xffffffff);
            lVar2 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
            if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) goto LAB_0452de84;
            UnityEngine_RectTransform__get_rect(*(long *)(lVar2 + 0x20),0);
            fVar6 = param_3;
            if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (fVar5 <= param_3 * 0.5) {
              fVar5 = (float)Utilities_UIScrollSnap__GetDisplacementFromCenter
                                       (param_5,uVar3 & 0xffffffff);
              lVar2 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
              if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) goto LAB_0452de84;
              UnityEngine_RectTransform__get_rect(*(long *)(lVar2 + 0x20),0);
              param_3 = fVar6;
              if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if (fVar5 < fVar6 * -0.5) {
                lVar2 = *(long *)(param_5 + 0xf0);
                if (lVar2 != 0) {
                  if (uVar3 < *(uint *)(lVar2 + 0x18)) {
                    lVar2 = *(long *)(lVar2 + uVar3 * 8 + 0x20);
                    if (lVar2 != 0) {
                      fVar5 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
                      fVar5 = fVar8 + fVar5;
                      goto LAB_0452de48;
                    }
                    goto LAB_0452de84;
                  }
                  goto LAB_0452de88;
                }
                goto LAB_0452de84;
              }
            }
            else {
              lVar2 = *(long *)(param_5 + 0xf0);
              if (lVar2 == 0) goto LAB_0452de84;
              if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_0452de88;
              lVar2 = *(long *)(lVar2 + uVar3 * 8 + 0x20);
              if (lVar2 == 0) goto LAB_0452de84;
              fVar5 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
              fVar5 = fVar5 - fVar8;
              param_3 = fVar6;
LAB_0452de48:
              UnityEngine_RectTransform__set_anchoredPosition(fVar5,lVar2,0);
            }
            uVar3 = uVar3 + 1;
            iVar1 = Utilities_UIScrollSnap__get_NumberOfPanels(param_5);
          } while ((long)uVar3 < (long)iVar1);
        }
      }
      else if ((*(int *)(param_5 + 0x24) == 1) &&
              (iVar1 = Utilities_UIScrollSnap__get_NumberOfPanels(param_5), 0 < iVar1)) {
        uVar3 = 0;
        do {
          fVar8 = *(float *)(param_5 + 0xa4);
          Utilities_UIScrollSnap__GetDisplacementFromCenter(param_5,uVar3 & 0xffffffff);
          fVar5 = param_2;
          lVar2 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
          if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) {
LAB_0452de84:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          UnityEngine_RectTransform__get_rect(*(long *)(lVar2 + 0x20),0);
          fVar6 = param_4;
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          if (param_2 <= param_4 * 0.5) {
            Utilities_UIScrollSnap__GetDisplacementFromCenter(param_5,uVar3 & 0xffffffff);
            param_2 = fVar5;
            lVar2 = Utilities_UIScrollSnap__get_ScrollRect(param_5);
            if ((lVar2 == 0) || (*(long *)(lVar2 + 0x20) == 0)) goto LAB_0452de84;
            UnityEngine_RectTransform__get_rect(*(long *)(lVar2 + 0x20),0);
            param_4 = fVar6;
            if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            if (fVar5 < fVar6 * -0.5) {
              lVar2 = *(long *)(param_5 + 0xf0);
              if (lVar2 != 0) {
                if (uVar3 < *(uint *)(lVar2 + 0x18)) {
                  lVar2 = *(long *)(lVar2 + uVar3 * 8 + 0x20);
                  if (lVar2 != 0) {
                    fVar4 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
                    fVar4 = fVar4 + 0.0;
                    param_2 = fVar8 + param_2;
                    goto LAB_0452dcf8;
                  }
                  goto LAB_0452de84;
                }
LAB_0452de88:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              goto LAB_0452de84;
            }
          }
          else {
            lVar2 = *(long *)(param_5 + 0xf0);
            if (lVar2 == 0) goto LAB_0452de84;
            if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_0452de88;
            lVar2 = *(long *)(lVar2 + uVar3 * 8 + 0x20);
            if (lVar2 == 0) goto LAB_0452de84;
            fVar4 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
            param_2 = fVar5 - fVar8;
            param_4 = fVar6;
LAB_0452dcf8:
            UnityEngine_RectTransform__set_anchoredPosition(fVar4,lVar2,0);
          }
          uVar3 = uVar3 + 1;
          iVar1 = Utilities_UIScrollSnap__get_NumberOfPanels(param_5);
        } while ((long)uVar3 < (long)iVar1);
      }
    }
  }
  return;
}


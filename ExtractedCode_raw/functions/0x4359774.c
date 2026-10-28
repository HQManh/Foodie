// rea decompile_all
// name: CakeOrder.Home.Journey.UIHomeTabPageJourneyCards$$ScrollToCurrent
// address: 0x4359774
// body: available
// range: 0x4359774-0x4359a53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4359a44 to 0x89ab218 UnityEngine.UI.ScrollRect$$set_verticalNormalizedPosition (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4359a48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4359a50 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIHomeTabPageJourneyCards__ScrollToCurrent
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
               long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_095177fd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187680);
    FUN_03f5c2a4(&DAT_091b1570);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_095177fd = 1;
  }
  uVar4 = *(undefined8 *)(param_5 + 0xa0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar1 & 1) != 0) {
    uVar4 = *(undefined8 *)(param_5 + 0xa8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_5 + 0xc0) == 0) {
LAB_04359a48:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(*(long *)(param_5 + 0xc0) + 0x18) != 0) {
        lVar2 = UnityEngine_Component__get_gameObject(param_5,0);
        if (lVar2 == 0) goto LAB_04359a48;
        uVar1 = UnityEngine_GameObject__get_activeInHierarchy(lVar2,0);
        if ((uVar1 & 1) != 0) {
          lVar2 = CakeOrder_Home_Journey_UIHomeTabPageJourneyCards__FindCurrentCard(param_5);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar1 = UnityEngine_Object__op_Equality(lVar2,0,0);
          if ((uVar1 & 1) == 0) {
            UnityEngine_Canvas__ForceUpdateCanvases(0);
            uVar4 = *(undefined8 *)(param_5 + 0xa8);
            if (*(int *)(DAT_09187680 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(uVar4,0);
            if (*(long *)(param_5 + 0xa0) != 0) {
              uVar4 = *(undefined8 *)(*(long *)(param_5 + 0xa0) + 0x40);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
              lVar3 = *(long *)(param_5 + 0xa0);
              if ((uVar1 & 1) == 0) {
                if (lVar3 == 0) goto LAB_04359a48;
                plVar5 = (long *)UnityEngine_Component__get_transform(lVar3,0);
                if ((plVar5 != (long *)0x0) && (*plVar5 != DAT_09189c98)) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c8d0(plVar5);
                }
              }
              else {
                if (lVar3 == 0) goto LAB_04359a48;
                plVar5 = *(long **)(lVar3 + 0x40);
              }
              if (*(long *)(param_5 + 0xa8) != 0) {
                UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0xa8),0);
                fVar8 = param_4;
                if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if (plVar5 != (long *)0x0) {
                  UnityEngine_RectTransform__get_rect(plVar5,0);
                  param_4 = param_4 - fVar8;
                  if (param_4 <= 0.0) {
                    lVar2 = *(long *)(param_5 + 0xa0);
                    if (lVar2 != 0) {
                      fVar8 = 0.0;
LAB_04359a2c:
                      UnityEngine_UI_ScrollRect__set_verticalNormalizedPosition(fVar8,lVar2,0);
                      return;
                    }
                  }
                  else if ((lVar2 != 0) &&
                          (lVar3 = CakeOrder_Home_Journey_UIJourneyRestaurantCard__get_RectTransform
                                             (lVar2), lVar3 != 0)) {
                    UnityEngine_RectTransform__get_anchoredPosition(lVar3,0);
                    lVar2 = CakeOrder_Home_Journey_UIJourneyRestaurantCard__get_RectTransform(lVar2)
                    ;
                    if (lVar2 != 0) {
                      UnityEngine_RectTransform__get_rect(lVar2,0);
                      fVar6 = fVar8;
                      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      UnityEngine_RectTransform__get_rect(plVar5,0);
                      lVar2 = *(long *)(param_5 + 0xa0);
                      if (lVar2 != 0) {
                        fVar6 = (fVar8 * 0.5 - param_2) - fVar6 * 0.5;
                        fVar8 = 0.0;
                        if (0.0 <= fVar6) {
                          fVar8 = fVar6;
                        }
                        fVar7 = 1.0 - fVar8 / param_4;
                        fVar6 = 1.0;
                        if (fVar7 <= 1.0) {
                          fVar6 = fVar7;
                        }
                        fVar8 = 0.0;
                        if (0.0 <= fVar7) {
                          fVar8 = fVar6;
                        }
                        goto LAB_04359a2c;
                      }
                    }
                  }
                }
              }
            }
            goto LAB_04359a48;
          }
        }
      }
    }
  }
  return;
}


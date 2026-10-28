// rea decompile_all
// name: CakeOrder.Home.Journey.UIJourneyChapterSection$$Layout
// address: 0x435c520
// body: available
// range: 0x435c520-0x435c8e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x435c8d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x435c8e0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float CakeOrder_Home_Journey_UIJourneyChapterSection__Layout
                (float param_1,float param_2,undefined1 param_3 [16],float param_4,long param_5)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_09517812 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_0918c428);
    DAT_09517812 = 1;
  }
  if (*(char *)(param_5 + 0x78) == '\0') {
    fVar8 = 0.0;
  }
  else {
    fVar8 = (float)(*(int *)(param_5 + 100) + -1) * param_1;
  }
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  lVar4 = 0;
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_0435c8d8;
    lVar4 = CakeOrder_Home_Journey_UIJourneyChapterCard__get_RectTransform();
  }
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  lVar5 = 0;
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_5 + 0x20) == 0) goto LAB_0435c8d8;
    lVar5 = CakeOrder_Home_Journey_UIJourneyChapterCard__get_RectBody();
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar4,0);
  fVar6 = 0.0;
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(lVar5,0);
    if ((uVar1 & 1) != 0) {
      if (lVar5 == 0) goto LAB_0435c8d8;
      fVar6 = param_2;
      UnityEngine_RectTransform__get_rect(lVar5,0);
      param_2 = fVar6;
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(int *)(DAT_0918c428 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar6 = (float)CakeOrder_Home_Journey_UIJourneyChapterSection__TopToEdge
                               (param_4 + fVar6,lVar4,lVar5);
    }
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar4,0);
  fVar7 = 0.0;
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(lVar5,0);
    if ((uVar1 & 1) != 0) {
      if (lVar5 == 0) goto LAB_0435c8d8;
      UnityEngine_RectTransform__get_rect(lVar5,0);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (*(int *)(DAT_0918c428 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar7 = (float)CakeOrder_Home_Journey_UIJourneyChapterSection__TopToEdge(param_2,lVar4,lVar5);
    }
  }
  if (*(char *)(param_5 + 0x78) != '\0') {
    uVar3 = *(undefined8 *)(param_5 + 0x28);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar1 & 1) != 0) {
      if ((*(long *)(param_5 + 0x28) == 0) ||
         (plVar2 = (long *)UnityEngine_Component__get_transform(*(long *)(param_5 + 0x28),0),
         plVar2 == (long *)0x0)) goto LAB_0435c8d8;
      if (*plVar2 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar2);
      }
      UnityEngine_RectTransform__set_anchorMin(0x3f000000,0x3f800000,plVar2,0);
      UnityEngine_RectTransform__set_anchorMax(0x3f000000,0x3f800000,plVar2,0);
      UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f800000,plVar2,0);
      uVar3 = UnityEngine_RectTransform__get_sizeDelta(plVar2,0);
      UnityEngine_RectTransform__set_sizeDelta(uVar3,fVar8,plVar2,0);
      UnityEngine_RectTransform__set_anchoredPosition(0,0,plVar2,0);
      if (*(long *)(param_5 + 0x28) == 0) goto LAB_0435c8d8;
      CakeOrder_Home_Journey_UIJourneyProgressBar__ApplyTrackOvershoot();
    }
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar4,0);
  if ((uVar1 & 1) != 0) {
    if (lVar4 == 0) {
LAB_0435c8d8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_RectTransform__set_anchorMin(0x3f000000,0x3f800000,lVar4,0);
    UnityEngine_RectTransform__set_anchorMax(0x3f000000,0x3f800000,lVar4,0);
    UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f800000,lVar4,0);
    UnityEngine_RectTransform__set_anchoredPosition(0,fVar6 - fVar8,lVar4,0);
  }
  CakeOrder_Home_Journey_UIJourneyChapterSection__LayoutMilestones(param_1,param_5);
  CakeOrder_Home_Journey_UIJourneyChapterSection__LayoutDividers(param_1,param_5);
  return fVar8 + (fVar7 - fVar6);
}


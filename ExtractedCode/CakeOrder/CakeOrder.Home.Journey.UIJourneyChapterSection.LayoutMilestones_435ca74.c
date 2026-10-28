// rea decompile_all
// name: CakeOrder.Home.Journey.UIJourneyChapterSection$$LayoutMilestones
// address: 0x435ca74
// body: available
// range: 0x435ca74-0x435ccf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x435cce4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x435cce8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x435ccec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x435ccf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIJourneyChapterSection__LayoutMilestones
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               long param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  
  if ((DAT_09517813 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4b80);
    FUN_03f5c2a4(&DAT_091a4b88);
    FUN_03f5c2a4(&DAT_091a4b90);
    FUN_03f5c2a4(&DAT_091b1548);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_0918c428);
    DAT_09517813 = 1;
  }
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  if (*(long *)(param_5 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_b8,*(long *)(param_5 + 0x48),DAT_091b1548);
  local_90 = local_a8;
  uStack_98 = puStack_b0;
  local_a0 = local_b8;
  local_b8 = 0;
  puStack_b0 = &local_a0;
  while( true ) {
    do {
      uVar2 = FUN_071bd28c(&local_a0,DAT_091a4b88);
      lVar5 = local_90;
      if ((uVar2 & 1) == 0) {
        FUN_071bd288(&local_a0,DAT_091a4b80);
        return;
      }
      fVar7 = param_4;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
        fVar7 = param_4;
      }
      uVar2 = UnityEngine_Object__op_Implicit(lVar5,0);
      param_4 = fVar7;
    } while ((uVar2 & 1) == 0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = CakeOrder_Home_Journey_UIJourneyMilestoneItem__get_RectTransform(lVar5);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_RectTransform__set_anchorMin(0,0x3f800000,lVar3,0);
    UnityEngine_RectTransform__set_anchorMax(0x3f800000,0x3f800000,lVar3,0);
    UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f800000,lVar3,0);
    UnityEngine_RectTransform__get_rect(lVar3,0);
    fVar8 = fVar7;
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_RectTransform__set_sizeDelta(0,fVar7,lVar3,0);
    if (*(long *)(lVar5 + 0x98) == 0) {
      iVar6 = 1;
    }
    else {
      iVar6 = *(int *)(*(long *)(lVar5 + 0x98) + 0x10);
    }
    iVar1 = *(int *)(param_5 + 0x6c);
    uVar4 = CakeOrder_Home_Journey_UIJourneyMilestoneItem__get_RectBadge(lVar5);
    lVar5 = CakeOrder_Home_Journey_UIJourneyMilestoneItem__get_RectBadge(lVar5);
    if (lVar5 == 0) break;
    UnityEngine_RectTransform__get_rect(lVar5,0);
    param_4 = fVar8;
    if (*(int *)(DAT_0918c428 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar7 = (float)CakeOrder_Home_Journey_UIJourneyChapterSection__TopToEdge
                             (fVar7 + fVar8 * 0.5,lVar3,uVar4);
    UnityEngine_RectTransform__set_anchoredPosition
              (0,(float)(iVar6 - iVar1) * param_1 + fVar7,lVar3,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


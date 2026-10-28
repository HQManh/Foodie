// rea decompile_all
// name: CakeOrder.Home.Journey.UIJourneyChapterSection$$LayoutDividers
// address: 0x435cd8c
// body: available
// range: 0x435cd8c-0x435d06b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x435d038 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x435d060 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x435d064 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x435d068 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIJourneyChapterSection__LayoutDividers
               (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
               long param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  float fVar8;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  long local_80;
  
  if ((DAT_09517814 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4b80);
    FUN_03f5c2a4(&DAT_091a4b88);
    FUN_03f5c2a4(&DAT_091a4b90);
    FUN_03f5c2a4(&DAT_091b1548);
    FUN_03f5c2a4(&DAT_091af770);
    FUN_03f5c2a4(&DAT_091af778);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517814 = 1;
  }
  uVar6 = *(undefined8 *)(param_5 + 0x38);
  local_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_80 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  uVar6 = *(undefined8 *)(param_5 + 0x40);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(char *)(param_5 + 0x78) == '\0') {
    iVar5 = 0;
  }
  else {
    if (*(long *)(param_5 + 0x48) == 0) goto LAB_0435d038;
    FUN_057e185c(&local_a8,*(long *)(param_5 + 0x48),DAT_091b1548);
    puStack_88 = puStack_a0;
    local_90 = local_a8;
    local_80 = local_98;
    local_a8 = 0;
    puStack_a0 = &local_90;
    iVar5 = 0;
    while (uVar2 = FUN_071bd28c(&local_90,DAT_091a4b88), lVar4 = local_80, (uVar2 & 1) != 0) {
      fVar8 = param_4;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
        fVar8 = param_4;
      }
      uVar2 = UnityEngine_Object__op_Implicit(lVar4,0);
      param_4 = fVar8;
      if ((uVar2 & 1) != 0) {
        lVar3 = CakeOrder_Home_Journey_UIJourneyChapterSection__GetDivider(param_5,iVar5);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(long *)(lVar4 + 0x98) == 0) {
          iVar7 = 1;
        }
        else {
          iVar7 = *(int *)(*(long *)(lVar4 + 0x98) + 0x10);
        }
        iVar1 = *(int *)(param_5 + 0x6c);
        lVar4 = CakeOrder_Home_Journey_UIJourneyMilestoneItem__get_RectBadge(lVar4);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_RectTransform__get_rect(lVar4,0);
        param_4 = fVar8;
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        UnityEngine_RectTransform__set_anchoredPosition
                  (0,(float)(iVar7 - iVar1) * param_1 + fVar8 * -0.5,lVar3,0);
        iVar5 = iVar5 + 1;
      }
    }
    FUN_071bd288(&local_90,DAT_091a4b80);
  }
  lVar4 = *(long *)(param_5 + 0x50);
  while (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) <= iVar5) {
      return;
    }
    uVar6 = FUN_057e0998(lVar4,iVar5,DAT_091af778);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar2 & 1) != 0) {
      if (((*(long *)(param_5 + 0x50) == 0) ||
          (lVar4 = FUN_057e0998(*(long *)(param_5 + 0x50),iVar5,DAT_091af778), lVar4 == 0)) ||
         (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0)) break;
      UnityEngine_GameObject__SetActive(lVar4,0,0);
    }
    iVar5 = iVar5 + 1;
    lVar4 = *(long *)(param_5 + 0x50);
  }
LAB_0435d038:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


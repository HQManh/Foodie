// rea decompile_all
// name: CakeOrder.UI.UIBuildingRewardBubble$$Update
// address: 0x42c4de0
// body: available
// range: 0x42c4de0-0x42c4fa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42c4f98 to 0x42c44a0 CakeOrder.UI.UIBuildingRewardBubble$$Hide (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42c4f9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42c4fa4 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIBuildingRewardBubble__Update(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 local_38;
  
  if ((DAT_09517342 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5630);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189ca0);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_09517342 = 1;
  }
  local_38 = 0;
  if ((*(char *)(param_1 + 0x60) == '\0') ||
     (uVar4 = CakeOrder_UI_UIBuildingRewardBubble__TryGetPointerDown(&local_38), (uVar4 & 1) == 0))
  {
    return;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(uVar7,0);
  if ((uVar4 & 1) == 0) {
LAB_042c4f84:
    CakeOrder_UI_UIBuildingRewardBubble__Hide(param_1);
    return;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    lVar5 = FUN_04a6a6d8(*(long *)(param_1 + 0x28),DAT_091c5630);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar4 = UnityEngine_Object__op_Inequality(lVar5,0,0);
    uVar7 = 0;
    if ((uVar4 & 1) != 0) {
      if (lVar5 == 0) goto LAB_042c4f9c;
      iVar3 = UnityEngine_Canvas__get_renderMode(lVar5,0);
      if (iVar3 == 0) {
        uVar7 = 0;
      }
      else {
        lVar5 = UnityEngine_Canvas__get_rootCanvas(lVar5,0);
        if (lVar5 == 0) goto LAB_042c4f9c;
        uVar7 = UnityEngine_Canvas__get_worldCamera(lVar5,0);
      }
    }
    if (*(long *)(param_1 + 0x28) != 0) {
      plVar6 = (long *)UnityEngine_Component__get_transform(*(long *)(param_1 + 0x28),0);
      uVar1 = (undefined4)local_38;
      uVar2 = local_38._4_4_;
      if (*(int *)(DAT_09189ca0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189ca0);
      }
      if ((plVar6 != (long *)0x0) && (*plVar6 != DAT_09189c98)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar6);
      }
      uVar4 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint
                        (uVar1,uVar2,plVar6,uVar7,0);
      if ((uVar4 & 1) != 0) {
        return;
      }
      goto LAB_042c4f84;
    }
  }
LAB_042c4f9c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


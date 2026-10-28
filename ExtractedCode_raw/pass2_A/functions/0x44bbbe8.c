// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$SetBoardWarning
// address: 0x44bbbe8
// body: available
// range: 0x44bbbe8-0x44bbe3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44bbd84 to 0x44bbe3c CookOrder.Cooking.Implement.CookingGameplayPresentation$$ShowOutOfSlotAlert (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44bbde4 to 0x42537d0 AnhPD.FoodOrder.UIPopupAlert$$HideAlert (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x44bbe38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__SetBoardWarning
               (undefined1 param_1 [16],double param_2,undefined4 param_3,long param_4,uint param_5)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined4 uVar10;
  float fVar11;
  
  if ((DAT_09518241 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518241 = 1;
  }
  if (param_5 == 0) {
LAB_044bbc4c:
    bVar3 = false;
  }
  else {
    if ((*(long *)(param_4 + 0x2d8) == 0) ||
       (lVar1 = *(long *)(*(long *)(param_4 + 0x2d8) + 0x118), lVar1 == 0)) goto LAB_044bbe38;
    if ((*(int *)(lVar1 + 0x188) != 0) || (*(char *)(lVar1 + 0x38) != '\0')) goto LAB_044bbc4c;
    if (param_5 == 2) {
      dVar9 = (double)CookingGraph_CookingLevelSimulation__get_WarningSecondsRemaining(lVar1,0);
      if (*(long *)(param_4 + 0x2d8) == 0) goto LAB_044bbe38;
      param_2 = (double)*(float *)(*(long *)(param_4 + 0x2d8) + 0xf0);
      bVar3 = dVar9 <= param_2;
    }
    else {
      bVar3 = true;
    }
  }
  uVar10 = SUB84(param_2,0);
  uVar4 = *(undefined8 *)(param_4 + 0x3d8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_4 + 0x3d8) == 0) ||
       (lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_4 + 0x3d8),0), lVar1 == 0))
    goto LAB_044bbe38;
    UnityEngine_GameObject__SetActive(lVar1,bVar3,0);
    if (*(long *)(param_4 + 0x3d8) == 0) goto LAB_044bbe38;
    uVar5 = UnityEngine_SpriteRenderer__get_color(*(long *)(param_4 + 0x3d8),0);
    fVar11 = *(float *)(param_4 + 0x3e4);
    fVar6 = (float)UnityEngine_Time__get_unscaledTime(0);
    lVar1 = *(long *)(param_4 + 0x3d8);
    if (lVar1 == 0) goto LAB_044bbe38;
    fVar7 = 0.05;
    if (0.05 <= *(float *)(param_4 + 0x3e0)) {
      fVar7 = *(float *)(param_4 + 0x3e0);
    }
    fVar6 = sinf(((fVar6 + fVar6) * 3.1415927) / fVar7);
    fVar7 = (fVar6 + 1.0) * 0.5;
    fVar6 = 1.0;
    if (fVar7 <= 1.0) {
      fVar6 = fVar7;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar7) {
      fVar8 = fVar6;
    }
    UnityEngine_SpriteRenderer__set_color
              (uVar5,uVar10,param_3,fVar11 + (1.0 - fVar11) * fVar8,lVar1,0);
  }
  if (bVar3 == false) {
    if (*(char *)(param_4 + 1000) == '\0') {
      return;
    }
    *(undefined1 *)(param_4 + 1000) = 0;
  }
  else {
    param_5 = param_5 & 0xfffffffe;
    if ((bool)*(char *)(param_4 + 1000) == (param_5 == 2)) {
      return;
    }
    *(bool *)(param_4 + 1000) = param_5 == 2;
    if (param_5 == 2) {
      CookOrder_Cooking_Implement_CookingGameplayPresentation__ShowOutOfSlotAlert(param_4);
      return;
    }
  }
  uVar4 = *(undefined8 *)(param_4 + 0x3d0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_4 + 0x3d0) != 0) {
    AnhPD_FoodOrder_UIPopupAlert__HideAlert(*(long *)(param_4 + 0x3d0),2,0,0);
    return;
  }
LAB_044bbe38:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: AnhPD.FoodOrder.TutorialFocusCanvasView$$LateUpdate
// address: 0x4123658
// body: available
// range: 0x4123658-0x4123793 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x412377c to 0x866b2cc UnityEngine.RectTransform$$set_sizeDelta (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4123790 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_TutorialFocusCanvasView__LateUpdate
               (undefined1 param_1 [16],float param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_095162ac & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095162ac = 1;
  }
  local_30 = 0;
  local_28 = 0;
  if (*(char *)(param_3 + 0x98) == '\0') {
    return;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x70);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x60);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar1 & 1) == 0) {
      return;
    }
    AnhPD_FoodOrder_TutorialFocusCanvasView__RectToLocal
              (param_3,*(undefined8 *)(param_3 + 0x60),&local_28,&local_30);
    fVar4 = (float)*(undefined8 *)(param_3 + 0x68);
    fVar5 = (float)((ulong)*(undefined8 *)(param_3 + 0x68) >> 0x20);
    local_30 = CONCAT44((float)(local_30 >> 0x20) + fVar5 + fVar5,(float)local_30 + fVar4 + fVar4);
  }
  else {
    if (*(long *)(param_3 + 0x70) == 0) goto LAB_04123790;
    fVar4 = (float)UnityEngine_Transform__get_position(*(long *)(param_3 + 0x70),0);
    AnhPD_FoodOrder_TutorialFocusCanvasView__WorldRectToLocal
              (fVar4 + *(float *)(param_3 + 0x78),param_2 + *(float *)(param_3 + 0x7c),
               *(undefined4 *)(param_3 + 0x80),*(undefined4 *)(param_3 + 0x84),param_3,&local_28,
               &local_30);
  }
  if ((*(long *)(param_3 + 0x28) != 0) &&
     (lVar2 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)(param_3 + 0x28),0), lVar2 != 0)) {
    UnityEngine_RectTransform__set_anchoredPosition(local_28 & 0xffffffff,local_28._4_4_,lVar2,0);
    UnityEngine_RectTransform__set_sizeDelta(local_30 & 0xffffffff,local_30._4_4_,lVar2,0);
    return;
  }
LAB_04123790:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


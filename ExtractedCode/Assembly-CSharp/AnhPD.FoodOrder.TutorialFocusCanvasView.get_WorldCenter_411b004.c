// rea decompile_all
// name: AnhPD.FoodOrder.TutorialFocusCanvasView$$get_WorldCenter
// address: 0x411b004
// body: available
// range: 0x411b004-0x411b15f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x411b15c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
AnhPD_FoodOrder_TutorialFocusCanvasView__get_WorldCenter
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((DAT_095162a2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189ca0);
    DAT_095162a2 = 1;
  }
  uVar3 = *(undefined8 *)(param_4 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  uVar4 = 0;
  if ((uVar1 & 1) != 0) {
    uVar3 = AnhPD_FoodOrder_TutorialFocusCanvasView__get_Cam(param_4);
    if ((*(long *)(param_4 + 0x28) == 0) ||
       (lVar2 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)(param_4 + 0x28),0), lVar2 == 0))
    {
LAB_0411b15c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = UnityEngine_Transform__get_position(lVar2,0);
    if (*(int *)(DAT_09189ca0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_RectTransformUtility__WorldToScreenPoint(uVar4,param_2,param_3,uVar3,0);
    uVar3 = AnhPD_FoodOrder_TutorialFocusCanvasView__get_WorldCam(param_4);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = AnhPD_FoodOrder_TutorialFocusCanvasView__get_WorldCam(param_4);
      if (lVar2 == 0) goto LAB_0411b15c;
      uVar4 = UnityEngine_Camera__ScreenToWorldPoint(uVar4,param_2,0,lVar2,0);
    }
  }
  return uVar4;
}


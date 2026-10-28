// rea decompile_all
// name: DG.Tweening.DOTweenModuleUI.Utils$$SwitchToRectTransform
// address: 0x4557494
// body: available
// range: 0x4557494-0x455764f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x455764c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float DG_Tweening_DOTweenModuleUI_Utils__SwitchToRectTransform
                (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                long param_6)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined8 local_58;
  
  if ((DAT_095187d5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189ca0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_095187d5 = 1;
  }
  local_58 = 0;
  if (param_5 != 0) {
    UnityEngine_RectTransform__get_rect(param_5,0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar1 = (float)UnityEngine_RectTransform__get_rect(param_5,0);
    UnityEngine_RectTransform__get_rect(param_5,0);
    UnityEngine_RectTransform__get_rect(param_5,0);
    param_3 = param_3 * 0.5;
    fVar1 = param_3 + fVar1;
    fVar4 = param_4 * 0.5 + param_2;
    uVar2 = UnityEngine_Transform__get_position(param_5,0);
    if (*(int *)(DAT_09189ca0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    fVar3 = (float)UnityEngine_RectTransformUtility__WorldToScreenPoint(uVar2,param_2,param_3,0,0);
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (fVar1 + fVar3,fVar4 + param_2,param_6,0,&local_58,0);
    if (param_6 != 0) {
      UnityEngine_RectTransform__get_rect(param_6,0);
      fVar1 = (float)UnityEngine_RectTransform__get_rect(param_6,0);
      UnityEngine_RectTransform__get_rect(param_6,0);
      UnityEngine_RectTransform__get_rect(param_6,0);
      fVar4 = (float)UnityEngine_RectTransform__get_anchoredPosition(param_6,0);
      return (fVar4 + (float)local_58) - (param_3 * 0.5 + fVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


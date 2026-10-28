// rea decompile_all
// name: AnhPD.FoodOrder.AdaptiveTwoColumnLayout$$SetChild
// address: 0x42209c4
// body: available
// range: 0x42209c4-0x4220b73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4220b3c to 0x4d95e8c FUN_04d95e8c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4220b6c to 0x866b148 UnityEngine.RectTransform$$set_anchoredPosition (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4220b70 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_AdaptiveTwoColumnLayout__SetChild
               (float param_1,float param_2,float param_3,float param_4,long param_5)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  if ((DAT_09516d26 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091dbe90);
    DAT_09516d26 = 1;
  }
  if (DAT_09516afb == '\0') {
    FUN_03f5c2a4(&DAT_0918cb68);
    DAT_09516afb = '\x01';
  }
  if (param_5 != 0) {
    UnityEngine_RectTransform__set_anchorMin
              (*(undefined4 *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x10),
               *(undefined4 *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x14),param_5,0);
    if (DAT_09516afb == '\0') {
      FUN_03f5c2a4(&DAT_0918cb68);
      DAT_09516afb = '\x01';
    }
    fVar3 = *(float *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x14);
    UnityEngine_RectTransform__set_anchorMax
              (*(undefined4 *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x10),fVar3,param_5,0);
    fVar2 = (float)UnityEngine_RectTransform__get_pivot(param_5,0);
    UnityEngine_RectTransform__get_pivot(param_5,0);
    param_1 = fVar2 * param_3 + param_1;
    fVar2 = -param_2 - (1.0 - fVar3) * param_3;
    DG_Tweening_ShortcutExtensions__DOKill(param_5,0,0);
    if (0.0 < param_4) {
      uVar1 = DG_Tweening_DOTweenModuleUI__DOSizeDelta(param_3,param_3,param_4,param_5,0,0);
      FUN_04d95e8c(uVar1,9,DAT_091dbe90);
      uVar1 = DG_Tweening_DOTweenModuleUI__DOAnchorPos(param_1,fVar2,param_4,param_5,0,0);
      FUN_04d95e8c(uVar1,9,DAT_091dbe90);
      return;
    }
    UnityEngine_RectTransform__set_sizeDelta(param_3,param_3,param_5,0);
    UnityEngine_RectTransform__set_anchoredPosition(param_1,fVar2,param_5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


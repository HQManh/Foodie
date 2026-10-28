// rea decompile_all
// name: AnhPD.FoodOrder.TutorialFocusCanvasView$$FadeTo
// address: 0x4123524
// body: available
// range: 0x4123524-0x412364f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4123608 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x412364c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_TutorialFocusCanvasView__FadeTo
               (float param_1,float param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((DAT_095162b0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091dbd20);
    FUN_03f5c2a4(&DAT_091dc008);
    DAT_095162b0 = 1;
  }
  plVar3 = (long *)(param_3 + 0x90);
  if (*plVar3 != 0) {
    DG_Tweening_TweenExtensions__Kill(*plVar3,0,0);
  }
  lVar1 = AnhPD_FoodOrder_TutorialFocusCanvasView__get_Group(param_3);
  if (lVar1 != 0) {
    UnityEngine_CanvasGroup__set_blocksRaycasts(lVar1,0.0 < param_1,0);
    lVar1 = AnhPD_FoodOrder_TutorialFocusCanvasView__get_Group(param_3);
    if (param_2 <= 0.0) {
      if (lVar1 == 0) goto LAB_0412364c;
      UnityEngine_CanvasGroup__set_alpha(param_1,lVar1,0);
      if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04123638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_4 + 0x18))
                  (*(undefined8 *)(param_4 + 0x40),*(undefined8 *)(param_4 + 0x28));
        return;
      }
    }
    else {
      uVar2 = DG_Tweening_DOTweenModuleUI__DOFade(param_1,param_2,lVar1,0);
      lVar1 = FUN_04d9656c(uVar2,1,DAT_091dc008);
      *plVar3 = lVar1;
      thunk_FUN_03f5d7b8(plVar3,lVar1);
      if (param_4 != 0) {
        FUN_04d956bc(*plVar3,param_4,DAT_091dbd20);
        return;
      }
    }
    return;
  }
LAB_0412364c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


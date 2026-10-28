// rea decompile_all
// name: AnhPD.FoodOrder.TutorialFocusCanvasView$$Begin
// address: 0x4122f60
// body: available
// range: 0x4122f60-0x4123177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4123170 to 0x4123524 AnhPD.FoodOrder.TutorialFocusCanvasView$$FadeTo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4123174 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_TutorialFocusCanvasView__Begin
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               float param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  
  if ((DAT_095162a9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091dc028);
    DAT_095162a9 = 1;
  }
  lVar1 = UnityEngine_Component__get_gameObject(param_6,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__SetActive(lVar1,1,0);
    *(undefined8 *)(param_6 + 0x60) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_6 + 0x60),0);
    *(undefined8 *)(param_6 + 0x70) = 0;
    thunk_FUN_03f5d7b8((undefined8 *)(param_6 + 0x70),0);
    *(undefined1 *)(param_6 + 0x98) = 1;
    if ((*(long *)(param_6 + 0x20) != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_6 + 0x20),0), lVar1 != 0)) {
      UnityEngine_GameObject__SetActive(lVar1,1,0);
      if ((*(long *)(param_6 + 0x28) != 0) &&
         (lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_6 + 0x28),0), lVar1 != 0)) {
        UnityEngine_GameObject__SetActive(lVar1,1,0);
        if ((*(long *)(param_6 + 0x28) != 0) &&
           (lVar1 = UnityEngine_UI_Graphic__get_rectTransform(*(long *)(param_6 + 0x28),0),
           lVar1 != 0)) {
          UnityEngine_RectTransform__set_anchoredPosition(param_1,param_2,lVar1,0);
          UnityEngine_RectTransform__set_sizeDelta(param_3,param_4,lVar1,0);
          if (param_5 < 0.0) {
            param_5 = *(float *)(param_6 + 0x38);
          }
          lVar2 = *(long *)(param_6 + 0x88);
          if (lVar2 != 0) {
            DG_Tweening_TweenExtensions__Kill(lVar2,0,0);
          }
          if (DAT_09515cf3 == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515cf3 = '\x01';
          }
          fVar4 = *(float *)(param_6 + 0x3c);
          lVar2 = *(long *)(DAT_0918cbd0 + 0xb8);
          UnityEngine_Transform__set_localScale
                    (*(float *)(lVar2 + 0xc) * fVar4,*(float *)(lVar2 + 0x10) * fVar4,
                     *(float *)(lVar2 + 0x14) * fVar4,lVar1,0);
          uVar3 = DG_Tweening_ShortcutExtensions__DOScale(0x3f800000,param_5,lVar1,0);
          uVar3 = FUN_04d95e8c(uVar3,9,DAT_091dbeb0);
          uVar3 = FUN_04d9656c(uVar3,1,DAT_091dc028);
          *(undefined8 *)(param_6 + 0x88) = uVar3;
          thunk_FUN_03f5d7b8((long *)(param_6 + 0x88),uVar3);
          AnhPD_FoodOrder_TutorialFocusCanvasView__FadeTo
                    (*(undefined4 *)(param_6 + 0x44),*(undefined4 *)(param_6 + 0x40),param_6,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


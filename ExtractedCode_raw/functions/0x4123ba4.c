// rea decompile_all
// name: AnhPD.FoodOrder.TutorialFocusView$$Begin
// address: 0x4123ba4
// body: available
// range: 0x4123ba4-0x4123daf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4123da8 to 0x4124374 AnhPD.FoodOrder.TutorialFocusView$$FadeOverlay (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4123dac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_TutorialFocusView__Begin
               (undefined4 param_1,undefined4 param_2,float param_3,float param_4,float param_5,
               undefined4 param_6,undefined4 param_7,long param_8,undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = param_3;
  if ((DAT_095162b5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091dc028);
    DAT_095162b5 = 1;
  }
  lVar1 = UnityEngine_Component__get_gameObject(param_8,0);
  if (lVar1 != 0) {
    UnityEngine_GameObject__SetActive(lVar1,1,0);
    *(undefined8 *)(param_8 + 0x50) = param_9;
    thunk_FUN_03f5d7b8((undefined8 *)(param_8 + 0x50),param_9);
    *(undefined4 *)(param_8 + 0x58) = param_6;
    *(undefined4 *)(param_8 + 0x5c) = param_7;
    *(undefined1 *)(param_8 + 0x70) = 1;
    *(undefined4 *)(param_8 + 0x74) = param_1;
    *(undefined4 *)(param_8 + 0x78) = param_2;
    *(float *)(param_8 + 0x7c) = param_3;
    *(float *)(param_8 + 0x80) = param_4;
    if ((*(long *)(param_8 + 0x20) != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_8 + 0x20),0), lVar1 != 0)) {
      UnityEngine_GameObject__SetActive(lVar1,1,0);
      if ((*(long *)(param_8 + 0x28) != 0) &&
         (lVar1 = UnityEngine_Component__get_gameObject(*(long *)(param_8 + 0x28),0), lVar1 != 0)) {
        UnityEngine_GameObject__SetActive(lVar1,1,0);
        if (*(char *)(param_8 + 0x38) != '\0') {
          AnhPD_FoodOrder_TutorialFocusView__FitOverlay(param_8);
        }
        AnhPD_FoodOrder_TutorialFocusView__MoveMask(param_1,param_2,param_8);
        fVar3 = (float)AnhPD_FoodOrder_TutorialFocusView__MaskScaleFor(param_3,param_4,param_8);
        if (param_5 < 0.0) {
          param_5 = *(float *)(param_8 + 0x3c);
        }
        lVar1 = *(long *)(param_8 + 0x60);
        if (lVar1 != 0) {
          DG_Tweening_TweenExtensions__Kill(lVar1,0,0);
        }
        if ((*(long *)(param_8 + 0x28) != 0) &&
           (lVar1 = UnityEngine_Component__get_transform(*(long *)(param_8 + 0x28),0), lVar1 != 0))
        {
          fVar4 = *(float *)(param_8 + 0x40);
          UnityEngine_Transform__set_localScale(fVar3 * fVar4,param_4 * fVar4,fVar5 * fVar4,lVar1,0)
          ;
          if (*(long *)(param_8 + 0x28) != 0) {
            uVar2 = UnityEngine_Component__get_transform(*(long *)(param_8 + 0x28),0);
            uVar2 = DG_Tweening_ShortcutExtensions__DOScale(fVar3,param_4,fVar5,param_5,uVar2,0);
            uVar2 = FUN_04d95e8c(uVar2,9,DAT_091dbeb0);
            uVar2 = FUN_04d9656c(uVar2,1,DAT_091dc028);
            *(undefined8 *)(param_8 + 0x60) = uVar2;
            thunk_FUN_03f5d7b8((long *)(param_8 + 0x60),uVar2);
            AnhPD_FoodOrder_TutorialFocusView__FadeOverlay
                      (*(undefined4 *)(param_8 + 0x48),*(undefined4 *)(param_8 + 0x44),param_8,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


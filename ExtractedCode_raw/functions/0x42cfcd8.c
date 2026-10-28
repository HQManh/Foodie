// rea decompile_all
// name: CakeOrder.BaseUI.UIPopupBlurBackdrop.<>c__DisplayClass68_0$$<FadeTo>g__OnFadeComplete|2
// address: 0x42cfcd8
// body: available
// range: 0x42cfcd8-0x42cfe5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42cfe58 to 0x8655d28 UnityEngine.Behaviour$$set_enabled (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42cfe5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_UIPopupBlurBackdrop_<>c__DisplayClass68_0__<FadeTo>g__OnFadeComplete_2
               (long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float in_s3;
  
  if ((DAT_09517396 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517396 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x160) = 0;
    thunk_FUN_03f5d7b8(lVar3 + 0x160,0);
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0x13d) != '\0') {
        plVar1 = *(long **)(lVar3 + 0x88);
        if (plVar1 == (long *)0x0) goto LAB_042cfe5c;
        (**(code **)(*plVar1 + 0x298))(plVar1,*(undefined8 *)(*plVar1 + 0x2a0));
        lVar3 = *(long *)(param_1 + 0x18);
        if (0.999 <= in_s3) {
          if ((lVar3 == 0) ||
             (CakeOrder_BaseUI_UIPopupBlurBackdrop__CullCamera(), *(long *)(param_1 + 0x18) == 0))
          goto LAB_042cfe5c;
          CakeOrder_BaseUI_UIPopupBlurBackdrop__DeactivateUnderneath();
          CookOrder_BlurBackdropSafety__OnCaptureShown(0);
          lVar3 = *(long *)(param_1 + 0x18);
        }
        if (lVar3 == 0) goto LAB_042cfe5c;
      }
      if (*(char *)(lVar3 + 0x13c) == '\0') {
        CakeOrder_BaseUI_UIPopupBlurBackdrop__ReleaseSnapshot();
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 == 0) goto LAB_042cfe5c;
      }
      plVar1 = *(long **)(lVar3 + 0x88);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x298))(plVar1,*(undefined8 *)(*plVar1 + 0x2a0));
        if (in_s3 <= 0.0) {
          if ((*(long *)(param_1 + 0x18) == 0) ||
             (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x88), lVar3 == 0)) goto LAB_042cfe5c;
          UnityEngine_Behaviour__set_enabled(lVar3,0,0);
        }
        if (*(long *)(param_1 + 0x18) != 0) {
          uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
          if ((uVar2 & 1) == 0) {
            return;
          }
          if ((*(long *)(param_1 + 0x18) != 0) &&
             (plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 0x50), plVar1 != (long *)0x0)) {
            (**(code **)(*plVar1 + 0x298))(plVar1,*(undefined8 *)(*plVar1 + 0x2a0));
            if (0.0 < in_s3) {
              return;
            }
            if ((*(long *)(param_1 + 0x18) != 0) &&
               (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x50), lVar3 != 0)) {
              UnityEngine_Behaviour__set_enabled(lVar3,0,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_042cfe5c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


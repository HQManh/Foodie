// rea decompile_all
// name: CakeOrder.BaseUI.UIPopupBlurBackdrop$$ResetVisuals
// address: 0x42cf6f4
// body: available
// range: 0x42cf6f4-0x42cf82f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42cf828 to 0x42cf85c CakeOrder.BaseUI.UIPopupBlurBackdrop$$ReleaseSnapshot (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42cf82c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_UIPopupBlurBackdrop__ResetVisuals(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((DAT_0951738b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951738b = 1;
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    DG_Tweening_TweenExtensions__Kill(*(long *)(param_1 + 0x160),0,0);
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  thunk_FUN_03f5d7b8(param_1 + 0x160,0);
  CakeOrder_BaseUI_UIPopupBlurBackdrop__RestoreCamera(param_1);
  lVar1 = DAT_09188ad0;
  *(undefined2 *)(param_1 + 0x13c) = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x138) = 1;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0x88);
    if (plVar3 == (long *)0x0) goto LAB_042cf82c;
    (**(code **)(*plVar3 + 0x2a8))(0,0,0,0,plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
  }
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Inequality(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0x50);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x2a8))(0,0,0,0,plVar3,*(undefined8 *)(*plVar3 + 0x2b0));
      if (*(long *)(param_1 + 0x50) != 0) {
        UnityEngine_Behaviour__set_enabled(*(long *)(param_1 + 0x50),0,0);
        goto LAB_042cf81c;
      }
    }
LAB_042cf82c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_042cf81c:
  CakeOrder_BaseUI_UIPopupBlurBackdrop__ReleaseSnapshot(param_1);
  return;
}


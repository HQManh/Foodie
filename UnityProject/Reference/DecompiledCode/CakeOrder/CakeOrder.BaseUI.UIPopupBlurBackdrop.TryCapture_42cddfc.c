// rea decompile_all
// name: CakeOrder.BaseUI.UIPopupBlurBackdrop$$TryCapture
// address: 0x42cddfc
// body: available
// range: 0x42cddfc-0x42ce153 inclusive
// range: 0x42ce254-0x42ce257 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ce130 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ce134 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ce13c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ce140 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ce144 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ce148 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ce14c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ce150 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ce254 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x042ce138) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 CakeOrder_BaseUI_UIPopupBlurBackdrop__TryCapture(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  
  if ((DAT_09517389 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091822f0);
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517389 = 1;
  }
  lVar9 = UnityEngine_Camera__get_main(0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar10 = UnityEngine_Object__op_Equality(lVar9,0,0);
  if ((uVar10 & 1) != 0) {
    return 0;
  }
  uVar11 = CookOrder_BlurBackdropSafety__get_BlurShader(0);
  if (*(int *)(DAT_091822f0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091822f0);
  }
  uVar10 = Utilities_CameraBlurSnapshot__IsSupported(uVar11,0);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  uVar16 = *(undefined8 *)(param_1 + 0x178);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar10 = UnityEngine_Object__op_Equality(lVar9,uVar16,0);
  if ((uVar10 & 1) == 0) {
    if (lVar9 == 0) goto LAB_042ce254;
    uVar7 = UnityEngine_Camera__get_cullingMask(lVar9,0);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x180);
  }
  uVar8 = CakeOrder_BaseUI_UIPopupBlurBackdrop__GetUILayerMask(param_1,lVar9);
  if (*(long *)(param_1 + 0x20) != 0) {
    bVar5 = *(char *)(*(long *)(param_1 + 0x20) + 0x30) != '\0';
    bVar6 = uVar8 != 0;
    uVar14 = 0xffffffff;
    if (!bVar5 || !bVar6) {
      uVar14 = ~uVar8;
    }
    CookOrder_BlurBackdropSafety__OnBeforeCapture(0);
    if (*(long *)(param_1 + 0x90) == 0) {
      uVar16 = thunk_FUN_03f9944c(DAT_091822f0);
      Utilities_CameraBlurSnapshot___ctor(uVar16,uVar11,0);
      *(undefined8 *)(param_1 + 0x90) = uVar16;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x90),uVar16);
    }
    lVar12 = CakeOrder_BaseUI_UIPopupBlurBackdrop__get_EffectiveGrading(param_1);
    if (bVar5 && bVar6) {
      if (*(long *)(param_1 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar4 = *(int *)(*(long *)(param_1 + 0x118) + 0x18);
      bVar1 = 0 < iVar4;
      if ((iVar4 < 1) ||
         (CakeOrder_BaseUI_UIPopupBlurBackdrop__ReactivateUnderneath(), bVar5 && bVar6)) {
        CakeOrder_BaseUI_UIPopupBlurBackdrop__HideForCapture(param_1);
      }
    }
    else {
      bVar1 = false;
    }
    lVar15 = *(long *)(param_1 + 0x20);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = *(long *)(param_1 + 0x88);
    lVar3 = *(long *)(param_1 + 0x90);
    uVar11 = *(undefined8 *)(lVar15 + 0x10);
    uVar16 = *(undefined8 *)(lVar15 + 0x18);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar10 = UnityEngine_Object__op_Inequality(lVar12,0,0);
    if ((uVar10 & 1) == 0) {
      uVar13 = 0;
    }
    else {
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar13 = *(undefined8 *)(lVar12 + 0x18);
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar11 = Utilities_CameraBlurSnapshot__Capture
                       (lVar3,lVar9,uVar14 & uVar7,uVar11,uVar16,uVar13,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(uVar11,uVar11);
    }
    UnityEngine_UI_RawImage__set_texture(lVar2,uVar11,0);
    if (bVar5 && bVar6) {
      CakeOrder_BaseUI_UIPopupBlurBackdrop__RestoreAfterCapture(param_1);
    }
    if (bVar1) {
      CakeOrder_BaseUI_UIPopupBlurBackdrop__DeactivateUnderneath(param_1);
    }
    *(long *)(param_1 + 0xf8) = lVar12;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0xf8),lVar12);
    *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(param_1 + 0x128);
    thunk_FUN_03f5d7b8(param_1 + 0x130);
    lVar12 = *(long *)(param_1 + 0x90);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(param_1 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_UI_RawImage__set_uvRect
              (*(undefined4 *)(lVar12 + 0x24),*(undefined4 *)(lVar12 + 0x28),
               *(undefined4 *)(lVar12 + 0x2c),*(undefined4 *)(lVar12 + 0x30),
               *(long *)(param_1 + 0x88),0);
    *(long *)(param_1 + 0x170) = lVar9;
    thunk_FUN_03f5d7b8(param_1 + 0x170,lVar9);
    CakeOrder_BaseUI_UIPopupBlurBackdrop__FitToCanvas(param_1);
    return 1;
  }
LAB_042ce254:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


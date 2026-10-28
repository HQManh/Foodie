// rea decompile_all
// name: CakeOrder.BaseUI.UIPopupBlurBackdrop$$Refresh
// address: 0x42cd8b8
// body: available
// range: 0x42cd8b8-0x42cdccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42cdccc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_UIPopupBlurBackdrop__Refresh(long param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  float *pfVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 uVar9;
  char cVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if ((DAT_09517382 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b6b18);
    FUN_03f5c2a4(&DAT_091b6b20);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517382 = 1;
  }
  uVar9 = *(undefined8 *)(param_1 + 0x88);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Equality(uVar9,0,0);
  if ((uVar3 & 1) != 0) {
    return;
  }
  if (*(long *)(param_1 + 0x80) == 0) goto LAB_042cdccc;
  cVar1 = *(char *)(*(long *)(param_1 + 0x80) + 0x18);
  if ((((*(char *)(param_1 + 0x98) == '\0') ||
       (uVar2 = CookOrder_BlurBackdropSafety__Resolve(*(undefined4 *)(param_1 + 0x9c),0),
       *(char *)(param_1 + 0x98) == '\0')) || ((uVar2 & 0xfffffffe) != 2)) ||
     (uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled(param_1,0), (uVar3 & 1) == 0)) {
LAB_042cda50:
    *(undefined1 *)(param_1 + 0x13c) = 0;
    *(undefined4 *)(param_1 + 0x138) = 1;
    if (*(char *)(param_1 + 0x98) == '\0') goto LAB_042cda9c;
    uVar3 = CakeOrder_BaseUI_UIPopupBlurBackdrop__get_DrawsDimOverlay(param_1);
    fVar16 = *(float *)(param_1 + 0x140);
    fVar17 = *(float *)(param_1 + 0x144);
    fVar18 = *(float *)(param_1 + 0x148);
    if ((cVar1 != '\0') || ((uVar3 & 1) == 0)) goto LAB_042cdaa8;
    if (*(char *)(param_1 + 0xb4) == '\0') {
      fVar19 = *(float *)(param_1 + 0xe4);
      pfVar4 = (float *)(param_1 + 0xd8);
      pfVar6 = (float *)(param_1 + 0xdc);
      pfVar7 = (float *)(param_1 + 0xe0);
    }
    else {
      fVar19 = *(float *)(param_1 + 0xc4);
      pfVar4 = (float *)(param_1 + 0xb8);
      pfVar7 = (float *)(param_1 + 0xc0);
      pfVar6 = (float *)(param_1 + 0xbc);
    }
LAB_042cdad4:
    fVar20 = 0.0;
    fVar21 = *pfVar4;
    fVar22 = *pfVar6;
    fVar23 = *pfVar7;
    cVar10 = '\0';
LAB_042cdae8:
    CakeOrder_BaseUI_UIPopupBlurBackdrop__RestoreCamera(param_1);
  }
  else {
    if (*(char *)(param_1 + 0x13c) == '\0') {
      uVar3 = CakeOrder_BaseUI_UIPopupBlurBackdrop__TryCapture(param_1);
      if ((uVar3 & 1) == 0) goto LAB_042cda50;
      *(undefined1 *)(param_1 + 0x13c) = 1;
      fVar16 = (float)UnityEngine_Time__get_unscaledTime(0);
      if (*(long *)(param_1 + 0x20) == 0) goto LAB_042cdccc;
      *(float *)(param_1 + 0x168) = fVar16 + *(float *)(*(long *)(param_1 + 0x20) + 0x2c);
    }
    else {
      uVar9 = CakeOrder_BaseUI_UIPopupBlurBackdrop__get_EffectiveGrading(param_1);
      uVar11 = *(undefined8 *)(param_1 + 0xf8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Inequality(uVar9,uVar11,0);
      if ((uVar3 & 1) == 0) {
        if (*(long *)(param_1 + 0x20) == 0) goto LAB_042cdccc;
        if ((*(char *)(*(long *)(param_1 + 0x20) + 0x30) == '\0') ||
           (*(long *)(param_1 + 0x128) == *(long *)(param_1 + 0x130))) goto LAB_042cda2c;
      }
      uVar3 = CakeOrder_BaseUI_UIPopupBlurBackdrop__RecaptureWithCrossfade(param_1,uVar2);
      if ((uVar3 & 1) == 0) goto LAB_042cda50;
    }
LAB_042cda2c:
    *(uint *)(param_1 + 0x138) = uVar2;
    if (cVar1 != '\0') {
LAB_042cda9c:
      fVar16 = *(float *)(param_1 + 0x140);
      fVar17 = *(float *)(param_1 + 0x144);
      fVar18 = *(float *)(param_1 + 0x148);
LAB_042cdaa8:
      fVar19 = 0.0;
      pfVar4 = (float *)(param_1 + 0x150);
      pfVar6 = (float *)(param_1 + 0x154);
      pfVar7 = (float *)(param_1 + 0x158);
      goto LAB_042cdad4;
    }
    if (*(char *)(param_1 + 0xa0) == '\0') {
      pfVar6 = (float *)(param_1 + 200);
      pfVar8 = (float *)(param_1 + 0xcc);
      pfVar7 = (float *)(param_1 + 0xd0);
      pfVar4 = (float *)(param_1 + 0xd4);
    }
    else {
      pfVar4 = (float *)(param_1 + 0xb0);
      pfVar6 = (float *)(param_1 + 0xa4);
      pfVar7 = (float *)(param_1 + 0xac);
      pfVar8 = (float *)(param_1 + 0xa8);
    }
    fVar20 = *pfVar4;
    fVar19 = 0.0;
    fVar18 = *pfVar7;
    fVar17 = *pfVar8;
    fVar16 = *pfVar6;
    fVar21 = *(float *)(param_1 + 0x150);
    fVar22 = *(float *)(param_1 + 0x154);
    fVar23 = *(float *)(param_1 + 0x158);
    cVar10 = '\x01';
    if (fVar20 < 0.999) goto LAB_042cdae8;
  }
  fVar12 = fVar16 - *(float *)(param_1 + 0x140);
  fVar13 = fVar17 - *(float *)(param_1 + 0x144);
  fVar14 = fVar18 - *(float *)(param_1 + 0x148);
  fVar15 = fVar20 - *(float *)(param_1 + 0x14c);
  if ((((9.9999994e-11 <= fVar15 * fVar15 + fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13) ||
       (fVar12 = fVar21 - *(float *)(param_1 + 0x150), fVar13 = fVar22 - *(float *)(param_1 + 0x154)
       , fVar14 = fVar23 - *(float *)(param_1 + 0x158),
       fVar15 = fVar19 - *(float *)(param_1 + 0x15c),
       9.9999994e-11 <= fVar15 * fVar15 + fVar14 * fVar14 + fVar12 * fVar12 + fVar13 * fVar13)) ||
      (*(char *)(param_1 + 0x13d) != cVar10)) ||
     ((*(long *)(param_1 + 0x160) == 0 &&
      (uVar3 = CakeOrder_BaseUI_UIPopupBlurBackdrop__IsAt
                         (fVar16,fVar17,fVar18,fVar20,fVar21,fVar22,fVar23,fVar19,param_1),
      (uVar3 & 1) == 0)))) {
    *(float *)(param_1 + 0x140) = fVar16;
    *(float *)(param_1 + 0x144) = fVar17;
    *(float *)(param_1 + 0x148) = fVar18;
    *(float *)(param_1 + 0x14c) = fVar20;
    *(float *)(param_1 + 0x150) = fVar21;
    *(float *)(param_1 + 0x154) = fVar22;
    *(float *)(param_1 + 0x158) = fVar23;
    *(float *)(param_1 + 0x15c) = fVar19;
    *(char *)(param_1 + 0x13d) = cVar10;
    if ((cVar1 == '\0') && (*(char *)(param_1 + 0x13e) == '\0')) {
      lVar5 = *(long *)(param_1 + 0x20);
    }
    else {
      lVar5 = *(long *)(param_1 + 0x20);
    }
    if (lVar5 == 0) {
LAB_042cdccc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(char *)(param_1 + 0x13e) = cVar1;
    CakeOrder_BaseUI_UIPopupBlurBackdrop__FadeTo
              (fVar16,fVar17,fVar18,fVar20,fVar21,fVar22,fVar23,fVar19,param_1);
  }
  return;
}


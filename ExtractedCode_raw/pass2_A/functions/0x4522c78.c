// rea decompile_all
// name: Utilities.UIAnimShowHideControlFull.<IEHide>d__21$$MoveNext
// address: 0x4522c78
// body: available
// range: 0x4522c78-0x4523103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4523100 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_UIAnimShowHideControlFull_<IEHide>d__21__MoveNext
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  
  if ((DAT_095185d2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095185d2 = 1;
  }
  lVar4 = *(long *)(param_4 + 0x20);
  if (*(int *)(param_4 + 0x10) == 1) {
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    fVar8 = (float)UnityEngine_Time__get_unscaledTime(0);
    if (lVar4 == 0) goto LAB_04523100;
  }
  else {
    if (*(int *)(param_4 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (lVar4 == 0) goto LAB_04523100;
    uVar5 = *(undefined8 *)(lVar4 + 0x60);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar1 & 1) == 0) {
      if (DAT_09515ce8 == '\0') {
        FUN_03f5c2a4(&DAT_0918cb68);
        DAT_09515ce8 = '\x01';
      }
      uVar7 = **(undefined4 **)(DAT_0918cb68 + 0xb8);
      param_2 = (*(undefined4 **)(DAT_0918cb68 + 0xb8))[1];
    }
    else {
      if (*(long *)(lVar4 + 0x60) == 0) goto LAB_04523100;
      uVar7 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar4 + 0x60),0);
    }
    lVar2 = DAT_09188ad0;
    *(undefined4 *)(param_4 + 0x28) = uVar7;
    *(undefined4 *)(param_4 + 0x2c) = param_2;
    uVar5 = *(undefined8 *)(lVar4 + 0x60);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar1 & 1) == 0) {
      if (DAT_09515ce6 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515ce6 = '\x01';
      }
      puVar3 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
      uVar7 = *puVar3;
      param_2 = puVar3[1];
      param_3 = puVar3[2];
    }
    else {
      if (*(long *)(lVar4 + 0x60) == 0) goto LAB_04523100;
      uVar7 = UnityEngine_Transform__get_localEulerAngles(*(long *)(lVar4 + 0x60),0);
    }
    lVar2 = DAT_09188ad0;
    *(undefined4 *)(param_4 + 0x30) = uVar7;
    *(undefined4 *)(param_4 + 0x34) = param_2;
    *(undefined4 *)(param_4 + 0x38) = param_3;
    uVar5 = *(undefined8 *)(lVar4 + 0x60);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((uVar1 & 1) == 0) {
      if (DAT_09515cf3 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf3 = '\x01';
      }
      lVar2 = *(long *)(DAT_0918cbd0 + 0xb8);
      uVar7 = *(undefined4 *)(lVar2 + 0xc);
      param_2 = *(undefined4 *)(lVar2 + 0x10);
      param_3 = *(undefined4 *)(lVar2 + 0x14);
    }
    else {
      if (*(long *)(lVar4 + 0x60) == 0) goto LAB_04523100;
      uVar7 = UnityEngine_Transform__get_localScale(*(long *)(lVar4 + 0x60),0);
    }
    lVar2 = DAT_09188ad0;
    *(undefined4 *)(param_4 + 0x3c) = uVar7;
    *(undefined4 *)(param_4 + 0x40) = param_2;
    *(undefined4 *)(param_4 + 0x44) = param_3;
    uVar5 = *(undefined8 *)(lVar4 + 0x68);
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
    uVar7 = 0x3f800000;
    if ((uVar1 & 1) != 0) {
      if (*(long *)(lVar4 + 0x68) == 0) goto LAB_04523100;
      uVar7 = UnityEngine_CanvasGroup__get_alpha(*(long *)(lVar4 + 0x68),0);
    }
    *(undefined4 *)(param_4 + 0x48) = uVar7;
    uVar7 = UnityEngine_Time__get_unscaledTime(0);
    lVar2 = *(long *)(lVar4 + 0x60);
    *(undefined4 *)(param_4 + 0x4c) = uVar7;
    if (lVar2 == 0) goto LAB_04523100;
    uVar7 = UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
    *(undefined4 *)(param_4 + 0x50) = uVar7;
    *(undefined4 *)(param_4 + 0x54) = param_2;
    if (*(long *)(lVar4 + 0x60) == 0) goto LAB_04523100;
    UnityEngine_Transform__get_localEulerAngles(*(long *)(lVar4 + 0x60),0);
    fVar8 = (float)UnityEngine_Time__get_unscaledTime(0);
  }
  lVar2 = *(long *)(lVar4 + 0x70);
  if (lVar2 != 0) {
    if (*(float *)(lVar2 + 0x34) <= fVar8 - *(float *)(param_4 + 0x4c)) {
      Utilities_UIAnimShowHideControlFull__ApplyState(lVar4,lVar2,1);
      return 0;
    }
    fVar8 = (float)UnityEngine_Time__get_unscaledTime(0);
    if (*(long *)(lVar4 + 0x70) != 0) {
      fVar10 = *(float *)(param_4 + 0x4c);
      fVar11 = *(float *)(*(long *)(lVar4 + 0x70) + 0x34);
      uVar5 = *(undefined8 *)(lVar4 + 0x60);
      fVar8 = fVar8 - fVar10;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar8 = fVar8 / fVar11;
      uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)(lVar4 + 0x70) == 0) goto LAB_04523100;
        fVar11 = (float)Utilities_MathExtension__EvaluateEase
                                  (fVar8,*(undefined4 *)(*(long *)(lVar4 + 0x70) + 0x38),0);
        fVar9 = (float)Utilities_UIAnimShowHideControlFull__AnchoredPosOf
                                 (lVar4,*(undefined8 *)(lVar4 + 0x70));
        if (*(char *)(lVar4 + 0x80) != '\0') {
          *(float *)(param_4 + 0x50) =
               *(float *)(param_4 + 0x28) + fVar11 * (fVar9 - *(float *)(param_4 + 0x28));
        }
        if (*(char *)(lVar4 + 0x81) != '\0') {
          *(float *)(param_4 + 0x54) =
               *(float *)(param_4 + 0x2c) + fVar11 * (fVar10 - *(float *)(param_4 + 0x2c));
        }
        if (*(long *)(lVar4 + 0x60) == 0) goto LAB_04523100;
        UnityEngine_RectTransform__set_anchoredPosition
                  (*(undefined4 *)(param_4 + 0x50),*(undefined4 *)(param_4 + 0x54),
                   *(long *)(lVar4 + 0x60),0);
        lVar2 = *(long *)(lVar4 + 0x70);
        if (lVar2 == 0) goto LAB_04523100;
        lVar6 = *(long *)(lVar4 + 0x60);
        fVar11 = *(float *)(param_4 + 0x38);
        uVar5 = *(undefined8 *)(param_4 + 0x30);
        uVar14 = *(undefined8 *)(lVar2 + 0x18);
        fVar9 = *(float *)(lVar2 + 0x20);
        fVar10 = (float)Utilities_MathExtension__EvaluateEase(fVar8,*(undefined4 *)(lVar2 + 0x3c),0)
        ;
        if (lVar6 == 0) goto LAB_04523100;
        fVar12 = (float)uVar5;
        fVar13 = (float)((ulong)uVar5 >> 0x20);
        UnityEngine_Transform__set_localEulerAngles
                  (fVar12 + ((float)uVar14 - fVar12) * fVar10,
                   fVar13 + ((float)((ulong)uVar14 >> 0x20) - fVar13) * fVar10,
                   fVar11 + (fVar9 - fVar11) * fVar10,lVar6,0);
        lVar2 = *(long *)(lVar4 + 0x70);
        if (lVar2 == 0) goto LAB_04523100;
        lVar6 = *(long *)(lVar4 + 0x60);
        fVar11 = *(float *)(param_4 + 0x44);
        uVar5 = *(undefined8 *)(param_4 + 0x3c);
        uVar14 = *(undefined8 *)(lVar2 + 0x24);
        fVar9 = *(float *)(lVar2 + 0x2c);
        fVar10 = (float)Utilities_MathExtension__EvaluateEase(fVar8,*(undefined4 *)(lVar2 + 0x40),0)
        ;
        if (lVar6 == 0) goto LAB_04523100;
        fVar12 = (float)uVar5;
        fVar13 = (float)((ulong)uVar5 >> 0x20);
        UnityEngine_Transform__set_localScale
                  (fVar12 + ((float)uVar14 - fVar12) * fVar10,
                   fVar13 + ((float)((ulong)uVar14 >> 0x20) - fVar13) * fVar10,
                   fVar11 + (fVar9 - fVar11) * fVar10,lVar6,0);
      }
      uVar5 = *(undefined8 *)(lVar4 + 0x68);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar1 & 1) == 0) {
LAB_045230b8:
        *(undefined8 *)(param_4 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x18),0);
        *(undefined4 *)(param_4 + 0x10) = 1;
        return 1;
      }
      lVar2 = *(long *)(lVar4 + 0x70);
      if (lVar2 != 0) {
        lVar4 = *(long *)(lVar4 + 0x68);
        fVar10 = *(float *)(param_4 + 0x48);
        fVar11 = *(float *)(lVar2 + 0x30);
        fVar8 = (float)Utilities_MathExtension__EvaluateEase(fVar8,*(undefined4 *)(lVar2 + 0x44),0);
        if (lVar4 != 0) {
          UnityEngine_CanvasGroup__set_alpha(fVar10 + (fVar11 - fVar10) * fVar8,lVar4,0);
          goto LAB_045230b8;
        }
      }
    }
  }
LAB_04523100:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


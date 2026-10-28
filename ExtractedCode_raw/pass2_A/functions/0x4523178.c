// rea decompile_all
// name: Utilities.UIAnimShowHideControlFull.<IEShow>d__20$$MoveNext
// address: 0x4523178
// body: available
// range: 0x4523178-0x452349b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4523498 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_UIAnimShowHideControlFull_<IEShow>d__20__MoveNext
          (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
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
  
  if ((DAT_095185d6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095185d6 = 1;
  }
  lVar4 = *(long *)(param_3 + 0x20);
  if (*(int *)(param_3 + 0x10) == 1) {
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    fVar8 = (float)UnityEngine_Time__get_unscaledTime(0);
    if (lVar4 == 0) goto LAB_04523498;
  }
  else {
    if (*(int *)(param_3 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    uVar7 = UnityEngine_Time__get_unscaledTime(0);
    *(undefined4 *)(param_3 + 0x28) = uVar7;
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x60) == 0)) goto LAB_04523498;
    uVar7 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar4 + 0x60),0);
    *(undefined4 *)(param_3 + 0x2c) = uVar7;
    *(undefined4 *)(param_3 + 0x30) = param_2;
    if (*(long *)(lVar4 + 0x60) == 0) goto LAB_04523498;
    UnityEngine_Transform__get_localEulerAngles(*(long *)(lVar4 + 0x60),0);
    fVar8 = (float)UnityEngine_Time__get_unscaledTime(0);
  }
  lVar2 = *(long *)(lVar4 + 0x78);
  if (lVar2 != 0) {
    if (*(float *)(lVar2 + 0x34) <= fVar8 - *(float *)(param_3 + 0x28)) {
      Utilities_UIAnimShowHideControlFull__ApplyState(lVar4,lVar2,1,0);
      return 0;
    }
    fVar8 = (float)UnityEngine_Time__get_unscaledTime(0);
    if (*(long *)(lVar4 + 0x78) != 0) {
      fVar12 = *(float *)(param_3 + 0x28);
      fVar13 = *(float *)(*(long *)(lVar4 + 0x78) + 0x34);
      uVar5 = *(undefined8 *)(lVar4 + 0x60);
      fVar8 = fVar8 - fVar12;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar8 = fVar8 / fVar13;
      uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar1 & 1) != 0) {
        if (*(long *)(lVar4 + 0x78) == 0) goto LAB_04523498;
        fVar9 = (float)Utilities_MathExtension__EvaluateEase
                                 (fVar8,*(undefined4 *)(*(long *)(lVar4 + 0x78) + 0x38),0);
        fVar10 = (float)Utilities_UIAnimShowHideControlFull__AnchoredPosOf
                                  (lVar4,*(undefined8 *)(lVar4 + 0x70),0);
        fVar13 = fVar12;
        fVar11 = (float)Utilities_UIAnimShowHideControlFull__AnchoredPosOf
                                  (lVar4,*(undefined8 *)(lVar4 + 0x78),0);
        if (*(char *)(lVar4 + 0x80) != '\0') {
          *(float *)(param_3 + 0x2c) = fVar10 + fVar9 * (fVar11 - fVar10);
        }
        if (*(char *)(lVar4 + 0x81) != '\0') {
          *(float *)(param_3 + 0x30) = fVar12 + fVar9 * (fVar13 - fVar12);
        }
        if (*(long *)(lVar4 + 0x60) == 0) goto LAB_04523498;
        UnityEngine_RectTransform__set_anchoredPosition
                  (*(undefined4 *)(param_3 + 0x2c),*(undefined4 *)(param_3 + 0x30),
                   *(long *)(lVar4 + 0x60),0);
        lVar2 = *(long *)(lVar4 + 0x70);
        if ((lVar2 == 0) || (lVar3 = *(long *)(lVar4 + 0x78), lVar3 == 0)) goto LAB_04523498;
        lVar6 = *(long *)(lVar4 + 0x60);
        fVar13 = *(float *)(lVar2 + 0x20);
        uVar5 = *(undefined8 *)(lVar2 + 0x18);
        uVar14 = *(undefined8 *)(lVar3 + 0x18);
        fVar9 = *(float *)(lVar3 + 0x20);
        fVar12 = (float)Utilities_MathExtension__EvaluateEase(fVar8,*(undefined4 *)(lVar3 + 0x3c),0)
        ;
        if (lVar6 == 0) goto LAB_04523498;
        fVar10 = (float)uVar5;
        fVar11 = (float)((ulong)uVar5 >> 0x20);
        UnityEngine_Transform__set_localEulerAngles
                  (fVar10 + ((float)uVar14 - fVar10) * fVar12,
                   fVar11 + ((float)((ulong)uVar14 >> 0x20) - fVar11) * fVar12,
                   fVar13 + (fVar9 - fVar13) * fVar12,lVar6,0);
        lVar2 = *(long *)(lVar4 + 0x70);
        if ((lVar2 == 0) || (lVar3 = *(long *)(lVar4 + 0x78), lVar3 == 0)) goto LAB_04523498;
        lVar6 = *(long *)(lVar4 + 0x60);
        fVar13 = *(float *)(lVar2 + 0x2c);
        uVar5 = *(undefined8 *)(lVar2 + 0x24);
        uVar14 = *(undefined8 *)(lVar3 + 0x24);
        fVar9 = *(float *)(lVar3 + 0x2c);
        fVar12 = (float)Utilities_MathExtension__EvaluateEase(fVar8,*(undefined4 *)(lVar3 + 0x40),0)
        ;
        if (lVar6 == 0) goto LAB_04523498;
        fVar10 = (float)uVar5;
        fVar11 = (float)((ulong)uVar5 >> 0x20);
        UnityEngine_Transform__set_localScale
                  (fVar10 + ((float)uVar14 - fVar10) * fVar12,
                   fVar11 + ((float)((ulong)uVar14 >> 0x20) - fVar11) * fVar12,
                   fVar13 + (fVar9 - fVar13) * fVar12,lVar6,0);
      }
      uVar5 = *(undefined8 *)(lVar4 + 0x68);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar1 & 1) == 0) {
LAB_0452344c:
        *(undefined8 *)(param_3 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_3 + 0x18),0);
        *(undefined4 *)(param_3 + 0x10) = 1;
        return 1;
      }
      if (*(long *)(lVar4 + 0x70) != 0) {
        lVar2 = *(long *)(lVar4 + 0x68);
        fVar13 = *(float *)(*(long *)(lVar4 + 0x70) + 0x30);
        fVar12 = (float)Utilities_UIAnimShowHideControlFull__get_ShowAlpha(lVar4,0);
        if ((*(long *)(lVar4 + 0x78) != 0) &&
           (fVar8 = (float)Utilities_MathExtension__EvaluateEase
                                     (fVar8,*(undefined4 *)(*(long *)(lVar4 + 0x78) + 0x44),0),
           lVar2 != 0)) {
          UnityEngine_CanvasGroup__set_alpha(fVar13 + (fVar12 - fVar13) * fVar8,lVar2,0);
          goto LAB_0452344c;
        }
      }
    }
  }
LAB_04523498:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


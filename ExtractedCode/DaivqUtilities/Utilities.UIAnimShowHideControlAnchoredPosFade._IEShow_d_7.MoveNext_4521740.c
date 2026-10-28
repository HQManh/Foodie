// rea decompile_all
// name: Utilities.UIAnimShowHideControlAnchoredPosFade.<IEShow>d__7$$MoveNext
// address: 0x4521740
// body: available
// range: 0x4521740-0x45219ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45219a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Utilities_UIAnimShowHideControlAnchoredPosFade_<IEShow>d__7__MoveNext(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  if ((DAT_095185c3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095185c3 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    fVar8 = (float)UnityEngine_Time__get_unscaledTime(0);
    if (lVar3 == 0) goto LAB_045219a8;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar7 = UnityEngine_Time__get_unscaledTime(0);
    *(undefined4 *)(param_1 + 0x28) = uVar7;
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x60) == 0)) goto LAB_045219a8;
    UnityEngine_Transform__get_localEulerAngles(*(long *)(lVar3 + 0x60),0);
    fVar8 = (float)UnityEngine_Time__get_unscaledTime(0);
  }
  if (*(long *)(lVar3 + 0x70) != 0) {
    if (*(float *)(*(long *)(lVar3 + 0x70) + 0x28) <= fVar8 - *(float *)(param_1 + 0x28)) {
      Utilities_UIAnimShowHideControlAnchoredPosFade__ApplyState(lVar3);
      return 0;
    }
    fVar8 = (float)UnityEngine_Time__get_unscaledTime(0);
    if (*(long *)(lVar3 + 0x70) != 0) {
      fVar9 = *(float *)(param_1 + 0x28);
      fVar10 = *(float *)(*(long *)(lVar3 + 0x70) + 0x28);
      uVar4 = *(undefined8 *)(lVar3 + 0x60);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar10 = (fVar8 - fVar9) / fVar10;
      uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
      if ((uVar1 & 1) != 0) {
        if ((*(long *)(lVar3 + 0x78) == 0) || (lVar2 = *(long *)(lVar3 + 0x70), lVar2 == 0))
        goto LAB_045219a8;
        lVar5 = *(long *)(lVar3 + 0x60);
        uVar4 = *(undefined8 *)(*(long *)(lVar3 + 0x78) + 0x10);
        uVar13 = *(undefined8 *)(lVar2 + 0x10);
        fVar8 = (float)Utilities_MathExtension__EvaluateEase(fVar10,*(undefined4 *)(lVar2 + 0x2c),0)
        ;
        if (lVar5 == 0) goto LAB_045219a8;
        fVar9 = (float)uVar4;
        fVar12 = (float)((ulong)uVar4 >> 0x20);
        UnityEngine_RectTransform__set_anchoredPosition
                  (fVar9 + ((float)uVar13 - fVar9) * fVar8,
                   fVar12 + ((float)((ulong)uVar13 >> 0x20) - fVar12) * fVar8,lVar5,0);
        lVar2 = *(long *)(lVar3 + 0x78);
        if ((lVar2 == 0) || (lVar5 = *(long *)(lVar3 + 0x70), lVar5 == 0)) goto LAB_045219a8;
        lVar6 = *(long *)(lVar3 + 0x60);
        uVar7 = *(undefined4 *)(lVar2 + 0x20);
        uVar11 = *(undefined4 *)(lVar5 + 0x20);
        uVar4 = *(undefined8 *)(lVar2 + 0x18);
        uVar13 = *(undefined8 *)(lVar5 + 0x18);
        Utilities_MathExtension__EvaluateEase(fVar10,*(undefined4 *)(lVar5 + 0x30),0);
        local_70 = uVar13;
        local_68 = uVar11;
        local_60 = uVar4;
        local_58 = uVar7;
        UnityEngine_Vector3__Internal_SlerpUnclamped(&local_60,&local_70,0);
        if (lVar6 == 0) goto LAB_045219a8;
        UnityEngine_Transform__set_localEulerAngles(lVar6,0);
      }
      uVar4 = *(undefined8 *)(lVar3 + 0x68);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
      if ((uVar1 & 1) == 0) {
LAB_04521960:
        *(undefined8 *)(param_1 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
        *(undefined4 *)(param_1 + 0x10) = 1;
        return 1;
      }
      if ((*(long *)(lVar3 + 0x78) != 0) && (lVar2 = *(long *)(lVar3 + 0x70), lVar2 != 0)) {
        lVar5 = *(long *)(lVar3 + 0x68);
        fVar9 = *(float *)(*(long *)(lVar3 + 0x78) + 0x24);
        fVar12 = *(float *)(lVar2 + 0x24);
        fVar8 = (float)Utilities_MathExtension__EvaluateEase(fVar10,*(undefined4 *)(lVar2 + 0x34),0)
        ;
        if (lVar5 != 0) {
          UnityEngine_CanvasGroup__set_alpha(fVar9 + (fVar12 - fVar9) * fVar8,lVar5,0);
          goto LAB_04521960;
        }
      }
    }
  }
LAB_045219a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: Utilities.UIAnimShowHideControlMoveScale.<IEHide>d__9$$MoveNext
// address: 0x4523da0
// body: available
// range: 0x4523da0-0x452403b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4524038 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Utilities_UIAnimShowHideControlMoveScale_<IEHide>d__9__MoveNext
          (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  
  if ((DAT_095185e1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095185e1 = 1;
  }
  lVar4 = *(long *)(param_3 + 0x20);
  if (*(int *)(param_3 + 0x10) == 1) {
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    fVar7 = (float)UnityEngine_Time__get_unscaledTime(0);
    if (lVar4 == 0) goto LAB_04524038;
  }
  else {
    if (*(int *)(param_3 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_3 + 0x10) = 0xffffffff;
    if (lVar4 == 0) goto LAB_04524038;
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
      uVar6 = **(undefined4 **)(DAT_0918cb68 + 0xb8);
      param_2 = (*(undefined4 **)(DAT_0918cb68 + 0xb8))[1];
    }
    else {
      if (*(long *)(lVar4 + 0x60) == 0) goto LAB_04524038;
      uVar6 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar4 + 0x60),0);
    }
    *(undefined4 *)(param_3 + 0x28) = uVar6;
    *(undefined4 *)(param_3 + 0x2c) = param_2;
    uVar6 = UnityEngine_Time__get_unscaledTime(0);
    lVar2 = *(long *)(lVar4 + 0x60);
    *(undefined4 *)(param_3 + 0x30) = uVar6;
    if (lVar2 == 0) goto LAB_04524038;
    uVar6 = UnityEngine_RectTransform__get_anchoredPosition(lVar2,0);
    *(undefined4 *)(param_3 + 0x34) = uVar6;
    *(undefined4 *)(param_3 + 0x38) = param_2;
    fVar7 = (float)UnityEngine_Time__get_unscaledTime(0);
  }
  if (*(long *)(lVar4 + 0x68) != 0) {
    if (*(float *)(*(long *)(lVar4 + 0x68) + 0x24) <= fVar7 - *(float *)(param_3 + 0x30)) {
      Utilities_UIAnimShowHideControlMoveScale__ApplyState(lVar4);
      return 0;
    }
    fVar7 = (float)UnityEngine_Time__get_unscaledTime(0);
    if (*(long *)(lVar4 + 0x68) != 0) {
      fVar8 = *(float *)(param_3 + 0x30);
      fVar9 = *(float *)(*(long *)(lVar4 + 0x68) + 0x24);
      uVar5 = *(undefined8 *)(lVar4 + 0x60);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar1 & 1) == 0) {
LAB_04523ff8:
        *(undefined8 *)(param_3 + 0x18) = 0;
        thunk_FUN_03f5d7b8((undefined8 *)(param_3 + 0x18),0);
        *(undefined4 *)(param_3 + 0x10) = 1;
        return 1;
      }
      if (*(long *)(lVar4 + 0x68) != 0) {
        fVar9 = (fVar7 - fVar8) / fVar9;
        fVar7 = (float)Utilities_MathExtension__EvaluateEase
                                 (fVar9,*(undefined4 *)(*(long *)(lVar4 + 0x68) + 0x28),0);
        if (*(char *)(lVar4 + 0x78) != '\0') {
          if (*(long *)(lVar4 + 0x68) == 0) goto LAB_04524038;
          *(float *)(param_3 + 0x34) =
               *(float *)(param_3 + 0x28) +
               fVar7 * (*(float *)(*(long *)(lVar4 + 0x68) + 0x10) - *(float *)(param_3 + 0x28));
        }
        if (*(char *)(lVar4 + 0x79) != '\0') {
          if (*(long *)(lVar4 + 0x68) == 0) goto LAB_04524038;
          *(float *)(param_3 + 0x38) =
               *(float *)(param_3 + 0x2c) +
               fVar7 * (*(float *)(*(long *)(lVar4 + 0x68) + 0x14) - *(float *)(param_3 + 0x2c));
        }
        if (*(long *)(lVar4 + 0x60) != 0) {
          UnityEngine_RectTransform__set_anchoredPosition
                    (*(undefined4 *)(param_3 + 0x34),*(undefined4 *)(param_3 + 0x38),
                     *(long *)(lVar4 + 0x60),0);
          lVar2 = *(long *)(lVar4 + 0x70);
          if ((lVar2 != 0) && (lVar3 = *(long *)(lVar4 + 0x68), lVar3 != 0)) {
            lVar4 = *(long *)(lVar4 + 0x60);
            fVar8 = *(float *)(lVar2 + 0x20);
            uVar5 = *(undefined8 *)(lVar2 + 0x18);
            uVar11 = *(undefined8 *)(lVar3 + 0x18);
            fVar12 = *(float *)(lVar3 + 0x20);
            fVar7 = (float)Utilities_MathExtension__EvaluateEase
                                     (fVar9,*(undefined4 *)(lVar3 + 0x2c),0);
            if (lVar4 != 0) {
              fVar9 = (float)uVar5;
              fVar10 = (float)((ulong)uVar5 >> 0x20);
              UnityEngine_Transform__set_localScale
                        (fVar9 + ((float)uVar11 - fVar9) * fVar7,
                         fVar10 + ((float)((ulong)uVar11 >> 0x20) - fVar10) * fVar7,
                         fVar8 + (fVar12 - fVar8) * fVar7,lVar4,0);
              goto LAB_04523ff8;
            }
          }
        }
      }
    }
  }
LAB_04524038:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


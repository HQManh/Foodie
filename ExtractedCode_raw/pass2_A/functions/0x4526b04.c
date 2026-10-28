// rea decompile_all
// name: Utilities.UIDraggableFloatingButton$$Update
// address: 0x4526b04
// body: available
// range: 0x4526b04-0x4526d3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4526d38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UIDraggableFloatingButton__Update
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_18;
  float fStack_14;
  
  if ((DAT_095185fd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_095185fd = 1;
  }
  local_18 = 0;
  fStack_14 = 0.0;
  if (*(char *)(param_5 + 0x60) == '\0') {
    return;
  }
  fVar9 = *(float *)(param_5 + 0x6c);
  fVar7 = *(float *)(param_5 + 0x70);
  fVar3 = (float)UnityEngine_Input__get_mousePosition(0);
  fVar10 = *(float *)(param_5 + 100);
  fVar8 = *(float *)(param_5 + 0x68);
  uVar2 = *(undefined8 *)(param_5 + 0x80);
  fVar6 = param_2;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
  fVar4 = 1.0;
  if ((uVar1 & 1) != 0) {
    if (*(long *)(param_5 + 0x80) == 0) goto LAB_04526d38;
    fVar4 = (float)UnityEngine_Canvas__get_scaleFactor(*(long *)(param_5 + 0x80),0);
  }
  if (*(long *)(param_5 + 0x30) != 0) {
    fVar5 = (float)UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0x30),0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(long *)(param_5 + 0x30) != 0) {
      fVar9 = fVar9 + (fVar3 - fVar10) / fVar4;
      fVar10 = (float)UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0x30),0);
      fVar3 = param_3 + fVar10;
      if (fVar9 <= param_3 + fVar10) {
        fVar3 = fVar9;
      }
      if (fVar5 <= fVar9) {
        fVar5 = fVar3;
      }
      if (*(long *)(param_5 + 0x30) != 0) {
        UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0x30),0);
        if (*(long *)(param_5 + 0x30) != 0) {
          fVar7 = fVar7 + (param_2 - fVar8) / fVar4;
          fVar9 = fVar6;
          UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0x30),0);
          fVar3 = param_4 + fVar9;
          if (fVar7 <= param_4 + fVar9) {
            fVar3 = fVar7;
          }
          if (fVar6 <= fVar7) {
            fVar6 = fVar3;
          }
          if (*(long *)(param_5 + 0x28) != 0) {
            local_18 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(param_5 + 0x28),0);
            fStack_14 = fVar9;
            if (*(long *)(param_5 + 0x38) != 0) {
              Utilities_MathExtension__LerpToWithUnscaledTime
                        (fVar5,fVar6,*(undefined4 *)(*(long *)(param_5 + 0x38) + 0x10),&local_18,0);
              if (*(long *)(param_5 + 0x28) != 0) {
                fVar6 = fStack_14;
                UnityEngine_RectTransform__set_anchoredPosition
                          (local_18,*(long *)(param_5 + 0x28),0);
                fVar7 = *(float *)(param_5 + 100);
                fVar9 = *(float *)(param_5 + 0x68);
                fVar3 = (float)UnityEngine_Input__get_mousePosition(0);
                if (DAT_09515fab == '\0') {
                  FUN_03f5c2a4(&DAT_09187e80);
                  DAT_09515fab = '\x01';
                }
                if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                if (*(long *)(param_5 + 0x38) != 0) {
                  fVar7 = fVar7 - fVar3;
                  fVar9 = fVar9 - fVar6;
                  if (SQRT(fVar7 * fVar7 + fVar9 * fVar9) <=
                      *(float *)(*(long *)(param_5 + 0x38) + 0x2c)) {
                    return;
                  }
                  *(undefined1 *)(param_5 + 0x78) = 1;
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_04526d38:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


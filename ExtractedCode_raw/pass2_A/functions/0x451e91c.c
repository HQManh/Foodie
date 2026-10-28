// rea decompile_all
// name: Utilities.ScaleFitterUI$$<UpdateRect>g__ApplyScale|14_2
// address: 0x451e91c
// body: available
// range: 0x451e91c-0x451eac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x451eaa8 to 0x866d690 UnityEngine.Transform$$set_localScale (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x451eac0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_ScaleFitterUI__<UpdateRect>g__ApplyScale_14_2
               (float param_1,float param_2,float param_3,long *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*param_4 != 0) {
    fVar2 = param_2;
    fVar1 = (float)UnityEngine_RectTransform__get_anchorMin(*param_4,0);
    fVar2 = (fVar2 - param_2) * (fVar2 - param_2);
    if (9.9999994e-11 <= (fVar1 - param_1) * (fVar1 - param_1) + fVar2) {
      if (*param_4 == 0) goto LAB_0451eac0;
      fVar2 = param_2;
      UnityEngine_RectTransform__set_anchorMin(param_1,*param_4,0);
    }
    if (*param_4 != 0) {
      fVar1 = (float)UnityEngine_RectTransform__get_anchorMax(*param_4,0);
      fVar2 = (fVar2 - param_2) * (fVar2 - param_2);
      if (9.9999994e-11 <= (fVar1 - param_1) * (fVar1 - param_1) + fVar2) {
        if (*param_4 == 0) goto LAB_0451eac0;
        UnityEngine_RectTransform__set_anchorMax(param_1,*param_4,0);
        fVar2 = param_2;
      }
      if (*param_4 != 0) {
        fVar1 = (float)UnityEngine_RectTransform__get_anchoredPosition(*param_4,0);
        if (DAT_09515ce8 == '\0') {
          FUN_03f5c2a4(&DAT_0918cb68);
          DAT_09515ce8 = '\x01';
        }
        fVar3 = (*(float **)(DAT_0918cb68 + 0xb8))[1];
        fVar1 = fVar1 - **(float **)(DAT_0918cb68 + 0xb8);
        fVar2 = fVar1 * fVar1 + (fVar2 - fVar3) * (fVar2 - fVar3);
        if (9.9999994e-11 <= fVar2) {
          if (*param_4 == 0) goto LAB_0451eac0;
          UnityEngine_RectTransform__set_anchoredPosition(*param_4,0);
        }
        if (*param_4 != 0) {
          fVar1 = (float)UnityEngine_Transform__get_localScale(*param_4,0);
          if ((fVar2 + -1.0) * (fVar2 + -1.0) +
              (fVar1 - param_3) * (fVar1 - param_3) + (fVar3 - param_3) * (fVar3 - param_3) <
              9.9999994e-11) {
            return;
          }
          if (*param_4 != 0) {
            UnityEngine_Transform__set_localScale(param_3,param_3,0x3f800000,*param_4,0);
            return;
          }
        }
      }
    }
  }
LAB_0451eac0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


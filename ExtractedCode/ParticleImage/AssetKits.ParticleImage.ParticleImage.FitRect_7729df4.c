// rea decompile_all
// name: AssetKits.ParticleImage.ParticleImage$$FitRect
// address: 0x7729df4
// body: available
// range: 0x7729df4-0x7729f8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7729f8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AssetKits_ParticleImage_ParticleImage__FitRect
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_09522a49 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09522a49 = 1;
  }
  iVar1 = *(int *)(param_5 + 0x108);
  if (iVar1 == 3) {
    lVar2 = UnityEngine_UI_Graphic__get_rectTransform(param_5,0);
    if (lVar2 != 0) {
      UnityEngine_RectTransform__get_rect(lVar2,0);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      *(float *)(param_5 + 0x128) = param_3;
      return;
    }
  }
  else if (iVar1 == 2) {
    lVar2 = UnityEngine_UI_Graphic__get_rectTransform(param_5,0);
    if (lVar2 != 0) {
      UnityEngine_RectTransform__get_rect(lVar2,0);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      *(float *)(param_5 + 0x11c) = param_3;
      lVar2 = UnityEngine_UI_Graphic__get_rectTransform(param_5,0);
      if (lVar2 != 0) {
        UnityEngine_RectTransform__get_rect(lVar2,0);
        *(float *)(param_5 + 0x120) = param_4;
        return;
      }
    }
  }
  else {
    if (iVar1 != 1) {
      return;
    }
    lVar2 = UnityEngine_UI_Graphic__get_rectTransform(param_5,0);
    if (lVar2 != 0) {
      UnityEngine_RectTransform__get_rect(lVar2,0);
      fVar3 = param_3;
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = UnityEngine_UI_Graphic__get_rectTransform(param_5,0);
      if (lVar2 != 0) {
        UnityEngine_RectTransform__get_rect(lVar2,0);
        fVar4 = param_4;
        lVar2 = UnityEngine_UI_Graphic__get_rectTransform(param_5,0);
        if (param_3 <= param_4) {
          if (lVar2 != 0) {
            UnityEngine_RectTransform__get_rect(lVar2,0);
            goto LAB_07729f64;
          }
        }
        else if (lVar2 != 0) {
          UnityEngine_RectTransform__get_rect(lVar2,0);
          fVar3 = fVar4;
LAB_07729f64:
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          *(float *)(param_5 + 0x118) = fVar3 * 0.5;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


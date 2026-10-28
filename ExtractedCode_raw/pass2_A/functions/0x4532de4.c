// rea decompile_all
// name: Utilities.UI.UniformStretchGridLayoutGroup$$CalculateLayoutBoth
// address: 0x4532de4
// body: available
// range: 0x4532de4-0x453300b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4532fec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UI_UniformStretchGridLayoutGroup__CalculateLayoutBoth
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_09518652 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af770);
    FUN_03f5c2a4(&DAT_091af778);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09518652 = 1;
  }
  lVar4 = UnityEngine_UI_LayoutGroup__get_rectTransform(param_5,0);
  if (lVar4 != 0) {
    UnityEngine_RectTransform__get_rect(lVar4,0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = UnityEngine_UI_LayoutGroup__get_rectTransform(param_5,0);
    if (lVar4 != 0) {
      UnityEngine_RectTransform__get_rect(lVar4,0);
      if (*(long *)(param_5 + 0x20) != 0) {
        iVar2 = UnityEngine_RectOffset__get_horizontal(*(long *)(param_5 + 0x20),0);
        if (*(long *)(param_5 + 0x20) != 0) {
          fVar11 = *(float *)(param_5 + 0x6c);
          iVar1 = *(int *)(param_5 + 100);
          iVar3 = UnityEngine_RectOffset__get_vertical(*(long *)(param_5 + 0x20),0);
          lVar4 = *(long *)(param_5 + 0x58);
          if (lVar4 != 0) {
            iVar6 = 0;
            fVar11 = ((param_3 - (float)iVar2) - fVar11 * (float)(iVar1 + -1)) / (float)iVar1;
            fVar10 = ((param_4 - (float)iVar3) -
                     *(float *)(param_5 + 0x70) * (float)(*(int *)(param_5 + 0x68) + -1)) /
                     (float)*(int *)(param_5 + 0x68);
            do {
              if (*(int *)(lVar4 + 0x18) <= iVar6) {
                return;
              }
              iVar2 = *(int *)(param_5 + 100);
              iVar1 = 0;
              if (iVar2 != 0) {
                iVar1 = iVar6 / iVar2;
              }
              if (*(int *)(param_5 + 0x68) <= iVar1) {
                return;
              }
              uVar5 = FUN_057e0998(lVar4,iVar6,DAT_091af778);
              if (*(long *)(param_5 + 0x20) == 0) break;
              iVar3 = UnityEngine_RectOffset__get_left(*(long *)(param_5 + 0x20),0);
              if (*(long *)(param_5 + 0x20) == 0) break;
              fVar8 = *(float *)(param_5 + 0x6c);
              fVar7 = (float)(iVar6 - iVar2 * iVar1);
              iVar2 = UnityEngine_RectOffset__get_top(*(long *)(param_5 + 0x20),0);
              fVar9 = *(float *)(param_5 + 0x70);
              UnityEngine_UI_LayoutGroup__SetChildAlongAxis
                        (fVar11 * fVar7 + (float)iVar3 + fVar8 * fVar7,fVar11,param_5,uVar5,0,0);
              UnityEngine_UI_LayoutGroup__SetChildAlongAxis
                        (fVar10 * (float)iVar1 + (float)iVar2 + fVar9 * (float)iVar1,fVar10,param_5,
                         uVar5,1,0);
              lVar4 = *(long *)(param_5 + 0x58);
              iVar6 = iVar6 + 1;
            } while (lVar4 != 0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


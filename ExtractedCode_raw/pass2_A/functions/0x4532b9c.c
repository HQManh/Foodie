// rea decompile_all
// name: Utilities.UI.UniformStretchGridLayoutGroup$$CalculateLayoutHorizontalOnly
// address: 0x4532b9c
// body: available
// range: 0x4532b9c-0x4532de3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4532dbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4532de0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UI_UniformStretchGridLayoutGroup__CalculateLayoutHorizontalOnly
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float *pfVar7;
  int iVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_09518654 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af770);
    FUN_03f5c2a4(&DAT_091af778);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09518654 = 1;
  }
  lVar4 = UnityEngine_UI_LayoutGroup__get_rectTransform(param_4,0);
  if (lVar4 != 0) {
    UnityEngine_RectTransform__get_rect(lVar4,0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(long *)(param_4 + 0x20) != 0) {
      iVar2 = UnityEngine_RectOffset__get_horizontal(*(long *)(param_4 + 0x20),0);
      fVar11 = *(float *)(param_4 + 0x6c);
      iVar3 = *(int *)(param_4 + 100);
      lVar4 = Utilities_UI_UniformStretchGridLayoutGroup__GetRowHeights(param_4);
      lVar6 = *(long *)(param_4 + 0x58);
      if (lVar6 != 0) {
        iVar8 = 0;
        fVar11 = ((param_3 - (float)iVar2) - fVar11 * (float)(iVar3 + -1)) / (float)iVar3;
        do {
          if (*(int *)(lVar6 + 0x18) <= iVar8) {
            return;
          }
          iVar3 = *(int *)(param_4 + 100);
          uVar1 = 0;
          if (iVar3 != 0) {
            uVar1 = iVar8 / iVar3;
          }
          uVar9 = (ulong)uVar1;
          if (*(int *)(param_4 + 0x68) <= (int)uVar1) {
            return;
          }
          uVar5 = FUN_057e0998(lVar6,iVar8,DAT_091af778);
          if (*(long *)(param_4 + 0x20) == 0) break;
          iVar2 = UnityEngine_RectOffset__get_left(*(long *)(param_4 + 0x20),0);
          if (*(long *)(param_4 + 0x20) == 0) break;
          fVar10 = (float)(int)(iVar8 - uVar1 * iVar3);
          fVar12 = fVar11 * fVar10 + (float)iVar2 + *(float *)(param_4 + 0x6c) * fVar10;
          iVar3 = UnityEngine_RectOffset__get_top(*(long *)(param_4 + 0x20),0);
          fVar10 = *(float *)(param_4 + 0x70) * (float)(int)uVar1 + (float)iVar3;
          if ((int)uVar1 < 1) {
            UnityEngine_UI_LayoutGroup__SetChildAlongAxis(fVar12,fVar11,param_4,uVar5,0,0);
            if (lVar4 == 0) break;
          }
          else {
            if (lVar4 == 0) break;
            pfVar7 = (float *)(lVar4 + 0x20);
            do {
              if (*(uint *)(lVar4 + 0x18) <= uVar1 - 1) goto LAB_04532de0;
              uVar9 = uVar9 - 1;
              fVar10 = fVar10 + *pfVar7;
              pfVar7 = pfVar7 + 1;
            } while (uVar9 != 0);
            UnityEngine_UI_LayoutGroup__SetChildAlongAxis(fVar12,fVar11,param_4,uVar5,0,0);
          }
          if (*(uint *)(lVar4 + 0x18) <= uVar1) {
LAB_04532de0:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          UnityEngine_UI_LayoutGroup__SetChildAlongAxis
                    (fVar10,*(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20),param_4,uVar5,1,0);
          lVar6 = *(long *)(param_4 + 0x58);
          iVar8 = iVar8 + 1;
        } while (lVar6 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


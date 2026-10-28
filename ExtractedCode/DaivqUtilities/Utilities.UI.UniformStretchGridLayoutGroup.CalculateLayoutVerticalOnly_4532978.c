// rea decompile_all
// name: Utilities.UI.UniformStretchGridLayoutGroup$$CalculateLayoutVerticalOnly
// address: 0x4532978
// body: available
// range: 0x4532978-0x4532b9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4532b74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4532b98 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UI_UniformStretchGridLayoutGroup__CalculateLayoutVerticalOnly(long param_1)

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
  float in_s3;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_09518653 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af770);
    FUN_03f5c2a4(&DAT_091af778);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09518653 = 1;
  }
  lVar4 = UnityEngine_UI_LayoutGroup__get_rectTransform(param_1,0);
  if (lVar4 != 0) {
    UnityEngine_RectTransform__get_rect(lVar4,0);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(long *)(param_1 + 0x20) != 0) {
      iVar2 = UnityEngine_RectOffset__get_vertical(*(long *)(param_1 + 0x20),0);
      fVar11 = *(float *)(param_1 + 0x70);
      iVar3 = *(int *)(param_1 + 0x68);
      lVar4 = Utilities_UI_UniformStretchGridLayoutGroup__GetColumnWidths(param_1);
      lVar6 = *(long *)(param_1 + 0x58);
      if (lVar6 != 0) {
        iVar8 = 0;
        fVar11 = ((in_s3 - (float)iVar2) - fVar11 * (float)(iVar3 + -1)) / (float)iVar3;
        do {
          if (*(int *)(lVar6 + 0x18) <= iVar8) {
            return;
          }
          iVar3 = *(int *)(param_1 + 100);
          iVar2 = 0;
          if (iVar3 != 0) {
            iVar2 = iVar8 / iVar3;
          }
          if (*(int *)(param_1 + 0x68) <= iVar2) {
            return;
          }
          uVar5 = FUN_057e0998(lVar6,iVar8,DAT_091af778);
          if (*(long *)(param_1 + 0x20) == 0) break;
          uVar1 = iVar8 - iVar2 * iVar3;
          uVar9 = (ulong)uVar1;
          iVar3 = UnityEngine_RectOffset__get_left(*(long *)(param_1 + 0x20),0);
          fVar12 = *(float *)(param_1 + 0x6c) * (float)(int)uVar1 + (float)iVar3;
          if (0 < (int)uVar1) {
            if (lVar4 == 0) break;
            pfVar7 = (float *)(lVar4 + 0x20);
            do {
              if (*(uint *)(lVar4 + 0x18) <= uVar1 - 1) goto LAB_04532b98;
              uVar9 = uVar9 - 1;
              fVar12 = fVar12 + *pfVar7;
              pfVar7 = pfVar7 + 1;
            } while (uVar9 != 0);
          }
          if ((*(long *)(param_1 + 0x20) == 0) ||
             (iVar3 = UnityEngine_RectOffset__get_top(*(long *)(param_1 + 0x20),0), lVar4 == 0))
          break;
          if (*(uint *)(lVar4 + 0x18) <= uVar1) {
LAB_04532b98:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          fVar10 = *(float *)(param_1 + 0x70);
          UnityEngine_UI_LayoutGroup__SetChildAlongAxis
                    (fVar12,*(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20),param_1,uVar5,0,0);
          UnityEngine_UI_LayoutGroup__SetChildAlongAxis
                    (fVar11 * (float)iVar2 + (float)iVar3 + fVar10 * (float)iVar2,fVar11,param_1,
                     uVar5,1,0);
          lVar6 = *(long *)(param_1 + 0x58);
          iVar8 = iVar8 + 1;
          if (lVar6 == 0) break;
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


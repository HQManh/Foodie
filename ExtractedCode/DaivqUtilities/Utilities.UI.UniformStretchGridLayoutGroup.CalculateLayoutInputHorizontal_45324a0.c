// rea decompile_all
// name: Utilities.UI.UniformStretchGridLayoutGroup$$CalculateLayoutInputHorizontal
// address: 0x45324a0
// body: available
// range: 0x45324a0-0x453259b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4532590 to 0x45326c8 Utilities.UI.UniformStretchGridLayoutGroup$$CalculateLayout (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4532594 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4532598 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UI_UniformStretchGridLayoutGroup__CalculateLayoutInputHorizontal(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  
  if ((DAT_0951864d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af770);
    DAT_0951864d = 1;
  }
  UnityEngine_UI_LayoutGroup__CalculateLayoutInputHorizontal(param_1,0);
  if (*(int *)(param_1 + 0x60) == 2) {
    if (*(long *)(param_1 + 0x20) != 0) {
      iVar1 = UnityEngine_RectOffset__get_horizontal(*(long *)(param_1 + 0x20),0);
      if (*(long *)(param_1 + 0x58) != 0) {
        fVar7 = (float)iVar1;
        if (0 < *(int *)(*(long *)(param_1 + 0x58) + 0x18)) {
          lVar2 = Utilities_UI_UniformStretchGridLayoutGroup__GetColumnWidths(param_1);
          if (lVar2 == 0) goto LAB_04532598;
          uVar4 = (uint)*(ulong *)(lVar2 + 0x18);
          if (0 < (int)uVar4) {
            uVar3 = (ulong)(uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU));
            uVar5 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
            pfVar6 = (float *)(lVar2 + 0x20);
            do {
              if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              uVar3 = uVar3 - 1;
              uVar5 = uVar5 - 1;
              fVar7 = fVar7 + *pfVar6;
              pfVar6 = pfVar6 + 1;
            } while (uVar3 != 0);
          }
          fVar7 = fVar7 + *(float *)(param_1 + 0x6c) * (float)(*(int *)(param_1 + 100) + -1);
        }
        UnityEngine_UI_LayoutGroup__SetLayoutInputForAxis(fVar7,fVar7,0xbf800000,param_1,0,0);
        goto LAB_04532580;
      }
    }
LAB_04532598:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_04532580:
  Utilities_UI_UniformStretchGridLayoutGroup__CalculateLayout(param_1);
  return;
}


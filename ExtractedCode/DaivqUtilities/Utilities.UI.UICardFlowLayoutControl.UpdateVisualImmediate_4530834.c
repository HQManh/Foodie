// rea decompile_all
// name: Utilities.UI.UICardFlowLayoutControl$$UpdateVisualImmediate
// address: 0x4530834
// body: available
// range: 0x4530834-0x45309ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x45309e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x45309ec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UI_UICardFlowLayoutControl__UpdateVisualImmediate(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  if ((DAT_0951863e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951863e = 1;
  }
  Utilities_UI_UICardFlowLayoutControl__CalculateDesiredAnchoredPositions(param_1);
  lVar6 = *(long *)(param_1 + 0x28);
  if (lVar6 == 0) {
LAB_045309e8:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(uint *)(lVar6 + 0x18);
  if (0 < (int)uVar1) {
    uVar7 = 0;
    do {
      if (uVar1 <= uVar7) {
LAB_045309ec:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar8 = *(long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
      if ((lVar8 == 0) || (lVar9 = *(long *)(lVar8 + 0x10), lVar9 == 0)) goto LAB_045309e8;
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (0 < (int)uVar1) {
        uVar10 = 0;
        do {
          if (uVar1 <= uVar10) goto LAB_045309ec;
          lVar11 = *(long *)(lVar9 + uVar10 * 8 + 0x20);
          if ((lVar11 == 0) || (lVar3 = *(long *)(lVar11 + 0x10), lVar3 == 0)) goto LAB_045309e8;
          uVar12 = 0;
          while ((long)uVar12 < (long)(int)*(uint *)(lVar3 + 0x18)) {
            if (*(uint *)(lVar3 + 0x18) <= uVar12) goto LAB_045309ec;
            uVar5 = *(undefined8 *)(lVar3 + uVar12 * 8 + 0x20);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = UnityEngine_Object__op_Equality(uVar5,0,0);
            if ((uVar2 & 1) == 0) {
              lVar3 = *(long *)(lVar11 + 0x10);
              if (lVar3 == 0) goto LAB_045309e8;
              if (*(uint *)(lVar3 + 0x18) <= uVar12) goto LAB_045309ec;
              lVar4 = *(long *)(lVar11 + 0x18);
              if (lVar4 == 0) goto LAB_045309e8;
              if (*(uint *)(lVar4 + 0x18) <= uVar12) goto LAB_045309ec;
              lVar3 = *(long *)(lVar3 + uVar12 * 8 + 0x20);
              if (lVar3 == 0) goto LAB_045309e8;
              lVar4 = lVar4 + uVar12 * 8;
              UnityEngine_RectTransform__set_anchoredPosition
                        (*(undefined4 *)(lVar4 + 0x20),*(undefined4 *)(lVar4 + 0x24),lVar3,0);
            }
            lVar3 = *(long *)(lVar11 + 0x10);
            uVar12 = uVar12 + 1;
            if (lVar3 == 0) goto LAB_045309e8;
          }
          uVar1 = *(uint *)(lVar9 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar1);
      }
      uVar5 = *(undefined8 *)(lVar8 + 0x18);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar10 = UnityEngine_Object__op_Inequality(uVar5,0,0);
      if ((uVar10 & 1) != 0) {
        if (*(long *)(lVar8 + 0x18) == 0) goto LAB_045309e8;
        UnityEngine_RectTransform__set_anchoredPosition
                  (*(undefined4 *)(lVar8 + 0x20),*(undefined4 *)(lVar8 + 0x24),
                   *(long *)(lVar8 + 0x18),0);
      }
      uVar1 = *(uint *)(lVar6 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar1);
  }
  return;
}


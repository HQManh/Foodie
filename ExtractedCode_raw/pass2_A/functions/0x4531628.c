// rea decompile_all
// name: Utilities.UI.UIScreenEffect$$UpdateColor
// address: 0x4531628
// body: available
// range: 0x4531628-0x453189b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4531894 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4531898 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UI_UIScreenEffect__UpdateColor
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  
  if ((DAT_09518644 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09518644 = 1;
  }
  if (*(long *)(param_4 + 0x30) != 0) {
    fVar13 = *(float *)(param_4 + 0x40);
    if (*(char *)(param_4 + 0x20) == '\0') {
      fVar7 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
    }
    else {
      fVar7 = (float)UnityEngine_Time__get_deltaTime();
    }
    fVar14 = *(float *)(param_4 + 0x28);
    if (*(char *)(param_4 + 0x44) == '\0') {
      param_3 = (float)*(undefined8 *)(param_4 + 0x78);
      uVar3 = *(undefined8 *)(param_4 + 0x70);
    }
    else {
      if (*(long *)(param_4 + 0x48) == 0) goto LAB_04531894;
      uVar11 = *(undefined8 *)(param_4 + 0x78);
      uVar9 = *(undefined8 *)(param_4 + 0x70);
      uVar3 = uVar9;
      fVar8 = (float)UnityEngine_Gradient__Evaluate
                               (*(undefined4 *)(param_4 + 0x88),*(long *)(param_4 + 0x48),0);
      uVar3 = CONCAT44((float)((ulong)uVar9 >> 0x20) * (float)uVar3,(float)uVar9 * fVar8);
      param_3 = (float)uVar11 * param_3;
    }
    lVar5 = *(long *)(param_4 + 0x30);
    if (lVar5 == 0) goto LAB_04531894;
    uVar12 = 0;
    uVar1 = *(uint *)(lVar5 + 0x18);
    fVar14 = fVar13 * 50.0 * fVar7 * fVar14;
    fVar13 = 1.0;
    if (fVar14 <= 1.0) {
      fVar13 = fVar14;
    }
    uVar10 = (ulong)(uint)fVar13;
    fVar7 = 0.0;
    if (0.0 <= fVar14) {
      fVar7 = fVar13;
    }
    if (0 < (int)uVar1) {
      lVar6 = 0;
      do {
        fVar14 = (float)uVar12;
        fVar13 = (float)uVar10;
        if (uVar1 <= (uint)lVar6) goto LAB_04531898;
        plVar2 = *(long **)(lVar5 + 0x20 + lVar6 * 8);
        if (plVar2 == (long *)0x0) goto LAB_04531894;
        fVar8 = (float)(**(code **)(*plVar2 + 0x298))(plVar2,*(undefined8 *)(*plVar2 + 0x2a0));
        fVar13 = fVar13 + ((float)((ulong)uVar3 >> 0x20) - fVar13) * fVar7;
        uVar10 = (ulong)(uint)fVar13;
        uVar12 = (ulong)(uint)(fVar14 + (param_3 - fVar14) * fVar7);
        (**(code **)(*plVar2 + 0x2a8))
                  (CONCAT44(fVar13,fVar8 + ((float)uVar3 - fVar8) * fVar7),uVar10,uVar12,plVar2,
                   *(undefined8 *)(*plVar2 + 0x2b0));
        uVar1 = *(uint *)(lVar5 + 0x18);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar1);
    }
    uVar3 = *(undefined8 *)(param_4 + 0x50);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar12 = UnityEngine_Object__op_Inequality(uVar3,0,0);
    if ((uVar12 & 1) != 0) {
      lVar5 = *(long *)(param_4 + 0x50);
      if (lVar5 == 0) {
LAB_04531894:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar13 = (float)UnityEngine_CanvasGroup__get_alpha(lVar5,0);
      if (*(long *)(param_4 + 0x58) == 0) goto LAB_04531894;
      fVar8 = *(float *)(param_4 + 0x80);
      fVar14 = (float)UnityEngine_AnimationCurve__Evaluate
                                (*(undefined4 *)(param_4 + 0x88),*(long *)(param_4 + 0x58),0);
      UnityEngine_CanvasGroup__set_alpha(fVar13 + fVar7 * (fVar8 * fVar14 - fVar13),lVar5,0);
    }
    lVar5 = *(long *)(param_4 + 0x38);
    if ((lVar5 != 0) && (uVar1 = *(uint *)(lVar5 + 0x18), 0 < (int)uVar1)) {
      lVar6 = 0;
      do {
        if (uVar1 <= (uint)lVar6) {
LAB_04531898:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar4 = *(long *)(lVar5 + 0x20 + lVar6 * 8);
        if (lVar4 == 0) goto LAB_04531894;
        fVar13 = (float)UnityEngine_RectTransform__get_sizeDelta(lVar4,0);
        UnityEngine_RectTransform__set_sizeDelta
                  (fVar13 + fVar7 * (*(float *)(param_4 + 0x84) - fVar13),lVar4,0);
        uVar1 = *(uint *)(lVar5 + 0x18);
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < (int)uVar1);
    }
  }
  return;
}


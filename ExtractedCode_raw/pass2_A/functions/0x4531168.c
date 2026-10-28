// rea decompile_all
// name: Utilities.UI.UICardFlowLayoutControl$$Update
// address: 0x4531168
// body: available
// range: 0x4531168-0x4531433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x453142c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4531430 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UI_UICardFlowLayoutControl__Update
               (undefined1 param_1 [16],float param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((DAT_0951863f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951863f = 1;
  }
  if (*(char *)(param_3 + 0x44) == '\0') {
    fVar12 = (float)UnityEngine_Time__get_deltaTime(0);
  }
  else {
    fVar12 = (float)UnityEngine_Time__get_unscaledDeltaTime(0);
  }
  if (0.0 < fVar12) {
    lVar8 = *(long *)(param_3 + 0x28);
    if (lVar8 == 0) {
LAB_0453142c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) {
LAB_04531430:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar10 = *(long *)(lVar8 + (long)(int)uVar9 * 8 + 0x20);
        if (lVar10 == 0) goto LAB_0453142c;
        uVar7 = *(undefined8 *)(lVar10 + 0x18);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar7,0,0);
        if ((uVar2 & 1) != 0) {
          if ((*(long *)(lVar10 + 0x18) == 0) ||
             (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(lVar10 + 0x18),0), lVar3 == 0)
             ) goto LAB_0453142c;
          uVar2 = UnityEngine_GameObject__get_activeSelf(lVar3,0);
          if ((uVar2 & 1) != 0) {
            lVar3 = *(long *)(lVar10 + 0x18);
            if (lVar3 == 0) goto LAB_0453142c;
            fVar13 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar3,0);
            fVar15 = fVar12 * *(float *)(param_3 + 0x40);
            fVar14 = 1.0;
            if (fVar15 <= 1.0) {
              fVar14 = fVar15;
            }
            fVar16 = 0.0;
            if (0.0 <= fVar15) {
              fVar16 = fVar14;
            }
            param_2 = param_2 + (*(float *)(lVar10 + 0x24) - param_2) * fVar16;
            UnityEngine_RectTransform__set_anchoredPosition
                      (fVar13 + (*(float *)(lVar10 + 0x20) - fVar13) * fVar16,param_2,lVar3,0);
          }
        }
        lVar10 = *(long *)(lVar10 + 0x10);
        if (lVar10 == 0) goto LAB_0453142c;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (0 < (int)uVar1) {
          uVar2 = 0;
          do {
            if (uVar1 <= uVar2) goto LAB_04531430;
            lVar3 = *(long *)(lVar10 + uVar2 * 8 + 0x20);
            if ((lVar3 == 0) || (lVar5 = *(long *)(lVar3 + 0x10), lVar5 == 0)) goto LAB_0453142c;
            uVar11 = 0;
            while ((long)uVar11 < (long)(int)*(uint *)(lVar5 + 0x18)) {
              if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_04531430;
              uVar7 = *(undefined8 *)(lVar5 + uVar11 * 8 + 0x20);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar4 = UnityEngine_Object__op_Equality(uVar7,0,0);
              if ((uVar4 & 1) == 0) {
                lVar5 = *(long *)(lVar3 + 0x10);
                if (lVar5 == 0) goto LAB_0453142c;
                if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_04531430;
                lVar5 = *(long *)(lVar5 + uVar11 * 8 + 0x20);
                if ((lVar5 == 0) ||
                   (lVar5 = UnityEngine_Component__get_gameObject(lVar5,0), lVar5 == 0))
                goto LAB_0453142c;
                uVar4 = UnityEngine_GameObject__get_activeSelf(lVar5,0);
                if ((uVar4 & 1) != 0) {
                  lVar5 = *(long *)(lVar3 + 0x10);
                  if (lVar5 == 0) goto LAB_0453142c;
                  if (*(uint *)(lVar5 + 0x18) <= uVar11) goto LAB_04531430;
                  lVar5 = *(long *)(lVar5 + uVar11 * 8 + 0x20);
                  if (lVar5 == 0) goto LAB_0453142c;
                  fVar14 = (float)UnityEngine_RectTransform__get_anchoredPosition(lVar5,0);
                  lVar6 = *(long *)(lVar3 + 0x18);
                  if (lVar6 == 0) goto LAB_0453142c;
                  if (*(uint *)(lVar6 + 0x18) <= uVar11) goto LAB_04531430;
                  lVar6 = lVar6 + uVar11 * 8;
                  fVar15 = fVar12 * *(float *)(param_3 + 0x40);
                  fVar13 = 1.0;
                  if (fVar15 <= 1.0) {
                    fVar13 = fVar15;
                  }
                  fVar16 = 0.0;
                  if (0.0 <= fVar15) {
                    fVar16 = fVar13;
                  }
                  param_2 = param_2 + (*(float *)(lVar6 + 0x24) - param_2) * fVar16;
                  UnityEngine_RectTransform__set_anchoredPosition
                            (fVar14 + (*(float *)(lVar6 + 0x20) - fVar14) * fVar16,param_2,lVar5,0);
                }
              }
              lVar5 = *(long *)(lVar3 + 0x10);
              uVar11 = uVar11 + 1;
              if (lVar5 == 0) goto LAB_0453142c;
            }
            uVar1 = *(uint *)(lVar10 + 0x18);
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < (int)uVar1);
        }
        uVar1 = *(uint *)(lVar8 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar1);
    }
  }
  return;
}


// rea decompile_all
// name: Utilities.UI.UICardFlowLayoutControl$$SetUp
// address: 0x45302b0
// body: available
// range: 0x45302b0-0x4530833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4530828 to 0x4530834 Utilities.UI.UICardFlowLayoutControl$$UpdateVisualImmediate (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x453082c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4530830 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Utilities_UI_UICardFlowLayoutControl__SetUp
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  
  if ((DAT_0951863a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5430);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_091807e8);
    DAT_0951863a = 1;
  }
  plVar9 = (long *)(param_4 + 0x20);
  lVar11 = *plVar9;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(lVar11,0,0);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_04a6a14c(param_4,DAT_091c5430);
    *(undefined8 *)(param_4 + 0x20) = uVar2;
    thunk_FUN_03f5d7b8(plVar9,uVar2);
  }
  lVar11 = *(long *)(param_4 + 0x28);
  if (lVar11 != 0) {
    uVar5 = *(uint *)(lVar11 + 0x18);
    if ((int)uVar5 < 1) {
      uVar10 = 0;
    }
    else {
      uVar8 = 0;
      uVar10 = 0;
      do {
        if (uVar5 <= uVar8) goto LAB_04530830;
        lVar15 = *(long *)(lVar11 + (long)(int)uVar8 * 8 + 0x20);
        if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x10), lVar16 == 0)) goto LAB_0453082c;
        uVar5 = *(uint *)(lVar16 + 0x18);
        if ((int)uVar10 <= (int)uVar5) {
          uVar10 = uVar5;
        }
        if (0 < (int)uVar5) {
          uVar17 = 0;
          do {
            if (uVar5 <= uVar17) goto LAB_04530830;
            lVar14 = *(long *)(lVar16 + (ulong)uVar17 * 8 + 0x20);
            if (lVar14 == 0) goto LAB_0453082c;
            lVar7 = *(long *)(lVar14 + 0x18);
            lVar6 = *(long *)(lVar14 + 0x10);
            if (lVar7 == 0) {
              if (lVar6 == 0) goto LAB_0453082c;
LAB_04530414:
              uVar2 = FUN_03f5c394(DAT_091807e8,*(undefined4 *)(lVar6 + 0x18));
              *(undefined8 *)(lVar14 + 0x18) = uVar2;
              thunk_FUN_03f5d7b8((long *)(lVar14 + 0x18),uVar2);
              lVar6 = *(long *)(lVar14 + 0x10);
              if (lVar6 == 0) goto LAB_0453082c;
            }
            else {
              if (lVar6 == 0) goto LAB_0453082c;
              if (*(int *)(lVar7 + 0x18) != *(int *)(lVar6 + 0x18)) goto LAB_04530414;
            }
            lVar13 = 0;
            lVar7 = 4;
            while( true ) {
              uVar1 = lVar7 - 4;
              if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar1) break;
              if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_04530830;
              uVar2 = *(undefined8 *)(lVar6 + lVar7 * 8);
              if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar3 = UnityEngine_Object__op_Equality(uVar2,0,0);
              if ((uVar3 & 1) == 0) {
                lVar6 = *(long *)(lVar14 + 0x10);
                if (lVar6 == 0) goto LAB_0453082c;
                if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_04530830;
                lVar6 = *(long *)(lVar6 + lVar7 * 8);
                if (lVar6 == 0) goto LAB_0453082c;
                UnityEngine_Transform__SetParent(lVar6,*plVar9,0,0);
                lVar6 = *(long *)(lVar14 + 0x10);
                if (lVar6 == 0) goto LAB_0453082c;
                if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_04530830;
                lVar6 = *(long *)(lVar6 + lVar7 * 8);
                if (lVar6 == 0) goto LAB_0453082c;
                uVar19 = 0;
                uVar18 = uVar19;
                if (*(int *)(param_4 + 0x30) != 0) {
                  uVar18 = 0x3f800000;
                }
                UnityEngine_RectTransform__set_anchorMin(0,uVar18,lVar6,0);
                lVar6 = *(long *)(lVar14 + 0x10);
                if (lVar6 == 0) goto LAB_0453082c;
                if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_04530830;
                lVar6 = *(long *)(lVar6 + lVar7 * 8);
                if (lVar6 == 0) goto LAB_0453082c;
                if (*(int *)(param_4 + 0x30) != 0) {
                  uVar19 = 0x3f800000;
                }
                UnityEngine_RectTransform__set_anchorMax(0,lVar6,0);
                lVar6 = *(long *)(lVar14 + 0x10);
                if (lVar6 == 0) goto LAB_0453082c;
                if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_04530830;
                lVar6 = *(long *)(lVar6 + lVar7 * 8);
                if (lVar6 == 0) goto LAB_0453082c;
                lVar12 = *(long *)(lVar14 + 0x18);
                uVar18 = UnityEngine_RectTransform__get_anchoredPosition(lVar6,0);
                if (lVar12 == 0) goto LAB_0453082c;
                if (*(uint *)(lVar12 + 0x18) <= uVar1) goto LAB_04530830;
                *(undefined4 *)(lVar12 + lVar13 + 0x20) = uVar18;
                *(undefined4 *)(lVar12 + lVar13 + 0x24) = uVar19;
              }
              lVar6 = *(long *)(lVar14 + 0x10);
              lVar7 = lVar7 + 1;
              lVar13 = lVar13 + 8;
              if (lVar6 == 0) goto LAB_0453082c;
            }
            uVar5 = *(uint *)(lVar16 + 0x18);
            uVar17 = uVar17 + 1;
          } while ((int)uVar17 < (int)uVar5);
        }
        uVar2 = *(undefined8 *)(lVar15 + 0x18);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = UnityEngine_Object__op_Equality(uVar2,0,0);
        if ((uVar1 & 1) == 0) {
          if (*(long *)(lVar15 + 0x18) == 0) goto LAB_0453082c;
          UnityEngine_Transform__SetParent(*(long *)(lVar15 + 0x18),*plVar9,0,0);
          if (*(long *)(lVar15 + 0x18) == 0) goto LAB_0453082c;
          uVar19 = 0;
          uVar18 = uVar19;
          if (*(int *)(param_4 + 0x30) != 0) {
            uVar18 = 0x3f800000;
          }
          UnityEngine_RectTransform__set_anchorMin(0,uVar18,*(long *)(lVar15 + 0x18),0);
          if (*(long *)(lVar15 + 0x18) == 0) goto LAB_0453082c;
          if (*(int *)(param_4 + 0x30) != 0) {
            uVar19 = 0x3f800000;
          }
          UnityEngine_RectTransform__set_anchorMax(0,*(long *)(lVar15 + 0x18),0);
          if (*(long *)(lVar15 + 0x18) == 0) goto LAB_0453082c;
          uVar18 = UnityEngine_RectTransform__get_anchoredPosition(*(long *)(lVar15 + 0x18),0);
          *(undefined4 *)(lVar15 + 0x20) = uVar18;
          *(undefined4 *)(lVar15 + 0x24) = uVar19;
        }
        uVar5 = *(uint *)(lVar11 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar5);
    }
    if (*plVar9 != 0) {
      UnityEngine_RectTransform__get_rect(*plVar9,0);
      fVar20 = param_3;
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar11 = *(long *)(param_4 + 0x28);
      *(float *)(param_4 + 0x48) =
           (param_3 - *(float *)(param_4 + 0x34) * (float)(int)(uVar10 - 1)) / (float)(int)uVar10;
      if (lVar11 != 0) {
        uVar5 = *(uint *)(lVar11 + 0x18);
        if (0 < (int)uVar5) {
          uVar10 = 0;
          do {
            if (uVar5 <= uVar10) {
LAB_04530830:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar15 = *(long *)(lVar11 + (long)(int)uVar10 * 8 + 0x20);
            if ((lVar15 == 0) || (lVar16 = *(long *)(lVar15 + 0x10), lVar16 == 0))
            goto LAB_0453082c;
            uVar5 = *(uint *)(lVar16 + 0x18);
            if (0 < (int)uVar5) {
              uVar1 = 0;
              do {
                if (uVar5 <= uVar1) goto LAB_04530830;
                lVar14 = *(long *)(lVar16 + uVar1 * 8 + 0x20);
                if ((lVar14 == 0) || (lVar6 = *(long *)(lVar14 + 0x10), lVar6 == 0))
                goto LAB_0453082c;
                lVar7 = 4;
                while( true ) {
                  uVar3 = lVar7 - 4;
                  if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar3) break;
                  if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_04530830;
                  uVar2 = *(undefined8 *)(lVar6 + lVar7 * 8);
                  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar4 = UnityEngine_Object__op_Equality(uVar2,0,0);
                  if ((uVar4 & 1) == 0) {
                    lVar6 = *(long *)(lVar14 + 0x10);
                    if (lVar6 == 0) goto LAB_0453082c;
                    if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_04530830;
                    lVar6 = *(long *)(lVar6 + lVar7 * 8);
                    if (lVar6 == 0) goto LAB_0453082c;
                    UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                              (*(undefined4 *)(param_4 + 0x48),lVar6,0,0);
                  }
                  lVar6 = *(long *)(lVar14 + 0x10);
                  lVar7 = lVar7 + 1;
                  if (lVar6 == 0) goto LAB_0453082c;
                }
                uVar5 = *(uint *)(lVar16 + 0x18);
                uVar1 = uVar1 + 1;
              } while ((int)uVar1 < (int)uVar5);
            }
            uVar2 = *(undefined8 *)(lVar15 + 0x18);
            fVar21 = fVar20;
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
              fVar21 = fVar20;
            }
            uVar1 = UnityEngine_Object__op_Equality(uVar2,0,0);
            fVar20 = fVar21;
            if ((uVar1 & 1) == 0) {
              if (*plVar9 == 0) goto LAB_0453082c;
              lVar15 = *(long *)(lVar15 + 0x18);
              UnityEngine_RectTransform__get_rect(*plVar9,0);
              fVar20 = fVar21;
              if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              if (lVar15 == 0) goto LAB_0453082c;
              UnityEngine_RectTransform__SetSizeWithCurrentAnchors(fVar21,lVar15,0,0);
            }
            uVar5 = *(uint *)(lVar11 + 0x18);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar5);
        }
        *(undefined1 *)(param_4 + 0x4c) = 1;
        Utilities_UI_UICardFlowLayoutControl__UpdateVisualImmediate(param_4);
        return;
      }
    }
  }
LAB_0453082c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


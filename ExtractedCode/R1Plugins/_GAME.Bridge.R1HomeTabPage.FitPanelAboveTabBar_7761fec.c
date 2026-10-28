// rea decompile_all
// name: _GAME.Bridge.R1HomeTabPage$$FitPanelAboveTabBar
// address: 0x7761fec
// body: available
// range: 0x7761fec-0x7762393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x776236c to 0x866b6e0 UnityEngine.RectTransform$$set_offsetMin (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x776238c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7762390 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_R1HomeTabPage__FitPanelAboveTabBar
               (undefined1 param_1 [16],ulong param_2,long param_3)

{
  uint uVar1;
  float fVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  undefined4 uVar13;
  float fVar14;
  
  if ((DAT_09522c3f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5828);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_09522c3f = 1;
  }
  uVar3 = _GAME_Bridge_R1HomeTabPage__get_PanelObject(param_3);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar4 = UnityEngine_Object__op_Implicit(uVar3,0);
  plVar8 = (long *)0x0;
  if ((uVar4 & 1) != 0) {
    lVar5 = _GAME_Bridge_R1HomeTabPage__get_PanelObject(param_3);
    if (lVar5 == 0) goto LAB_0776238c;
    plVar8 = (long *)UnityEngine_GameObject__get_transform(lVar5,0);
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else if (*plVar8 != DAT_09189c98) {
      plVar8 = (long *)0x0;
    }
  }
  lVar5 = _GAME_Bridge_CookOrderBridge__GetHomeTabNavButton(*(int *)(param_3 + 0x68) == 6);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar4 = UnityEngine_Object__op_Inequality(lVar5,0,0);
  plVar10 = (long *)0x0;
  if ((uVar4 & 1) != 0) {
    if (lVar5 == 0) goto LAB_0776238c;
    plVar10 = (long *)UnityEngine_Transform__GetParent(lVar5,0);
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else if (*plVar10 != DAT_09189c98) {
      plVar10 = (long *)0x0;
    }
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Inequality(plVar8,0,0);
  plVar9 = (long *)0x0;
  if ((uVar4 & 1) != 0) {
    if (plVar8 == (long *)0x0) goto LAB_0776238c;
    plVar9 = (long *)UnityEngine_Transform__GetParent(plVar8,0);
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else if (*plVar9 != DAT_09189c98) {
      plVar9 = (long *)0x0;
    }
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Equality(plVar8,0,0);
  if ((uVar4 & 1) == 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Equality(plVar10,0,0);
    if ((uVar4 & 1) == 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Equality(plVar9,0,0);
      if ((uVar4 & 1) == 0) {
        lVar5 = FUN_03f5c394(DAT_091807f8,4);
        if (plVar10 != (long *)0x0) {
          lVar6 = FUN_04a6ac70(plVar10,0,DAT_091c5828);
          fVar14 = (float)param_2;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if ((int)uVar1 < 1) {
              fVar7 = -3.4028235e+38;
            }
            else {
              uVar12 = 0;
              fVar7 = -3.4028235e+38;
              do {
                if (uVar1 <= uVar12) {
LAB_07762390:
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar11 = *(long *)(lVar6 + (long)(int)uVar12 * 8 + 0x20);
                if (lVar11 == 0) goto LAB_0776238c;
                uVar4 = UnityEngine_Behaviour__get_enabled(lVar11,0);
                if ((uVar4 & 1) != 0) {
                  lVar11 = UnityEngine_UI_Graphic__get_rectTransform(lVar11,0);
                  if ((lVar11 == 0) ||
                     (UnityEngine_RectTransform__GetWorldCorners(lVar11,lVar5,0), lVar5 == 0))
                  goto LAB_0776238c;
                  if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_07762390;
                  if (plVar9 == (long *)0x0) goto LAB_0776238c;
                  param_2 = (ulong)*(uint *)(lVar5 + 0x30);
                  UnityEngine_Transform__InverseTransformPoint
                            (*(undefined4 *)(lVar5 + 0x2c),param_2,*(undefined4 *)(lVar5 + 0x34),
                             plVar9,0);
                  if (fVar7 <= (float)param_2) {
                    fVar7 = (float)param_2;
                  }
                }
                fVar14 = (float)param_2;
                uVar1 = *(uint *)(lVar6 + 0x18);
                uVar12 = uVar12 + 1;
              } while ((int)uVar12 < (int)uVar1);
            }
            if (fVar7 == -3.4028235e+38) {
              return;
            }
            if ((plVar8 != (long *)0x0) &&
               (uVar13 = UnityEngine_RectTransform__get_offsetMin(plVar8,0), plVar9 != (long *)0x0))
            {
              UnityEngine_RectTransform__get_rect(plVar9,0);
              if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              fVar2 = 0.0;
              if (0.0 <= fVar7 - fVar14) {
                fVar2 = fVar7 - fVar14;
              }
              UnityEngine_RectTransform__set_offsetMin(uVar13,fVar2,plVar8,0);
              return;
            }
          }
        }
LAB_0776238c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
  return;
}


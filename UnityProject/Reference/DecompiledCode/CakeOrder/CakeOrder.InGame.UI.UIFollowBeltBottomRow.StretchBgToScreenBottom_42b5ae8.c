// rea decompile_all
// name: CakeOrder.InGame.UI.UIFollowBeltBottomRow$$StretchBgToScreenBottom
// address: 0x42b5ae8
// body: available
// range: 0x42b5ae8-0x42b5c97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b5c78 to 0x866b6e0 UnityEngine.RectTransform$$set_offsetMin (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42b5c8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b5c90 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b5c94 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UI_UIFollowBeltBottomRow__StretchBgToScreenBottom(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((DAT_095172cd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_095172cd = 1;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar1 = UnityEngine_Transform__GetParent(*(long *)(param_1 + 0x20),0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Implicit(lVar1,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (plVar3 = (long *)UnityEngine_Component__get_transform(*(long *)(param_1 + 0x38),0),
       plVar3 != (long *)0x0)) {
      if (*plVar3 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      UnityEngine_RectTransform__GetWorldCorners(plVar3,*(undefined8 *)(param_1 + 0x28),0);
      lVar4 = *(long *)(param_1 + 0x28);
      if (lVar4 != 0) {
        if (*(int *)(lVar4 + 0x18) == 0) goto LAB_042b5c90;
        if (lVar1 != 0) {
          fVar6 = *(float *)(lVar4 + 0x24);
          UnityEngine_Transform__InverseTransformPoint
                    (*(undefined4 *)(lVar4 + 0x20),fVar6,*(undefined4 *)(lVar4 + 0x28),lVar1,0);
          if (*(long *)(param_1 + 0x20) != 0) {
            UnityEngine_RectTransform__GetWorldCorners
                      (*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),0);
            lVar4 = *(long *)(param_1 + 0x28);
            if (lVar4 != 0) {
              if (*(int *)(lVar4 + 0x18) == 0) {
LAB_042b5c90:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              fVar7 = *(float *)(lVar4 + 0x24);
              UnityEngine_Transform__InverseTransformPoint
                        (*(undefined4 *)(lVar4 + 0x20),fVar7,*(undefined4 *)(lVar4 + 0x28),lVar1,0);
              lVar4 = *(long *)(param_1 + 0x28);
              if (lVar4 != 0) {
                if ((*(uint *)(lVar4 + 0x18) & 0xfffffffe) == 0) goto LAB_042b5c90;
                fVar8 = *(float *)(lVar4 + 0x30);
                UnityEngine_Transform__InverseTransformPoint
                          (*(undefined4 *)(lVar4 + 0x2c),fVar8,*(undefined4 *)(lVar4 + 0x34),lVar1,0
                          );
                if (fVar8 <= fVar6) {
                  fVar6 = fVar8;
                }
                fVar8 = 0.01;
                if (ABS(fVar6 - fVar7) < 0.01) {
                  return;
                }
                if (*(long *)(param_1 + 0x20) != 0) {
                  uVar5 = UnityEngine_RectTransform__get_offsetMin(*(long *)(param_1 + 0x20),0);
                  if (*(long *)(param_1 + 0x20) != 0) {
                    UnityEngine_RectTransform__set_offsetMin
                              (uVar5,(fVar6 - fVar7) + fVar8,*(long *)(param_1 + 0x20),0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


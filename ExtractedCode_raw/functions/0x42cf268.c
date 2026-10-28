// rea decompile_all
// name: CakeOrder.BaseUI.UIPopupBlurBackdrop$$FitToCanvas
// address: 0x42cf268
// body: available
// range: 0x42cf268-0x42cf587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42cf56c to 0x866b604 UnityEngine.Transform$$set_localPosition (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42cf570 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42cf574 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42cf57c to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42cf584 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_UIPopupBlurBackdrop__FitToCanvas(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_09517390 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5630);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_091807f8);
    DAT_09517390 = 1;
  }
  lVar1 = UnityEngine_Component__get_transform(param_1,0);
  if (lVar1 != 0) {
    plVar2 = (long *)UnityEngine_Transform__GetParent(lVar1,0);
    if (plVar2 == (long *)0x0) {
      plVar2 = (long *)0x0;
    }
    else if (*plVar2 != DAT_09189c98) {
      plVar2 = (long *)0x0;
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Inequality(plVar2,0,0);
    lVar1 = 0;
    if ((uVar3 & 1) != 0) {
      if (plVar2 == (long *)0x0) goto LAB_042cf570;
      lVar1 = FUN_04a6a6d8(plVar2,DAT_091c5630);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Equality(lVar1,0,0);
    if ((uVar3 & 1) != 0) {
      return;
    }
    if ((lVar1 != 0) && (lVar1 = UnityEngine_Canvas__get_rootCanvas(lVar1,0), lVar1 != 0)) {
      plVar4 = (long *)UnityEngine_Component__get_transform(lVar1,0);
      lVar1 = FUN_03f5c394(DAT_091807f8,4);
      if (plVar4 != (long *)0x0) {
        if (*plVar4 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c8d0(plVar4);
        }
        UnityEngine_RectTransform__GetWorldCorners(plVar4,lVar1,0);
        if (lVar1 != 0) {
          if (*(int *)(lVar1 + 0x18) == 0) {
LAB_042cf574:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          if (plVar2 != (long *)0x0) {
            fVar8 = *(float *)(lVar1 + 0x24);
            fVar6 = (float)UnityEngine_Transform__InverseTransformPoint
                                     (*(undefined4 *)(lVar1 + 0x20),fVar8,
                                      *(undefined4 *)(lVar1 + 0x28),plVar2,0);
            if (*(uint *)(lVar1 + 0x18) < 3) goto LAB_042cf574;
            fVar9 = *(float *)(lVar1 + 0x3c);
            fVar7 = (float)UnityEngine_Transform__InverseTransformPoint
                                     (*(undefined4 *)(lVar1 + 0x38),fVar9,
                                      *(undefined4 *)(lVar1 + 0x40),plVar2,0);
            plVar2 = (long *)UnityEngine_Component__get_transform(param_1,0);
            if (plVar2 != (long *)0x0) {
              if (*plVar2 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c8d0(plVar2);
              }
              UnityEngine_RectTransform__set_pivot(0x3f000000,0x3f000000,plVar2,0);
              UnityEngine_RectTransform__set_anchorMax(0x3f000000,0x3f000000,plVar2,0);
              UnityEngine_RectTransform__set_anchorMin(0x3f000000,0x3f000000,plVar2,0);
              if (DAT_09515cf3 == '\0') {
                FUN_03f5c2a4(&DAT_0918cbd0);
                DAT_09515cf3 = '\x01';
              }
              lVar1 = *(long *)(DAT_0918cbd0 + 0xb8);
              UnityEngine_Transform__set_localScale
                        (*(undefined4 *)(lVar1 + 0xc),*(undefined4 *)(lVar1 + 0x10),
                         *(undefined4 *)(lVar1 + 0x14),plVar2,0);
              if (DAT_09515ed5 == '\0') {
                FUN_03f5c2a4(&DAT_091898c0);
                DAT_09515ed5 = '\x01';
              }
              puVar5 = *(undefined4 **)(DAT_091898c0 + 0xb8);
              UnityEngine_Transform__set_localRotation
                        (*puVar5,puVar5[1],puVar5[2],puVar5[3],plVar2,0);
              UnityEngine_RectTransform__set_sizeDelta(fVar7 - fVar6,fVar9 - fVar8,plVar2,0);
              UnityEngine_Transform__set_localPosition
                        ((fVar6 + fVar7) * 0.5,(fVar8 + fVar9) * 0.5,0,plVar2,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_042cf570:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


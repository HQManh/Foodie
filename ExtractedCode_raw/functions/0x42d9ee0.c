// rea decompile_all
// name: CakeOrder.BaseUI.UIScaleDownToFitParent$$ReadLocalExtent
// address: 0x42d9ee0
// body: available
// range: 0x42d9ee0-0x42da19b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42da0d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42da194 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42da198 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool CakeOrder_BaseUI_UIScaleDownToFitParent__ReadLocalExtent
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
               long param_5,float *param_6,float *param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  
  if ((DAT_095173f2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5870);
    FUN_03f5c2a4(&DAT_091aceb8);
    FUN_03f5c2a4(&DAT_091acec8);
    FUN_03f5c2a4(&DAT_091aced0);
    FUN_03f5c2a4(&DAT_09187e98);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_095173f2 = 1;
  }
  uVar2 = DAT_091c5870;
  uVar7 = *(undefined8 *)(param_5 + 0x58);
  *param_6 = -INFINITY;
  *param_7 = INFINITY;
  FUN_04a6ada0(param_5,0,uVar7,uVar2);
  lVar3 = *(long *)(param_5 + 0x58);
  if (lVar3 != 0) {
    iVar9 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 0x18);
      if (iVar1 <= iVar9) {
        *(undefined4 *)(lVar3 + 0x18) = 0;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (0 < iVar1) {
          System_Array__Clear(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
        }
        fVar10 = *param_6;
        if (ABS(fVar10) == INFINITY) {
          lVar3 = CakeOrder_BaseUI_UIScaleDownToFitParent__get_Rect(param_5);
          if (lVar3 == 0) break;
          UnityEngine_RectTransform__get_rect(lVar3,0);
          if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          *param_6 = param_4 + param_2;
          *param_7 = param_2;
          fVar10 = *param_6;
        }
        else {
          param_2 = *param_7;
        }
        return **(float **)(DAT_09187e98 + 0xb8) < fVar10 - param_2;
      }
      lVar3 = FUN_057e0998(lVar3,iVar9,DAT_091aced0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar4 = UnityEngine_Object__op_Equality(lVar3,0,0);
      if ((uVar4 & 1) == 0) {
        if (lVar3 == 0) break;
        uVar4 = UnityEngine_Behaviour__get_enabled(lVar3,0);
        if ((uVar4 & 1) != 0) {
          plVar5 = (long *)UnityEngine_Component__get_transform(lVar3,0);
          if (plVar5 == (long *)0x0) break;
          if (*plVar5 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c8d0();
          }
          UnityEngine_RectTransform__GetWorldCorners(plVar5,*(undefined8 *)(param_5 + 0x50),0);
          lVar3 = 0;
          uVar4 = 0;
          do {
            lVar6 = CakeOrder_BaseUI_UIScaleDownToFitParent__get_Rect(param_5);
            lVar8 = *(long *)(param_5 + 0x50);
            if (lVar8 == 0) goto LAB_042da0d0;
            if (*(uint *)(lVar8 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if (lVar6 == 0) goto LAB_042da0d0;
            lVar8 = lVar8 + lVar3;
            param_2 = *(float *)(lVar8 + 0x24);
            UnityEngine_Transform__InverseTransformPoint
                      (*(undefined4 *)(lVar8 + 0x20),param_2,*(undefined4 *)(lVar8 + 0x28),lVar6,0);
            if (*param_6 < param_2) {
              *param_6 = param_2;
            }
            if (param_2 < *param_7) {
              *param_7 = param_2;
            }
            uVar4 = uVar4 + 1;
            lVar3 = lVar3 + 0xc;
          } while (uVar4 != 4);
        }
      }
      lVar3 = *(long *)(param_5 + 0x58);
      iVar9 = iVar9 + 1;
    } while (lVar3 != 0);
  }
LAB_042da0d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


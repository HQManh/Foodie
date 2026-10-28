// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$EstimateScale
// address: 0x422e224
// body: available
// range: 0x422e224-0x422e4d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422e4cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x422e4d0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AnhPD_FoodOrder_OrderIngredientList__EstimateScale
                (undefined1 param_1 [16],float param_2,float param_3,float param_4,long param_5,
                int param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_09516da3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ae388);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09516da3 = 1;
  }
  if (*(long *)(param_5 + 0xb0) != 0) {
    UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0xb0),0);
    fVar10 = param_3;
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = *(undefined8 *)(param_5 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(uVar7,0);
    if ((uVar4 & 1) == 0) {
LAB_0422e35c:
      if (param_6 < 1) {
        fVar12 = 1.0;
      }
      else {
        fVar13 = 0.0;
        fVar12 = 1.0;
        iVar1 = 0;
        do {
          if (*(long *)(param_5 + 0x70) == 0) goto LAB_0422e4cc;
          lVar5 = FUN_057e0998(*(long *)(param_5 + 0x70),iVar1,DAT_091ae388);
          if ((*(long *)(param_5 + 0x98) == 0) ||
             (uVar3 = FUN_05796eb0(*(long *)(param_5 + 0x98),iVar1,DAT_091add20), lVar5 == 0))
          goto LAB_0422e4cc;
          fVar8 = (float)AnhPD_FoodOrder_ListIngredientBoardView__PreferredSize(lVar5,uVar3);
          uVar7 = *(undefined8 *)(param_5 + 0xb8);
          fVar9 = param_2;
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar7,0);
          if ((uVar4 & 1) == 0) {
LAB_0422e408:
            if (((*(long *)(param_5 + 0x70) == 0) ||
                (lVar5 = FUN_057e0998(*(long *)(param_5 + 0x70),iVar1,DAT_091ae388), lVar5 == 0)) ||
               (plVar6 = (long *)UnityEngine_Component__get_transform(lVar5,0),
               plVar6 == (long *)0x0)) goto LAB_0422e4cc;
            if (*plVar6 != DAT_09189c98) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0();
            }
            UnityEngine_RectTransform__get_rect(plVar6,0);
            fVar11 = fVar10;
            if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
              FUN_03f5c424();
            }
          }
          else {
            if (*(long *)(param_5 + 0xb8) == 0) goto LAB_0422e4cc;
            fVar11 = param_3;
            if (*(char *)(*(long *)(param_5 + 0xb8) + 0x66) == '\0') goto LAB_0422e408;
          }
          if ((0.0 < fVar8) && (fVar11 / fVar8 <= fVar12)) {
            fVar12 = fVar11 / fVar8;
          }
          fVar13 = fVar13 + param_2;
          iVar1 = iVar1 + 1;
          param_2 = fVar9;
        } while (param_6 != iVar1);
        if ((0.0 < fVar13) && (param_4 / fVar13 <= fVar12)) {
          fVar12 = param_4 / fVar13;
        }
      }
      fVar10 = 0.0;
      if (0.0 <= fVar12) {
        fVar10 = fVar12;
      }
      return fVar10;
    }
    if ((*(long *)(param_5 + 0xb8) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_5 + 0xb8) + 0x20), lVar5 != 0)) {
      iVar1 = UnityEngine_RectOffset__get_horizontal(lVar5,0);
      if ((*(long *)(param_5 + 0xb8) != 0) &&
         (lVar5 = *(long *)(*(long *)(param_5 + 0xb8) + 0x20), lVar5 != 0)) {
        iVar2 = UnityEngine_RectOffset__get_vertical(lVar5,0);
        if (*(long *)(param_5 + 0xb8) != 0) {
          fVar10 = (float)iVar2;
          param_2 = (float)iVar1;
          param_3 = param_3 - param_2;
          param_4 = param_4 - (*(float *)(*(long *)(param_5 + 0xb8) + 0x60) * (float)(param_6 + -1)
                              + fVar10);
          goto LAB_0422e35c;
        }
      }
    }
  }
LAB_0422e4cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


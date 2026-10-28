// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$RelayoutBoards
// address: 0x422c62c
// body: available
// range: 0x422c62c-0x422c85f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422c85c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderIngredientList__RelayoutBoards(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  if ((DAT_09516d9f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091ae388);
    FUN_03f5c2a4(&DAT_091add20);
    DAT_09516d9f = 1;
  }
  if (*(char *)(param_1 + 0xf0) == '\0') {
    if ((*(long *)(param_1 + 0x78) == 0) || (*(long *)(param_1 + 0x98) == 0)) {
LAB_0422c85c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar1 = *(int *)(*(long *)(param_1 + 0x78) + 0x18);
    iVar7 = *(int *)(*(long *)(param_1 + 0x98) + 0x18);
    if (iVar7 <= iVar1) {
      iVar1 = iVar7;
    }
    if (0 < iVar1) {
      fVar9 = 1.0;
      iVar7 = 0;
      do {
        if (((*(long *)(param_1 + 0x70) == 0) ||
            (lVar4 = FUN_057e0998(*(long *)(param_1 + 0x70),iVar7,DAT_091ae388), lVar4 == 0)) ||
           (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0)) goto LAB_0422c85c;
        uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
        if ((uVar5 & 1) != 0) {
          if (*(long *)(param_1 + 0x70) == 0) goto LAB_0422c85c;
          lVar4 = FUN_057e0998(*(long *)(param_1 + 0x70),iVar7,DAT_091ae388);
          if ((*(long *)(param_1 + 0x98) == 0) ||
             (uVar2 = FUN_05796eb0(*(long *)(param_1 + 0x98),iVar7,DAT_091add20), lVar4 == 0))
          goto LAB_0422c85c;
          fVar8 = (float)AnhPD_FoodOrder_ListIngredientBoardView__FitScale(lVar4,uVar2);
          if (fVar8 <= fVar9) {
            fVar9 = fVar8;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar1 != iVar7);
      if (0 < iVar1) {
        iVar7 = 0;
        do {
          if (((*(long *)(param_1 + 0x70) == 0) ||
              (lVar4 = FUN_057e0998(*(long *)(param_1 + 0x70),iVar7,DAT_091ae388), lVar4 == 0)) ||
             (lVar4 = UnityEngine_Component__get_gameObject(lVar4,0), lVar4 == 0))
          goto LAB_0422c85c;
          uVar5 = UnityEngine_GameObject__get_activeSelf(lVar4,0);
          if ((uVar5 & 1) != 0) {
            if (*(long *)(param_1 + 0x70) == 0) goto LAB_0422c85c;
            lVar4 = FUN_057e0998(*(long *)(param_1 + 0x70),iVar7,DAT_091ae388);
            if (*(char *)(param_1 + 0x11c) == '\0') {
              uVar2 = AnhPD_FoodOrder_OrderIngredientList__NormalScale(fVar9,param_1,iVar7);
            }
            else {
              if (*(long *)(param_1 + 0x70) == 0) goto LAB_0422c85c;
              lVar6 = FUN_057e0998(*(long *)(param_1 + 0x70),iVar7,DAT_091ae388);
              if ((*(long *)(param_1 + 0x98) == 0) ||
                 (uVar2 = FUN_05796eb0(*(long *)(param_1 + 0x98),iVar7,DAT_091add20), lVar6 == 0))
              goto LAB_0422c85c;
              uVar2 = AnhPD_FoodOrder_ListIngredientBoardView__FitScale(lVar6,uVar2);
            }
            if ((*(long *)(param_1 + 0x98) == 0) ||
               (uVar3 = FUN_05796eb0(*(long *)(param_1 + 0x98),iVar7,DAT_091add20), lVar4 == 0))
            goto LAB_0422c85c;
            AnhPD_FoodOrder_ListIngredientBoardView__Relayout(uVar2,0,lVar4,uVar3);
          }
          iVar7 = iVar7 + 1;
        } while (iVar1 != iVar7);
      }
    }
  }
  return;
}


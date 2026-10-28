// rea decompile_all
// name: AnhPD.FoodOrder.OrderBoard$$TryPeekIngredients
// address: 0x4226c24
// body: available
// range: 0x4226c24-0x4226e33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4226e28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4226e30 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_OrderBoard__TryPeekIngredients
          (long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_09516d64 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a82d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c98);
    DAT_09516d64 = 1;
  }
  if (*(long *)(param_1 + 0x80) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
    if ((((uVar3 & 1) != 0) && (*(int *)(param_1 + 0x68) < 0)) &&
       ((*(uint *)(param_1 + 0xa0) | 2) == 2)) {
      uVar1 = *(undefined4 *)(param_1 + 0x58);
      uVar3 = AnhPD_FoodOrder_OrderBoard__CanOpen(param_1,uVar1);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x60) != 0) {
          FUN_053d8048(*(long *)(param_1 + 0x60),uVar1,DAT_091a82b0);
          uVar5 = AnhPD_FoodOrder_OrderBoard__BuildPreviewQueue(param_1);
          lVar6 = *(long *)(param_1 + 0x40);
          uVar2 = AnhPD_FoodOrder_OrderBoard__PreviewIndexOf(param_1,uVar1);
          plVar4 = (long *)UnityEngine_Component__get_transform(param_1,0);
          if (lVar6 != 0) {
            if ((plVar4 != (long *)0x0) && (*plVar4 != DAT_09189c98)) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c8d0(plVar4);
            }
            uVar3 = AnhPD_FoodOrder_OrderIngredientList__ShowPeek
                              (lVar6,uVar5,uVar2,plVar4,param_2,param_3,param_4 & 1);
            if ((uVar3 & 1) == 0) {
              if (*(long *)(param_1 + 0x60) != 0) {
                FUN_053d7700(*(long *)(param_1 + 0x60),uVar1,DAT_091a82d8);
                AnhPD_FoodOrder_OrderBoard__BuildPreviewQueue(param_1);
                return 0;
              }
            }
            else {
              AnhPD_FoodOrder_OrderBoard__StopPreviewRoutine(param_1);
              if (*(long *)(param_1 + 0x40) != 0) {
                if ((*(char *)(*(long *)(param_1 + 0x40) + 0x11d) == '\0') &&
                   (uVar3 = AnhPD_FoodOrder_OrderBoard__HasOtherOrders(param_1,uVar1),
                   (uVar3 & 1) == 0)) {
                  uVar2 = 2;
                  *(undefined4 *)(param_1 + 0x68) = uVar1;
                }
                else {
                  uVar2 = 1;
                }
                *(undefined4 *)(param_1 + 0xa0) = uVar2;
                uVar5 = AnhPD_FoodOrder_OrderBoard__PeekInRoutine(param_1);
                uVar5 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar5,0);
                *(undefined8 *)(param_1 + 0x88) = uVar5;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x88),uVar5);
                return 1;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
  return 0;
}


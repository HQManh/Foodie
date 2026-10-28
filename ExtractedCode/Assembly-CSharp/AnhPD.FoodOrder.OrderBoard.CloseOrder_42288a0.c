// rea decompile_all
// name: AnhPD.FoodOrder.OrderBoard$$CloseOrder
// address: 0x42288a0
// body: available
// range: 0x42288a0-0x42289c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42289a8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42289bc to 0x42289c4 AnhPD.FoodOrder.OrderBoard$$RedrawOpenOrders (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42289c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderBoard__CloseOrder(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_09516d6a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a82d8);
    FUN_03f5c2a4(&DAT_091aed48);
    DAT_09516d6a = 1;
  }
  uVar2 = AnhPD_FoodOrder_OrderBoard__PreviewIndexOf(param_1,param_2);
  if (*(long *)(param_1 + 0x60) == 0) goto LAB_042289c0;
  iVar1 = *(int *)(param_1 + 0x68);
  FUN_053d7700(*(long *)(param_1 + 0x60),param_2,DAT_091a82d8);
  if (iVar1 == param_2) {
    *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0xa0) == 2) {
    lVar3 = AnhPD_FoodOrder_OrderBoard__BuildPreviewQueue(param_1);
    if (lVar3 == 0) {
LAB_042289c0:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < *(int *)(lVar3 + 0x18)) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_042289c0;
      lVar3 = AnhPD_FoodOrder_OrderIngredientList__SlideOutBoard(*(long *)(param_1 + 0x40),uVar2);
      if (lVar3 != 0) {
        AnhPD_FoodOrder_OrderBoard__StopPreviewRoutine(param_1);
        AnhPD_FoodOrder_OrderBoard__CoverBoardWithList(param_1);
        uVar4 = AnhPD_FoodOrder_OrderBoard__CloseOneRoutine(param_1,lVar3);
        uVar4 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar4,0);
        *(undefined8 *)(param_1 + 0x88) = uVar4;
        thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x88),uVar4);
        return;
      }
    }
  }
  AnhPD_FoodOrder_OrderBoard__RedrawOpenOrders(param_1);
  return;
}


// rea decompile_all
// name: AnhPD.FoodOrder.OrderBoard$$RedrawOpenOrders
// address: 0x42289c4
// body: available
// range: 0x42289c4-0x4228a6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4228a38 to 0x4228528 AnhPD.FoodOrder.OrderBoard$$CoverBoardWithList (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4228a68 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4228a6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderBoard__RedrawOpenOrders(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((DAT_09516d6c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aed48);
    DAT_09516d6c = 1;
  }
  AnhPD_FoodOrder_OrderBoard__StopPreviewRoutine(param_1);
  auVar5 = AnhPD_FoodOrder_OrderBoard__BuildPreviewQueue(param_1);
  lVar1 = auVar5._0_8_;
  lVar4 = auVar5._8_8_;
  if (lVar1 != 0) {
    if (0 < *(int *)(lVar1 + 0x18)) {
      lVar4 = lVar1;
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_04228a6c;
      uVar2 = AnhPD_FoodOrder_OrderIngredientList__Show();
      if ((uVar2 & 1) != 0) {
        *(undefined4 *)(param_1 + 0xa0) = 2;
        AnhPD_FoodOrder_OrderBoard__CoverBoardWithList(param_1);
        return;
      }
    }
    uVar3 = AnhPD_FoodOrder_OrderBoard__DismissRoutine(param_1);
    uVar3 = UnityEngine_MonoBehaviour__StartCoroutine(param_1,uVar3,0);
    *(undefined8 *)(param_1 + 0x88) = uVar3;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x88),uVar3);
    return;
  }
LAB_04228a6c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550(0,lVar4);
}


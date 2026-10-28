// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$SlideBoardOut
// address: 0x422e940
// body: available
// range: 0x422e940-0x422ea97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422ea90 to 0x4d95e8c FUN_04d95e8c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x422ea94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderIngredientList__SlideBoardOut
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
               long param_5,long param_6,ulong param_7)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((DAT_09516dac & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_091dbe90);
    DAT_09516dac = 1;
  }
  if (*(long *)(param_5 + 0xb0) != 0) {
    UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0xb0),0);
    fVar4 = param_2;
    fVar2 = param_4;
    AnhPD_FoodOrder_OrderIngredientList__LocalRect(*(undefined8 *)(param_5 + 0xb0),param_6);
    fVar3 = fVar4;
    if ((param_7 & 1) == 0) {
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar4 = (fVar2 + fVar4) - param_2;
    }
    else {
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      fVar4 = (param_4 + param_2) - fVar4;
    }
    if (param_6 != 0) {
      fVar2 = (float)UnityEngine_RectTransform__get_anchoredPosition(param_6,0);
      if (DAT_09516afb == '\0') {
        FUN_03f5c2a4(&DAT_0918cb68);
        DAT_09516afb = '\x01';
      }
      if ((param_7 & 1) == 0) {
        fVar4 = -fVar4;
      }
      uVar1 = DG_Tweening_DOTweenModuleUI__DOAnchorPos
                        (fVar2 + fVar4 * *(float *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x10),
                         fVar3 + fVar4 * *(float *)(*(long *)(DAT_0918cb68 + 0xb8) + 0x14),
                         *(undefined4 *)(param_5 + 0x28),param_6,0,0);
      FUN_04d95e8c(uVar1,*(undefined4 *)(param_5 + 0x34),DAT_091dbe90);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


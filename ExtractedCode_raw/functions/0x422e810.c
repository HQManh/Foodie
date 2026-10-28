// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$ExitsUp
// address: 0x422e810
// body: available
// range: 0x422e810-0x422e93f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422e93c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_OrderIngredientList__ExitsUp
               (undefined1 param_1 [16],float param_2,undefined1 param_3 [16],float param_4,
               long param_5,long param_6,int param_7,uint param_8)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_09516da8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af770);
    FUN_03f5c2a4(&DAT_091af778);
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09516da8 = 1;
  }
  if ((param_8 & 1) == 0) {
    if (param_6 == 0) goto LAB_0422e93c;
    if ((int)*(uint *)(param_6 + 0x18) < 2) {
      bVar1 = false;
    }
    else {
      bVar1 = param_7 < (int)(*(uint *)(param_6 + 0x18) >> 1);
    }
  }
  else {
    if ((*(long *)(param_5 + 0xb0) == 0) ||
       (UnityEngine_RectTransform__get_rect(*(long *)(param_5 + 0xb0),0), param_6 == 0)) {
LAB_0422e93c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = *(undefined8 *)(param_5 + 0xb0);
    fVar4 = param_2;
    fVar5 = param_4;
    uVar2 = FUN_057e0998(param_6,param_7,DAT_091af778);
    AnhPD_FoodOrder_OrderIngredientList__LocalRect(uVar3,uVar2);
    if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    bVar1 = param_4 * 0.05 + param_2 + param_4 * 0.5 < fVar4 + fVar5 * 0.5;
  }
  return bVar1;
}


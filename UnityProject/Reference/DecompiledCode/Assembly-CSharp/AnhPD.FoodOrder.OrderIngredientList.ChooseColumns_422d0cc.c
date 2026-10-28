// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$ChooseColumns
// address: 0x422d0cc
// body: available
// range: 0x422d0cc-0x422d1ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422d1f8 to 0x422e07c AnhPD.FoodOrder.OrderIngredientList$$SetColumns (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x422d1fc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderIngredientList__ChooseColumns(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  if ((DAT_09516da1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ae388);
    DAT_09516da1 = 1;
  }
  if (param_2 < 1) {
    uVar5 = 0x7fffffff;
    AnhPD_FoodOrder_OrderIngredientList__SetColumns(param_1,param_2,0x7fffffff);
  }
  else {
    uVar2 = 0;
    iVar3 = 0;
    do {
      if ((*(long *)(param_1 + 0x70) == 0) ||
         (lVar1 = FUN_057e0998(*(long *)(param_1 + 0x70),iVar3,DAT_091ae388), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar3 = iVar3 + 1;
      if ((int)uVar2 <= (int)*(uint *)(lVar1 + 0x40)) {
        uVar2 = *(uint *)(lVar1 + 0x40);
      }
    } while (param_2 != iVar3);
    AnhPD_FoodOrder_OrderIngredientList__SetColumns(param_1,param_2,0x7fffffff);
    if (param_2 < 1) {
      fVar6 = 0.0;
    }
    else {
      fVar6 = (float)AnhPD_FoodOrder_OrderIngredientList__EstimateScale(param_1,param_2);
    }
    uVar5 = 0x7fffffff;
    uVar4 = uVar5;
    if (1 < (int)uVar2) {
      do {
        uVar2 = uVar2 - 1;
        AnhPD_FoodOrder_OrderIngredientList__SetColumns(param_1,param_2,uVar2);
        fVar7 = (float)AnhPD_FoodOrder_OrderIngredientList__EstimateScale(param_1,param_2);
        uVar5 = uVar2;
        if (fVar7 <= fVar6 * *(float *)(param_1 + 0x48)) {
          uVar5 = uVar4;
          fVar7 = fVar6;
        }
        fVar6 = fVar7;
        uVar4 = uVar5;
      } while (1 < uVar2);
    }
  }
  AnhPD_FoodOrder_OrderIngredientList__SetColumns(param_1,param_2,uVar5);
  return;
}


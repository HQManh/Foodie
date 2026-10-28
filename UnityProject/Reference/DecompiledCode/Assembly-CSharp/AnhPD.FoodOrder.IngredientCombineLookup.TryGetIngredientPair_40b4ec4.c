// rea decompile_all
// name: AnhPD.FoodOrder.IngredientCombineLookup$$TryGetIngredientPair
// address: 0x40b4ec4
// body: available
// range: 0x40b4ec4-0x40b4f97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b4f90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b4f94 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_IngredientCombineLookup__TryGetIngredientPair
               (undefined8 param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  *param_3 = 0;
  thunk_FUN_03f5d7b8(param_3,0);
  *param_4 = 0;
  thunk_FUN_03f5d7b8(param_4,0);
  if ((param_2 != 0) && (lVar5 = *(long *)(param_2 + 0x10), lVar5 != 0)) {
    uVar1 = *(uint *)(lVar5 + 0x18);
    if ((int)uVar1 < 1) {
LAB_040b4f7c:
      bVar2 = false;
    }
    else {
      lVar7 = 0;
      do {
        uVar6 = (uint)lVar7;
        if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar4 = *(long *)(lVar5 + 0x20 + lVar7 * 8);
        if (lVar4 == 0) goto LAB_040b4f90;
        if (*(int *)(lVar4 + 0x10) != 0) goto LAB_040b4f7c;
        if (uVar6 == 1) {
          *param_4 = *(undefined8 *)(lVar4 + 0x18);
          puVar3 = param_4;
        }
        else {
          if (uVar6 != 0) goto LAB_040b4f7c;
          *param_3 = *(undefined8 *)(lVar4 + 0x18);
          puVar3 = param_3;
        }
        thunk_FUN_03f5d7b8(puVar3);
        uVar1 = *(uint *)(lVar5 + 0x18);
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar1);
      bVar2 = (int)lVar7 == 2;
    }
    return bVar2;
  }
LAB_040b4f90:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


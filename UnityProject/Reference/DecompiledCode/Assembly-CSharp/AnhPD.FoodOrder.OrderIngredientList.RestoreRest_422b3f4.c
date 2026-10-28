// rea decompile_all
// name: AnhPD.FoodOrder.OrderIngredientList$$RestoreRest
// address: 0x422b3f4
// body: available
// range: 0x422b3f4-0x422b4bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x422b4a8 to 0x8655d28 UnityEngine.Behaviour$$set_enabled (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x422b4b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderIngredientList__RestoreRest(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_09516d8b & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516d8b = 1;
  }
  AnhPD_FoodOrder_OrderIngredientList__MoveHome(param_1);
  if (*(long *)(param_1 + 0xb0) != 0) {
    UnityEngine_RectTransform__set_offsetMin
              (*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xcc),
               *(long *)(param_1 + 0xb0),0);
    if (*(long *)(param_1 + 0xb0) != 0) {
      UnityEngine_RectTransform__set_offsetMax
                (*(undefined4 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0xd4),
                 *(long *)(param_1 + 0xb0),0);
      lVar4 = DAT_09188ad0;
      uVar1 = *(undefined8 *)(param_1 + 0xb8);
      *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0xc0);
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar1,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      lVar4 = *(long *)(param_1 + 0xb8);
      uVar2 = AnhPD_FoodOrder_OrderIngredientList__get_UsesSlots(param_1);
      if (lVar4 != 0) {
        UnityEngine_Behaviour__set_enabled(lVar4,(uVar2 ^ 0xffffffff) & 1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


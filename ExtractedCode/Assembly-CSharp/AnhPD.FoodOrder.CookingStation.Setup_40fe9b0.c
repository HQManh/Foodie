// rea decompile_all
// name: AnhPD.FoodOrder.CookingStation$$Setup
// address: 0x40fe9b0
// body: available
// range: 0x40fe9b0-0x40feadf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40feac4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40feadc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CookingStation__Setup
               (long param_1,undefined8 param_2,long param_3,long param_4)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_09516162 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516162 = 1;
  }
  *(undefined8 *)(param_1 + 0x38) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),param_2);
  lVar4 = *(long *)(param_1 + 0x58);
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      if ((int)*(uint *)(lVar4 + 0x18) <= (int)(uint)lVar5) {
        return;
      }
      if (*(uint *)(lVar4 + 0x18) <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar4 = *(long *)(lVar4 + lVar5 * 8 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = UnityEngine_Object__op_Implicit(param_4,0);
      if ((uVar2 & 1) == 0) {
        if (lVar4 == 0) break;
        uVar3 = 0;
      }
      else {
        if ((lVar4 == 0) || (param_4 == 0)) break;
        uVar3 = AnhPD_FoodOrder_RecipeConfigSO__GetAnchorsOf
                          (param_4,*(undefined8 *)(lVar4 + 0x20),0);
      }
      *(undefined8 *)(lVar4 + 0x40) = uVar3;
      thunk_FUN_03f5d7b8();
      if ((param_3 != 0) &&
         (uVar2 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar4 + 0x20),0), (uVar2 & 1) == 0))
      {
        bVar1 = AnhPD_FoodOrder_LevelSupply__HasIngredient(param_3,*(undefined8 *)(lVar4 + 0x20),0);
        *(byte *)(lVar4 + 0x39) = (bVar1 ^ 0xff) & 1;
      }
      lVar4 = *(long *)(param_1 + 0x58);
      lVar5 = lVar5 + 1;
    } while (lVar4 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamOrderStrategy$$CanShowOf
// address: 0x414d4c0
// body: available
// range: 0x414d4c0-0x414d5df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414d5dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_IceCreamOrderStrategy__CanShowOf(long param_1,undefined4 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 local_28;
  
  if ((DAT_09516458 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09178aa0);
    FUN_03f5c2a4(&DAT_09185e38);
    DAT_09516458 = 1;
  }
  local_28 = 0;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = AnhPD_FoodOrder_RecipeConfigSO__TryGetDishBaseId(param_1,param_2,&local_28,0);
  uVar5 = 0;
  if ((uVar1 & 1) != 0) {
    uVar5 = AnhPD_FoodOrder_RecipeConfigSO__GetIngredientPrefab(param_1,local_28,0);
    plVar2 = (long *)thunk_FUN_03f99350(uVar5,DAT_09185e38);
    if (plVar2 == (long *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = thunk_FUN_03f9944c(DAT_09178aa0);
      lVar3 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar1 != 0) {
        piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == DAT_09185e38) {
            lVar3 = lVar3 + (long)*piVar4 * 0x10 + 0x138;
            goto LAB_0414d5b4;
          }
          uVar1 = uVar1 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar1 != 0);
      }
      lVar3 = FUN_03f95da8(plVar2,DAT_09185e38,0);
LAB_0414d5b4:
      FUN_05316834(uVar5,plVar2,*(undefined8 *)(lVar3 + 8),0);
    }
  }
  return uVar5;
}


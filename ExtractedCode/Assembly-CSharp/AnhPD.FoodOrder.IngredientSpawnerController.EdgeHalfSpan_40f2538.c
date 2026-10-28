// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$EdgeHalfSpan
// address: 0x40f2538
// body: available
// range: 0x40f2538-0x40f265f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f265c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AnhPD_FoodOrder_IngredientSpawnerController__EdgeHalfSpan(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_48 [12];
  float local_3c;
  
  if ((DAT_095160f3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c54e8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160f3 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(param_2,0);
  fVar5 = 0.0;
  if ((uVar1 & 1) != 0) {
    if (param_2 == 0) {
LAB_040f265c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = FUN_04a6a14c(param_2,DAT_091c54e8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar1 = UnityEngine_Object__op_Implicit(lVar2,0);
    if ((uVar1 & 1) != 0) {
      lVar3 = AnhPD_FoodOrder_IngredientSpawnerController__get_Root(param_1);
      if ((lVar3 == 0) ||
         (fVar4 = (float)UnityEngine_Transform__get_lossyScale(lVar3,0), lVar2 == 0))
      goto LAB_040f265c;
      fVar5 = 1.0;
      if (1e-05 <= ABS(fVar4)) {
        fVar5 = ABS(fVar4);
      }
      UnityEngine_Renderer__get_bounds(auStack_48,lVar2,0);
      fVar5 = ((local_3c + local_3c) * 0.5) / fVar5;
    }
  }
  return fVar5;
}


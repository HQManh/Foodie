// rea decompile_all
// name: AnhPD.FoodOrder.ShelfMergeQueue$$IsFlexibleId
// address: 0x40d43d0
// body: available
// range: 0x40d43d0-0x40d447b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_ShelfMergeQueue__IsFlexibleId(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if ((DAT_09515ff4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184728);
    DAT_09515ff4 = 1;
  }
  if ((param_1 != 0) && (uVar1 = System_String__IsNullOrEmpty(param_2,0), (uVar1 & 1) == 0)) {
    uVar2 = AnhPD_FoodOrder_FlexibleId__BaseOf(param_2,0);
    plVar3 = (long *)AnhPD_FoodOrder_LevelInfo__GetIngredientPrefab(param_1,uVar2,0);
    if (plVar3 == (long *)0x0) {
      return false;
    }
    if (*(byte *)(DAT_09184728 + 0x130) <= *(byte *)(*plVar3 + 0x130)) {
      return *(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8 + -8)
             == DAT_09184728;
    }
  }
  return false;
}


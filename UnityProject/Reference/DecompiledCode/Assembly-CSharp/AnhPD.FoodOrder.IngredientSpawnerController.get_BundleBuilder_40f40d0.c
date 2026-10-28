// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$get_BundleBuilder
// address: 0x40f40d0
// body: available
// range: 0x40f40d0-0x40f41ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_IngredientSpawnerController__get_BundleBuilder(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  int local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  
  if ((DAT_09516110 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182bd0);
    DAT_09516110 = 1;
  }
  lVar2 = *(long *)(param_1 + 0x210);
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x120);
    if (*(long *)(param_1 + 0x100) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x100) + 0x18);
    }
    uStack_44 = AnhPD_FoodOrder_IngredientSpawnerController__get_MaxCrossWidthByPrefab(param_1);
    local_3c = *(undefined8 *)(param_1 + 0x128);
    local_40 = *(int *)(param_1 + 0xb4);
    local_34 = *(undefined8 *)(param_1 + 0x130);
    local_2c = *(undefined4 *)(param_1 + 0x138);
    if (local_40 < 2) {
      local_40 = 1;
    }
    local_28 = *(undefined4 *)(param_1 + 0x13c);
    local_50 = uVar3;
    local_48 = uVar1;
    lVar2 = thunk_FUN_03f9944c(DAT_09182bd0);
    AnhPD_FoodOrder_ConveyorBundleBuilder___ctor(lVar2,&local_50,0);
    *(long *)(param_1 + 0x210) = lVar2;
    thunk_FUN_03f5d7b8(param_1 + 0x210,lVar2);
  }
  return lVar2;
}


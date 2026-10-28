// rea decompile_all
// name: AnhPD.FoodOrder.IngredientConveyorItem$$SetKey
// address: 0x40ef0f8
// body: available
// range: 0x40ef0f8-0x40ef22f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ef18c to 0x40ef230 AnhPD.FoodOrder.IngredientConveyorItem$$BuildKey (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40ef22c to 0x85f7650 UnityEngine.Debug$$LogWarning (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientConveyorItem__SetKey(long param_1,int param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((DAT_095160d2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091cfdf8);
    FUN_03f5c2a4(&DAT_09186be8);
    FUN_03f5c2a4(&DAT_09213dd0);
    DAT_095160d2 = 1;
  }
  if (-1 < param_2) {
    uVar1 = AnhPD_FoodOrder_KeyManager__get_IsReady(0);
    if ((uVar1 & 1) != 0) {
      **(undefined1 **)(DAT_09186be8 + 0xb8) = 0;
      AnhPD_FoodOrder_IngredientConveyorItem__BuildKey(param_1,param_2);
      return;
    }
    *(int *)(param_1 + 0x210) = param_2;
    uVar2 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar2,param_1,DAT_091cfdf8,0);
    AnhPD_FoodOrder_KeyManager__WhenReady(uVar2,0);
    if (**(char **)(DAT_09186be8 + 0xb8) == '\0') {
      **(char **)(DAT_09186be8 + 0xb8) = '\x01';
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogWarning(DAT_09213dd0,param_1,0);
      return;
    }
  }
  return;
}


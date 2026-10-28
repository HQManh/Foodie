// rea decompile_all
// name: AnhPD.FoodOrder.SushiPieceTable$$HasSeaweedAndRiceIngredients
// address: 0x416e7d8
// body: available
// range: 0x416e7d8-0x416e8ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_SushiPieceTable__HasSeaweedAndRiceIngredients(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((DAT_095165d0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091f6880);
    FUN_03f5c2a4(&DAT_09214398);
    FUN_03f5c2a4(&DAT_092143b0);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_095165d0 = 1;
  }
  uVar3 = AnhPD_FoodOrder_PieceLookup__Exists(1,0);
  if (((uVar3 & 1) == 0) || (uVar3 = AnhPD_FoodOrder_PieceLookup__Exists(0,0), (uVar3 & 1) == 0)) {
    uVar3 = AnhPD_FoodOrder_PieceLookup__get_HasConfig(0);
    puVar1 = &DAT_091f6880;
    puVar2 = &DAT_092143b0;
    if ((uVar3 & 1) == 0) {
      puVar1 = &DAT_091f8f68;
      puVar2 = &DAT_09214398;
    }
    uVar4 = System_String__Concat(*puVar2,param_1,*puVar1,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091835d0);
    }
    UnityEngine_Debug__LogWarning(uVar4,0);
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


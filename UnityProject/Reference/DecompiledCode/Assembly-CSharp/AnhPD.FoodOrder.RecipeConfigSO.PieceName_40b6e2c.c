// rea decompile_all
// name: AnhPD.FoodOrder.RecipeConfigSO$$PieceName
// address: 0x40b6e2c
// body: available
// range: 0x40b6e2c-0x40b6f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_RecipeConfigSO__PieceName(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_34;
  undefined4 local_28;
  undefined4 local_24;
  
  local_24 = param_2;
  uVar1 = AnhPD_FoodOrder_RecipeConfigSO__ResolveEnum(*(undefined8 *)(param_1 + 0x40));
  if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_095354b8);
  }
  uVar2 = System_Type__op_Inequality(uVar1,0,0);
  if ((uVar2 & 1) != 0) {
    local_28 = param_2;
    uVar3 = FUN_03f5c42c(DAT_09535420,&local_28);
    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09535470);
    }
    uVar2 = System_Enum__IsDefined(uVar1,uVar3,0);
    if ((uVar2 & 1) != 0) {
      local_34 = param_2;
      uVar3 = FUN_03f5c42c(DAT_09535420,&local_34);
      if (*(int *)(DAT_09535470 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09535470);
      }
      System_Enum__GetName(uVar1,uVar3,0);
      return;
    }
  }
  System_Int32__ToString(&local_24,0);
  return;
}


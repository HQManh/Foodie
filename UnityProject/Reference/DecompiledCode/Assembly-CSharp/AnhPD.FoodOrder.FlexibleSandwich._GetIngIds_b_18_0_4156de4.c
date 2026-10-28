// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleSandwich$$<GetIngIds>b__18_0
// address: 0x4156de4
// body: available
// range: 0x4156de4-0x4156ea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleSandwich__<GetIngIds>b__18_0
               (long param_1,ulong param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_3c;
  ulong local_38;
  
  local_38 = param_2;
  if ((DAT_095164d4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a578);
    DAT_095164d4 = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0xfc);
  local_3c = 0;
  if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_3c = AnhPD_FoodOrder_SandwichPieceTable__LayerOf(uVar1,param_2 & 0xffffffff,0);
  uVar1 = AnhPD_FoodOrder_SandwichPieceTable__LayerOf(*(undefined4 *)(param_1 + 0xfc),param_3,0);
  iVar2 = System_Int32__CompareTo(&local_3c,uVar1,0);
  if (iVar2 == 0) {
    System_Int32__CompareTo(&local_38,param_3,0);
  }
  return;
}


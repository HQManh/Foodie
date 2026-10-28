// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleKFC$$Display
// address: 0x413e05c
// body: available
// range: 0x413e05c-0x413e133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleKFC__Display(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  byte local_28 [4];
  undefined4 local_24;
  
  if ((DAT_095163ad & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    DAT_095163ad = 1;
  }
  uStack_48 = param_2[1];
  local_50 = *param_2;
  local_40 = param_2[2];
  local_24 = 0;
  local_28[0] = 0;
  local_34[0] = 0;
  local_38[0] = 0;
  if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uStack_68 = uStack_48;
  local_70 = local_50;
  local_60 = local_40;
  uVar1 = AnhPD_FoodOrder_BurgerPieceTable__TryGetChickenState
                    (&local_70,&local_24,local_28,local_34,local_38);
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x108) = local_24;
    *(uint *)(param_1 + 0x10c) = (uint)local_28[0];
    *(undefined1 *)(param_1 + 0x110) = local_34[0];
    *(undefined1 *)(param_1 + 0x111) = local_38[0];
    AnhPD_FoodOrder_FlexibleKFC__DisplayKfc(param_1);
  }
  return;
}


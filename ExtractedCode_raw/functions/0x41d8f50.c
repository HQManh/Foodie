// rea decompile_all
// name: AnhPD.FoodOrder.OrderStrategy$$CanDishAdd
// address: 0x41d8f50
// body: available
// range: 0x41d8f50-0x41d904f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_OrderStrategy__CanDishAdd
               (long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09516a98 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516a98 = 1;
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  AnhPD_FoodOrder_PieceLookup__PiecesOf(&local_68,param_4);
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = AnhPD_FoodOrder_PieceSet__get_TotalCount(&local_68);
  if (iVar1 == 1) {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_70 = 0;
    uStack_88 = uStack_58;
    local_90 = local_60;
    local_80 = local_68;
    local_78 = 0xffffffff00000000;
    uVar3 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_90);
    if ((uVar3 & 1) != 0) {
      uStack_48 = param_3[1];
      local_50 = *param_3;
      local_40 = param_3[2];
      uVar2 = (**(code **)(*param_1 + 0x1f8))
                        (param_1,&local_50,local_70 & 0xffffffff,*(undefined8 *)(*param_1 + 0x200));
      goto LAB_041d9038;
    }
  }
  uVar2 = 0;
LAB_041d9038:
  return uVar2 & 1;
}


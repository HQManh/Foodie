// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleSandwich$$AddIng
// address: 0x41563e4
// body: available
// range: 0x41563e4-0x415650b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleSandwich__AddIng(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_34;
  
  if ((DAT_095164cd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918a578);
    DAT_095164cd = 1;
  }
  puVar1 = (undefined8 *)(param_1 + 0x108);
  local_40 = *(undefined8 *)(param_1 + 0x118);
  uStack_48 = *(undefined8 *)(param_1 + 0x110);
  local_50 = *puVar1;
  uVar2 = *(undefined4 *)(param_1 + 0xfc);
  local_34 = 0;
  if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uStack_68 = uStack_48;
  local_70 = local_50;
  local_60 = local_40;
  uVar3 = AnhPD_FoodOrder_SandwichPieceTable__CanDishAdd(uVar2,&local_70,param_2,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = AnhPD_FoodOrder_SandwichPieceTable__TryGetPiece(param_2,&local_34,0);
    uVar2 = local_34;
    if ((uVar3 & 1) != 0) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__Add(&local_50,puVar1,uVar2,1,0);
      *(undefined8 *)(param_1 + 0x110) = uStack_48;
      *puVar1 = local_50;
      *(undefined8 *)(param_1 + 0x118) = local_40;
      AnhPD_FoodOrder_FlexibleDragItem__MarkVisualDirty(param_1,0);
    }
  }
  return;
}


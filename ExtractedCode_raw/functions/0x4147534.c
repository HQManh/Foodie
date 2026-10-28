// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleDonut$$IconPiecesOf
// address: 0x4147534
// body: available
// range: 0x4147534-0x41476c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleDonut__IconPiecesOf
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong local_50;
  
  if ((DAT_0951641d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182240);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0921a950);
    DAT_0951641d = 1;
  }
  local_50 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uVar2 = System_String__op_Inequality(param_3,DAT_0921a950,0);
  if ((uVar2 & 1) == 0) {
    AnhPD_FoodOrder_FlexiblePieceId__PiecesOf(&local_a8,*(undefined8 *)(param_2 + 0x78),param_4,0);
    uStack_88 = uStack_a0;
    local_90 = local_a8;
    local_80 = local_98;
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_70,&local_90,0);
    do {
      uVar3 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_70,0);
      uVar2 = local_50;
      if ((uVar3 & 1) == 0) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar4 = *(undefined8 **)(DAT_09189158 + 0xb8);
        uStack_a0 = puVar4[1];
        local_a8 = *puVar4;
        local_98 = puVar4[2];
        goto LAB_041476a8;
      }
      uVar1 = (uint)local_50;
      if (*(int *)(DAT_09182240 + 0xe4) == 0) {
        FUN_03f5c424();
      }
    } while (2 < uVar1);
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_PieceSet__One(&local_a8,uVar2 & 0xffffffff,0);
  }
  else {
    AnhPD_FoodOrder_FlexibleDragItem__IconPiecesOf(&local_a8,param_2,param_3,param_4,0);
  }
LAB_041476a8:
  param_1[1] = uStack_a0;
  *param_1 = local_a8;
  param_1[2] = local_98;
  return;
}


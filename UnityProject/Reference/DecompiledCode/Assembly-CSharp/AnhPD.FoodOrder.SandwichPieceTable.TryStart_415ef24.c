// rea decompile_all
// name: AnhPD.FoodOrder.SandwichPieceTable$$TryStart
// address: 0x415ef24
// body: available
// range: 0x415ef24-0x415f0d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SandwichPieceTable__TryStart
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_38;
  
  if ((DAT_09516523 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918a578);
    DAT_09516523 = 1;
  }
  local_38 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = AnhPD_FoodOrder_SandwichPieceTable__CanOpen(param_2,param_3);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = AnhPD_FoodOrder_SandwichPieceTable__TryGetPiece(param_3,(long)&local_38 + 4);
    if ((uVar2 & 1) != 0) {
      uVar1 = local_38._4_4_;
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__One(&local_78,uVar1,0);
      uStack_58 = uStack_70;
      local_60 = local_78;
      local_50 = local_68;
      uStack_88 = uStack_70;
      local_90 = local_78;
      local_80 = local_68;
      if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_a8 = uStack_88;
      local_b0 = local_90;
      local_a0 = local_80;
      uVar2 = AnhPD_FoodOrder_SandwichPieceTable__CanDishAdd(param_2,&local_b0,param_4);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(DAT_0918a578 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = AnhPD_FoodOrder_SandwichPieceTable__TryGetPiece(param_4,&local_38);
        uVar2 = local_38;
        if ((uVar3 & 1) != 0) {
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          AnhPD_FoodOrder_PieceSet__Add(&local_78,&local_60,uVar2 & 0xffffffff,1,0);
          goto LAB_0415f0b8;
        }
      }
    }
  }
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar4 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uStack_70 = puVar4[1];
  local_78 = *puVar4;
  local_68 = puVar4[2];
LAB_0415f0b8:
  param_1[1] = uStack_70;
  *param_1 = local_78;
  param_1[2] = local_68;
  return;
}


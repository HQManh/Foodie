// rea decompile_all
// name: AnhPD.FoodOrder.SushiPieceTable$$RollMaki
// address: 0x41639e8
// body: available
// range: 0x41639e8-0x4163c13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SushiPieceTable__RollMaki
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong local_38;
  
  if ((DAT_095165cd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b7488);
    FUN_03f5c2a4(&DAT_091b7490);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918b680);
    FUN_03f5c2a4(&DAT_092143c8);
    FUN_03f5c2a4(&DAT_0921f0a8);
    DAT_095165cd = 1;
  }
  local_38 = 0;
  uStack_58 = 0;
  local_60 = 0;
  local_50 = 0;
  if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = AnhPD_FoodOrder_SushiPieceTable__HasSeaweedAndRiceIngredients(DAT_0921f0a8);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_38 = AnhPD_FoodOrder_SushiPieceTable__PickUsable
                         (*(undefined8 *)(*(long *)(DAT_0918b680 + 0xb8) + 8),param_3);
    if ((local_38 & 0xff) != 0) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__One(&local_78,1,0);
      local_50 = local_68;
      uStack_58 = uStack_70;
      local_60 = local_78;
      AnhPD_FoodOrder_PieceSet__Add(&local_90,&local_60,0,1,0);
      uStack_58 = uStack_88;
      local_60 = local_90;
      local_50 = local_80;
      uVar1 = FUN_05c30b30(&local_38,DAT_091b7490);
      AnhPD_FoodOrder_PieceSet__Add(&local_a8,&local_60,uVar1,1,0);
      if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_d0 = local_98;
      uStack_d8 = uStack_a0;
      local_e0 = local_a8;
      AnhPD_FoodOrder_SushiPieceTable__RollDecors(&local_c0,&local_e0,param_2,param_3);
      goto LAB_04163bf4;
    }
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(DAT_092143c8,0);
  }
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar3 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uStack_b8 = puVar3[1];
  local_c0 = *puVar3;
  local_b0 = puVar3[2];
LAB_04163bf4:
  param_1[1] = uStack_b8;
  *param_1 = local_c0;
  param_1[2] = local_b0;
  return;
}


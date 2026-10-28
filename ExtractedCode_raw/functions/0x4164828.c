// rea decompile_all
// name: AnhPD.FoodOrder.SushiPieceTable$$RollNigiri
// address: 0x4164828
// body: available
// range: 0x4164828-0x4164b0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SushiPieceTable__RollNigiri
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong local_38;
  
  if ((DAT_095165cc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b7488);
    FUN_03f5c2a4(&DAT_091b7490);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918b680);
    FUN_03f5c2a4(&DAT_092143b8);
    FUN_03f5c2a4(&DAT_092143d0);
    FUN_03f5c2a4(&DAT_092143a0);
    DAT_095165cc = 1;
  }
  local_38 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_68 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_70 = 0;
  uVar2 = AnhPD_FoodOrder_PieceLookup__Exists(0,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = AnhPD_FoodOrder_PieceLookup__get_HasConfig(0);
    puVar3 = &DAT_092143b8;
    if ((uVar2 & 1) == 0) {
      puVar3 = &DAT_092143a0;
    }
    uVar4 = *puVar3;
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
  }
  else {
    if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_38 = AnhPD_FoodOrder_SushiPieceTable__PickUsable
                         (*(undefined8 *)(*(long *)(DAT_0918b680 + 0xb8) + 8),param_3);
    if ((local_38 & 0xff) != 0) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__One(&local_98,0,0);
      uStack_78 = uStack_90;
      local_80 = local_98;
      local_70 = local_88;
      uVar1 = FUN_05c30b30(&local_38,DAT_091b7490);
      AnhPD_FoodOrder_PieceSet__Add(&local_b0,&local_80,uVar1,1,0);
      uStack_58 = uStack_a8;
      local_60 = local_b0;
      local_50 = local_a0;
      if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_68 = AnhPD_FoodOrder_SushiPieceTable__PickUsable
                           (*(undefined8 *)(*(long *)(DAT_0918b680 + 0xb8) + 0x18),param_3);
      if (((local_68 & 0xff) != 0) && (fVar5 = (float)UnityEngine_Random__get_value(0), fVar5 < 0.5)
         ) {
        uVar1 = FUN_05c30b30(&local_68,DAT_091b7490);
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09189158);
        }
        AnhPD_FoodOrder_PieceSet__Add(&local_98,&local_60,uVar1,1,0);
        uStack_58 = uStack_90;
        local_60 = local_98;
        local_50 = local_88;
      }
      uStack_c8 = uStack_58;
      local_d0 = local_60;
      local_c0 = local_50;
      if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_SushiPieceTable__RollDecors(&local_98,&local_d0,param_2,param_3);
      goto LAB_04164af0;
    }
    uVar4 = DAT_092143d0;
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
      uVar4 = DAT_092143d0;
    }
  }
  UnityEngine_Debug__LogWarning(uVar4,0);
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar3 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uStack_90 = puVar3[1];
  local_98 = *puVar3;
  local_88 = puVar3[2];
LAB_04164af0:
  param_1[1] = uStack_90;
  *param_1 = local_98;
  param_1[2] = local_88;
  return;
}


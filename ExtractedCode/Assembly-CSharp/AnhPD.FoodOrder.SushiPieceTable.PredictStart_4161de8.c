// rea decompile_all
// name: AnhPD.FoodOrder.SushiPieceTable$$PredictStart
// address: 0x4161de8
// body: available
// range: 0x4161de8-0x416219f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SushiPieceTable__PredictStart
               (undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
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
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar3 = &local_230;
  if ((DAT_095165ca & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918b680);
    DAT_095165ca = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_c0 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  AnhPD_FoodOrder_PieceLookup__PiecesOf(&local_100,param_3,0);
  local_60 = local_f0;
  uStack_68 = uStack_f8;
  local_70 = local_100;
  AnhPD_FoodOrder_PieceLookup__PiecesOf(&local_118,param_4,0);
  uStack_88 = uStack_110;
  local_90 = local_118;
  local_80 = local_108;
  uStack_128 = uStack_110;
  local_130 = local_118;
  local_120 = local_108;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_140 = local_120;
  uStack_148 = uStack_128;
  local_150 = local_130;
  AnhPD_FoodOrder_PieceSet__Add(&local_a8,&local_70,&local_150,0);
  if (param_2 - 2U < 2) {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = AnhPD_FoodOrder_PieceSet__get_TotalCount(&local_a8,0);
    if (iVar1 == 2) {
      uStack_f8 = uStack_a0;
      local_100 = local_a8;
      local_f0 = local_98;
      if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_168 = uStack_f8;
      local_170 = local_100;
      local_160 = local_f0;
      uVar2 = AnhPD_FoodOrder_SushiPieceTable__HasSeaweedAndRice(&local_170);
      if ((uVar2 & 1) != 0) goto LAB_04162154;
    }
LAB_0416215c:
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar3 = *(undefined8 **)(DAT_09189158 + 0xb8);
  }
  else {
    if (param_2 == 4) {
      if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_SushiPieceTable__PredictSashimiOpen(&local_e0,param_3);
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_e0,0);
      if ((uVar2 & 1) != 0) {
LAB_04161fe4:
        if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_SushiPieceTable__PredictSashimiOpen(&local_100,param_4);
        uStack_d8 = uStack_f8;
        local_e0 = local_100;
        local_d0 = local_f0;
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(&local_e0,0);
        if ((uVar2 & 1) != 0) goto LAB_0416215c;
        uStack_1a8 = uStack_d8;
        local_1b0 = local_e0;
        local_1a0 = local_d0;
        if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar3 = &local_1b0;
        param_2 = 4;
        goto LAB_04162148;
      }
      uStack_188 = uStack_d8;
      local_190 = local_e0;
      local_180 = local_d0;
      if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = AnhPD_FoodOrder_SushiPieceTable__CanDishAdd(4,&local_190,param_4);
      if ((uVar2 & 1) == 0) goto LAB_04161fe4;
    }
    else {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__One(&local_100,0,0);
      uStack_b8 = uStack_f8;
      local_c0 = local_100;
      local_b0 = local_f0;
      uStack_1c8 = uStack_f8;
      local_1d0 = local_100;
      local_1c0 = local_f0;
      uVar2 = AnhPD_FoodOrder_PieceSet__Equals(&local_70,&local_1d0,0);
      if ((uVar2 & 1) != 0) {
        if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_1e8 = uStack_b8;
        local_1f0 = local_c0;
        local_1e0 = local_b0;
        uVar2 = AnhPD_FoodOrder_SushiPieceTable__CanDishAdd(param_2,&local_1f0,param_4);
        if ((uVar2 & 1) != 0) goto LAB_04162154;
      }
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_208 = uStack_b8;
      local_210 = local_c0;
      local_200 = local_b0;
      uVar2 = AnhPD_FoodOrder_PieceSet__Equals(&local_90,&local_210,0);
      if ((uVar2 & 1) == 0) goto LAB_0416215c;
      if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_228 = uStack_b8;
      local_230 = local_c0;
      local_220 = local_b0;
LAB_04162148:
      uVar2 = AnhPD_FoodOrder_SushiPieceTable__CanDishAdd(param_2,puVar3,param_3);
      if ((uVar2 & 1) == 0) goto LAB_0416215c;
    }
LAB_04162154:
    puVar3 = &local_a8;
  }
  uVar5 = *puVar3;
  uVar4 = puVar3[2];
  param_1[1] = puVar3[1];
  *param_1 = uVar5;
  param_1[2] = uVar4;
  return;
}


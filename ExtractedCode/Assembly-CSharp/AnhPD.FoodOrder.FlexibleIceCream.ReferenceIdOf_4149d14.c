// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleIceCream$$ReferenceIdOf
// address: 0x4149d14
// body: available
// range: 0x4149d14-0x4149f33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleIceCream__ReferenceIdOf(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_09516439 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186a68);
    FUN_03f5c2a4(&DAT_09186a70);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516439 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_70 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_a0 = 0;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar6 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uStack_58 = puVar6[1];
  local_60 = *puVar6;
  local_50 = puVar6[2];
  AnhPD_FoodOrder_FlexiblePieceId__PiecesOf(&local_c8,*(undefined8 *)(param_1 + 0x78),param_2,0);
  local_a0 = local_b8;
  uStack_a8 = uStack_c0;
  local_b0 = local_c8;
  AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_90,&local_b0,0);
  uVar4 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_90,0);
  uVar1 = local_70;
  local_e0 = local_60;
  uStack_d8 = uStack_58;
  local_d0 = local_50;
  while (local_70 = uVar1, local_60 = local_e0, uStack_58 = uStack_d8, local_50 = local_d0,
        (uVar4 & 1) != 0) {
    local_70._4_4_ = (undefined4)(uVar1 >> 0x20);
    uVar2 = local_70._4_4_;
    if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar3 = AnhPD_FoodOrder_IceCreamPieceTable__LayerOf(uVar1 & 0xffffffff);
    if (iVar3 < 2) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__Add(&local_c8,&local_60,uVar1 & 0xffffffff,uVar2,0);
      uStack_58 = uStack_c0;
      local_60 = local_c8;
      local_50 = local_b8;
    }
    uVar4 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_90,0);
    uVar1 = local_70;
    local_e0 = local_60;
    uStack_d8 = uStack_58;
    local_d0 = local_50;
  }
  if (*(int *)(param_1 + 0xfc) == 1) {
    uVar5 = thunk_FUN_03f9944c(DAT_0917c520);
    FUN_05796918(uVar5,DAT_091adc70);
    if (*(int *)(DAT_09186a70 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_IceCreamScoopOrder__ReadOrder(param_2,uVar5);
    uStack_f8 = uStack_58;
    local_100 = local_60;
    local_f0 = local_50;
    AnhPD_FoodOrder_IceCreamScoopOrder__BuildId(*(undefined8 *)(param_1 + 0x78),&local_100,uVar5);
  }
  else {
    AnhPD_FoodOrder_FlexiblePieceId__Build(*(undefined8 *)(param_1 + 0x78),&local_e0,0);
  }
  return;
}


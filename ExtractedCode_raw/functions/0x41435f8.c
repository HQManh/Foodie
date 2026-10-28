// rea decompile_all
// name: AnhPD.FoodOrder.CafePieceTable$$BareIdOf
// address: 0x41435f8
// body: available
// range: 0x41435f8-0x414376f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CafePieceTable__BareIdOf(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_095163e6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182240);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_095163e6 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_60 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_90 = 0;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar5 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uStack_48 = puVar5[1];
  local_50 = *puVar5;
  local_40 = puVar5[2];
  AnhPD_FoodOrder_FlexiblePieceId__PiecesOf(&local_b8,param_1,param_2,0);
  local_90 = local_a8;
  uStack_98 = uStack_b0;
  local_a0 = local_b8;
  AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_80,&local_a0,0);
  uVar4 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_80,0);
  uVar1 = local_60;
  local_d0 = local_50;
  uStack_c8 = uStack_48;
  local_c0 = local_40;
  while (local_60 = uVar1, local_50 = local_d0, uStack_48 = uStack_c8, local_40 = local_c0,
        (uVar4 & 1) != 0) {
    local_60._4_4_ = (undefined4)(uVar1 >> 0x20);
    uVar2 = local_60._4_4_;
    if (*(int *)(DAT_09182240 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar3 = AnhPD_FoodOrder_CafePieceTable__LayerOf(uVar1 & 0xffffffff);
    if (iVar3 == 0) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__Add(&local_b8,&local_50,uVar1 & 0xffffffff,uVar2,0);
      uStack_48 = uStack_b0;
      local_50 = local_b8;
      local_40 = local_a8;
    }
    uVar4 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_80,0);
    uVar1 = local_60;
    local_d0 = local_50;
    uStack_c8 = uStack_48;
    local_c0 = local_40;
  }
  AnhPD_FoodOrder_FlexiblePieceId__Build(param_1,&local_d0,0);
  return;
}


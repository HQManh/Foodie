// rea decompile_all
// name: AnhPD.FoodOrder.FlexiblePastaItem$$ReferenceIdOf
// address: 0x41520d4
// body: available
// range: 0x41520d4-0x4152263 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 AnhPD_FoodOrder_FlexiblePastaItem__ReferenceIdOf(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_0951649f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f10);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_0951649f = 1;
  }
  uVar1 = *(undefined4 *)(param_1 + 0xfc);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = CakeOrder_InGame_Pasta_PastaPieceTable__TryDecode(uVar1,param_2,&local_58,0);
  if ((uVar3 & 1) != 0) {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar5 = *(undefined8 **)(DAT_09189158 + 0xb8);
    uStack_68 = puVar5[1];
    local_70 = *puVar5;
    local_60 = puVar5[2];
    AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_a0,&local_58,0);
    while (uVar4 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_a0,0), uVar3 = local_80,
          (uVar4 & 1) != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0xfc);
      uVar2 = local_80._4_4_;
      if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = CakeOrder_InGame_Pasta_PastaPieceTable__IsBaseForm(uVar1,uVar3 & 0xffffffff,0);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_PieceSet__Add(&local_b8,&local_70,uVar3 & 0xffffffff,uVar2,0);
        uStack_68 = uStack_b0;
        local_70 = local_b8;
        local_60 = local_a8;
      }
    }
    uStack_c8 = uStack_68;
    local_d0 = local_70;
    local_c0 = local_60;
    param_2 = AnhPD_FoodOrder_FlexiblePieceId__Build(*(undefined8 *)(param_1 + 0x78),&local_d0,0);
  }
  return param_2;
}


// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleKFC$$get_Pieces
// address: 0x413d784
// body: available
// range: 0x413d784-0x413d93b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleKFC__get_Pieces(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_24;
  
  if ((DAT_095163a6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_095163a6 = 1;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x108);
  local_24 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = AnhPD_FoodOrder_BurgerPieceTable__TryGetChickenPiece(uVar1,&local_24);
  uVar1 = local_24;
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = *(undefined8 **)(DAT_09189158 + 0xb8);
  }
  else {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_PieceSet__One(&local_50,uVar1,0);
    if (*(int *)(param_2 + 0x10c) == 1) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__Add(&local_68,&local_50,0xe,1,0);
      uStack_48 = uStack_60;
      local_50 = local_68;
      local_40 = local_58;
    }
    if (*(char *)(param_2 + 0x110) != '\0') {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      AnhPD_FoodOrder_PieceSet__Add(&local_68,&local_50,0x10,1,0);
      uStack_48 = uStack_60;
      local_50 = local_68;
      local_40 = local_58;
    }
    if (*(char *)(param_2 + 0x111) == '\0') {
      puVar4 = &local_50;
    }
    else {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar4 = &local_50;
      AnhPD_FoodOrder_PieceSet__Add(&local_68,&local_50,0xf,1,0);
      uStack_48 = uStack_60;
      local_50 = local_68;
      local_40 = local_58;
    }
  }
  uVar5 = *puVar4;
  uVar3 = puVar4[2];
  param_1[1] = puVar4[1];
  *param_1 = uVar5;
  param_1[2] = uVar3;
  return;
}


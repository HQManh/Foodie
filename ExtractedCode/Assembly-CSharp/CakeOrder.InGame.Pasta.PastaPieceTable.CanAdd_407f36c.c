// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaPieceTable$$CanAdd
// address: 0x407f36c
// body: available
// range: 0x407f36c-0x407f4bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint CakeOrder_InGame_Pasta_PastaPieceTable__CanAdd
               (undefined4 param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_09515c5e & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f10);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515c5e = 1;
  }
  uStack_58 = param_2[1];
  local_60 = *param_2;
  local_50 = param_2[2];
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uStack_78 = uStack_58;
  local_80 = local_60;
  local_70 = local_50;
  uVar2 = CakeOrder_InGame_Pasta_PastaPieceTable__IsValid(param_1,&local_80,0);
  uVar1 = 0;
  if ((uVar2 & 1) != 0) {
    if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = CakeOrder_InGame_Pasta_PastaPieceTable__TryInput(param_1,param_3,&local_48);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_90 = local_38;
      uStack_98 = uStack_40;
      local_a0 = local_48;
      AnhPD_FoodOrder_PieceSet__Add(&local_60,param_2,&local_a0,0);
      if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_b8 = uStack_58;
      local_c0 = local_60;
      local_b0 = local_50;
      uVar1 = CakeOrder_InGame_Pasta_PastaPieceTable__IsValid(param_1,&local_c0,0);
    }
  }
  return uVar1 & 1;
}


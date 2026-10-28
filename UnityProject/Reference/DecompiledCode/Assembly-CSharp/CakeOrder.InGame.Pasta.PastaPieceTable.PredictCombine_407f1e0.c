// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaPieceTable$$PredictCombine
// address: 0x407f1e0
// body: available
// range: 0x407f1e0-0x407f36b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_Pasta_PastaPieceTable__PredictCombine
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
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
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_09515c5d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f10);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515c5d = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_70 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = CakeOrder_InGame_Pasta_PastaPieceTable__TryInput(param_2,param_3,&local_58);
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = CakeOrder_InGame_Pasta_PastaPieceTable__TryInput(param_2,param_4,&local_70);
    if ((uVar1 & 1) != 0) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_b0 = local_60;
      uStack_b8 = uStack_68;
      local_c0 = local_70;
      AnhPD_FoodOrder_PieceSet__Add(&local_a8,&local_58,&local_c0,0);
      uStack_88 = uStack_a0;
      local_90 = local_a8;
      local_80 = local_98;
      uStack_d8 = uStack_a0;
      local_e0 = local_a8;
      local_d0 = local_98;
      if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_f8 = uStack_d8;
      local_100 = local_e0;
      local_f0 = local_d0;
      uVar1 = CakeOrder_InGame_Pasta_PastaPieceTable__IsValid(param_2,&local_100,0);
      if ((uVar1 & 1) != 0) goto LAB_0407f34c;
    }
  }
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar2 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uStack_88 = puVar2[1];
  local_90 = *puVar2;
  local_80 = puVar2[2];
LAB_0407f34c:
  param_1[1] = uStack_88;
  *param_1 = local_90;
  param_1[2] = local_80;
  return;
}


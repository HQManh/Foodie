// rea decompile_all
// name: AnhPD.FoodOrder.PastaOrderStrategy$$CanStillComplete
// address: 0x41541a0
// body: available
// range: 0x41541a0-0x4154313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_PastaOrderStrategy__CanStillComplete
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulong uVar1;
  int iVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_095164b4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f10);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_095164b4 = 1;
  }
  uStack_48 = param_2[1];
  local_50 = *param_2;
  local_40 = param_2[2];
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uStack_68 = uStack_48;
  local_70 = local_50;
  local_60 = local_40;
  uVar1 = AnhPD_FoodOrder_PieceSet__Covers(param_3,&local_70,0);
  if ((uVar1 & 1) != 0) {
    iVar2 = 1;
    do {
      uStack_48 = param_3[1];
      local_50 = *param_3;
      local_40 = param_3[2];
      if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_88 = uStack_48;
      local_90 = local_50;
      local_80 = local_40;
      uVar1 = CakeOrder_InGame_Pasta_PastaPieceTable__IsComplete(iVar2,&local_90,0);
      if ((uVar1 & 1) != 0) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(param_2,0);
        if ((uVar1 & 1) != 0) {
          return 1;
        }
        uStack_48 = param_2[1];
        local_50 = *param_2;
        local_40 = param_2[2];
        if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uStack_a8 = uStack_48;
        local_b0 = local_50;
        local_a0 = local_40;
        uVar1 = CakeOrder_InGame_Pasta_PastaPieceTable__IsValid(iVar2,&local_b0,0,0);
        if ((uVar1 & 1) != 0) {
          return 1;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 5);
  }
  return 0;
}


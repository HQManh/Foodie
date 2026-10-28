// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaPieceTable$$PredictOpen
// address: 0x407f0d0
// body: available
// range: 0x407f0d0-0x407f1df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_Pasta_PastaPieceTable__PredictOpen
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_09515c5c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f10);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515c5c = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = CakeOrder_InGame_Pasta_PastaPieceTable__TryInput(param_2,param_3,&local_48);
  if ((uVar1 & 1) != 0) {
    uVar2 = AnhPD_FoodOrder_FlexibleId__BaseOf(param_3,0);
    if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188f10);
    }
    uStack_58 = uStack_40;
    local_60 = local_48;
    local_50 = local_38;
    uVar1 = CakeOrder_InGame_Pasta_PastaPieceTable__CanOpenPlate(param_2,uVar2,&local_60);
    if ((uVar1 & 1) != 0) {
      puVar3 = &local_48;
      goto LAB_0407f1bc;
    }
  }
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar3 = *(undefined8 **)(DAT_09189158 + 0xb8);
LAB_0407f1bc:
  uVar4 = *puVar3;
  uVar2 = puVar3[2];
  param_1[1] = puVar3[1];
  *param_1 = uVar4;
  param_1[2] = uVar2;
  return;
}


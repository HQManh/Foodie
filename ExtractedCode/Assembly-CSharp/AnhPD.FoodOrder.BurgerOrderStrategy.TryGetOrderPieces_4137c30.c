// rea decompile_all
// name: AnhPD.FoodOrder.BurgerOrderStrategy$$TryGetOrderPieces
// address: 0x4137c30
// body: available
// range: 0x4137c30-0x4137e0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_BurgerOrderStrategy__TryGetOrderPieces
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  
  if ((DAT_09516365 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820b0);
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_091a23f8);
    FUN_03f5c2a4(&DAT_091a2400);
    FUN_03f5c2a4(&DAT_091a2408);
    FUN_03f5c2a4(&DAT_091ab620);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516365 = 1;
  }
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar5 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uVar7 = puVar5[1];
  uVar6 = *puVar5;
  param_3[2] = puVar5[2];
  param_3[1] = uVar7;
  *param_3 = uVar6;
  if (*(int *)(DAT_091820b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = AnhPD_FoodOrder_BurgerOrderStrategy__DecodePieces(param_2);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_0579a6a8(&local_58,lVar3,DAT_091ab620);
    local_68 = 0;
    puStack_60 = &local_58;
    while (uVar4 = FUN_071aef5c(&local_58,DAT_091a2400), uVar1 = local_48, (uVar4 & 1) != 0) {
      if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = AnhPD_FoodOrder_BurgerPieceTable__IsKnownPiece(uVar1 & 0xffffffff);
      if ((uVar4 & 1) != 0) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_PieceSet__Add(&local_98,param_3,uVar1 & 0xffffffff,1,0);
        param_3[1] = uStack_90;
        *param_3 = local_98;
        param_3[2] = local_88;
      }
    }
    FUN_071aef58(&local_58,DAT_091a23f8);
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(param_3,0);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2 & 1;
}


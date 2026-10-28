// rea decompile_all
// name: AnhPD.FoodOrder.CafePieceTable$$CanDishAdd
// address: 0x41443ec
// body: available
// range: 0x41443ec-0x4144567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_CafePieceTable__CanDishAdd
               (undefined4 param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_095163f4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182240);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_095163f4 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  AnhPD_FoodOrder_PieceLookup__PiecesOf(&local_a0,param_3,0);
  uStack_48 = uStack_98;
  local_50 = local_a0;
  local_40 = local_90;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar2 = AnhPD_FoodOrder_PieceSet__get_TotalCount(&local_50,0);
  if (iVar2 == 1) {
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_80,&local_50,0);
    uVar4 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_80,0);
    uVar1 = local_60;
    if ((uVar4 & 1) != 0) {
      if (*(int *)(DAT_09182240 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = AnhPD_FoodOrder_CafePieceTable__IsBasePiece(uVar1 & 0xffffffff);
      if ((uVar4 & 1) == 0) {
        if (*(int *)(DAT_09182240 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = AnhPD_FoodOrder_CafePieceTable__Belongs(param_1,uVar1 & 0xffffffff);
        if ((uVar4 & 1) != 0) {
          uStack_98 = param_2[1];
          local_a0 = *param_2;
          local_90 = param_2[2];
          if (*(int *)(DAT_09182240 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_b8 = uStack_98;
          local_c0 = local_a0;
          local_b0 = local_90;
          uVar3 = AnhPD_FoodOrder_CafePieceTable__CanAdd(&local_c0,uVar1 & 0xffffffff);
          goto LAB_04144550;
        }
      }
    }
  }
  uVar3 = 0;
LAB_04144550:
  return uVar3 & 1;
}


// rea decompile_all
// name: AnhPD.FoodOrder.CafePieceTable$$LayerAllows
// address: 0x4143770
// body: available
// range: 0x4143770-0x41438c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_CafePieceTable__LayerAllows(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong local_40;
  
  if ((DAT_095163e7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182240);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_095163e7 = 1;
  }
  local_40 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(int *)(DAT_09182240 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = AnhPD_FoodOrder_CafePieceTable__LayerOf(param_2);
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189158);
  }
  AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_60,param_1,0);
  uVar5 = 0;
  do {
    do {
      uVar3 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_60,0);
      uVar4 = local_40;
      if ((uVar3 & 1) == 0) {
        if (*(int *)(DAT_09182240 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar1 = AnhPD_FoodOrder_CafePieceTable__IsOverCoating(param_2);
        uVar5 = uVar5 | uVar1 ^ 1;
        goto LAB_041438ac;
      }
      if (*(int *)(DAT_09182240 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = AnhPD_FoodOrder_CafePieceTable__LayerOf(uVar4 & 0xffffffff);
      if (uVar1 < uVar2) goto LAB_04143884;
      if (*(int *)(DAT_09182240 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = AnhPD_FoodOrder_CafePieceTable__IsCoating(uVar4 & 0xffffffff);
    } while ((uVar4 & 1) == 0);
    if (*(int *)(DAT_09182240 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = AnhPD_FoodOrder_CafePieceTable__IsCoating(param_2);
    uVar5 = 1;
  } while ((uVar4 & 1) == 0);
LAB_04143884:
  uVar5 = 0;
LAB_041438ac:
  return uVar5 & 1;
}


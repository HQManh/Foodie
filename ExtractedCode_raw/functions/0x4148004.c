// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleDonutDisplay$$CountFruitKinds
// address: 0x4148004
// body: available
// range: 0x4148004-0x41480df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int AnhPD_FoodOrder_FlexibleDonutDisplay__CountFruitKinds(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong local_30;
  
  if ((DAT_09516428 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182240);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09516428 = 1;
  }
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_50,param_1,0);
  uVar2 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_50,0);
  if ((uVar2 & 1) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    do {
      uVar2 = local_30;
      if (*(int *)(DAT_09182240 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar1 = AnhPD_FoodOrder_CafePieceTable__IsFruit(uVar2 & 0xffffffff);
      iVar3 = iVar3 + (uVar1 & 1);
      uVar2 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_50,0);
    } while ((uVar2 & 1) != 0);
  }
  return iVar3;
}


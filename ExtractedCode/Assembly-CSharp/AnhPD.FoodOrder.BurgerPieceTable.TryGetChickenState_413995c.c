// rea decompile_all
// name: AnhPD.FoodOrder.BurgerPieceTable$$TryGetChickenState
// address: 0x413995c
// body: available
// range: 0x413995c-0x4139adb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_BurgerPieceTable__TryGetChickenState
               (undefined8 param_1,uint *param_2,undefined1 *param_3,undefined1 *param_4,
               undefined1 *param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong local_60;
  uint local_44;
  
  if ((DAT_0951637e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_0951637e = 1;
  }
  local_60 = 0;
  *param_2 = 0xffffffff;
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_44 = 0;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_80,param_1,0);
  do {
    uVar2 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_80,0);
    uVar3 = local_60;
    if ((uVar2 & 1) == 0) {
      uVar4 = *param_2;
      if ((int)uVar4 < 0) goto LAB_04139ab8;
      goto LAB_04139a54;
    }
    if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = AnhPD_FoodOrder_BurgerPieceTable__TryGetChickenTypeCode(uVar3 & 0xffffffff,&local_44);
  } while ((uVar3 & 1) == 0);
  *param_2 = local_44;
  uVar4 = local_44;
  if (-1 < (int)local_44) {
LAB_04139a54:
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = AnhPD_FoodOrder_PieceSet__get_Item(param_1,0xe,0);
    *param_3 = 0 < iVar1;
    iVar1 = AnhPD_FoodOrder_PieceSet__get_Item(param_1,0x10,0);
    *param_4 = 0 < iVar1;
    iVar1 = AnhPD_FoodOrder_PieceSet__get_Item(param_1,0xf,0);
    *param_5 = 0 < iVar1;
  }
LAB_04139ab8:
  return ~uVar4 >> 0x1f;
}


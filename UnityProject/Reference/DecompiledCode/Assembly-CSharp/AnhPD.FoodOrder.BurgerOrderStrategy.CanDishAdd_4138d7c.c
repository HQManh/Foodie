// rea decompile_all
// name: AnhPD.FoodOrder.BurgerOrderStrategy$$CanDishAdd
// address: 0x4138d7c
// body: available
// range: 0x4138d7c-0x4138ecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_BurgerOrderStrategy__CanDishAdd
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 local_38;
  
  if ((DAT_0951636d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_09218c00);
    FUN_03f5c2a4(&DAT_09218650);
    DAT_0951636d = 1;
  }
  local_38 = 0;
  uVar2 = System_String__op_Equality(param_2,DAT_09218650,0);
  if ((uVar2 & 1) == 0) {
    uVar2 = System_String__op_Equality(param_2,DAT_09218c00,0);
    if ((uVar2 & 1) != 0) {
      if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = AnhPD_FoodOrder_BurgerPieceTable__TryGetPieceOfPreparedId(param_4,&local_38);
      uVar2 = local_38;
      if (((uVar3 & 1) != 0) && ((int)local_38 - 0xeU < 3)) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar1 = AnhPD_FoodOrder_PieceSet__get_Item(param_3,uVar2 & 0xffffffff,0);
        return iVar1 == 0;
      }
    }
  }
  else {
    if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = AnhPD_FoodOrder_BurgerPieceTable__TryGetFilling(param_4,(long)&local_38 + 4);
    if ((uVar2 & 1) != 0) {
      return local_38._4_4_ != 0;
    }
  }
  return false;
}


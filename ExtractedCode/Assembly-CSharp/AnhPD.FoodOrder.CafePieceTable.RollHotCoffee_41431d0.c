// rea decompile_all
// name: AnhPD.FoodOrder.CafePieceTable$$RollHotCoffee
// address: 0x41431d0
// body: available
// range: 0x41431d0-0x4143307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CafePieceTable__RollHotCoffee(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if ((DAT_095163de & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4590);
    FUN_03f5c2a4(&DAT_09182240);
    FUN_03f5c2a4(&DAT_0917df60);
    DAT_095163de = 1;
  }
  uStack_40 = 0;
  local_48 = 0;
  local_38 = 0;
  if (*(int *)(DAT_09182240 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(DAT_09182240 + 0xb8);
  local_50 = *(undefined8 *)(lVar3 + 0x70);
  uVar4 = *(undefined8 *)(lVar3 + 0x78);
  uStack_58 = *(undefined8 *)(lVar3 + 0x68);
  local_60 = *(undefined8 *)(lVar3 + 0x60);
  uVar1 = thunk_FUN_03f9944c(DAT_0917df60);
  FUN_05d777dc(uVar1,0,DAT_091c4590,0);
  puVar5 = &local_48;
  AnhPD_FoodOrder_CafePieceTable__RollToppings(&local_48,&local_60,uVar4,param_2,uVar1,0);
  uStack_78 = uStack_40;
  local_80 = local_48;
  local_70 = local_38;
  uVar2 = AnhPD_FoodOrder_PieceLookup__HasPreparedOfSet(&local_80,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_09182240 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar5 = (undefined8 *)(*(long *)(DAT_09182240 + 0xb8) + 0x60);
  }
  uVar1 = *puVar5;
  uVar4 = puVar5[2];
  param_1[1] = puVar5[1];
  *param_1 = uVar1;
  param_1[2] = uVar4;
  return;
}


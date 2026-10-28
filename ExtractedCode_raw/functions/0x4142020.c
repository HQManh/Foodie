// rea decompile_all
// name: AnhPD.FoodOrder.CafePieceTable$$RollColdCoffee
// address: 0x4142020
// body: available
// range: 0x4142020-0x414220f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CafePieceTable__RollColdCoffee(undefined8 *param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_095163d4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c4578);
    FUN_03f5c2a4(&DAT_091c4588);
    FUN_03f5c2a4(&DAT_09182240);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091798c8);
    FUN_03f5c2a4(&DAT_0917df60);
    FUN_03f5c2a4(&DAT_09213bd0);
    FUN_03f5c2a4(&DAT_09213be0);
    DAT_095163d4 = 1;
  }
  if (*(int *)(DAT_09182240 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = AnhPD_FoodOrder_CafePieceTable__AnyAvailable
                    (*(undefined8 *)(*(long *)(DAT_09182240 + 0xb8) + 0x18));
  if ((uVar1 & 1) == 0) {
    uVar1 = AnhPD_FoodOrder_PieceLookup__get_HasConfig(0);
    puVar4 = &DAT_09213be0;
    if ((uVar1 & 1) == 0) {
      puVar4 = &DAT_09213bd0;
    }
    uVar5 = *puVar4;
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(uVar5,0);
    if (*(int *)(DAT_09182240 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = *(undefined8 **)(DAT_09182240 + 0xb8);
    uStack_50 = puVar4[1];
    local_58 = *puVar4;
    local_48 = puVar4[2];
  }
  else {
    if (*(int *)(DAT_09182240 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = *(undefined8 **)(DAT_09182240 + 0xb8);
    local_60 = puVar4[2];
    uVar5 = puVar4[3];
    uStack_68 = puVar4[1];
    local_70 = *puVar4;
    uVar2 = thunk_FUN_03f9944c(DAT_0917df60);
    FUN_05d777dc(uVar2,0,DAT_091c4578,0);
    uVar3 = thunk_FUN_03f9944c(DAT_091798c8);
    FUN_0533214c(uVar3,0,DAT_091c4588,0);
    AnhPD_FoodOrder_CafePieceTable__RollToppings(&local_58,&local_70,uVar5,param_2,uVar2,uVar3);
  }
  param_1[1] = uStack_50;
  *param_1 = local_58;
  param_1[2] = local_48;
  return;
}


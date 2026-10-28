// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamPieceTable.<>c__DisplayClass60_0$$<Roll>b__0
// address: 0x41514f8
// body: available
// range: 0x41514f8-0x4151597 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_IceCreamPieceTable_<>c__DisplayClass60_0__<Roll>b__0
               (long param_1,undefined4 param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_28;
  
  if ((DAT_0951648c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186a68);
    DAT_0951648c = 1;
  }
  local_28 = 0;
  if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = AnhPD_FoodOrder_IceCreamPieceTable__TryGetRefinedOf(param_2,&local_28);
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),param_2,*(undefined8 *)(lVar3 + 0x28));
    }
  }
  return uVar1 & 1;
}


// rea decompile_all
// name: AnhPD.FoodOrder.PastaOrderStrategy.<>c__DisplayClass17_0$$<WantsStationResult>b__1
// address: 0x41553b4
// body: available
// range: 0x41553b4-0x415544b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_PastaOrderStrategy_<>c__DisplayClass17_0__<WantsStationResult>b__1
               (long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((DAT_095164bc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c96f0);
    DAT_095164bc = 1;
  }
  local_30 = 0;
  local_28 = 0;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = CakeOrder_InGame_OrderRecipeCodec__TryDecode
                      (*(undefined8 *)(param_2 + 0x10),&local_30,0);
    uVar1 = 0;
    if (((uVar2 & 1) != 0) && ((int)local_30 == 1)) {
      uVar1 = FUN_04ad4a4c(local_28,*(undefined4 *)(param_1 + 0x10),DAT_091c96f0);
    }
  }
  return uVar1 & 1;
}


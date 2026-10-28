// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c$$<LaneSlots>b__166_0
// address: 0x448b710
// body: available
// range: 0x448b710-0x448b787 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
CookingGraph_CookingLevelSimulation_<>c__<LaneSlots>b__166_0
          (undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined8 local_40;
  undefined4 local_38;
  
  if ((DAT_09518124 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bebc8);
    DAT_09518124 = 1;
  }
  local_38 = 0;
  local_40 = 0;
  FUN_06627218(&local_40,param_2,param_3,DAT_091bebc8);
  auVar1._8_4_ = local_38;
  auVar1._0_8_ = local_40;
  auVar1._12_4_ = 0;
  return auVar1;
}


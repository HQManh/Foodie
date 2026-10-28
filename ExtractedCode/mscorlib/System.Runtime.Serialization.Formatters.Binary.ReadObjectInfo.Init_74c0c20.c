// rea decompile_all
// name: System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo$$Init
// address: 0x74c0c20
// body: available
// range: 0x74c0c20-0x74c0d3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74c0d1c to 0x74c09d4 System.Runtime.Serialization.Formatters.Binary.ReadObjectInfo$$InitReadConstructor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__Init
               (long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined1 param_11)

{
  *(long *)(param_1 + 0x18) = param_2;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x20) = param_8;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x20),param_8);
  *(long *)(param_1 + 0x38) = param_3;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x38),param_3);
  *(long *)(param_1 + 0x40) = param_4;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x40),param_4);
  *(undefined8 *)(param_1 + 0x60) = param_7;
  *(undefined8 *)(param_1 + 0x58) = param_6;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),0);
  *(undefined8 *)(param_1 + 0x70) = param_9;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x70),param_9);
  *(undefined8 *)(param_1 + 0x78) = param_10;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x78),param_10);
  *(undefined1 *)(param_1 + 0x2f) = param_11;
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + 0x2d) = 1;
  }
  if (param_4 != 0) {
    *(undefined1 *)(param_1 + 0x2e) = 1;
  }
  if (param_2 != 0) {
    System_Runtime_Serialization_Formatters_Binary_ReadObjectInfo__InitReadConstructor
              (param_1,param_2,param_5,param_6,param_7);
    return;
  }
  return;
}


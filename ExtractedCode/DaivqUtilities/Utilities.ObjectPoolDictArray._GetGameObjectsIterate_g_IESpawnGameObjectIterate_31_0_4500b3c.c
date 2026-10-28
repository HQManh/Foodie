// rea decompile_all
// name: Utilities.ObjectPoolDictArray$$<GetGameObjectsIterate>g__IESpawnGameObjectIterate|31_0
// address: 0x4500b3c
// body: available
// range: 0x4500b3c-0x4500c67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Utilities_ObjectPoolDictArray__<GetGameObjectsIterate>g__IESpawnGameObjectIterate_31_0
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
               undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  
  if ((DAT_095184a3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09192e18);
    DAT_095184a3 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09192e18);
  System_Object___ctor(lVar1,0);
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x38) = param_8;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x38),param_8);
  *(undefined8 *)(lVar1 + 0x20) = param_9;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x20),param_9);
  *(undefined8 *)(lVar1 + 0x30) = param_10;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x30),param_10);
  *(undefined4 *)(lVar1 + 0x40) = param_1;
  *(undefined4 *)(lVar1 + 0x44) = param_2;
  *(undefined4 *)(lVar1 + 0x48) = param_3;
  *(undefined4 *)(lVar1 + 0x4c) = param_4;
  *(undefined4 *)(lVar1 + 0x50) = param_5;
  *(undefined4 *)(lVar1 + 0x54) = param_6;
  *(undefined4 *)(lVar1 + 0x58) = param_7;
  *(undefined4 *)(lVar1 + 0x28) = param_11;
  *(undefined4 *)(lVar1 + 0x2c) = param_12;
  *(undefined8 *)(lVar1 + 0x60) = param_13;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x60),param_13);
  *(undefined8 *)(lVar1 + 0x68) = param_14;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x68),param_14);
  return lVar1;
}


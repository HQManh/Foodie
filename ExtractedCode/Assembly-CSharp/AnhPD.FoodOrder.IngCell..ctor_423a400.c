// rea decompile_all
// name: AnhPD.FoodOrder.IngCell$$.ctor
// address: 0x423a400
// body: available
// range: 0x423a400-0x423a523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngCell___ctor
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  if ((DAT_09516e12 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a8080);
    FUN_03f5c2a4(&DAT_09179da8);
    FUN_03f5c2a4(&DAT_091ac680);
    FUN_03f5c2a4(&DAT_0917c0a8);
    DAT_09516e12 = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_0917c0a8);
  FUN_057e0400(uVar1,DAT_091ac680);
  *(undefined8 *)(param_7 + 0x30) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_7 + 0x30),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179da8);
  FUN_053eb530(uVar1,DAT_091a8080);
  *(undefined8 *)(param_7 + 0x38) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_7 + 0x38),uVar1);
  System_Object___ctor(param_7,0);
  *(undefined8 *)(param_7 + 0x10) = param_8;
  *(undefined4 *)(param_7 + 0x18) = param_1;
  *(undefined4 *)(param_7 + 0x1c) = param_2;
  *(undefined4 *)(param_7 + 0x20) = param_3;
  *(undefined4 *)(param_7 + 0x24) = param_4;
  *(undefined4 *)(param_7 + 0x28) = param_5;
  *(undefined4 *)(param_7 + 0x2c) = param_6;
  return;
}


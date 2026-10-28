// rea decompile_all
// name: CookingGraph.Execution.CookingTransferSnapshot$$.ctor
// address: 0x449f740
// body: available
// range: 0x449f740-0x449f81f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingTransferSnapshot___ctor
               (undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  System_Object___ctor(param_2,0);
  *(undefined8 *)(param_2 + 0x10) = param_3;
  *(undefined8 *)(param_2 + 0x18) = param_4;
  *(undefined8 *)(param_2 + 0x20) = param_5;
  uVar2 = param_6[1];
  uVar1 = *param_6;
  *(undefined8 *)(param_2 + 0x38) = param_6[2];
  *(undefined8 *)(param_2 + 0x30) = uVar2;
  *(undefined8 *)(param_2 + 0x28) = uVar1;
  uVar2 = param_7[1];
  uVar1 = *param_7;
  *(undefined8 *)(param_2 + 0x50) = param_7[2];
  *(undefined8 *)(param_2 + 0x48) = uVar2;
  *(undefined8 *)(param_2 + 0x40) = uVar1;
  thunk_FUN_03f5d7b8(param_2 + 0x48,0);
  uVar2 = param_7[4];
  uVar1 = param_7[3];
  *(undefined8 *)(param_2 + 0x68) = param_7[5];
  *(undefined8 *)(param_2 + 0x60) = uVar2;
  *(undefined8 *)(param_2 + 0x58) = uVar1;
  thunk_FUN_03f5d7b8(param_2 + 0x60,0);
  *(undefined8 *)(param_2 + 0x70) = param_8;
  *(undefined8 *)(param_2 + 0x78) = param_9;
  *(undefined8 *)(param_2 + 0x80) = param_1;
  *(undefined8 *)(param_2 + 0x90) = param_11;
  *(undefined8 *)(param_2 + 0x88) = param_10;
  *(undefined8 *)(param_2 + 0x98) = param_12;
  *(undefined8 *)(param_2 + 0xa0) = param_13;
  return;
}


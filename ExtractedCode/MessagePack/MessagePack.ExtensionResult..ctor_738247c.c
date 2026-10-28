// rea decompile_all
// name: MessagePack.ExtensionResult$$.ctor
// address: 0x738247c
// body: available
// range: 0x738247c-0x7382547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_ExtensionResult___ctor
               (undefined1 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_09520a1b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b4750);
    FUN_03f5c2a4(&DAT_091b96d8);
    DAT_09520a1b = 1;
  }
  uVar1 = DAT_091b4750;
  *param_1 = param_2;
  auVar2 = FUN_05a49a78(param_3,param_4,uVar1);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_05fdc71c(&local_58,auVar2._0_8_,auVar2._8_8_,DAT_091b96d8);
  *(undefined8 *)(param_1 + 0x10) = uStack_50;
  *(undefined8 *)(param_1 + 8) = local_58;
  *(undefined8 *)(param_1 + 0x18) = local_48;
  thunk_FUN_03f5d7b8(param_1 + 8,0);
  return;
}


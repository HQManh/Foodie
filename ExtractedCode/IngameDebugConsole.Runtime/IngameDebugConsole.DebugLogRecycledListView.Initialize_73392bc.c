// rea decompile_all
// name: IngameDebugConsole.DebugLogRecycledListView$$Initialize
// address: 0x73392bc
// body: available
// range: 0x73392bc-0x73393ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x73393ec to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogRecycledListView__Initialize
               (undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((DAT_09520673 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174630);
    FUN_03f5c2a4(&DAT_091c7db0);
    FUN_03f5c2a4(&DAT_091c7e00);
    FUN_03f5c2a4(&DAT_0917dfa0);
    DAT_09520673 = 1;
  }
  *(undefined8 *)(param_2 + 0x60) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0x60),param_3);
  *(undefined8 *)(param_2 + 0x78) = param_4;
  thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0x78),param_4);
  *(undefined8 *)(param_2 + 0x80) = param_5;
  thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0x80),param_5);
  uVar1 = DAT_0917dfa0;
  *(undefined4 *)(param_2 + 0x70) = param_1;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  FUN_05d78cfc(uVar1,param_2,DAT_091c7e00,0);
  *(undefined8 *)(param_2 + 0xb0) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0xb0),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09174630);
  FUN_070a8c30(uVar1,param_3,DAT_091c7db0,0);
  *(undefined8 *)(param_2 + 0xb8) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_2 + 0xb8),uVar1);
  return;
}


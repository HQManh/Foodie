// rea decompile_all
// name: IngameDebugConsole.DebugLogManager$$.ctor
// address: 0x733dce0
// body: available
// range: 0x733dce0-0x733ddff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x733ddfc to 0x865f230 UnityEngine.MonoBehaviour$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void IngameDebugConsole_DebugLogManager___ctor(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_0952066c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091fa760);
    FUN_03f5c2a4(&DAT_091fa280);
    DAT_0952066c = 1;
  }
  uVar1 = DAT_091fa760;
  *(undefined4 *)(param_1 + 0x2c) = 0x43480000;
  *(undefined4 *)(param_1 + 0x34) = 0x43700000;
  *(undefined4 *)(param_1 + 0x3c) = 0x60;
  *(undefined4 *)(param_1 + 0x44) = 0x43b40000;
  *(undefined1 *)(param_1 + 0x28) = 1;
  *(undefined4 *)(param_1 + 0x49) = 0x1010101;
  *(undefined4 *)(param_1 + 0x58) = 0x100;
  *(undefined4 *)(param_1 + 0x60) = 0xf;
  *(undefined1 *)(param_1 + 0x31) = 1;
  *(undefined2 *)(param_1 + 0x38) = 0x101;
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined8 *)(param_1 + 0x50) = 0x107fffffff;
  *(undefined1 *)(param_1 + 0x5c) = 1;
  *(undefined1 *)(param_1 + 100) = 1;
  *(undefined1 *)(param_1 + 0x70) = 1;
  *(undefined4 *)(param_1 + 0x74) = 10000;
  *(undefined8 *)(param_1 + 0xf8) = uVar1;
  thunk_FUN_03f5d7b8();
  *(undefined8 *)(param_1 + 0x100) = DAT_091fa280;
  thunk_FUN_03f5d7b8(param_1 + 0x100);
  *(undefined2 *)(param_1 + 0x1d0) = 0x101;
  *(undefined4 *)(param_1 + 0x1f8) = 7;
  *(undefined1 *)(param_1 + 0x209) = 1;
  *(undefined4 *)(param_1 + 0x248) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x24c) = 1;
  *(undefined8 *)(param_1 + 0x2a0) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2a8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e0) = 0xffffffff;
  UnityEngine_MonoBehaviour___ctor(param_1,0);
  return;
}


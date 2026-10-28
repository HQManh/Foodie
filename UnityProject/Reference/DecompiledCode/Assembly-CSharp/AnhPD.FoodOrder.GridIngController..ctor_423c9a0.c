// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$.ctor
// address: 0x423c9a0
// body: available
// range: 0x423c9a0-0x423cb27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x423cb24 to 0x865f230 UnityEngine.MonoBehaviour$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GridIngController___ctor(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_09516dff & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a1308);
    FUN_03f5c2a4(&DAT_09177080);
    FUN_03f5c2a4(&DAT_091adad8);
    FUN_03f5c2a4(&DAT_091ac680);
    FUN_03f5c2a4(&DAT_0917c4d0);
    FUN_03f5c2a4(&DAT_0917c0a8);
    DAT_09516dff = 1;
  }
  uVar1 = DAT_09177080;
  *(undefined8 *)(param_1 + 0x28) = 0x400000004;
  *(undefined8 *)(param_1 + 0x20) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x68) = 0x53d4ccccd;
  *(undefined8 *)(param_1 + 0x8c) = 0x3e19999a3f000000;
  *(undefined8 *)(param_1 + 0x84) = 0x40a0000040000000;
  *(undefined1 *)(param_1 + 0x50) = 1;
  *(undefined4 *)(param_1 + 0x80) = 2;
  *(undefined8 *)(param_1 + 0x94) = 0x4040000040000000;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  FUN_07068f9c(uVar1,DAT_091a1308);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xa8),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917c0a8);
  FUN_057e0400(uVar1,DAT_091ac680);
  *(undefined8 *)(param_1 + 0xe0) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xe0),uVar1);
  uVar1 = DAT_0917c4d0;
  *(undefined1 *)(param_1 + 0xed) = 1;
  *(undefined4 *)(param_1 + 0xf0) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xf8) = 0xbf800000;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  FUN_057e0400(uVar1,DAT_091adad8);
  *(undefined8 *)(param_1 + 0x110) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x110,uVar1);
  *(undefined4 *)(param_1 + 0x11c) = 0xbf800000;
  UnityEngine_MonoBehaviour___ctor(param_1,0);
  return;
}


// rea decompile_all
// name: CakeOrder.Home.Journey.UIHomeTabPageJourney$$.ctor
// address: 0x435861c
// body: available
// range: 0x435861c-0x4358743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4358740 to 0x4345f38 CakeOrder.Home.UIHomeTabPage$$.ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIHomeTabPageJourney___ctor(long param_1)

{
  undefined8 uVar1;
  
  if ((DAT_095177f1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b14f0);
    FUN_03f5c2a4(&DAT_091b3158);
    FUN_03f5c2a4(&DAT_0917d528);
    FUN_03f5c2a4(&DAT_0917cf80);
    DAT_095177f1 = 1;
  }
  uVar1 = DAT_0917cf80;
  *(undefined8 *)(param_1 + 0xf8) = 0x43eb33333;
  *(undefined4 *)(param_1 + 200) = 0x43b40000;
  *(undefined8 *)(param_1 + 0xe8) = 0x43ee66666;
  *(undefined8 *)(param_1 + 0xc0) = 0x438c000042200000;
  *(undefined8 *)(param_1 + 0xf0) = 0x402000003e800000;
  *(undefined4 *)(param_1 + 0x110) = 8;
  uVar1 = thunk_FUN_03f9944c(uVar1);
  FUN_057e0400(uVar1,DAT_091b14f0);
  *(undefined8 *)(param_1 + 0x120) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x120,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917d528);
  FUN_057e0400(uVar1,DAT_091b3158);
  *(undefined8 *)(param_1 + 0x128) = uVar1;
  thunk_FUN_03f5d7b8(param_1 + 0x128,uVar1);
  *(undefined4 *)(param_1 + 0x14c) = 0xffffffff;
  CakeOrder_Home_UIHomeTabPage___ctor(param_1);
  return;
}


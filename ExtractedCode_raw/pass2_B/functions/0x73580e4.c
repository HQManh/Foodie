// rea decompile_all
// name: Lean.Touch.LeanTouch$$.cctor
// address: 0x73580e4
// body: available
// range: 0x73580e4-0x7358357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7358354 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Lean_Touch_LeanTouch___cctor(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((DAT_095207ed & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a8390);
    FUN_03f5c2a4(&DAT_09179e40);
    FUN_03f5c2a4(&DAT_091876d8);
    FUN_03f5c2a4(&DAT_09187728);
    FUN_03f5c2a4(&DAT_091ae140);
    FUN_03f5c2a4(&DAT_091ae210);
    FUN_03f5c2a4(&DAT_091ae138);
    FUN_03f5c2a4(&DAT_091af5a0);
    FUN_03f5c2a4(&DAT_0917ca08);
    FUN_03f5c2a4(&DAT_0917c610);
    FUN_03f5c2a4(&DAT_0917c628);
    DAT_095207ed = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_0917c628);
  FUN_057e0400(uVar1,DAT_091ae210);
  **(undefined8 **)(DAT_09187728 + 0xb8) = uVar1;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09187728 + 0xb8),uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917c610);
  FUN_057e0478(uVar1,10,DAT_091ae140);
  puVar2 = (undefined8 *)(*(long *)(DAT_09187728 + 0xb8) + 8);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917c610);
  FUN_057e0478(uVar1,10,DAT_091ae140);
  puVar2 = (undefined8 *)(*(long *)(DAT_09187728 + 0xb8) + 0x10);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917ca08);
  FUN_05841ff8(uVar1,10,DAT_091af5a0);
  puVar2 = (undefined8 *)(*(long *)(DAT_09187728 + 0xb8) + 0x60);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917c610);
  FUN_057e0478(uVar1,10,DAT_091ae140);
  puVar2 = (undefined8 *)(*(long *)(DAT_09187728 + 0xb8) + 0x68);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_091876d8);
  Lean_Touch_LeanFinger___ctor();
  puVar2 = (undefined8 *)(*(long *)(DAT_09187728 + 0xb8) + 0x80);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_09179e40);
  FUN_053eb530(uVar1,DAT_091a8390);
  puVar2 = (undefined8 *)(*(long *)(DAT_09187728 + 0xb8) + 0x88);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  uVar1 = thunk_FUN_03f9944c(DAT_0917c610);
  FUN_057e0400(uVar1,DAT_091ae138);
  puVar2 = (undefined8 *)(*(long *)(DAT_09187728 + 0xb8) + 0x90);
  *puVar2 = uVar1;
  thunk_FUN_03f5d7b8(puVar2,uVar1);
  return;
}


// rea decompile_all
// name: Newtonsoft.Json.JsonSerializerSettings$$.ctor
// address: 0x764d318
// body: available
// range: 0x764d318-0x764d4cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x764d4cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonSerializerSettings___ctor(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((DAT_0952237b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cb210);
    DAT_0952237b = 1;
  }
  System_Object___ctor(param_1,0);
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_2 + 0x5c);
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    thunk_FUN_03f5d7b8();
    *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_2 + 0x68);
    uVar2 = *(undefined8 *)(param_2 + 0xb0);
    uVar1 = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
    *(undefined8 *)(param_1 + 0xb0) = uVar2;
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
    thunk_FUN_03f5d7b8(param_1 + 0xb0,0);
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x108);
    thunk_FUN_03f5d7b8(param_1 + 0x108);
    *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_2 + 0x100);
    thunk_FUN_03f5d7b8(param_1 + 0x100);
    *(undefined8 *)(param_1 + 0xf8) = *(undefined8 *)(param_2 + 0xf8);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_2 + 0xe8);
    thunk_FUN_03f5d7b8();
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
    thunk_FUN_03f5d7b8();
    uVar1 = DAT_091cb210;
    *(undefined8 *)(param_1 + 0xc0) = *(undefined8 *)(param_2 + 0xc0);
    *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)(param_2 + 0x6c);
    *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 200);
    *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(param_2 + 0x7c);
    uVar1 = FUN_04b08b78(*(undefined8 *)(param_2 + 0xd8),uVar1);
    *(undefined8 *)(param_1 + 0xd8) = uVar1;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xd8),uVar1);
    *(undefined8 *)(param_1 + 0x74) = *(undefined8 *)(param_2 + 0x74);
    *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_2 + 0x84);
    *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_2 + 0x8c);
    *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_2 + 0x94);
    *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)(param_2 + 0x9c);
    *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}


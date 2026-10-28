// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonDynamicContract$$.ctor
// address: 0x76a9290
// body: available
// range: 0x76a9290-0x76a9453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a9450 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonDynamicContract___ctor(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((DAT_0952267a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09179048);
    FUN_03f5c2a4(&DAT_09179050);
    FUN_03f5c2a4(&DAT_091d17e0);
    FUN_03f5c2a4(&DAT_091d17e8);
    FUN_03f5c2a4(&DAT_091873b0);
    FUN_03f5c2a4(&DAT_091bd3c8);
    FUN_03f5c2a4(&DAT_091bd3d8);
    FUN_03f5c2a4(&DAT_0917ee10);
    FUN_03f5c2a4(&DAT_0917ee18);
    DAT_0952267a = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_09179048);
  FUN_05324070(uVar1,0,DAT_091d17e0,0);
  uVar2 = thunk_FUN_03f9944c(DAT_0917ee10);
  FUN_06360fcc(uVar2,uVar1,DAT_091bd3c8);
  *(undefined8 *)(param_1 + 0xd0) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xd0),uVar2);
  uVar1 = thunk_FUN_03f9944c(DAT_09179050);
  FUN_05324070(uVar1,0,DAT_091d17e8,0);
  uVar2 = thunk_FUN_03f9944c(DAT_0917ee18);
  FUN_06360fcc(uVar2,uVar1,DAT_091bd3d8);
  *(undefined8 *)(param_1 + 0xd8) = uVar2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xd8),uVar2);
  Newtonsoft_Json_Serialization_JsonContainerContract___ctor(param_1,param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x24) = 6;
  uVar1 = thunk_FUN_03f9944c(DAT_091873b0);
  Newtonsoft_Json_Serialization_JsonPropertyCollection___ctor(uVar1,uVar2);
  *(undefined8 *)(param_1 + 0xc0) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0xc0),uVar1);
  return;
}


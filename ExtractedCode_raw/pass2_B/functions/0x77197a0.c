// rea decompile_all
// name: Newtonsoft.Json.Bson.BsonReader$$.ctor
// address: 0x77197a0
// body: available
// range: 0x77197a0-0x7719887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Bson_BsonReader___ctor
               (long param_1,undefined8 param_2,byte param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  if ((DAT_095229e6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b21e8);
    FUN_03f5c2a4(&DAT_0917d1c8);
    FUN_03f5c2a4(&DAT_092215e0);
    DAT_095229e6 = 1;
  }
  Newtonsoft_Json_JsonReader___ctor(param_1,0);
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_2,DAT_092215e0,0);
  *(undefined8 *)(param_1 + 0x78) = param_2;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x78),param_2);
  uVar1 = thunk_FUN_03f9944c(DAT_0917d1c8);
  FUN_057e0400(uVar1,DAT_091b21e8);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x80),uVar1);
  *(byte *)(param_1 + 0xa8) = param_3 & 1;
  *(undefined4 *)(param_1 + 0xac) = param_4;
  return;
}


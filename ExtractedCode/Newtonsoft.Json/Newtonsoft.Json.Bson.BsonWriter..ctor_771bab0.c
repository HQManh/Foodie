// rea decompile_all
// name: Newtonsoft.Json.Bson.BsonWriter$$.ctor
// address: 0x771bab0
// body: available
// range: 0x771bab0-0x771bbb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x771bbb0 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Bson_BsonWriter___ctor(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((DAT_095229fb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181cb0);
    FUN_03f5c2a4(&DAT_09181fd8);
    FUN_03f5c2a4(&DAT_09187490);
    FUN_03f5c2a4(&DAT_092235d8);
    DAT_095229fb = 1;
  }
  if (*(int *)(DAT_09187490 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  Newtonsoft_Json_JsonWriter___ctor(param_1,0);
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(param_2,DAT_092235d8,0);
  uVar1 = thunk_FUN_03f9944c(DAT_09181cb0);
  System_IO_BinaryWriter___ctor(uVar1,param_2,0);
  lVar2 = thunk_FUN_03f9944c(DAT_09181fd8);
  System_Object___ctor(lVar2,0);
  *(undefined4 *)(lVar2 + 0x20) = 1;
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x10),uVar1);
  *(long *)(param_1 + 0x60) = lVar2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x60),lVar2);
  return;
}


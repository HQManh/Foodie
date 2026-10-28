// rea decompile_all
// name: Newtonsoft.Json.Serialization.JsonProperty$$set_PropertyName
// address: 0x76a51d0
// body: available
// range: 0x76a51d0-0x76a5267 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Serialization_JsonProperty__set_PropertyName(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((DAT_09522696 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187288);
    DAT_09522696 = 1;
  }
  puVar3 = (undefined8 *)(param_1 + 0x30);
  *puVar3 = param_2;
  thunk_FUN_03f5d7b8(puVar3,param_2);
  uVar2 = *puVar3;
  if (*(int *)(DAT_09187288 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  bVar1 = Newtonsoft_Json_Utilities_JavaScriptUtils__ShouldEscapeJavaScriptString
                    (uVar2,*(undefined8 *)(*(long *)(DAT_09187288 + 0xb8) + 0x10),0);
  *(byte *)(param_1 + 0x38) = (bVar1 ^ 0xff) & 1;
  return;
}


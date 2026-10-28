// rea decompile_all
// name: Newtonsoft.Json.JsonTextWriter$$DoWriteValueAsync
// address: 0x7668754
// body: available
// range: 0x7668754-0x76687d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76687bc to 0x76685f4 Newtonsoft.Json.JsonTextWriter$$DoWriteValueAsync (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76687d4 to 0x76668f8 Newtonsoft.Json.JsonTextWriter$$DoWriteNullAsync (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextWriter__DoWriteValueAsync
               (undefined8 param_1,char *param_2,undefined8 param_3)

{
  if ((DAT_0952243f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b6e88);
    FUN_03f5c2a4(&DAT_091b6e90);
    DAT_0952243f = 1;
  }
  if (*param_2 != '\0') {
    Newtonsoft_Json_JsonTextWriter__DoWriteValueAsync
              (param_1,*(undefined8 *)(param_2 + 4),*(undefined8 *)(param_2 + 0xc),param_3);
    return;
  }
  Newtonsoft_Json_JsonTextWriter__DoWriteNullAsync(param_1,param_3);
  return;
}


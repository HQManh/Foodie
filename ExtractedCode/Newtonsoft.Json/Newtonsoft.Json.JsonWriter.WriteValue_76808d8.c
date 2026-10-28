// rea decompile_all
// name: Newtonsoft.Json.JsonWriter$$WriteValue
// address: 0x76808d8
// body: available
// range: 0x76808d8-0x7680957 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonWriter__WriteValue(long *param_1,ulong param_2)

{
  long lVar1;
  
  if ((DAT_09522512 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b73f8);
    FUN_03f5c2a4(&DAT_091b7400);
    DAT_09522512 = 1;
  }
  lVar1 = *param_1;
  if ((param_2 & 0xff) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0768093c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x6e8))((int)(param_2 >> 0x20),param_1,*(undefined8 *)(lVar1 + 0x6f0));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x07680954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x658))(param_1,*(undefined8 *)(lVar1 + 0x660));
  return;
}


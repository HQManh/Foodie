// rea decompile_all
// name: System.IO.StringWriter$$WriteAsync
// address: 0x7585dbc
// body: available
// range: 0x7585dbc-0x7585e6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_IO_StringWriter__WriteAsync(long *param_1,undefined8 param_2)

{
  if ((DAT_09521b0b & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_09521b0b = 1;
  }
  (**(code **)(*param_1 + 0x278))(param_1,param_2,*(undefined8 *)(*param_1 + 0x280));
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095175b2 == '\0') {
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095175b2 = '\x01';
  }
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  return *(undefined8 *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x30);
}


// rea decompile_all
// name: System.TimeSpan$$get_TotalMilliseconds
// address: 0x75cda10
// body: available
// range: 0x75cda10-0x75cda47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] System_TimeSpan__get_TotalMilliseconds(long *param_1)

{
  double dVar1;
  double dVar2;
  double dVar4;
  undefined1 auVar3 [16];
  
  dVar1 = (double)*param_1 * 0.0001;
  dVar4 = -922337203685477.0;
  if (-922337203685477.0 <= dVar1) {
    dVar4 = dVar1;
  }
  dVar2 = 922337203685477.0;
  if (dVar1 <= 922337203685477.0) {
    dVar2 = dVar4;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar2;
  return auVar3;
}


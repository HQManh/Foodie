// rea decompile_all
// name: thunk_FUN_03f72a14
// address: 0x75ed2e4
// body: available
// range: 0x75ed2e4-0x75ed2e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong thunk_FUN_03f72a14(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + 0x40);
  if (lVar1 == DAT_09535408) {
    return (long)(char)param_1[2];
  }
  if (lVar1 == DAT_095353f0) {
    return (ulong)*(byte *)(param_1 + 2);
  }
  if (((lVar1 == DAT_09535460) || (lVar1 == DAT_09535418)) || (lVar1 == DAT_09535410)) {
    return (ulong)*(ushort *)(param_1 + 2);
  }
  if ((lVar1 == DAT_09535428) || (lVar1 == DAT_09535420)) {
    return (ulong)*(uint *)(param_1 + 2);
  }
  if ((lVar1 != DAT_09535448) && (lVar1 != DAT_09535440)) {
    return 0;
  }
  return (ulong)(*(uint *)((long)param_1 + 0x14) ^ *(uint *)(param_1 + 2));
}


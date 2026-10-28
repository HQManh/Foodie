// rea decompile_all
// name: System.Guid$$.ctor
// address: 0x75ad8ac
// body: available
// range: 0x75ad8ac-0x75ad8eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Guid___ctor(undefined4 *param_1,undefined4 param_2,undefined2 param_3,undefined2 param_4
                       ,undefined1 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
                       undefined1 param_9,undefined1 param_10,undefined1 param_11,
                       undefined1 param_12)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 3) = param_9;
  *(undefined2 *)(param_1 + 1) = param_3;
  *(undefined2 *)((long)param_1 + 6) = param_4;
  *(undefined1 *)(param_1 + 2) = param_5;
  *(undefined1 *)((long)param_1 + 9) = param_6;
  *(undefined1 *)((long)param_1 + 10) = param_7;
  *(undefined1 *)((long)param_1 + 0xb) = param_8;
  *(undefined1 *)((long)param_1 + 0xd) = param_10;
  *(undefined1 *)((long)param_1 + 0xe) = param_11;
  *(undefined1 *)((long)param_1 + 0xf) = param_12;
  return;
}


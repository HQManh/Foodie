// rea decompile_all
// name: _INIT_15
// address: 0x3faa618
// body: available
// range: 0x3faa618-0x3faa6db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_15(void)

{
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  DAT_09535098 = 0;
  DAT_09535090 = 0;
  DAT_09535088 = &DAT_09535090;
  __cxa_atexit(0x3fa5500,&DAT_09535088,&PTR_LOOP_089e1d70);
  uRam00000000095350a0 = 0;
  uRam00000000095350e0 = 0;
  uRam00000000095350e8 = 0;
  uRam0000000009535108 = 0;
  uRam0000000009535100 = 0;
  _DAT_095350f8 = 0x9535100;
  __cxa_atexit(&UNK_03fa7200,&DAT_095350f8,&PTR_LOOP_089e1d70);
  _DAT_09535138 = 0;
  uRam0000000009535178 = 0;
  uRam0000000009535180 = 0;
  FUN_03fa848c(&DAT_09535188,0,&uStack_11,&uStack_12);
  __cxa_atexit(&LAB_03f5d264,&DAT_09535188,&PTR_LOOP_089e1d70);
  return;
}


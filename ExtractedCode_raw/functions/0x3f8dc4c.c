// rea decompile_all
// name: _INIT_7
// address: 0x3f8dc4c
// body: available
// range: 0x3f8dc4c-0x3f8dd83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f8dd80 to 0x89db840 <EXTERNAL>::__cxa_atexit (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_7(void)

{
  _DAT_09534ac8 = 0;
  uRam0000000009534b08 = 0;
  uRam0000000009534b10 = 0;
  FUN_03f8db18(&DAT_09534b38,&DAT_01a45042,&UNK_01a7b49d);
  FUN_03f8db18(&DAT_09534b68,&DAT_01a45042,&DAT_01a42571);
  FUN_03f8db18(0x9534b98,&DAT_01a45042,&UNK_01a86cec);
  FUN_03f8db18(0x9534bc8,&DAT_01a45042,".bundle");
  FUN_03f8db18(0x9534bf8,&UNK_01a450b7,&UNK_01a7b49d);
  FUN_03f8db18(0x9534c28,&UNK_01a450b7,&DAT_01a42571);
  FUN_03f8db18(0x9534c58,&UNK_01a450b7,&UNK_01a86cec);
  FUN_03f8db18(0x9534c88,&UNK_01a450b7,".bundle");
  __cxa_atexit(&UNK_03f8dbfc,0,&PTR_LOOP_089e1d70);
  return;
}


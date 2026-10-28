// rea decompile_all
// name: _INIT_16
// address: 0x3fb3fb4
// body: available
// range: 0x3fb3fb4-0x3fb4087 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _INIT_16(void)

{
  pthread_key_t *ppVar1;
  pthread_key_t local_18;
  pthread_key_t local_14;
  
  DAT_09535278 = 0;
  DAT_095352b8 = 0;
  DAT_095352c0 = 0;
  DAT_095352d0 = 0;
  DAT_095352d8 = 0;
  DAT_095352c8 = 0;
  __cxa_atexit(&LAB_03f79404,&DAT_095352c8,&PTR_LOOP_089e1d70);
  ppVar1 = operator_new(4);
  pthread_key_create(&local_18,(__destr_function *)0x0);
  *ppVar1 = local_18;
  DAT_095352e0 = ppVar1;
  __cxa_atexit(FUN_03f85b68,&DAT_095352e0,&PTR_LOOP_089e1d70);
  ppVar1 = operator_new(4);
  pthread_key_create(&local_14,(__destr_function *)0x0);
  *ppVar1 = local_14;
  DAT_095352e8 = ppVar1;
  __cxa_atexit(FUN_03f85b68,&DAT_095352e8,&PTR_LOOP_089e1d70);
  DAT_095352f0 = 0;
  return;
}


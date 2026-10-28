// rea decompile_all
// name: FUN_03fbd8ec
// address: 0x3fbd8ec
// body: available
// range: 0x3fbd8ec-0x3fbd973 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fbd970 to 0x89dc310 <EXTERNAL>::pthread_setspecific (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_03fbd8ec(void)

{
  pthread_key_t __key;
  uint uVar1;
  void *pvVar2;
  undefined8 *__pointer;
  undefined4 *__pointer_00;
  
  pvVar2 = pthread_getspecific(*DAT_09535820);
  if (pvVar2 != (void *)0x0) {
    return pvVar2;
  }
  __pointer = operator_new(0x18);
  __pointer[1] = 0;
  __pointer[2] = 0;
  *__pointer = 0;
  FUN_03fbe220(__pointer,0x40);
  pthread_setspecific(*DAT_09535820,__pointer);
  __pointer_00 = operator_new(0x10);
  __key = *DAT_09535828;
  *(undefined8 *)(__pointer_00 + 2) = 0;
  *__pointer_00 = 0x7fffffff;
  uVar1 = pthread_setspecific(__key,__pointer_00);
  return (void *)(ulong)uVar1;
}


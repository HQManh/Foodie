// rea decompile_all
// name: thunk_FUN_03f62c54
// address: 0x75488f4
// body: available
// range: 0x75488f4-0x75488f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool thunk_FUN_03f62c54(undefined8 param_1,long param_2)

{
  void *pvVar1;
  byte abStack_38 [16];
  void *pvStack_28;
  
  FUN_03f926e8(abStack_38,param_2 + 0x14);
  pvVar1 = (void *)((ulong)abStack_38 | 1);
  if ((abStack_38[0] & 1) != 0) {
    pvVar1 = pvStack_28;
  }
  pvVar1 = bsearch(pvVar1,&DAT_02355ff8,0x153,4,(__compar_fn_t)&LAB_03f62d0c);
  if (pvVar1 != (void *)0x0) {
    FUN_03f62ab4(param_1,&DAT_02356544 + (long)(int)*(short *)((long)pvVar1 + 2) * 0x38);
  }
  if ((abStack_38[0] & 1) != 0) {
    operator_delete(pvStack_28);
  }
  return pvVar1 != (void *)0x0;
}


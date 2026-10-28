// rea decompile_all
// name: FUN_03fd70c8
// address: 0x3fd70c8
// body: available
// range: 0x3fd70c8-0x3fd7187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd715c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fd7184 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_03fd70c8(ulong param_1)

{
  void *pvVar1;
  int __prot;
  
  if ((DAT_09748110 - 1U & param_1) != 0) {
    (*(code *)PTR_FUN_09515620)("Bad GET_MEM arg");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __prot = 3;
  if (DAT_09748a38 != 0) {
    __prot = 7;
  }
  pvVar1 = mmap(DAT_09748a58,param_1,__prot,0x22,-1,0);
  if (pvVar1 == (void *)0xffffffffffffffff) {
    pvVar1 = (void *)0x0;
  }
  else {
    DAT_09748a58 = (void *)((long)pvVar1 + DAT_09748110 + param_1 + -1 & -DAT_09748110);
    if (((ulong)pvVar1 & 0xfff) != 0) {
      (*(code *)PTR_FUN_09515620)
                ("GC_unix_get_mem: Memory returned by mmap is not aligned to HBLKSIZE.");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return pvVar1;
}


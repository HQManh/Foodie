// rea decompile_all
// name: FUN_03fcd81c
// address: 0x3fcd81c
// body: available
// range: 0x3fcd81c-0x3fcd8cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fcd8ac to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fcd81c(long param_1,long param_2)

{
  void *__addr;
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  size_t __len;
  
  pvVar3 = (void *)((param_1 + DAT_09748110) - 1U & -DAT_09748110);
  __addr = (void *)0x0;
  if ((ulong)((long)pvVar3 + DAT_09748110) <= (ulong)(param_1 + param_2)) {
    __addr = pvVar3;
  }
  if (__addr != (void *)0x0) {
    __len = (-DAT_09748110 & param_1 + param_2) - (long)__addr;
    iVar1 = madvise(__addr,__len,4);
    if (iVar1 == -1) {
      if (DAT_09535be0 != 0) {
        puVar2 = (undefined4 *)__errno();
        FUN_03fcb51c("unmap: madvise failed at %p (length %lu), errcode= %d\n",__addr,__len,*puVar2)
        ;
      }
      (*(code *)PTR_FUN_09515620)("unmap: madvise failed");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    DAT_09535c88 = DAT_09535c88 + __len;
  }
  return;
}


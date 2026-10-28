// rea decompile_all
// name: FUN_03fd6270
// address: 0x3fd6270
// body: available
// range: 0x3fd6270-0x3fd631b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fd6318 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fd6270(void)

{
  long lVar1;
  int iVar2;
  pthread_t __th;
  void *pvVar3;
  void *pvVar4;
  size_t local_70;
  void *local_68;
  pthread_attr_t pStack_60;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  __th = pthread_self();
  iVar2 = pthread_getattr_np(__th,&pStack_60);
  if (iVar2 == 0) {
    iVar2 = pthread_attr_getstack(&pStack_60,&local_68,&local_70);
    pvVar4 = local_68;
    pthread_attr_destroy(&pStack_60);
    if ((iVar2 == 0) && (pvVar4 != (void *)0x0)) {
      local_68 = (void *)((long)local_68 + local_70);
      pvVar4 = local_68;
      goto LAB_03fd62c0;
    }
  }
  (*(code *)PTR_thunk_FUN_03fcb048_09515630)
            ("GC Warning: pthread_getattr_np or pthread_attr_getstack failed for main thread\n",0);
  pvVar3 = (void *)FUN_03fd6dd4();
  pvVar4 = (void *)0xfffffffffffffff8;
  if (pvVar3 != (void *)0x0) {
    pvVar4 = pvVar3;
  }
LAB_03fd62c0:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pvVar4);
  }
  return;
}


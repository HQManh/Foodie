// rea decompile_all
// name: FUN_03faee08
// address: 0x3faee08
// body: available
// range: 0x3faee08-0x3faeeaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03faee08(long param_1)

{
  pthread_key_t *ppVar1;
  void *__ptr;
  long lVar2;
  long lVar3;
  undefined1 auStack_28 [8];
  
  FUN_03f5d894(auStack_28,&DAT_09535278);
  ppVar1 = DAT_095352e8;
  __ptr = *(void **)(*(long *)(param_1 + 0x10) + 0x60);
  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x60) = 0;
  pthread_setspecific(*ppVar1,(void *)0x0);
  if (__ptr != (void *)0x0) {
    lVar2 = 0;
    do {
      if (*(long *)((long)__ptr + lVar2 * 8) == 0) break;
      lVar3 = 0;
      do {
        if (*(long *)(*(long *)((long)__ptr + lVar2 * 8) + lVar3) == 0) break;
        thunk_FUN_03fd1308();
        lVar3 = lVar3 + 8;
      } while (lVar3 != 0x2000);
      if (lVar2 != 0) {
        free(*(void **)((long)__ptr + lVar2 * 8));
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 != 0x400);
    free(__ptr);
  }
  FUN_03f5d920(auStack_28);
  return;
}


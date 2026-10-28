// rea decompile_all
// name: FUN_03faec6c
// address: 0x3faec6c
// body: available
// range: 0x3faec6c-0x3faed2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03faec6c(void)

{
  pthread_key_t *ppVar1;
  long *__pointer;
  void *pvVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 auStack_28 [8];
  
  FUN_03f5d894(auStack_28,&DAT_09535278);
  __pointer = calloc(1,0x4000);
  *__pointer = (long)(__pointer + 0x400);
  pvVar2 = pthread_getspecific(*DAT_095352e0);
  ppVar1 = DAT_095352e8;
  *(long **)(*(long *)((long)pvVar2 + 0x10) + 0x60) = __pointer;
  pthread_setspecific(*ppVar1,__pointer);
  if (DAT_095352c8 != DAT_095352d0) {
    uVar4 = 0;
    puVar3 = DAT_095352c8;
    do {
      FUN_03faf62c(__pointer,CONCAT44(uVar4,uVar4 >> 0x10) & 0xffffffffffff,*puVar3);
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 + 1;
    } while (puVar3 != DAT_095352d0);
  }
  FUN_03f5d920(auStack_28);
  return;
}


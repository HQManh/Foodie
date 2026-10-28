// rea decompile_all
// name: FUN_03f86e18
// address: 0x3f86e18
// body: available
// range: 0x3f86e18-0x3f86f3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f86e18(void)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_38 [8];
  
  pvVar1 = pthread_getspecific(*DAT_095349e8);
  pthread_setspecific(*DAT_095349f0,(void *)0x1);
  FUN_03f5d894(auStack_38,DAT_095349f8);
  lVar4 = *(long *)((long)DAT_095349f8 + 0x58);
  if (lVar4 != 0) {
    lVar5 = 0;
    pvVar2 = DAT_095349f8;
    do {
      pvVar3 = *(void **)(*(long *)((long)pvVar2 + 0x50) + lVar5 * 8);
      if (pvVar3 != pvVar1) {
        FUN_03f88ac4(*(undefined8 *)((long)pvVar3 + 0x10),10,0);
        pvVar3 = *(void **)(*(long *)((long)DAT_095349f8 + 0x50) + lVar5 * 8);
        pvVar2 = DAT_095349f8;
        if (pvVar3 != (void *)0x0) {
          FUN_03f86cc0(pvVar3);
          operator_delete(pvVar3);
          pvVar2 = DAT_095349f8;
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar4 != lVar5);
  }
  FUN_03f86cc0(pvVar1);
  operator_delete(pvVar1);
  pvVar1 = DAT_095349f8;
  if (-1 < *(long *)((long)DAT_095349f8 + 0x60)) {
    free(*(void **)((long)DAT_095349f8 + 0x50));
    *(undefined8 *)((long)pvVar1 + 0x50) = 0;
  }
  *(undefined8 *)((long)pvVar1 + 0x58) = 0;
  *(undefined8 *)((long)pvVar1 + 0x60) = 0;
  FUN_03f5d920(auStack_38);
  pthread_setspecific(*DAT_095349f0,(void *)0x0);
  pvVar1 = DAT_095349f8;
  if (DAT_095349f8 != (void *)0x0) {
    FUN_03f870e0((long)DAT_095349f8 + 0x50);
    operator_delete(pvVar1);
  }
  DAT_095349f8 = (void *)0x0;
  FUN_03f89c84();
  return;
}


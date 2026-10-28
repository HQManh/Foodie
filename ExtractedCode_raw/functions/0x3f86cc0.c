// rea decompile_all
// name: FUN_03f86cc0
// address: 0x3f86cc0
// body: available
// range: 0x3f86cc0-0x3f86d67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f86cc0(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  undefined1 auStack_18 [8];
  
  pvVar5 = *(void **)(param_1 + 8);
  if (pvVar5 != (void *)0x0) {
    FUN_03f89cf0(pvVar5);
    operator_delete(pvVar5);
  }
  pvVar5 = pthread_getspecific(*DAT_095349f0);
  if (pvVar5 == (void *)0x0) {
    FUN_03f5d894(auStack_18,DAT_095349f8);
    lVar2 = *(long *)(DAT_095349f8 + 0x58);
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(DAT_095349f8 + 0x50);
      plVar3 = (long *)*puVar1;
      lVar4 = lVar2;
      do {
        if (*plVar3 == param_1) {
          *(long *)(DAT_095349f8 + 0x58) = lVar2 + -1;
          *plVar3 = ((long *)*puVar1)[lVar2 + -1];
          break;
        }
        lVar4 = lVar4 + -1;
        plVar3 = plVar3 + 1;
      } while (lVar4 != 0);
    }
    FUN_03f5d920(auStack_18);
  }
  FUN_03f85c30(param_1 + 0x10);
  return;
}


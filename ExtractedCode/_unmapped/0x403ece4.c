// rea decompile_all
// name: FUN_0403ece4
// address: 0x403ece4
// body: available
// range: 0x403ece4-0x403edeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x403ed7c to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x403ede8 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0403ece4(long *param_1,long param_2)

{
  void *__dest;
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  size_t __n;
  long *plVar4;
  undefined8 *puVar5;
  
  lVar1 = *(long *)(param_2 + 0x298);
  lVar2 = *(long *)(param_2 + 0x2a0);
  *param_1 = param_2;
  plVar4 = param_1 + 5;
  param_1[6] = 0;
  *plVar4 = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  puVar5 = *(undefined8 **)(param_2 + 0x2a0);
  puVar3 = *(undefined8 **)(param_2 + 0x2a8);
  param_1[1] = lVar2 - lVar1 >> 3;
  param_1[2] = (long)plVar4;
  param_1[3] = (long)plVar4;
  param_1[4] = (long)(param_1 + 0xd);
  if (puVar5 == puVar3) {
    puVar3 = *(undefined8 **)(param_2 + 0x298);
    __n = (long)puVar5 - (long)puVar3;
    if (puVar3 == (undefined8 *)(param_2 + 0x2b0)) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (puVar5 != puVar3) {
        memmove(__dest,puVar3,__n);
      }
      *(void **)(param_2 + 0x298) = __dest;
    }
    else {
      __dest = realloc(puVar3,__n * 2);
      *(void **)(param_2 + 0x298) = __dest;
      if (__dest == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
    }
    puVar5 = (undefined8 *)((long)__dest + __n);
    *(undefined8 **)(param_2 + 0x2a0) = puVar5;
    *(void **)(param_2 + 0x2a8) = (void *)((long)__dest + ((long)__n >> 2) * 8);
  }
  *(undefined8 **)(param_2 + 0x2a0) = puVar5 + 1;
  *puVar5 = param_1 + 2;
  return;
}


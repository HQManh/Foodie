// rea decompile_all
// name: thunk_FUN_03f8d6ac
// address: 0x758a634
// body: available
// range: 0x758a634-0x758a637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 thunk_FUN_03f8d6ac(int *param_1,undefined4 *param_2)

{
  char *__name;
  int *piVar1;
  long lVar2;
  undefined1 auStack_18 [8];
  
  if ((param_1[1] == 1) && ((*(byte *)((long)param_1 + 0x23) >> 2 & 1) != 0)) {
    __name = (char *)((long)param_1 + 9);
    if ((*(byte *)(param_1 + 2) & 1) != 0) {
      __name = *(char **)(param_1 + 6);
    }
    unlink(__name);
  }
  close(*param_1);
  FUN_03f5d894(auStack_18,&DAT_09534ac8);
  if (DAT_09534b18 == param_1) {
    DAT_09534b18 = *(int **)(param_1 + 0x12);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if (DAT_09534cc0 == param_1) {
    DAT_09534cc0 = piVar1;
  }
  lVar2 = *(long *)(param_1 + 0x12);
  if (piVar1 != (int *)0x0) {
    *(long *)(piVar1 + 0x12) = lVar2;
  }
  if (lVar2 != 0) {
    *(int **)(lVar2 + 0x40) = piVar1;
  }
  FUN_03f5d920(auStack_18);
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 6));
  }
  operator_delete(param_1);
  *param_2 = 0;
  return 1;
}


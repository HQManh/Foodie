// rea decompile_all
// name: FUN_03fea234
// address: 0x3fea234
// body: available
// range: 0x3fea234-0x3fea343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fea33c to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fea340 to 0x89dbdc0 <EXTERNAL>::abort (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03fea234(long *param_1,undefined8 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  size_t __n;
  void *__dest;
  char *__s;
  char local_440 [1024];
  
  __s = local_440;
  piVar3 = (int *)__errno();
  iVar1 = *piVar3;
  pcVar4 = strerror_r(param_3,local_440,0x400);
  iVar2 = (int)pcVar4;
  if (iVar2 != 0) {
    if (iVar2 == -1) {
      iVar2 = *piVar3;
    }
    if (iVar2 != 0x16) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __s = "";
  }
  if (*__s == '\0') {
    snprintf(local_440,0x400,"Unknown error %d",(ulong)param_3);
    __s = local_440;
  }
  *piVar3 = iVar1;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5d118(param_1);
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)__n << 1);
    if (__n == 0) goto LAB_03fea318;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    param_1[1] = __n;
    param_1[2] = (long)__dest;
    *param_1 = (__n | 0xf) + 2;
  }
  memmove(__dest,__s,__n);
LAB_03fea318:
  *(undefined1 *)((long)__dest + __n) = 0;
  return;
}


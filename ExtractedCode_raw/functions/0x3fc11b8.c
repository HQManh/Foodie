// rea decompile_all
// name: FUN_03fc11b8
// address: 0x3fc11b8
// body: available
// range: 0x3fc11b8-0x3fc1283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03fc11b8(long param_1,long param_2)

{
  wchar_t wVar1;
  long lVar2;
  wchar_t *__s;
  undefined4 uVar3;
  
  if ((*(ushort *)(param_1 + 0x135) >> 4 & 1) != 0) {
    param_1 = FUN_03fc1284(param_1,param_2,0);
  }
  __s = *(wchar_t **)(param_2 + 0xa0);
  wmemchr(__s,L'\xfffffffe',*(long *)(param_2 + 0xa8) - (long)__s >> 2);
  if (__s != *(wchar_t **)(param_2 + 0xa8)) {
    uVar3 = 0;
    do {
      wVar1 = *__s;
      if (wVar1 == L'\xfffffffe') {
        uVar3 = 1;
      }
      else if (wVar1 == L'\xffffffff') {
        param_1 = FUN_03fc14b0(param_1);
      }
      else {
        if (wVar1 == L'\0') {
          return param_1 + 0x30;
        }
        param_1 = FUN_03f7a1ac(param_1,wVar1,uVar3);
      }
      __s = __s + 1;
    } while (__s != *(wchar_t **)(param_2 + 0xa8));
  }
  lVar2 = 0;
  if (param_1 != 0) {
    lVar2 = param_1 + 0x20;
  }
  return lVar2;
}


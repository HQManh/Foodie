// rea decompile_all
// name: std::__ndk1::collate<char>::do_transform
// address: 0x3ffb01c
// body: available
// range: 0x3ffb01c-0x3ffb0c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3ffb0c0 to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::collate<char>::do_transform(char const*, char const*) const */

char * std::__ndk1::collate<char>::do_transform(char *param_1,char *param_2)

{
  char *in_x2;
  long *in_x8;
  char *__dest;
  ulong __n;
  
  __n = (long)in_x2 - (long)param_2;
  if (__n < 0xfffffffffffffff0) {
    if (__n < 0x17) {
      __dest = (char *)((long)in_x8 + 1);
      *(char *)in_x8 = (char)((int)__n << 1);
    }
    else {
      __dest = operator_new((__n | 0xf) + 1);
      in_x8[1] = __n;
      in_x8[2] = (long)__dest;
      *in_x8 = (__n | 0xf) + 2;
      param_1 = __dest;
    }
    if (param_2 != in_x2) {
      param_1 = memcpy(__dest,param_2,__n);
      __dest = __dest + __n;
    }
    *__dest = '\0';
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5d118();
}


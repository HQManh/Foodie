// rea decompile_all
// name: std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::xsputn
// address: 0x3fedddc
// body: available
// range: 0x3fedddc-0x3fedeab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_streambuf<char, std::__ndk1::char_traits<char> >::xsputn(char const*, long) */

long __thiscall
std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::xsputn
          (basic_streambuf<char,std::__ndk1::char_traits<char>> *this,char *param_1,long param_2)

{
  size_t __n;
  int iVar1;
  void *__dest;
  size_t sVar2;
  long lVar3;
  
  if (param_2 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    do {
      while( true ) {
        __dest = *(void **)(this + 0x30);
        if (*(void **)(this + 0x38) <= __dest) break;
        sVar2 = (long)*(void **)(this + 0x38) - (long)__dest;
        __n = param_2 - lVar3;
        if ((long)sVar2 <= param_2 - lVar3) {
          __n = sVar2;
        }
        if (__n != 0) {
          memmove(__dest,param_1,__n);
          __dest = *(void **)(this + 0x30);
        }
        param_1 = param_1 + __n;
        lVar3 = __n + lVar3;
        *(size_t *)(this + 0x30) = (long)__dest + __n;
        if (param_2 <= lVar3) {
          return lVar3;
        }
      }
      iVar1 = (**(code **)(*(long *)this + 0x68))(this,*param_1);
      if (iVar1 == -1) {
        return lVar3;
      }
      param_1 = param_1 + 1;
      lVar3 = lVar3 + 1;
    } while (lVar3 < param_2);
  }
  return lVar3;
}


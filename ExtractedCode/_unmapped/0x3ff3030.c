// rea decompile_all
// name: std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::xsgetn
// address: 0x3ff3030
// body: available
// range: 0x3ff3030-0x3ff310f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >::xsgetn(wchar_t*, long)
    */

long __thiscall
std::__ndk1::basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>>::xsgetn
          (basic_streambuf<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t *param_1,
          long param_2)

{
  long lVar1;
  wchar_t wVar2;
  void *__src;
  long lVar3;
  long lVar4;
  
  if (param_2 < 1) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    do {
      while( true ) {
        __src = *(void **)(this + 0x18);
        if (*(void **)(this + 0x20) <= __src) break;
        lVar3 = (long)*(void **)(this + 0x20) - (long)__src >> 2;
        lVar1 = param_2 - lVar4;
        if (lVar3 <= param_2 - lVar4) {
          lVar1 = lVar3;
        }
        lVar3 = lVar1;
        if (0x7ffffffe < lVar1) {
          lVar3 = 0x7fffffff;
        }
        if (lVar1 != 0) {
          memmove(param_1,__src,lVar3 << 2);
          __src = *(void **)(this + 0x18);
        }
        *(void **)(this + 0x18) = (void *)((long)__src + (long)(int)lVar3 * 4);
        lVar4 = lVar3 + lVar4;
        param_1 = param_1 + lVar3;
        if (param_2 <= lVar4) {
          return lVar4;
        }
      }
      wVar2 = (**(code **)(*(long *)this + 0x50))(this);
      if (wVar2 == L'\xffffffff') {
        return lVar4;
      }
      *param_1 = wVar2;
      lVar4 = lVar4 + 1;
      param_1 = param_1 + 1;
    } while (lVar4 < param_2);
  }
  return lVar4;
}


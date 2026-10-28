// rea decompile_all
// name: std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::open
// address: 0x3ff8d78
// body: available
// range: 0x3ff8d78-0x3ff8e2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::open(char const*, unsigned
   int) */

basic_filebuf<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::open
          (basic_filebuf<char,std::__ndk1::char_traits<char>> *this,char *param_1,uint param_2)

{
  int iVar1;
  char *__modes;
  FILE *__stream;
  
  if (*(long *)(this + 0x78) != 0) {
    return (basic_filebuf<char,std::__ndk1::char_traits<char>> *)0x0;
  }
  __modes = (char *)FUN_03ff9800(param_2);
  if (__modes != (char *)0x0) {
    __stream = fopen(param_1,__modes);
    *(FILE **)(this + 0x78) = __stream;
    if (__stream != (FILE *)0x0) {
      *(uint *)(this + 0x98) = param_2;
      if ((param_2 >> 1 & 1) == 0) {
        return this;
      }
      iVar1 = fseek(__stream,0,2);
      if (iVar1 == 0) {
        return this;
      }
      fclose(*(FILE **)(this + 0x78));
      *(undefined8 *)(this + 0x78) = 0;
    }
  }
  return (basic_filebuf<char,std::__ndk1::char_traits<char>> *)0x0;
}


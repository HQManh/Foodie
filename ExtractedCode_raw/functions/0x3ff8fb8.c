// rea decompile_all
// name: std::__ndk1::basic_ofstream<char,std::__ndk1::char_traits<char>>::open
// address: 0x3ff8fb8
// body: available
// range: 0x3ff8fb8-0x3ff9083 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3ff900c to 0x89dbef0 std::__ndk1::ios_base::clear (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x3ff9080 to 0x89dbef0 std::__ndk1::ios_base::clear (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_ofstream<char, std::__ndk1::char_traits<char>
   >::open(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, unsigned int) */

void __thiscall
std::__ndk1::basic_ofstream<char,std::__ndk1::char_traits<char>>::open
          (basic_ofstream<char,std::__ndk1::char_traits<char>> *this,basic_string *param_1,
          uint param_2)

{
  int iVar1;
  char *__modes;
  FILE *__stream;
  basic_string *__filename;
  
  __filename = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    __filename = param_1 + 1;
  }
  if (*(long *)(this + 0x80) == 0) {
    __modes = (char *)FUN_03ff9800(param_2 | 0x10);
    if (__modes != (char *)0x0) {
      __stream = fopen((char *)__filename,__modes);
      *(FILE **)(this + 0x80) = __stream;
      if (__stream != (FILE *)0x0) {
        *(uint *)(this + 0xa0) = param_2 | 0x10;
        if (((param_2 >> 1 & 1) == 0) || (iVar1 = fseek(__stream,0,2), iVar1 == 0)) {
          ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),0);
          return;
        }
        fclose(*(FILE **)(this + 0x80));
        *(undefined8 *)(this + 0x80) = 0;
      }
    }
  }
  ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                  *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 4);
  return;
}


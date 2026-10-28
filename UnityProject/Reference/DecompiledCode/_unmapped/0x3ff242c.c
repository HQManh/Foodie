// rea decompile_all
// name: std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
// address: 0x3ff242c
// body: available
// range: 0x3ff242c-0x3ff24db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >::put(char) */

basic_ostream<char,std::__ndk1::char_traits<char>> * __thiscall
std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
          (basic_ostream<char,std::__ndk1::char_traits<char>> *this,char param_1)

{
  char *pcVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  sentry local_30 [16];
  
  sentry::sentry(local_30,(basic_ostream *)this);
  if (local_30[0] == (sentry)0x0) goto LAB_03ff24bc;
  lVar4 = *(long *)(*(long *)this + -0x18);
  plVar3 = *(long **)(this + lVar4 + 0x28);
  if (plVar3 != (long *)0x0) {
    pcVar1 = (char *)plVar3[6];
    if (pcVar1 != (char *)plVar3[7]) {
      plVar3[6] = (long)(pcVar1 + 1);
      *pcVar1 = param_1;
      goto LAB_03ff24bc;
    }
    iVar2 = (**(code **)(*plVar3 + 0x68))(plVar3,param_1);
    if (iVar2 != -1) goto LAB_03ff24bc;
    lVar4 = *(long *)(*(long *)this + -0x18);
  }
  ios_base::clear((ios_base *)(this + lVar4),*(uint *)((ios_base *)(this + lVar4) + 0x20) | 1);
LAB_03ff24bc:
  sentry::~sentry(local_30);
  return this;
}


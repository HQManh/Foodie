// rea decompile_all
// name: std::__ndk1::numpunct_byname<wchar_t>::numpunct_byname
// address: 0x4023dec
// body: available
// range: 0x4023dec-0x4023e4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::numpunct_byname<wchar_t>::numpunct_byname(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long) */

void __thiscall
std::__ndk1::numpunct_byname<wchar_t>::numpunct_byname
          (numpunct_byname<wchar_t> *this,basic_string *param_1,ulong param_2)

{
  basic_string *pbVar1;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0x2c0000002e;
  *(undefined ***)this = &PTR__numpunct_byname_08faae78;
  *(ulong *)(this + 8) = param_2 - 1;
  pbVar1 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar1 = param_1 + 1;
  }
  __init(this,(char *)pbVar1);
  return;
}


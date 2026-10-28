// rea decompile_all
// name: std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::basic_istream
// address: 0x3ff3250
// body: available
// range: 0x3ff3250-0x3ff32ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::basic_istream(std::__ndk1::basic_streambuf<wchar_t, std::__ndk1::char_traits<wchar_t> >*) */

void std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::basic_istream
               (basic_streambuf *param_1)

{
  ios_base *this;
  long *in_x1;
  void *in_x2;
  long lVar1;
  long lVar2;
  
  lVar1 = *in_x1;
  *(long *)param_1 = lVar1;
  lVar1 = *(long *)(lVar1 + -0x18);
  lVar2 = in_x1[1];
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + lVar1) = lVar2;
  this = (ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18));
  ios_base::init(this,in_x2);
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x90) = 0xffffffff;
  return;
}


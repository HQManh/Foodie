// rea decompile_all
// name: std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::basic_filebuf
// address: 0x3ff9084
// body: available
// range: 0x3ff9084-0x3ff9177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::basic_filebuf() */

void __thiscall
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::basic_filebuf
          (basic_filebuf<char,std::__ndk1::char_traits<char>> *this)

{
  byte bVar1;
  ulong uVar2;
  undefined8 uVar3;
  locale alStack_18 [8];
  
  *(undefined ***)this = &PTR__basic_streambuf_08fa9f68;
  locale::locale((locale *)(this + 8));
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR__basic_filebuf_08faa318;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x9f) = 0;
  locale::locale(alStack_18,(locale *)(this + 8));
  uVar2 = locale::has_facet(alStack_18,(id *)codecvt<char,char,mbstate_t>::id);
  locale::~locale(alStack_18);
  if ((uVar2 & 1) != 0) {
    locale::locale(alStack_18,(locale *)(this + 8));
    uVar3 = locale::use_facet(alStack_18,(id *)codecvt<char,char,mbstate_t>::id);
    *(undefined8 *)(this + 0x80) = uVar3;
    locale::~locale(alStack_18);
    bVar1 = (**(code **)(**(long **)(this + 0x80) + 0x38))();
    this[0xa2] = (basic_filebuf<char,std::__ndk1::char_traits<char>>)(bVar1 & 1);
  }
  (**(code **)(*(long *)this + 0x18))(this,0,0x1000);
  return;
}


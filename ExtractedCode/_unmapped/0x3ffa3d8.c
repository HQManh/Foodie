// rea decompile_all
// name: std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::imbue
// address: 0x3ffa3d8
// body: available
// range: 0x3ffa3d8-0x3ffa4e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_filebuf<char, std::__ndk1::char_traits<char> >::imbue(std::__ndk1::locale
   const&) */

void __thiscall
std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::imbue
          (basic_filebuf<char,std::__ndk1::char_traits<char>> *this,locale *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  basic_filebuf<char,std::__ndk1::char_traits<char>> bVar3;
  byte bVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  
  (**(code **)(*(long *)this + 0x30))();
  plVar5 = (long *)locale::use_facet(param_1,(id *)codecvt<char,char,mbstate_t>::id);
  lVar7 = *plVar5;
  *(long **)(this + 0x80) = plVar5;
  bVar3 = this[0xa2];
  bVar4 = (**(code **)(lVar7 + 0x38))();
  this[0xa2] = (basic_filebuf<char,std::__ndk1::char_traits<char>>)(bVar4 & 1);
  if (bVar3 != (basic_filebuf<char,std::__ndk1::char_traits<char>>)(bVar4 & 1)) {
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    if ((bVar4 & 1) != 0) {
      if ((this[0xa0] != (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) &&
         (*(void **)(this + 0x40) != (void *)0x0)) {
        operator_delete__(*(void **)(this + 0x40));
      }
      bVar3 = this[0xa1];
      this[0xa1] = (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0;
      this[0xa0] = bVar3;
      uVar1 = *(undefined8 *)(this + 0x68);
      uVar2 = *(undefined8 *)(this + 0x70);
      *(undefined8 *)(this + 0x68) = 0;
      *(undefined8 *)(this + 0x70) = 0;
      *(undefined8 *)(this + 0x40) = uVar1;
      *(undefined8 *)(this + 0x60) = uVar2;
      return;
    }
    if ((this[0xa0] == (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0) &&
       (*(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x40) != this + 0x58)) {
      this[0xa1] = (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x0;
      *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x68) =
           *(basic_filebuf<char,std::__ndk1::char_traits<char>> **)(this + 0x40);
      *(ulong *)(this + 0x70) = *(ulong *)(this + 0x60);
      pvVar6 = operator_new__(*(ulong *)(this + 0x60));
      *(void **)(this + 0x40) = pvVar6;
      this[0xa0] = (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x1;
      return;
    }
    *(ulong *)(this + 0x70) = *(ulong *)(this + 0x60);
    pvVar6 = operator_new__(*(ulong *)(this + 0x60));
    *(void **)(this + 0x68) = pvVar6;
    this[0xa1] = (basic_filebuf<char,std::__ndk1::char_traits<char>>)0x1;
  }
  return;
}


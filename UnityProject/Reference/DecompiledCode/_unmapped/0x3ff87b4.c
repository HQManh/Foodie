// rea decompile_all
// name: std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::pbackfail
// address: 0x3ff87b4
// body: available
// range: 0x3ff87b4-0x3ff8827 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_stringbuf<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::pbackfail(int) */

int __thiscall
std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
pbackfail(basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
         int param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 0x30);
  uVar1 = *(ulong *)(this + 0x58);
  if (*(ulong *)(this + 0x58) < uVar2) {
    *(ulong *)(this + 0x58) = uVar2;
    uVar1 = uVar2;
  }
  uVar2 = *(ulong *)(this + 0x18);
  if (*(ulong *)(this + 0x10) < uVar2) {
    if (param_1 == -1) {
      *(ulong *)(this + 0x18) = uVar2 - 1;
      *(ulong *)(this + 0x20) = uVar1;
      return 0;
    }
    if ((((byte)this[0x60] >> 4 & 1) != 0) || ((uint)*(byte *)(uVar2 - 1) == (param_1 & 0xffU))) {
      *(ulong *)(this + 0x18) = uVar2 - 1;
      *(ulong *)(this + 0x20) = uVar1;
      *(char *)(uVar2 - 1) = (char)param_1;
      return param_1;
    }
  }
  return -1;
}


// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::find_last_not_of
// address: 0x3fe3aa4
// body: available
// range: 0x3fe3aa4-0x3fe3b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find_last_not_of(wchar_t const*, unsigned long, unsigned long)
   const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find_last_not_of(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  wchar_t *pwVar3;
  long lVar4;
  
  uVar1 = (ulong)((byte)*this >> 1);
  pbVar2 = this + 4;
  if (((byte)*this & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
    pbVar2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if (param_2 < uVar1) {
    uVar1 = param_2 + 1;
  }
  if (param_3 == 0) {
    if (uVar1 == 0) {
      return -1;
    }
    lVar4 = uVar1 * 4 + -4;
  }
  else {
    lVar4 = uVar1 << 2;
    do {
      if (lVar4 == 0) {
        return -1;
      }
      pwVar3 = wmemchr(param_1,*(wchar_t *)(pbVar2 + lVar4 + -4),param_3);
      lVar4 = lVar4 + -4;
    } while (pwVar3 != (wchar_t *)0x0);
  }
  return (long)(pbVar2 + lVar4) - (long)pbVar2 >> 2;
}


// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::find_first_of
// address: 0x3fe40f8
// body: available
// range: 0x3fe40f8-0x3fe417f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find_first_of(wchar_t const*, unsigned long, unsigned long)
   const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find_first_of(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  long lVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar6;
  wchar_t *pwVar7;
  
  lVar4 = -1;
  uVar2 = (ulong)((byte)*this >> 1);
  pbVar3 = this + 4;
  if (((byte)*this & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
    pbVar3 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if ((param_3 != 0) && (param_2 < uVar2)) {
    pbVar1 = pbVar3 + uVar2 * 4;
    pbVar5 = pbVar3 + param_2 * 4;
    do {
      lVar4 = param_3 << 2;
      pwVar7 = param_1;
      do {
        pbVar6 = pbVar5;
        if (*(wchar_t *)pbVar5 == *pwVar7) goto LAB_03fe416c;
        lVar4 = lVar4 + -4;
        pwVar7 = pwVar7 + 1;
      } while (lVar4 != 0);
      pbVar5 = pbVar5 + 4;
      pbVar6 = pbVar1;
    } while (pbVar5 != pbVar1);
LAB_03fe416c:
    lVar4 = (long)pbVar6 - (long)pbVar3 >> 2;
    if (pbVar6 == pbVar1) {
      lVar4 = -1;
    }
  }
  return lVar4;
}


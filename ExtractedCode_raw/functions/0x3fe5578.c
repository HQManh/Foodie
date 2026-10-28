// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::find
// address: 0x3fe5578
// body: available
// range: 0x3fe5578-0x3fe5657 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::find(wchar_t const*, unsigned long, unsigned long) const */

ulong __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::find(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this
      ,wchar_t *param_1,ulong param_2,ulong param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  ulong uVar2;
  wchar_t __c;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  int iVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  long lVar6;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar7;
  
  uVar2 = (ulong)((byte)*this >> 1);
  pbVar3 = this + 4;
  if (((byte)*this & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
    pbVar3 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  if (uVar2 < param_2) {
    param_2 = 0xffffffffffffffff;
  }
  else if (param_3 != 0) {
    pbVar5 = pbVar3 + param_2 * 4;
    pbVar1 = pbVar3 + uVar2 * 4;
    lVar6 = (long)pbVar1 - (long)pbVar5 >> 2;
    pbVar7 = pbVar1;
    if ((long)param_3 <= lVar6) {
      __c = *param_1;
      do {
        pbVar7 = pbVar1;
        if (((0xfffffffffffffffe < lVar6 - param_3) ||
            (pbVar5 = (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                       *)wmemchr((wchar_t *)pbVar5,__c,(lVar6 - param_3) + 1),
            pbVar5 == (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                       *)0x0)) ||
           (iVar4 = wmemcmp((wchar_t *)pbVar5,param_1,param_3), pbVar7 = pbVar5, iVar4 == 0)) break;
        pbVar5 = pbVar5 + 4;
        lVar6 = (long)pbVar1 - (long)pbVar5 >> 2;
        pbVar7 = pbVar1;
      } while ((long)param_3 <= lVar6);
    }
    param_2 = (long)pbVar7 - (long)pbVar3 >> 2;
    if (pbVar7 == pbVar1) {
      param_2 = 0xffffffffffffffff;
    }
  }
  return param_2;
}


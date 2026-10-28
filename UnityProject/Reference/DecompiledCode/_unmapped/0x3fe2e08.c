// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
// address: 0x3fe2e08
// body: available
// range: 0x3fe2e08-0x3fe2ed7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::find(char const*, unsigned long, unsigned long) const */

ulong __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::find
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  byte bVar4;
  int iVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  long lVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  
  uVar2 = *(ulong *)(this + 8);
  pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  if (((byte)*this & 1) == 0) {
    pbVar3 = this + 1;
    uVar2 = (ulong)((byte)*this >> 1);
  }
  if (uVar2 < param_2) {
    param_2 = 0xffffffffffffffff;
  }
  else if (param_3 != 0) {
    pbVar6 = pbVar3 + param_2;
    pbVar1 = pbVar3 + uVar2;
    lVar7 = (long)pbVar1 - (long)pbVar6;
    pbVar8 = pbVar1;
    if ((long)param_3 <= lVar7) {
      bVar4 = *param_1;
      do {
        pbVar8 = pbVar1;
        if (((0xfffffffffffffffe < lVar7 - param_3) ||
            (pbVar6 = memchr(pbVar6,(uint)bVar4,(lVar7 - param_3) + 1),
            pbVar6 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)0x0)) ||
           (iVar5 = memcmp(pbVar6,param_1,param_3), pbVar8 = pbVar6, iVar5 == 0)) break;
        pbVar6 = pbVar6 + 1;
        lVar7 = (long)pbVar1 - (long)pbVar6;
        pbVar8 = pbVar1;
      } while ((long)param_3 <= lVar7);
    }
    param_2 = (long)pbVar8 - (long)pbVar3;
    if (pbVar8 == pbVar1) {
      param_2 = 0xffffffffffffffff;
    }
  }
  return param_2;
}


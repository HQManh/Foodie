// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
// address: 0x3fe129c
// body: available
// range: 0x3fe129c-0x3fe1353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::rfind(char const*, unsigned long, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2,ulong param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  ulong uVar4;
  ulong uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  long lVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar10;
  ulong uVar11;
  
  uVar11 = *(ulong *)(this + 8);
  pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  if (((byte)*this & 1) == 0) {
    pbVar6 = this + 1;
    uVar11 = (ulong)((byte)*this >> 1);
  }
  uVar4 = uVar11;
  if (param_2 <= uVar11) {
    uVar4 = param_2;
  }
  uVar5 = uVar4 + param_3;
  if (uVar11 - uVar4 <= param_3) {
    uVar5 = uVar11;
  }
  pbVar2 = pbVar6 + uVar5;
  pbVar9 = pbVar2;
  if ((param_3 != 0) && (uVar5 != 0)) {
    pbVar8 = pbVar2;
    pbVar10 = pbVar6;
    do {
      pbVar9 = pbVar8;
      if (*pbVar10 ==
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)*param_1)
      {
        uVar11 = 1;
        do {
          pbVar9 = pbVar10;
          if (param_3 == uVar11) break;
          pbVar3 = pbVar10 + uVar11;
          pbVar9 = pbVar8;
          if (pbVar3 == pbVar2) goto LAB_03fe1340;
          pbVar1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )(param_1 + uVar11);
          uVar11 = uVar11 + 1;
        } while (*pbVar3 == *pbVar1);
      }
      pbVar10 = pbVar10 + 1;
      pbVar8 = pbVar9;
    } while (pbVar10 != pbVar2);
  }
LAB_03fe1340:
  lVar7 = (long)pbVar9 - (long)pbVar6;
  if (pbVar9 == pbVar2 && param_3 != 0) {
    lVar7 = -1;
  }
  return lVar7;
}


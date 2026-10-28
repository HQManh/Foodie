// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::erase
// address: 0x3fe2a64
// body: available
// range: 0x3fe2a64-0x3fe2af7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::erase(unsigned long, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::erase
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  bVar4 = *this;
  uVar2 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
  }
  if (uVar2 < param_1) {
    auVar8 = FUN_03f695e8();
    pbVar5 = auVar8._0_8_;
    if (param_2 != 0) {
      bVar4 = *pbVar5;
      uVar2 = *(ulong *)(pbVar5 + 8);
      pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (pbVar5 + 0x10);
      if (((byte)bVar4 & 1) == 0) {
        pbVar3 = pbVar5 + 1;
        uVar2 = (ulong)((byte)bVar4 >> 1);
      }
      uVar6 = uVar2 - auVar8._8_8_;
      uVar1 = uVar6;
      if (param_2 <= uVar6) {
        uVar1 = param_2;
      }
      if (param_2 < uVar6) {
        memmove(pbVar3 + auVar8._8_8_,pbVar3 + auVar8._8_8_ + uVar1,uVar6 - uVar1);
        bVar4 = *pbVar5;
      }
      lVar7 = uVar2 - uVar1;
      if (((byte)bVar4 & 1) == 0) {
        *pbVar5 = SUB41((int)lVar7 << 1,0);
      }
      else {
        *(long *)(pbVar5 + 8) = lVar7;
      }
      pbVar3[lVar7] =
           (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    }
    return pbVar5;
  }
  if (param_2 != 0xffffffffffffffff) {
    FUN_03fe2af8();
    return this;
  }
  if (((byte)bVar4 & 1) == 0) {
    *this = SUB41((int)param_1 << 1,0);
    this[param_1 + 1] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    return this;
  }
  *(ulong *)(this + 8) = param_1;
  *(undefined1 *)(*(long *)(this + 0x10) + param_1) = 0;
  return this;
}


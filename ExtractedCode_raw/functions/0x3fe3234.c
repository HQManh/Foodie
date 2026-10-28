// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
// address: 0x3fe3234
// body: available
// range: 0x3fe3234-0x3fe33e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe33e4 to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::insert(std::__ndk1::__wrap_iter<char const*>, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::insert
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *param_2,
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  bool bVar5;
  void *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  ulong uVar7;
  size_t __n;
  ulong uVar8;
  
  uVar8 = *(ulong *)this;
  uVar3 = *(ulong *)(this + 8);
  bVar4 = *this;
  pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
  pbVar1 = this + 1;
  bVar5 = ((byte)bVar4 & 1) == 0;
  pbVar2 = pbVar6;
  if (bVar5) {
    uVar3 = (ulong)((byte)bVar4 >> 1);
    pbVar2 = this + 1;
  }
  uVar7 = 0x16;
  if (!bVar5) {
    uVar7 = (uVar8 & 0xfffffffffffffffe) - 1;
  }
  __n = (long)param_2 - (long)pbVar2;
  if (uVar7 == uVar3) {
    if (uVar3 == 0xffffffffffffffef) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5d118(this);
    }
    __src = pbVar1;
    if ((uVar8 & 1) != 0) {
      __src = pbVar6;
    }
    if (uVar3 < 0x7fffffffffffffe7) {
      uVar7 = uVar3 * 2;
      if (uVar7 < uVar3 + 1) {
        uVar7 = uVar3 + 1;
      }
      uVar8 = 0x17;
      if (0x16 < uVar7) {
        uVar8 = (uVar7 | 0xf) + 1;
      }
      __dest = operator_new(uVar8);
    }
    else {
      uVar8 = 0xffffffffffffffef;
      __dest = operator_new(0xffffffffffffffef);
    }
    if (pbVar2 != param_2) {
      memmove(__dest,__src,__n);
    }
    if (uVar3 - __n != 0) {
      memmove((void *)((long)__dest + __n + 1),__src + __n,uVar3 - __n);
    }
    if (((byte)bVar4 & 1) != 0) {
      operator_delete(__src);
    }
    *(ulong *)this = uVar8 | 1;
    *(ulong *)(this + 8) = uVar3 + 1;
    *(void **)(this + 0x10) = __dest;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
     ((long)__dest + __n) = param_3;
    *(undefined1 *)((long)__dest + uVar3 + 1) = 0;
    bVar4 = *this;
  }
  else {
    pbVar2 = pbVar1;
    if ((uVar8 & 1) != 0) {
      pbVar2 = pbVar6;
    }
    if (uVar3 - __n != 0) {
      memmove(pbVar2 + __n + 1,pbVar2 + __n,uVar3 - __n);
    }
    pbVar2[__n] = param_3;
    pbVar2[uVar3 + 1] =
         (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
    bVar4 = *this;
  }
  if (((byte)bVar4 & 1) == 0) {
    *this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
            (((char)uVar3 + '\x01') * '\x02');
  }
  else {
    *(ulong *)(this + 8) = uVar3 + 1;
  }
  if (((byte)bVar4 & 1) != 0) {
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
  }
  return pbVar1 + __n;
}


// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
// address: 0x3fe274c
// body: available
// range: 0x3fe274c-0x3fe28d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe28d4 to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::append(unsigned long, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,char param_2)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  ulong uVar4;
  
  if (param_1 == 0) {
    return this;
  }
  uVar2 = *(ulong *)this;
  bVar3 = *this;
  uVar4 = 0x16;
  if (((byte)bVar3 & 1) != 0) {
    uVar4 = (uVar2 & 0xfffffffffffffffe) - 1;
  }
  __n = uVar2 >> 1 & 0x7f;
  if ((uVar2 & 1) != 0) {
    __n = *(size_t *)(this + 8);
  }
  if (uVar4 - __n < param_1) {
    uVar1 = __n + param_1;
    if (-uVar4 - 0x11 < uVar1 - uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5d118(this);
    }
    __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 0x10);
    if ((uVar2 & 1) == 0) {
      __src = this + 1;
    }
    if (uVar4 < 0x7fffffffffffffe7) {
      if (uVar1 <= uVar4 * 2) {
        uVar1 = uVar4 * 2;
      }
      uVar4 = 0x17;
      if (0x16 < uVar1) {
        uVar4 = (uVar1 | 0xf) + 1;
      }
      __dest = operator_new(uVar4);
    }
    else {
      uVar4 = 0xffffffffffffffef;
      __dest = operator_new(0xffffffffffffffef);
    }
    if (__n != 0) {
      memmove(__dest,__src,__n);
    }
    if (((byte)bVar3 & 1) != 0) {
      operator_delete(__src);
    }
    *(size_t *)(this + 8) = __n;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = __dest;
    *(ulong *)this = uVar4 | 1;
    memset(__dest + __n,(uint)(byte)param_2,param_1);
    bVar3 = *this;
  }
  else {
    __dest = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if ((uVar2 & 1) == 0) {
      __dest = this + 1;
    }
    memset(__dest + __n,(uint)(byte)param_2,param_1);
    bVar3 = *this;
  }
  if (((byte)bVar3 & 1) == 0) {
    *this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
            (((char)__n + (char)param_1) * '\x02');
  }
  else {
    *(size_t *)(this + 8) = __n + param_1;
  }
  __dest[__n + param_1] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return this;
}


// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
// address: 0x3fe1ff0
// body: available
// range: 0x3fe1ff0-0x3fe2177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe2174 to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::append(char const*, unsigned long) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  void *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  ulong uVar6;
  
  uVar3 = *(ulong *)this;
  bVar4 = *this;
  uVar6 = 0x16;
  if (((byte)bVar4 & 1) != 0) {
    uVar6 = (uVar3 & 0xfffffffffffffffe) - 1;
  }
  __n = uVar3 >> 1 & 0x7f;
  if ((uVar3 & 1) != 0) {
    __n = *(size_t *)(this + 8);
  }
  if (uVar6 - __n < param_2) {
    uVar1 = __n + param_2;
    if (-uVar6 - 0x12 < uVar1 - uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5d118(this);
    }
    pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if ((uVar3 & 1) == 0) {
      pbVar5 = this + 1;
    }
    if (uVar6 < 0x7fffffffffffffe7) {
      uVar3 = uVar1;
      if (uVar1 <= uVar6 * 2) {
        uVar3 = uVar6 * 2;
      }
      uVar6 = 0x17;
      if (0x16 < uVar3) {
        uVar6 = (uVar3 | 0xf) + 1;
      }
      __dest = operator_new(uVar6);
    }
    else {
      uVar6 = 0xffffffffffffffef;
      __dest = operator_new(0xffffffffffffffef);
    }
    if (__n != 0) {
      memmove(__dest,pbVar5,__n);
    }
    memcpy((void *)((long)__dest + __n),param_1,param_2);
    if (((byte)bVar4 & 1) != 0) {
      operator_delete(pbVar5);
    }
    *(ulong *)(this + 8) = uVar1;
    *(void **)(this + 0x10) = __dest;
    *(ulong *)this = uVar6 | 1;
    pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             ((long)__dest + uVar1);
  }
  else {
    if (param_2 == 0) {
      return this;
    }
    pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if ((uVar3 & 1) == 0) {
      pbVar5 = this + 1;
    }
    memmove(pbVar5 + __n,param_1,param_2);
    lVar2 = __n + param_2;
    if (((byte)*this & 1) == 0) {
      pbVar5 = pbVar5 + lVar2;
      *this = SUB41((int)lVar2 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar2;
      pbVar5 = pbVar5 + lVar2;
    }
  }
  *pbVar5 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return this;
}


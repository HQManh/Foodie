// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
// address: 0x3fe1b48
// body: available
// range: 0x3fe1b48-0x3fe1d53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe1d50 to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::replace(unsigned long, unsigned long, unsigned long, char) */

basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> * __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,ulong param_3,char param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  size_t __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  
  bVar4 = *this;
  uVar1 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  uVar5 = uVar1 - param_1;
  if (uVar1 < param_1) {
    FUN_03f695e8(this);
LAB_03fe1d4c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5d118(this);
  }
  uVar7 = *(ulong *)this;
  uVar2 = uVar5;
  if (param_2 <= uVar5) {
    uVar2 = param_2;
  }
  uVar3 = 0x16;
  if (((byte)bVar4 & 1) != 0) {
    uVar3 = (uVar7 & 0xfffffffffffffffe) - 1;
  }
  if ((uVar2 - uVar1) + uVar3 < param_3) {
    uVar5 = ((uVar1 + param_3) - uVar3) - uVar2;
    if (-uVar3 - 0x11 < uVar5) goto LAB_03fe1d4c;
    __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 0x10);
    if ((uVar7 & 1) == 0) {
      __src = this + 1;
    }
    if (uVar3 < 0x7fffffffffffffe7) {
      uVar5 = uVar5 + uVar3;
      if (uVar5 <= uVar3 * 2) {
        uVar5 = uVar3 * 2;
      }
      uVar7 = 0x17;
      if (0x16 < uVar5) {
        uVar7 = (uVar5 | 0xf) + 1;
      }
      __dest = operator_new(uVar7);
    }
    else {
      uVar7 = 0xffffffffffffffef;
      __dest = operator_new(0xffffffffffffffef);
    }
    if (param_1 != 0) {
      memmove(__dest,__src,param_1);
    }
    __n = uVar1 - (uVar2 + param_1);
    if (__n != 0) {
      memmove(__dest + param_3 + param_1,__src + uVar2 + param_1,__n);
    }
    if (((byte)bVar4 & 1) != 0) {
      operator_delete(__src);
    }
    *(ulong *)this = uVar7 | 1;
    *(ulong *)(this + 8) = (uVar1 + param_3) - uVar2;
    *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
     (this + 0x10) = __dest;
  }
  else {
    __dest = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (this + 0x10);
    if ((uVar7 & 1) == 0) {
      __dest = this + 1;
    }
    if ((param_2 < uVar5) && (param_3 != uVar2)) {
      memmove(__dest + param_3 + param_1,__dest + uVar2 + param_1,uVar5 - uVar2);
    }
    if (param_3 == 0) {
      bVar4 = *this;
      lVar6 = -uVar2;
      goto joined_r0x03fe1c80;
    }
  }
  memset(__dest + param_1,(uint)(byte)param_4,param_3);
  bVar4 = *this;
  lVar6 = param_3 - uVar2;
joined_r0x03fe1c80:
  lVar6 = lVar6 + uVar1;
  if (((byte)bVar4 & 1) == 0) {
    *this = SUB41((int)lVar6 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar6;
  }
  __dest[lVar6] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)0x0;
  return this;
}


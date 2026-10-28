// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::__grow_by_and_replace
// address: 0x3fe1150
// body: available
// range: 0x3fe1150-0x3fe129b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe1298 to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::__grow_by_and_replace(unsigned long, unsigned long, unsigned long, unsigned long, unsigned
   long, unsigned long, char const*) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
__grow_by_and_replace
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,ulong param_6,
          char *param_7)

{
  long lVar1;
  ulong uVar2;
  size_t __n;
  void *__dest;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  ulong uVar3;
  
  if (param_2 <= -param_1 - 0x12) {
    __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 0x10);
    if (((byte)*this & 1) == 0) {
      __src = this + 1;
    }
    if (param_1 < 0x7fffffffffffffe7) {
      uVar2 = param_2 + param_1;
      if (param_2 + param_1 <= param_1 * 2) {
        uVar2 = param_1 * 2;
      }
      uVar3 = 0x17;
      if (0x16 < uVar2) {
        uVar3 = (uVar2 | 0xf) + 1;
      }
      __dest = operator_new(uVar3);
    }
    else {
      uVar3 = 0xffffffffffffffef;
      __dest = operator_new(0xffffffffffffffef);
    }
    if (param_4 != 0) {
      memmove(__dest,__src,param_4);
    }
    if (param_6 != 0) {
      memcpy((void *)((long)__dest + param_4),param_7,param_6);
    }
    __n = param_3 - (param_5 + param_4);
    if (__n != 0) {
      memmove((void *)((long)__dest + param_6 + param_4),__src + param_5 + param_4,__n);
    }
    if (param_1 != 0x16) {
      operator_delete(__src);
    }
    lVar1 = param_6 + param_4 + __n;
    *(ulong *)this = uVar3 | 1;
    *(long *)(this + 8) = lVar1;
    *(void **)(this + 0x10) = __dest;
    *(undefined1 *)((long)__dest + lVar1) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5d118(this);
}


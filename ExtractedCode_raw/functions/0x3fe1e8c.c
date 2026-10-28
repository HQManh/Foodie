// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve
// address: 0x3fe1e8c
// body: available
// range: 0x3fe1e8c-0x3fe1fcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe1fcc to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::reserve(unsigned long) */

void __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::reserve
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__dest;
  ulong uVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__src;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  if (0xffffffffffffffef < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5d118(this);
  }
  uVar6 = *(ulong *)this;
  uVar4 = (uVar6 & 0xfffffffffffffffe) - 1;
  uVar1 = 0x16;
  if (((byte)*this & 1) != 0) {
    uVar1 = uVar4;
  }
  if (uVar1 < param_1) {
    bVar3 = (uVar6 & 1) != 0;
    uVar1 = uVar6 >> 1 & 0x7f;
    if (bVar3) {
      uVar1 = *(ulong *)(this + 8);
    }
    uVar2 = 0x16;
    if (bVar3) {
      uVar2 = uVar4;
    }
    uVar4 = uVar1;
    if (uVar1 <= param_1) {
      uVar4 = param_1;
    }
    uVar5 = uVar4 | 0xf;
    if (uVar4 < 0x17) {
      uVar5 = 0x16;
    }
    if (uVar5 != uVar2) {
      if (uVar5 < 0x17) {
        __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (this + 0x10);
        __dest = this + 1;
        uVar7 = 1;
      }
      else {
        if (uVar2 < uVar5) {
          __dest = operator_new(uVar5 + 1);
        }
        else {
          __dest = operator_new(uVar5 + 1);
        }
        __src = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (this + 0x10);
        uVar7 = (uint)uVar6 & 1;
        if ((uVar6 & 1) == 0) {
          __src = this + 1;
        }
      }
      if (uVar1 != 0xffffffffffffffff) {
        memmove(__dest,__src,uVar1 + 1);
      }
      if (uVar7 != 0) {
        operator_delete(__src);
      }
      if (uVar5 < 0x17) {
        *this = SUB41((int)uVar1 << 1,0);
      }
      else {
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0x10) = __dest;
        *(ulong *)this = uVar5 + 1 | 1;
        *(ulong *)(this + 8) = uVar1;
      }
    }
  }
  return;
}


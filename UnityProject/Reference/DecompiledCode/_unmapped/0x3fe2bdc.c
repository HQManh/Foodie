// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
// address: 0x3fe2bdc
// body: available
// range: 0x3fe2bdc-0x3fe2c5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe2c58 to 0x39aee10 FUN_039aee10 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::compare(char const*) const */

uint __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          char *param_1)

{
  size_t __n;
  ulong uVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__s1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  
  sVar3 = strlen(param_1);
  if (sVar3 != 0xffffffffffffffff) {
    uVar1 = *(ulong *)(this + 8);
    __s1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (this + 0x10);
    if (((byte)*this & 1) == 0) {
      __s1 = this + 1;
      uVar1 = (ulong)((byte)*this >> 1);
    }
    __n = uVar1;
    if (sVar3 <= uVar1) {
      __n = sVar3;
    }
    uVar4 = (uint)(sVar3 < uVar1);
    if (sVar3 > uVar1) {
      uVar4 = 0xffffffff;
    }
    uVar2 = memcmp(__s1,param_1,__n);
    if (uVar2 != 0) {
      uVar4 = uVar2;
    }
    return uVar4;
  }
  FUN_03f695e8(this);
                    /* WARNING: Subroutine does not return */
  FUN_039aee10();
}


// rea decompile_all
// name: std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
// address: 0x3fe2ed8
// body: available
// range: 0x3fe2ed8-0x3fe2f87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe2f84 to 0x3f695f8 FUN_03f695f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char>
   >::compare(unsigned long, unsigned long, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long, unsigned
   long) const */

int __thiscall
std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::compare
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this,
          ulong param_1,ulong param_2,basic_string *param_3,ulong param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  size_t __n;
  ulong uVar5;
  basic_string *pbVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar7;
  int iVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  
  bVar7 = *this;
  uVar5 = *(ulong *)(param_3 + 8);
  pbVar6 = *(basic_string **)(param_3 + 0x10);
  if (((byte)*param_3 & 1) == 0) {
    pbVar6 = param_3 + 1;
    uVar5 = (ulong)((byte)*param_3 >> 1);
  }
  uVar4 = (ulong)((byte)bVar7 >> 1);
  if (((byte)bVar7 & 1) != 0) {
    uVar4 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar4) {
    uVar3 = uVar4 - param_1;
    if (param_2 <= uVar4 - param_1) {
      uVar3 = param_2;
    }
    if (param_4 <= uVar5) {
      pbVar9 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                (this + 0x10);
      if (((byte)bVar7 & 1) == 0) {
        pbVar9 = this + 1;
      }
      uVar4 = uVar5 - param_4;
      if (param_5 <= uVar5 - param_4) {
        uVar4 = param_5;
      }
      __n = uVar4;
      if (uVar3 <= uVar4) {
        __n = uVar3;
      }
      iVar8 = memcmp(pbVar9 + param_1,pbVar6 + param_4,__n);
      iVar1 = 1;
      if (uVar3 < uVar4) {
        iVar1 = -1;
      }
      iVar2 = 0;
      if (uVar3 != uVar4) {
        iVar2 = iVar1;
      }
      if (iVar8 == 0) {
        iVar8 = iVar2;
      }
      return iVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f695f8("string_view::substr");
}


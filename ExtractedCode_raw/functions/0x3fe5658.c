// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::compare
// address: 0x3fe5658
// body: available
// range: 0x3fe5658-0x3fe571f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe571c to 0x3f695f8 FUN_03f695f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::compare(unsigned long, unsigned long,
   std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> > const&, unsigned long, unsigned long) const */

int __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::compare(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,basic_string *param_3,ulong param_4,ulong param_5)

{
  int iVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  ulong uVar4;
  ulong uVar5;
  size_t __n;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar6;
  basic_string *pbVar7;
  int iVar8;
  
  bVar6 = *this;
  uVar2 = (ulong)((byte)*param_3 >> 1);
  pbVar7 = param_3 + 4;
  if (((byte)*param_3 & 1) != 0) {
    uVar2 = *(ulong *)(param_3 + 8);
    pbVar7 = *(basic_string **)(param_3 + 0x10);
  }
  uVar5 = (ulong)((byte)bVar6 >> 1);
  if (((byte)bVar6 & 1) != 0) {
    uVar5 = *(ulong *)(this + 8);
  }
  if (param_1 <= uVar5) {
    pbVar3 = this + 4;
    if (((byte)bVar6 & 1) != 0) {
      pbVar3 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    uVar4 = uVar5 - param_1;
    if (param_2 <= uVar5 - param_1) {
      uVar4 = param_2;
    }
    if (param_4 <= uVar2) {
      uVar5 = uVar2 - param_4;
      if (param_5 <= uVar2 - param_4) {
        uVar5 = param_5;
      }
      __n = uVar5;
      if (uVar4 <= uVar5) {
        __n = uVar4;
      }
      if (__n != 0) {
        iVar8 = wmemcmp((wchar_t *)(pbVar3 + param_1 * 4),(wchar_t *)(pbVar7 + param_4 * 4),__n);
        if (iVar8 != 0) {
          return iVar8;
        }
      }
      iVar8 = 1;
      if (uVar4 < uVar5) {
        iVar8 = -1;
      }
      iVar1 = 0;
      if (uVar4 != uVar5) {
        iVar1 = iVar8;
      }
      return iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f695f8("string_view::substr");
}


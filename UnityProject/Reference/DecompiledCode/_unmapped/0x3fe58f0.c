// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append
// address: 0x3fe58f0
// body: available
// range: 0x3fe58f0-0x3fe59d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::append(wchar_t const*) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::append(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,wchar_t *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  ulong uVar5;
  size_t sVar6;
  
  sVar6 = wcslen(param_1);
  uVar5 = *(ulong *)this;
  uVar2 = 4;
  if (((byte)*this & 1) != 0) {
    uVar2 = (uVar5 & 0xfffffffffffffffe) - 1;
  }
  uVar3 = uVar5 >> 1 & 0x7f;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)(this + 8);
  }
  if (uVar2 - uVar3 < sVar6) {
    __grow_by_and_replace(this,uVar2,(sVar6 - uVar2) + uVar3,uVar3,uVar3,0,sVar6,param_1);
  }
  else if (sVar6 != 0) {
    pbVar4 = this + 4;
    if ((uVar5 & 1) != 0) {
      pbVar4 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    memmove(pbVar4 + uVar3 * 4,param_1,sVar6 << 2);
    lVar1 = uVar3 + sVar6;
    if (((byte)*this & 1) == 0) {
      *this = SUB41((int)lVar1 << 1,0);
    }
    else {
      *(long *)(this + 8) = lVar1;
    }
    *(undefined4 *)(pbVar4 + lVar1 * 4) = 0;
  }
  return this;
}


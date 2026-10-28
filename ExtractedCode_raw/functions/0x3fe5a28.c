// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::insert
// address: 0x3fe5a28
// body: available
// range: 0x3fe5a28-0x3fe5b23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::insert(std::__ndk1::__wrap_iter<wchar_t const*>, wchar_t) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::insert(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,long param_2,undefined4 param_3)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar5;
  bool bVar6;
  long lVar7;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar8;
  
  pbVar1 = this + 4;
  bVar6 = ((byte)*this & 1) != 0;
  pbVar8 = pbVar1;
  if (bVar6) {
    pbVar8 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  param_2 = param_2 - (long)pbVar8;
  uVar3 = (ulong)((byte)*this >> 1);
  if (bVar6) {
    uVar3 = *(ulong *)(this + 8);
  }
  uVar4 = 4;
  if (bVar6) {
    uVar4 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  lVar7 = param_2 >> 2;
  if (uVar4 == uVar3) {
    FUN_03fe3d70(this,uVar3,1,uVar3,lVar7,0,1);
    pbVar8 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  else {
    pbVar8 = pbVar1;
    if ((*(ulong *)this & 1) != 0) {
      pbVar8 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    if (uVar3 - lVar7 != 0) {
      memmove(pbVar8 + param_2 + 4,pbVar8 + param_2,(uVar3 - lVar7) * 4);
    }
  }
  lVar2 = uVar3 + 1;
  *(undefined4 *)(pbVar8 + lVar7 * 4) = param_3;
  *(undefined4 *)(pbVar8 + lVar2 * 4) = 0;
  bVar5 = *this;
  if (((byte)bVar5 & 1) == 0) {
    *this = SUB41((int)lVar2 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar2;
  }
  if (((byte)bVar5 & 1) != 0) {
    pbVar1 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  return pbVar1 + param_2;
}


// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::replace
// address: 0x3fe3484
// body: available
// range: 0x3fe3484-0x3fe365b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::replace(unsigned long, unsigned long, wchar_t const*, unsigned
   long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::replace(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,wchar_t *param_3,ulong param_4)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__dest;
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  bVar3 = *this;
  uVar1 = (ulong)((byte)bVar3 >> 1);
  if (((byte)bVar3 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  uVar4 = uVar1 - param_1;
  if (uVar1 < param_1) {
    FUN_03fe365c(this);
                    /* WARNING: Subroutine does not return */
    FUN_03f695f8("basic_string");
  }
  uVar6 = uVar4;
  if (param_2 <= uVar4) {
    uVar6 = param_2;
  }
  uVar5 = 4;
  if (((byte)bVar3 & 1) != 0) {
    uVar5 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if ((uVar6 - uVar1) + uVar5 < param_4) {
    __grow_by_and_replace
              (this,uVar5,((uVar1 + param_4) - uVar5) - uVar6,uVar1,param_1,uVar6,param_4,param_3);
    return this;
  }
  pbVar2 = this + 4;
  if ((*(ulong *)this & 1) != 0) {
    pbVar2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  uVar5 = param_4;
  if ((param_4 != uVar6) && (uVar5 = uVar6, param_2 < uVar4)) {
    __dest = pbVar2 + param_1 * 4;
    uVar5 = param_4 - uVar6;
    lVar7 = uVar4 - uVar6;
    if (param_4 < uVar6) {
      if (param_4 != 0) {
        memmove(__dest,param_3,param_4 << 2);
      }
      memmove(__dest + param_4 * 4,__dest + uVar6 * 4,lVar7 * 4);
      bVar3 = *this;
      goto joined_r0x03fe3620;
    }
    if ((param_3 < pbVar2 + uVar1 * 4) && (__dest + 4 <= param_3)) {
      if (param_3 < __dest + uVar6 * 4) {
        if (param_2 != 0) {
          memmove(__dest,param_3,uVar6 << 2);
        }
        param_3 = param_3 + param_4;
        param_1 = uVar6 + param_1;
        uVar6 = 0;
        param_4 = uVar5;
      }
      else {
        param_3 = param_3 + uVar5;
      }
    }
    memmove(pbVar2 + param_4 * 4 + param_1 * 4,pbVar2 + uVar6 * 4 + param_1 * 4,lVar7 * 4);
    uVar5 = uVar6;
  }
  if (param_4 != 0) {
    memmove(pbVar2 + param_1 * 4,param_3,param_4 << 2);
  }
  bVar3 = *this;
  uVar5 = param_4 - uVar5;
joined_r0x03fe3620:
  lVar7 = uVar5 + uVar1;
  if (((byte)bVar3 & 1) == 0) {
    *this = SUB41((int)lVar7 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar7;
  }
  *(undefined4 *)(pbVar2 + lVar7 * 4) = 0;
  return this;
}


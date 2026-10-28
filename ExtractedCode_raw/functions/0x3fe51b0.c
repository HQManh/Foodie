// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append
// address: 0x3fe51b0
// body: available
// range: 0x3fe51b0-0x3fe52d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::append(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&, unsigned long,
   unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::append(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,basic_string *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  basic_string *pbVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar6;
  size_t __n;
  wchar_t *__s1;
  ulong uVar7;
  basic_string bVar8;
  byte bVar9;
  uint uVar10;
  byte *pbVar11;
  size_t sVar12;
  undefined1 auVar13 [16];
  
  bVar8 = *param_1;
  uVar4 = (ulong)((byte)bVar8 >> 1);
  if (((byte)bVar8 & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 8);
  }
  if (param_2 <= uVar4) {
    uVar7 = *(ulong *)this;
    pbVar2 = param_1 + 4;
    if (((byte)bVar8 & 1) != 0) {
      pbVar2 = *(basic_string **)(param_1 + 0x10);
    }
    uVar3 = uVar4 - param_2;
    if (param_3 <= uVar4 - param_2) {
      uVar3 = param_3;
    }
    uVar4 = 4;
    if (((byte)*this & 1) != 0) {
      uVar4 = (uVar7 & 0xfffffffffffffffe) - 1;
    }
    uVar5 = uVar7 >> 1 & 0x7f;
    if ((uVar7 & 1) != 0) {
      uVar5 = *(ulong *)(this + 8);
    }
    if (uVar4 - uVar5 < uVar3) {
      __grow_by_and_replace
                (this,uVar4,(uVar3 - uVar4) + uVar5,uVar5,uVar5,0,uVar3,
                 (wchar_t *)(pbVar2 + param_2 * 4));
    }
    else if (uVar3 != 0) {
      pbVar6 = this + 4;
      if ((uVar7 & 1) != 0) {
        pbVar6 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   **)(this + 0x10);
      }
      memmove(pbVar6 + uVar5 * 4,pbVar2 + param_2 * 4,uVar3 << 2);
      lVar1 = uVar5 + uVar3;
      if (((byte)*this & 1) == 0) {
        *this = SUB41((int)lVar1 << 1,0);
      }
      else {
        *(long *)(this + 8) = lVar1;
      }
      *(undefined4 *)(pbVar6 + lVar1 * 4) = 0;
      return this;
    }
    return this;
  }
  auVar13 = FUN_03fe365c(this);
  pbVar11 = auVar13._0_8_;
  sVar12 = wcslen(auVar13._8_8_);
  bVar9 = *pbVar11;
  uVar4 = (ulong)(bVar9 >> 1);
  if ((bVar9 & 1) != 0) {
    uVar4 = *(ulong *)(pbVar11 + 8);
  }
  if (sVar12 != 0xffffffffffffffff) {
    __n = uVar4;
    if (sVar12 <= uVar4) {
      __n = sVar12;
    }
    if (__n != 0) {
      __s1 = (wchar_t *)(pbVar11 + 4);
      if ((bVar9 & 1) != 0) {
        __s1 = *(wchar_t **)(pbVar11 + 0x10);
      }
      uVar10 = wmemcmp(__s1,auVar13._8_8_,__n);
      if (uVar10 != 0) {
        return (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                *)(ulong)uVar10;
      }
    }
    uVar10 = (uint)(sVar12 < uVar4);
    if (uVar4 < sVar12) {
      uVar10 = 0xffffffff;
    }
    return (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *)(ulong)uVar10;
  }
  FUN_03fe365c(pbVar11);
                    /* WARNING: Subroutine does not return */
  FUN_039aee10();
}


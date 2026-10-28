// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::erase
// address: 0x3fe5080
// body: available
// range: 0x3fe5080-0x3fe5113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::erase(unsigned long, unsigned long) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::erase(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
        *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  ulong uVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar4;
  bool bVar5;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  bVar4 = *this;
  uVar1 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (uVar1 < param_1) {
    auVar9 = FUN_03fe365c();
    pbVar6 = auVar9._0_8_;
    if (param_2 != 0) {
      bVar4 = *pbVar6;
      bVar5 = ((byte)bVar4 & 1) != 0;
      uVar1 = (ulong)((byte)bVar4 >> 1);
      if (bVar5) {
        uVar1 = *(ulong *)(pbVar6 + 8);
      }
      uVar7 = uVar1 - auVar9._8_8_;
      pbVar2 = pbVar6 + 4;
      if (bVar5) {
        pbVar2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   **)(pbVar6 + 0x10);
      }
      uVar3 = uVar7;
      if (param_2 <= uVar7) {
        uVar3 = param_2;
      }
      if (param_2 < uVar7) {
        memmove(pbVar2 + auVar9._8_8_ * 4,pbVar2 + auVar9._8_8_ * 4 + uVar3 * 4,(uVar7 - uVar3) * 4)
        ;
        bVar4 = *pbVar6;
      }
      lVar8 = uVar1 - uVar3;
      if (((byte)bVar4 & 1) == 0) {
        *pbVar6 = SUB41((int)lVar8 << 1,0);
      }
      else {
        *(long *)(pbVar6 + 8) = lVar8;
      }
      *(undefined4 *)(pbVar2 + lVar8 * 4) = 0;
    }
    return pbVar6;
  }
  if (param_2 != 0xffffffffffffffff) {
    FUN_03fe5114();
    return this;
  }
  if (((byte)bVar4 & 1) == 0) {
    *this = SUB41((int)param_1 << 1,0);
    *(undefined4 *)(this + param_1 * 4 + 4) = 0;
    return this;
  }
  *(ulong *)(this + 8) = param_1;
  *(undefined4 *)(*(long *)(this + 0x10) + param_1 * 4) = 0;
  return this;
}


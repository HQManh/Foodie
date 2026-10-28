// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::compare
// address: 0x3fe541c
// body: available
// range: 0x3fe541c-0x3fe54eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::compare(unsigned long, unsigned long, wchar_t const*) const */

byte * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::compare(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,wchar_t *param_3)

{
  ulong uVar1;
  size_t __n;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar5;
  byte bVar6;
  uint uVar7;
  size_t sVar8;
  byte *pbVar9;
  undefined1 auVar10 [16];
  
  sVar8 = wcslen(param_3);
  bVar5 = *this;
  uVar3 = (ulong)((byte)bVar5 >> 1);
  if (((byte)bVar5 & 1) != 0) {
    uVar3 = *(ulong *)(this + 8);
  }
  if ((sVar8 != 0xffffffffffffffff) && (param_1 <= uVar3)) {
    uVar1 = uVar3 - param_1;
    if (param_2 <= uVar3 - param_1) {
      uVar1 = param_2;
    }
    __n = uVar1;
    if (sVar8 <= uVar1) {
      __n = sVar8;
    }
    if (__n != 0) {
      pbVar2 = this + 4;
      if (((byte)bVar5 & 1) != 0) {
        pbVar2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   **)(this + 0x10);
      }
      uVar7 = wmemcmp((wchar_t *)(pbVar2 + param_1 * 4),param_3,__n);
      if (uVar7 != 0) {
        return (byte *)(ulong)uVar7;
      }
    }
    uVar7 = (uint)(sVar8 < uVar1);
    if (uVar1 < sVar8) {
      uVar7 = 0xffffffff;
    }
    return (byte *)(ulong)uVar7;
  }
  auVar10 = FUN_03fe365c(this);
  pbVar9 = auVar10._0_8_;
  bVar6 = *pbVar9;
  uVar3 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    uVar3 = *(ulong *)(pbVar9 + 8);
  }
  if (auVar10._8_8_ < uVar3) {
    pbVar4 = pbVar9 + 4;
    if ((bVar6 & 1) != 0) {
      pbVar4 = *(byte **)(pbVar9 + 0x10);
    }
    return pbVar4 + auVar10._8_8_ * 4;
  }
  FUN_03fe365c();
  pbVar9 = (byte *)FUN_03fe553c();
  return pbVar9;
}


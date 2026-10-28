// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::copy
// address: 0x3fe46ec
// body: available
// range: 0x3fe46ec-0x3fe475f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::copy(wchar_t*, unsigned long, unsigned long) const */

ulong * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::copy(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *this
      ,wchar_t *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  byte *pbVar3;
  ulong uVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar5;
  byte bVar6;
  ulong *puVar7;
  byte *pbVar8;
  undefined1 *__dest;
  undefined1 auVar9 [16];
  
  bVar5 = *this;
  uVar1 = (ulong)((byte)bVar5 >> 1);
  if (((byte)bVar5 & 1) != 0) {
    uVar1 = *(ulong *)(this + 8);
  }
  if (param_3 <= uVar1) {
    puVar7 = (ulong *)(uVar1 - param_3);
    if (param_2 <= (ulong *)(uVar1 - param_3)) {
      puVar7 = (ulong *)param_2;
    }
    if (puVar7 != (ulong *)0x0) {
      pbVar2 = this + 4;
      if (((byte)bVar5 & 1) != 0) {
        pbVar2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                   **)(this + 0x10);
      }
      memmove(param_1,pbVar2 + param_3 * 4,(long)puVar7 << 2);
    }
    return puVar7;
  }
  auVar9 = FUN_03fe365c();
  pbVar8 = auVar9._8_8_;
  puVar7 = auVar9._0_8_;
  bVar6 = *pbVar8;
  uVar1 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar8 + 8);
  }
  if (uVar1 < param_2) {
    FUN_03fe365c(puVar7);
  }
  else {
    pbVar3 = pbVar8 + 4;
    if ((bVar6 & 1) != 0) {
      pbVar3 = *(byte **)(pbVar8 + 0x10);
    }
    uVar4 = uVar1 - param_2;
    if (param_3 <= uVar1 - param_2) {
      uVar4 = param_3;
    }
    if (uVar4 < 0x3ffffffffffffff0) {
      if (uVar4 < 5) {
        __dest = (undefined1 *)((long)puVar7 + 4);
        *(char *)puVar7 = (char)((int)uVar4 << 1);
        if (uVar4 == 0) goto LAB_03fe4814;
      }
      else {
        if (0x3ffffffffffffffe < (uVar4 | 3)) goto LAB_03fe4840;
        uVar1 = (uVar4 | 3) + 1;
        __dest = operator_new(uVar1 * 4);
        puVar7[1] = uVar4;
        puVar7[2] = (ulong)__dest;
        *puVar7 = uVar1 | 1;
      }
      puVar7 = memmove(__dest,pbVar3 + param_2 * 4,uVar4 << 2);
LAB_03fe4814:
      *(undefined4 *)(__dest + uVar4 * 4) = 0;
      return puVar7;
    }
  }
  FUN_03fe3950(puVar7);
LAB_03fe4840:
                    /* WARNING: Subroutine does not return */
  FUN_03f650f4();
}


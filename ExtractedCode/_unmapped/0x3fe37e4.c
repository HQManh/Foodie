// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::rfind
// address: 0x3fe37e4
// body: available
// range: 0x3fe37e4-0x3fe38a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::rfind(wchar_t const*, unsigned long, unsigned long) const */

long __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::rfind(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
        *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  int *piVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar7;
  long lVar8;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar9;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar10;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar11;
  
  uVar4 = (ulong)((byte)*this >> 1);
  pbVar7 = this + 4;
  if (((byte)*this & 1) != 0) {
    uVar4 = *(ulong *)(this + 8);
    pbVar7 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               **)(this + 0x10);
  }
  uVar5 = uVar4;
  if (param_2 <= uVar4) {
    uVar5 = param_2;
  }
  uVar6 = uVar5 + param_3;
  if (uVar4 - uVar5 <= param_3) {
    uVar6 = uVar4;
  }
  pbVar2 = pbVar7 + uVar6 * 4;
  pbVar10 = pbVar2;
  if ((param_3 != 0) && (uVar6 != 0)) {
    pbVar9 = pbVar2;
    pbVar11 = pbVar7;
    do {
      pbVar10 = pbVar9;
      if (*(wchar_t *)pbVar11 == *param_1) {
        lVar8 = 4;
        do {
          pbVar10 = pbVar11;
          if (param_3 * 4 - lVar8 == 0) break;
          pbVar3 = pbVar11 + lVar8;
          pbVar10 = pbVar9;
          if (pbVar3 == pbVar2) goto LAB_03fe3890;
          piVar1 = (int *)((long)param_1 + lVar8);
          lVar8 = lVar8 + 4;
        } while (*(int *)pbVar3 == *piVar1);
      }
      pbVar11 = pbVar11 + 4;
      pbVar9 = pbVar10;
    } while (pbVar11 != pbVar2);
  }
LAB_03fe3890:
  lVar8 = (long)pbVar10 - (long)pbVar7 >> 2;
  if (pbVar10 == pbVar2 && param_3 != 0) {
    lVar8 = -1;
  }
  return lVar8;
}


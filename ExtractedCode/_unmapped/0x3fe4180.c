// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::replace
// address: 0x3fe4180
// body: available
// range: 0x3fe4180-0x3fe42ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::replace(unsigned long, unsigned long, unsigned long, wchar_t)
    */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::replace(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1,ulong param_2,ulong param_3,wchar_t param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  ulong uVar6;
  ulong uVar7;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar8;
  ulong uVar9;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar10;
  
  bVar4 = *this;
  uVar2 = (ulong)((byte)bVar4 >> 1);
  if (((byte)bVar4 & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
  }
  uVar6 = uVar2 - param_1;
  if (uVar2 < param_1) {
    FUN_03fe365c();
    FUN_03fe4308();
    return;
  }
  uVar3 = uVar6;
  if (param_2 <= uVar6) {
    uVar3 = param_2;
  }
  lVar1 = 4;
  if (((byte)bVar4 & 1) != 0) {
    lVar1 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
  }
  if ((uVar3 - uVar2) + lVar1 < param_3) {
    FUN_03fe3d70(this,lVar1,((uVar2 + param_3) - lVar1) - uVar3,uVar2,param_1,uVar3,param_3);
    pbVar10 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                **)(this + 0x10);
  }
  else {
    pbVar10 = this + 4;
    if ((*(ulong *)this & 1) != 0) {
      pbVar10 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  **)(this + 0x10);
    }
    if ((param_2 < uVar6) && (param_3 != uVar3)) {
      memmove(pbVar10 + param_3 * 4 + param_1 * 4,pbVar10 + uVar3 * 4 + param_1 * 4,
              (uVar6 - uVar3) * 4);
    }
    if (param_3 == 0) goto LAB_03fe42bc;
  }
  pbVar5 = pbVar10 + param_1 * 4;
  uVar6 = param_3;
  if (7 < param_3) {
    uVar7 = param_3 & 0xfffffffffffffff8;
    uVar6 = param_3 & 7;
    pbVar8 = pbVar5 + 0x10;
    uVar9 = uVar7;
    do {
      *(ulong *)(pbVar8 + -8) = CONCAT44(param_4,param_4);
      *(ulong *)(pbVar8 + -0x10) = CONCAT44(param_4,param_4);
      *(ulong *)(pbVar8 + 8) = CONCAT44(param_4,param_4);
      *(ulong *)pbVar8 = CONCAT44(param_4,param_4);
      uVar9 = uVar9 - 8;
      pbVar8 = pbVar8 + 0x20;
    } while (uVar9 != 0);
    pbVar5 = pbVar5 + uVar7 * 4;
    if (uVar7 == param_3) goto LAB_03fe42bc;
  }
  do {
    uVar6 = uVar6 - 1;
    *(wchar_t *)pbVar5 = param_4;
    pbVar5 = pbVar5 + 4;
  } while (uVar6 != 0);
LAB_03fe42bc:
  lVar1 = (param_3 - uVar3) + uVar2;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
  }
  *(undefined4 *)(pbVar10 + lVar1 * 4) = 0;
  return;
}


// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::append
// address: 0x3fe4cf0
// body: available
// range: 0x3fe4cf0-0x3fe4eb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe4eb0 to 0x3f650f4 FUN_03f650f4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::append(unsigned long, wchar_t) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::append(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t param_2)

{
  long lVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__dest;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar4;
  ulong uVar5;
  ulong uVar6;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 == 0) {
    return;
  }
  uVar8 = *(ulong *)this;
  bVar3 = *this;
  uVar5 = 4;
  if (((byte)bVar3 & 1) != 0) {
    uVar5 = (uVar8 & 0xfffffffffffffffe) - 1;
  }
  uVar2 = uVar8 >> 1 & 0x7f;
  if ((uVar8 & 1) != 0) {
    uVar2 = *(ulong *)(this + 8);
  }
  if (uVar5 - uVar2 < param_1) {
    uVar6 = uVar2 + param_1;
    uVar9 = 0x3fffffffffffffef;
    if (0x3fffffffffffffef - uVar5 < uVar6 - uVar5) {
      FUN_03fe3950();
LAB_03fe4eb0:
                    /* WARNING: Subroutine does not return */
      FUN_03f650f4();
    }
    pbVar4 = this + 4;
    if ((uVar8 & 1) != 0) {
      pbVar4 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    if (uVar5 < 0x1fffffffffffffe7) {
      if (uVar6 <= uVar5 * 2) {
        uVar6 = uVar5 * 2;
      }
      uVar9 = 5;
      if (4 < uVar6) {
        uVar9 = (uVar6 | 3) + 1;
      }
      if (uVar9 >> 0x3e != 0) goto LAB_03fe4eb0;
    }
    __dest = operator_new(uVar9 << 2);
    if (uVar2 != 0) {
      memmove(__dest,pbVar4,uVar2 << 2);
    }
    if (((byte)bVar3 & 1) != 0) {
      operator_delete(pbVar4);
    }
    *(ulong *)(this + 8) = uVar2;
    *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
     (this + 0x10) = __dest;
    *(ulong *)this = uVar9 | 1;
    pbVar4 = __dest + uVar2 * 4;
  }
  else {
    __dest = this + 4;
    if ((uVar8 & 1) != 0) {
      __dest = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    pbVar4 = __dest + uVar2 * 4;
  }
  uVar5 = param_1;
  if (7 < param_1) {
    uVar6 = param_1 & 0xfffffffffffffff8;
    uVar5 = param_1 & 7;
    pbVar7 = pbVar4 + 0x10;
    uVar8 = uVar6;
    do {
      *(ulong *)(pbVar7 + -8) = CONCAT44(param_2,param_2);
      *(ulong *)(pbVar7 + -0x10) = CONCAT44(param_2,param_2);
      *(ulong *)(pbVar7 + 8) = CONCAT44(param_2,param_2);
      *(ulong *)pbVar7 = CONCAT44(param_2,param_2);
      uVar8 = uVar8 - 8;
      pbVar7 = pbVar7 + 0x20;
    } while (uVar8 != 0);
    pbVar4 = pbVar4 + uVar6 * 4;
    if (uVar6 == param_1) goto LAB_03fe4e70;
  }
  do {
    uVar5 = uVar5 - 1;
    *(wchar_t *)pbVar4 = param_2;
    pbVar4 = pbVar4 + 4;
  } while (uVar5 != 0);
LAB_03fe4e70:
  lVar1 = uVar2 + param_1;
  if (((byte)*this & 1) == 0) {
    *this = SUB41((int)lVar1 << 1,0);
  }
  else {
    *(long *)(this + 8) = lVar1;
  }
  *(undefined4 *)(__dest + lVar1 * 4) = 0;
  return;
}


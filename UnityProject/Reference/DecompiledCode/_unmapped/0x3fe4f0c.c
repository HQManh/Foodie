// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::assign
// address: 0x3fe4f0c
// body: available
// range: 0x3fe4f0c-0x3fe507f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe507c to 0x3f650f4 FUN_03f650f4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::assign(unsigned long, wchar_t) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::assign(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t param_2)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar1;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar2;
  uint uVar3;
  ulong uVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = *(ulong *)this;
  bVar1 = *this;
  uVar3 = (uint)uVar4 & 0xff;
  uVar6 = 4;
  if (((byte)bVar1 & 1) != 0) {
    uVar6 = (uVar4 & 0xfffffffffffffffe) - 1;
  }
  if (uVar6 < param_1) {
    uVar7 = 0x3fffffffffffffef;
    if (0x3fffffffffffffef - uVar6 < param_1 - uVar6) {
      FUN_03fe3950();
LAB_03fe507c:
                    /* WARNING: Subroutine does not return */
      FUN_03f650f4();
    }
    pbVar5 = this + 4;
    if ((uVar4 & 1) != 0) {
      pbVar5 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    if (uVar6 < 0x1fffffffffffffe7) {
      uVar4 = param_1;
      if (param_1 <= uVar6 * 2) {
        uVar4 = uVar6 * 2;
      }
      uVar7 = 5;
      if (4 < uVar4) {
        uVar7 = (uVar4 | 3) + 1;
      }
      if (uVar7 >> 0x3e != 0) goto LAB_03fe507c;
    }
    pbVar2 = operator_new(uVar7 << 2);
    if (((byte)bVar1 & 1) != 0) {
      operator_delete(pbVar5);
    }
    *(undefined8 *)(this + 8) = 0;
    *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
     (this + 0x10) = pbVar2;
    *(ulong *)this = uVar7 | 1;
  }
  else {
    pbVar2 = this + 4;
    if ((uVar4 & 1) != 0) {
      pbVar2 = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                 **)(this + 0x10);
    }
    if (param_1 == 0) goto LAB_03fe5044;
  }
  pbVar5 = pbVar2;
  uVar6 = param_1;
  if (param_1 < 8) {
LAB_03fe5034:
    do {
      uVar6 = uVar6 - 1;
      *(wchar_t *)pbVar5 = param_2;
      pbVar5 = pbVar5 + 4;
    } while (uVar6 != 0);
  }
  else {
    uVar7 = param_1 & 0xfffffffffffffff8;
    uVar6 = param_1 & 7;
    pbVar5 = pbVar2 + 0x10;
    uVar4 = uVar7;
    do {
      *(ulong *)(pbVar5 + -8) = CONCAT44(param_2,param_2);
      *(ulong *)(pbVar5 + -0x10) = CONCAT44(param_2,param_2);
      *(ulong *)(pbVar5 + 8) = CONCAT44(param_2,param_2);
      *(ulong *)pbVar5 = CONCAT44(param_2,param_2);
      uVar4 = uVar4 - 8;
      pbVar5 = pbVar5 + 0x20;
    } while (uVar4 != 0);
    pbVar5 = pbVar2 + uVar7 * 4;
    if (uVar7 != param_1) goto LAB_03fe5034;
  }
  uVar3 = (uint)(byte)*this;
LAB_03fe5044:
  if ((uVar3 & 1) == 0) {
    *this = SUB41((int)param_1 << 1,0);
  }
  else {
    *(ulong *)(this + 8) = param_1;
  }
  *(undefined4 *)(pbVar2 + param_1 * 4) = 0;
  return;
}


// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::__init
// address: 0x3fe48b8
// body: available
// range: 0x3fe48b8-0x3fe49a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe49a4 to 0x3f650f4 FUN_03f650f4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::__init(unsigned long, wchar_t) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::__init(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
         *this,ulong param_1,wchar_t param_2)

{
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *pbVar5;
  
  if (0x3fffffffffffffef < param_1) {
    FUN_03fe3950(this);
LAB_03fe49a4:
                    /* WARNING: Subroutine does not return */
    FUN_03f650f4();
  }
  if (param_1 < 5) {
    pbVar5 = this + 4;
    *this = SUB41((int)param_1 << 1,0);
    if (param_1 == 0) goto LAB_03fe4984;
  }
  else {
    if (0x3ffffffffffffffe < (param_1 | 3)) goto LAB_03fe49a4;
    uVar2 = (param_1 | 3) + 1;
    pbVar5 = operator_new(uVar2 * 4);
    *(ulong *)(this + 8) = param_1;
    *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
     (this + 0x10) = pbVar5;
    *(ulong *)this = uVar2 | 1;
  }
  pbVar1 = pbVar5;
  uVar2 = param_1;
  if (7 < param_1) {
    uVar3 = param_1 & 0x3ffffffffffffff8;
    uVar2 = param_1 & 7;
    pbVar1 = pbVar5 + 0x10;
    uVar4 = uVar3;
    do {
      *(ulong *)(pbVar1 + -8) = CONCAT44(param_2,param_2);
      *(ulong *)(pbVar1 + -0x10) = CONCAT44(param_2,param_2);
      *(ulong *)(pbVar1 + 8) = CONCAT44(param_2,param_2);
      *(ulong *)pbVar1 = CONCAT44(param_2,param_2);
      uVar4 = uVar4 - 8;
      pbVar1 = pbVar1 + 0x20;
    } while (uVar4 != 0);
    pbVar1 = pbVar5 + uVar3 * 4;
    if (uVar3 == param_1) goto LAB_03fe4984;
  }
  do {
    uVar2 = uVar2 - 1;
    *(wchar_t *)pbVar1 = param_2;
    pbVar1 = pbVar1 + 4;
  } while (uVar2 != 0);
LAB_03fe4984:
  *(undefined4 *)(pbVar5 + param_1 * 4) = 0;
  return;
}


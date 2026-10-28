// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::reserve
// address: 0x3fe43e4
// body: available
// range: 0x3fe43e4-0x3fe4587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe4580 to 0x3f650f4 FUN_03f650f4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x3fe4584 to 0x3f650f4 FUN_03f650f4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::reserve(unsigned long) */

void __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::reserve(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
          *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> bVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__src;
  bool bVar4;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__dest;
  ulong uVar5;
  ulong uVar6;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  byte bVar7;
  undefined8 unaff_x25;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar8 [16];
  
  if (0x3fffffffffffffef < param_1) {
    unaff_x29 = &stack0xfffffffffffffff0;
    unaff_x30 = 0x3fe4464;
    auVar8 = FUN_03fe3950();
    uVar5 = auVar8._8_8_;
    this = auVar8._0_8_;
    register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
code_r0x03fe4468:
    *(undefined1 **)((long)register0x00000008 + -0x50) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -0x48) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x40) = unaff_x25;
    *(undefined8 *)((long)register0x00000008 + -0x30) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x18) = unaff_x21;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x20;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x19;
    bVar3 = *this;
    uVar1 = (ulong)((byte)bVar3 >> 1);
    if (((byte)bVar3 & 1) != 0) {
      uVar1 = *(ulong *)(this + 8);
    }
    if (uVar5 < 5) {
      __dest = this + 4;
      bVar7 = 1;
      __src = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                **)(this + 0x10);
    }
    else {
      uVar6 = uVar5 + 1;
      uVar2 = 4;
      if (((byte)bVar3 & 1) != 0) {
        uVar2 = (*(ulong *)this & 0xfffffffffffffffe) - 1;
      }
      if (uVar2 < uVar5) {
        if (uVar6 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f650f4();
        }
        __dest = operator_new(uVar6 * 4);
      }
      else {
        if (uVar6 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f650f4();
        }
        __dest = operator_new(uVar6 * 4);
      }
      bVar7 = (byte)bVar3 & 1;
      __src = this + 4;
      if (((byte)bVar3 & 1) != 0) {
        __src = *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
                  **)(this + 0x10);
      }
    }
    if (uVar1 != 0xffffffffffffffff) {
      memmove(__dest,__src,(uVar1 + 1) * 4);
    }
    if (bVar7 != 0) {
      operator_delete(__src);
    }
    if (uVar5 < 5) {
      *this = SUB41((int)uVar1 << 1,0);
    }
    else {
      *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> **)
       (this + 0x10) = __dest;
      *(ulong *)this = uVar5 + 1 | 1;
      *(ulong *)(this + 8) = uVar1;
    }
    return;
  }
  uVar6 = *(ulong *)this;
  uVar5 = (uVar6 & 0xfffffffffffffffe) - 1;
  uVar1 = 4;
  if (((byte)*this & 1) != 0) {
    uVar1 = uVar5;
  }
  if (uVar1 < param_1) {
    bVar4 = (uVar6 & 1) != 0;
    uVar1 = uVar6 >> 1 & 0x7f;
    if (bVar4) {
      uVar1 = *(ulong *)(this + 8);
    }
    uVar6 = 4;
    if (bVar4) {
      uVar6 = uVar5;
    }
    if (uVar1 <= param_1) {
      uVar1 = param_1;
    }
    uVar5 = uVar1 | 3;
    if (uVar1 < 5) {
      uVar5 = 4;
    }
    if (uVar5 != uVar6) goto code_r0x03fe4468;
  }
  return;
}


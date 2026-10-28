// rea decompile_all
// name: std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>::operator=
// address: 0x3fe5720
// body: available
// range: 0x3fe5720-0x3fe58ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3fe5848 to 0x3f650f4 FUN_03f650f4 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_string<wchar_t, std::__ndk1::char_traits<wchar_t>,
   std::__ndk1::allocator<wchar_t> >::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_string<wchar_t,
   std::__ndk1::char_traits<wchar_t>, std::__ndk1::allocator<wchar_t> > const&) */

basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> * __thiscall
std::__ndk1::basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
::operator=(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            *this,basic_string *param_1)

{
  ulong uVar1;
  basic_string bVar2;
  basic_string *__src;
  ulong uVar3;
  basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>> *__dest;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (this != (basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
               *)param_1) {
    bVar2 = *param_1;
    if (((byte)*this & 1) != 0) {
      uVar1 = (ulong)((byte)bVar2 >> 1);
      __src = param_1 + 4;
      if (((byte)bVar2 & 1) != 0) {
        uVar1 = *(ulong *)(param_1 + 8);
        __src = *(basic_string **)(param_1 + 0x10);
      }
      uVar3 = *(ulong *)this & 0xfffffffffffffffe;
      if (uVar3 <= uVar1) {
        __grow_by_and_replace
                  (this,uVar3 - 1,(uVar1 - uVar3) + 1,*(ulong *)(this + 8),0,*(ulong *)(this + 8),
                   uVar1,(wchar_t *)__src);
        return this;
      }
      pvVar4 = *(void **)(this + 0x10);
      *(ulong *)(this + 8) = uVar1;
      if (uVar1 != 0) {
        memmove(pvVar4,__src,uVar1 << 2);
      }
      *(undefined4 *)((long)pvVar4 + uVar1 * 4) = 0;
      return this;
    }
    if (((byte)bVar2 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 8);
      pvVar4 = *(void **)(param_1 + 0x10);
      if (uVar1 < 5) {
        __dest = this + 4;
        *this = SUB41((int)uVar1 << 1,0);
        if (uVar1 != 0) {
          memmove(__dest,pvVar4,uVar1 << 2);
        }
LAB_03fe5820:
        *(undefined4 *)(__dest + uVar1 * 4) = 0;
        return this;
      }
      if (uVar1 + 0xc000000000000011 < 0xc000000000000015) {
        FUN_03fe3950(this);
      }
      else {
        uVar3 = uVar1;
        if (uVar1 < 9) {
          uVar3 = 8;
        }
        if ((uVar3 | 3) < 0x3fffffffffffffff) {
          uVar3 = (uVar3 | 3) + 1;
          __dest = operator_new(uVar3 * 4);
          memcpy(__dest,pvVar4,uVar1 << 2);
          *(ulong *)(this + 8) = uVar1;
          *(basic_string<wchar_t,std::__ndk1::char_traits<wchar_t>,std::__ndk1::allocator<wchar_t>>
            **)(this + 0x10) = __dest;
          *(ulong *)this = uVar3 | 1;
          goto LAB_03fe5820;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f650f4();
    }
    uVar6 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = uVar6;
    *(undefined8 *)this = uVar5;
  }
  return this;
}


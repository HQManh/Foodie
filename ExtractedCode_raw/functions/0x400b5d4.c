// rea decompile_all
// name: std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::do_get_year
// address: 0x400b5d4
// body: available
// range: 0x400b5d4-0x400b6ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x400b6ec to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::do_get_year(std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> >, std::__ndk1::ios_base&, unsigned int&, tm*) const */

undefined8 __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
do_get_year(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           byte *param_5,long param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 **local_48;
  undefined1 **local_28;
  
  local_58 = param_2;
  ios_base::getloc();
  local_50 = ctype<wchar_t>::id;
  if (ctype<wchar_t>::id._0_8_ != -1) {
    local_28 = &local_50;
    local_48 = &local_28;
    __call_once((ulong *)ctype<wchar_t>::id,&local_48,FUN_0402d4a0);
  }
  if (((long)(int)ctype<wchar_t>::id._8_4_ - 1U <
       (ulong)(*(long *)(local_60 + 0x18) - *(long *)(local_60 + 0x10) >> 3)) &&
     (lVar5 = *(long *)(*(long *)(local_60 + 0x10) + ((long)(int)ctype<wchar_t>::id._8_4_ - 1U) * 8)
     , lVar5 != 0)) {
    locale::~locale((locale *)&local_60);
    uVar3 = FUN_0400c6d4(&local_58,param_3,param_5,lVar5,4);
    if ((*param_5 >> 2 & 1) == 0) {
      uVar1 = uVar3 + 0x76c;
      if (99 < uVar3) {
        uVar1 = uVar3;
      }
      uVar2 = uVar3 + 2000;
      if (0x44 < (int)uVar3) {
        uVar2 = uVar1;
      }
      *(uint *)(param_6 + 0x14) = uVar2 - 0x76c;
    }
    return local_58;
  }
  uVar4 = FUN_03ff9c28();
  locale::~locale((locale *)&local_60);
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar4);
}


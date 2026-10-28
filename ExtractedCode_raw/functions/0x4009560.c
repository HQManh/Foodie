// rea decompile_all
// name: std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get_monthname
// address: 0x4009560
// body: available
// range: 0x4009560-0x40096af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40096ac to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::time_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get_monthname(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, tm*) const */

undefined8 __thiscall
std::__ndk1::time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_get_monthname(time_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                 *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
                long param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long local_68;
  undefined8 local_60;
  undefined1 *local_58;
  undefined8 **local_50;
  undefined1 **local_48;
  
  local_60 = param_2;
  ios_base::getloc();
  local_58 = ctype<char>::id;
  if (ctype<char>::id._0_8_ != -1) {
    local_48 = &local_58;
    local_50 = &local_48;
    __call_once((ulong *)ctype<char>::id,&local_50,FUN_0402d4a0);
  }
  if (((long)(int)ctype<char>::id._8_4_ - 1U <
       (ulong)(*(long *)(local_68 + 0x18) - *(long *)(local_68 + 0x10) >> 3)) &&
     (lVar3 = *(long *)(*(long *)(local_68 + 0x10) + ((long)(int)ctype<char>::id._8_4_ - 1U) * 8),
     lVar3 != 0)) {
    locale::~locale((locale *)&local_68);
    lVar1 = (**(code **)(*(long *)(this + 0x10) + 8))(this + 0x10);
    lVar3 = FUN_03ffb520(&local_60,param_3,lVar1,lVar1 + 0x240,lVar3,param_5,0);
    if (lVar3 - lVar1 < 0x240) {
      lVar3 = (lVar3 - lVar1 >> 3) * -0x5555555555555555;
      *(int *)(param_6 + 0x10) =
           (int)lVar3 +
           ((int)((ulong)(lVar3 / 6 + (lVar3 >> 0x3f)) >> 1) -
           (SUB164(SEXT816(lVar3) * SEXT816(0x2aaaaaaaaaaaaaab),0xc) >> 0x1f)) * -0xc;
    }
    return local_60;
  }
  uVar2 = FUN_03ff9c28();
  locale::~locale((locale *)&local_68);
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar2);
}


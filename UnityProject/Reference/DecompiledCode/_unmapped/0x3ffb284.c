// rea decompile_all
// name: std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::do_get
// address: 0x3ffb284
// body: available
// range: 0x3ffb284-0x3ffb4d7 inclusive
// range: 0x3ffb4e4-0x3ffb4f3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3ffb4f0 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::num_get<char, std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char>
   > >::do_get(std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >,
   std::__ndk1::istreambuf_iterator<char, std::__ndk1::char_traits<char> >, std::__ndk1::ios_base&,
   unsigned int&, bool&) const */

undefined8 __thiscall
std::__ndk1::num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>>::
do_get(num_get<char,std::__ndk1::istreambuf_iterator<char,std::__ndk1::char_traits<char>>> *this,
      undefined8 param_2,undefined8 param_3,long param_4,undefined4 *param_5,undefined1 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  undefined1 **local_90 [2];
  void *local_80;
  byte local_78 [16];
  void *local_68;
  long local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_58 = param_2;
  if ((*(byte *)(param_4 + 8) & 1) == 0) {
    local_90[0] = (undefined1 **)0xffffffffffffffff;
    uVar2 = (**(code **)(*(long *)this + 0x20))();
    if (local_90[0] == (undefined1 **)0x1) {
      *param_6 = 1;
    }
    else if (local_90[0] == (undefined1 **)0x0) {
      *param_6 = 0;
    }
    else {
      *param_6 = 1;
      *param_5 = 4;
    }
    return uVar2;
  }
  ios_base::getloc();
  lVar4 = local_60;
  local_50 = ctype<char>::id;
  if (ctype<char>::id._0_8_ != -1) {
    local_90[0] = &local_50;
    local_48 = (undefined1 *)local_90;
    __call_once((ulong *)ctype<char>::id,&local_48,FUN_0402d4a0);
  }
  lVar1 = *(long *)(lVar4 + 0x10);
  if (((long)(int)ctype<char>::id._8_4_ - 1U < (ulong)(*(long *)(lVar4 + 0x18) - lVar1 >> 3)) &&
     (lVar4 = *(long *)(lVar1 + ((long)(int)ctype<char>::id._8_4_ - 1U) * 8), lVar4 != 0)) {
    locale::~locale((locale *)&local_60);
    ios_base::getloc();
    local_50 = numpunct<char>::id;
    if (numpunct<char>::id._0_8_ != -1) {
      local_90[0] = &local_50;
      local_48 = (undefined1 *)local_90;
      __call_once((ulong *)numpunct<char>::id,&local_48,FUN_0402d4a0);
    }
    if (((long)(int)numpunct<char>::id._8_4_ - 1U <
         (ulong)(*(long *)(local_60 + 0x18) - *(long *)(local_60 + 0x10) >> 3)) &&
       (plVar5 = *(long **)(*(long *)(local_60 + 0x10) +
                           ((long)(int)numpunct<char>::id._8_4_ - 1U) * 8), plVar5 != (long *)0x0))
    {
      locale::~locale((locale *)&local_60);
      (**(code **)(*plVar5 + 0x30))(local_90,plVar5);
      (**(code **)(*plVar5 + 0x38))(local_78,plVar5);
      puVar3 = (undefined1 *)FUN_03ffb520(&local_58,param_3,local_90,&local_60,lVar4,param_5,1);
      uVar2 = local_58;
      *param_6 = (undefined1 ***)puVar3 == local_90;
      if ((local_78[0] & 1) != 0) {
        operator_delete(local_68);
      }
      if (((ulong)local_90[0] & 1) == 0) {
        return uVar2;
      }
      operator_delete(local_80);
      return uVar2;
    }
  }
  else {
    FUN_03ff9c28();
  }
  uVar2 = FUN_03ff9c28();
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if (((ulong)local_90[0] & 1) != 0) {
    operator_delete(local_80);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar2);
}


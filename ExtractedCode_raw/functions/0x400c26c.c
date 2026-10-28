// rea decompile_all
// name: std::__ndk1::time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::__get_am_pm
// address: 0x400c26c
// body: available
// range: 0x400c26c-0x400c37b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::time_get<wchar_t, std::__ndk1::istreambuf_iterator<wchar_t,
   std::__ndk1::char_traits<wchar_t> > >::__get_am_pm(int&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >&,
   std::__ndk1::istreambuf_iterator<wchar_t, std::__ndk1::char_traits<wchar_t> >, unsigned int&,
   std::__ndk1::ctype<wchar_t> const&) const */

void __thiscall
std::__ndk1::
time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>::
__get_am_pm(time_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
            *this,int *param_1,undefined8 param_2,undefined8 param_4,uint *param_5,
           undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar4 = (byte *)(**(code **)(*(long *)(this + 0x10) + 0x10))();
  uVar1 = (ulong)(*pbVar4 >> 1);
  if ((*pbVar4 & 1) != 0) {
    uVar1 = *(ulong *)(pbVar4 + 8);
  }
  uVar2 = (ulong)(pbVar4[0x18] >> 1);
  if ((pbVar4[0x18] & 1) != 0) {
    uVar2 = *(ulong *)(pbVar4 + 0x20);
  }
  if (uVar1 + uVar2 == 0) {
    *param_5 = *param_5 | 4;
  }
  else {
    pbVar5 = (byte *)FUN_03fffaf4(param_2,param_4,pbVar4,pbVar4 + 0x30,param_6,param_5,0);
    iVar3 = *param_1;
    if ((pbVar5 == pbVar4) && (iVar3 == 0xc)) {
      *param_1 = 0;
      return;
    }
    if (((long)pbVar5 - (long)pbVar4 == 0x18) && (iVar3 < 0xc)) {
      *param_1 = iVar3 + 0xc;
      return;
    }
  }
  return;
}


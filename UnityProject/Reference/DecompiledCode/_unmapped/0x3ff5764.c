// rea decompile_all
// name: std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::putback
// address: 0x3ff5764
// body: available
// range: 0x3ff5764-0x3ff5853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_istream<wchar_t, std::__ndk1::char_traits<wchar_t> >::putback(wchar_t) */

basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::putback
          (basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,wchar_t param_1)

{
  long *plVar1;
  wchar_t *pwVar2;
  long lVar3;
  uint uVar4;
  sentry local_14 [4];
  
  lVar3 = *(long *)(*(long *)this + -0x18);
  *(undefined8 *)(this + 8) = 0;
  uVar4 = *(uint *)(this + lVar3 + 0x20) & 0xfffffffd;
  ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),uVar4);
  sentry::sentry(local_14,(basic_istream *)this,true);
  if (local_14[0] == (sentry)0x0) {
    uVar4 = uVar4 | 4;
  }
  else {
    plVar1 = *(long **)(this + *(long *)(*(long *)this + -0x18) + 0x28);
    if (plVar1 != (long *)0x0) {
      if ((plVar1[2] == plVar1[3]) || (pwVar2 = (wchar_t *)(plVar1[3] + -4), *pwVar2 != param_1)) {
        param_1 = (**(code **)(*plVar1 + 0x58))(plVar1,param_1);
      }
      else {
        plVar1[3] = (long)pwVar2;
      }
      if (param_1 != L'\xffffffff') goto LAB_03ff5824;
    }
    uVar4 = uVar4 | 1;
  }
LAB_03ff5824:
  ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                  *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | uVar4);
  return this;
}


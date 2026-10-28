// rea decompile_all
// name: std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
// address: 0x3ff6c5c
// body: available
// range: 0x3ff6c5c-0x3ff6d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::basic_ostream<wchar_t, std::__ndk1::char_traits<wchar_t>
   >::TEMPNAMEPLACEHOLDERVALUE(long long) */

basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> * __thiscall
std::__ndk1::basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>>::operator<<
          (basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *this,longlong param_1)

{
  basic_ostream<wchar_t,std::__ndk1::char_traits<wchar_t>> *pbVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  sentry local_58 [16];
  locale alStack_48 [8];
  
  sentry::sentry(local_58,(basic_ostream *)this);
  if (local_58[0] != (sentry)0x0) {
    ios_base::getloc();
    plVar3 = (long *)locale::use_facet(alStack_48,
                                       (id *)num_put<wchar_t,std::__ndk1::ostreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                                             ::id);
    locale::~locale(alStack_48);
    pbVar1 = this + *(long *)(*(long *)this + -0x18);
    iVar2 = *(int *)(pbVar1 + 0x90);
    uVar6 = *(undefined8 *)(pbVar1 + 0x28);
    if (iVar2 == -1) {
      ios_base::getloc();
      plVar4 = (long *)locale::use_facet(alStack_48,(id *)ctype<wchar_t>::id);
      iVar2 = (**(code **)(*plVar4 + 0x58))(plVar4,0x20);
      locale::~locale(alStack_48);
      *(int *)(pbVar1 + 0x90) = iVar2;
    }
    lVar5 = (**(code **)(*plVar3 + 0x28))(plVar3,uVar6,pbVar1,iVar2,param_1);
    if (lVar5 == 0) {
      ios_base::clear((ios_base *)(this + *(long *)(*(long *)this + -0x18)),
                      *(uint *)((ios_base *)(this + *(long *)(*(long *)this + -0x18)) + 0x20) | 5);
    }
  }
  sentry::~sentry(local_58);
  return this;
}


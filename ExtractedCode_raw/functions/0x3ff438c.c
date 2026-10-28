// rea decompile_all
// name: FUN_03ff438c
// address: 0x3ff438c
// body: available
// range: 0x3ff438c-0x3ff444b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


basic_istream * FUN_03ff438c(basic_istream *param_1,undefined8 param_2)

{
  long *plVar1;
  locale alStack_30 [8];
  sentry local_28 [4];
  uint local_24;
  
  local_24 = 0;
  std::__ndk1::basic_istream<wchar_t,std::__ndk1::char_traits<wchar_t>>::sentry::sentry
            (local_28,param_1,false);
  if (local_28[0] != (sentry)0x0) {
    std::__ndk1::ios_base::getloc();
    plVar1 = (long *)std::__ndk1::locale::use_facet
                               (alStack_30,
                                (id *)std::__ndk1::
                                      num_get<wchar_t,std::__ndk1::istreambuf_iterator<wchar_t,std::__ndk1::char_traits<wchar_t>>>
                                      ::id);
    (**(code **)(*plVar1 + 0x48))
              (plVar1,*(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x28),0,
               param_1 + *(long *)(*(long *)param_1 + -0x18),&local_24,param_2);
    std::__ndk1::locale::~locale(alStack_30);
    std::__ndk1::ios_base::clear
              ((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)),
               *(uint *)((ios_base *)(param_1 + *(long *)(*(long *)param_1 + -0x18)) + 0x20) |
               local_24);
  }
  return param_1;
}


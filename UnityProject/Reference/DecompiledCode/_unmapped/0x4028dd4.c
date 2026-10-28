// rea decompile_all
// name: std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage
// address: 0x4028dd4
// body: available
// range: 0x4028dd4-0x4028eb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4028eb0 to 0x39aee10 FUN_039aee10 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
std::__ndk1::__time_get_storage<wchar_t>::__time_get_storage
          (__time_get_storage<wchar_t> *this,basic_string *param_1)

{
  __locale_t p_Var1;
  basic_string *pbVar2;
  basic_string *__locale;
  undefined **local_38 [2];
  __locale_t local_28;
  
  __locale = *(basic_string **)(param_1 + 0x10);
  pbVar2 = (basic_string *)0x0;
  if (((byte)*param_1 & 1) == 0) {
    __locale = param_1 + 1;
  }
  p_Var1 = newlocale(0x1fbf,(char *)__locale,(__locale_t)0x0);
  *(__locale_t *)this = p_Var1;
  if (p_Var1 != (__locale_t)0x0) {
    memset(this + 8,0,0x420);
    ctype_byname<wchar_t>::ctype_byname((ctype_byname<wchar_t> *)local_38,param_1,1);
    local_38[0] = (undefined **)&UNK_08fad188;
    init((ctype *)this);
    local_38[0] = &PTR__ctype_byname_08faaca0;
    freelocale(local_28);
    locale::facet::~facet((facet *)local_38);
    return;
  }
  operator+((__ndk1 *)"time_get_byname failed to construct for ",(char *)param_1,pbVar2);
  p_Var1 = (__locale_t)((ulong)local_38 | 1);
  if (((byte)local_38[0]._0_1_ & 1) != 0) {
    p_Var1 = local_28;
  }
  __throw_runtime_error((char *)p_Var1);
                    /* WARNING: Subroutine does not return */
  FUN_039aee10();
}


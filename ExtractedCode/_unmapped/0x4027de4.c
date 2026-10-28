// rea decompile_all
// name: std::__ndk1::__time_get_storage<char>::__time_get_storage
// address: 0x4027de4
// body: available
// range: 0x4027de4-0x4027e93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::__time_get_storage<char>::__time_get_storage(char const*) */

void __thiscall
std::__ndk1::__time_get_storage<char>::__time_get_storage
          (__time_get_storage<char> *this,char *param_1)

{
  undefined **ppuVar1;
  undefined **local_48 [2];
  void *local_38;
  char local_30;
  __locale_t local_28;
  
  __time_get::__time_get((__time_get *)this,param_1);
  memset(this + 8,0,0x420);
  ctype_byname<char>::ctype_byname((ctype_byname<char> *)local_48,param_1,1);
  local_48[0] = (undefined **)&UNK_08fad108;
  init((ctype *)this);
  local_48[0] = &PTR__ctype_byname_08faac38;
  freelocale(local_28);
  local_48[0] = &PTR__ctype_08faabd0;
  ppuVar1 = &PTR__ctype_08faabd0;
  if ((local_38 != (void *)0x0) && (ppuVar1 = local_48[0], local_30 != '\0')) {
    local_48[0] = &PTR__ctype_08faabd0;
    operator_delete__(local_38);
    ppuVar1 = local_48[0];
  }
  local_48[0] = ppuVar1;
  __shared_weak_count::~__shared_weak_count((__shared_weak_count *)local_48);
  return;
}


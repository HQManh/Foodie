// rea decompile_all
// name: std::__ndk1::system_error::system_error
// address: 0x3feaa08
// body: available
// range: 0x3feaa08-0x3feaac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
std::__ndk1::system_error::system_error
          (system_error *this,int param_1,error_category *param_2,basic_string *param_3)

{
  ulong local_70;
  undefined8 uStack_68;
  void *local_60;
  int local_58 [2];
  error_category *local_50;
  basic_string local_48 [16];
  void *local_38;
  
  local_58[0] = param_1;
  local_50 = param_2;
  if (((byte)*param_3 & 1) == 0) {
    uStack_68 = *(undefined8 *)(param_3 + 8);
    local_70 = *(ulong *)param_3;
    local_60 = *(void **)(param_3 + 0x10);
  }
  else {
    FUN_03f5d0a4(&local_70,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 8));
  }
  FUN_03fea714(local_48,local_58,&local_70);
  runtime_error::runtime_error((runtime_error *)this,local_48);
  if (((byte)local_48[0] & 1) != 0) {
    operator_delete(local_38);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  *(int *)(this + 0x10) = param_1;
  *(undefined ***)this = &PTR__system_error_08fa9bf8;
  *(error_category **)(this + 0x18) = param_2;
  return;
}


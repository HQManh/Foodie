// rea decompile_all
// name: std::__ndk1::system_error::system_error
// address: 0x3fea958
// body: available
// range: 0x3fea958-0x3fea9eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::system_error::system_error(std::__ndk1::error_code) */

void __thiscall
std::__ndk1::system_error::system_error(system_error *this,ulong param_2,long *param_3)

{
  ulong local_48 [2];
  void *local_38;
  
  if ((int)param_2 == 0) {
    local_48[0] = 0;
    local_48[1] = 0;
    local_38 = (void *)0x0;
  }
  else {
    (**(code **)(*param_3 + 0x30))(local_48,param_3,param_2 & 0xffffffff);
  }
  runtime_error::runtime_error((runtime_error *)this,(basic_string *)local_48);
  if ((local_48[0] & 1) != 0) {
    operator_delete(local_38);
  }
  *(undefined ***)this = &PTR__system_error_08fa9bf8;
  *(ulong *)(this + 0x10) = param_2;
  *(long **)(this + 0x18) = param_3;
  return;
}


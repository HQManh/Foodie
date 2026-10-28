// rea decompile_all
// name: std::__ndk1::system_error::system_error
// address: 0x3feab14
// body: available
// range: 0x3feab14-0x3feac2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3feac28 to 0x3f5d118 FUN_03f5d118 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::system_error::system_error(int, std::__ndk1::error_category const&, char const*) */

void __thiscall
std::__ndk1::system_error::system_error
          (system_error *this,int param_1,error_category *param_2,char *param_3)

{
  size_t __n;
  void *__dest;
  ulong local_90;
  size_t local_88;
  void *local_80;
  int local_78 [2];
  error_category *local_70;
  basic_string local_68 [16];
  void *local_58;
  
  local_78[0] = param_1;
  local_70 = param_2;
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5d118(&local_90);
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_90 | 1);
    local_90 = CONCAT71(local_90._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_03feabac;
  }
  else {
    __dest = operator_new((__n | 0xf) + 1);
    local_90 = (__n | 0xf) + 2;
    local_88 = __n;
    local_80 = __dest;
  }
  memcpy(__dest,param_3,__n);
LAB_03feabac:
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_03fea714(local_68,local_78,&local_90);
  runtime_error::runtime_error((runtime_error *)this,local_68);
  if (((byte)local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  *(int *)(this + 0x10) = param_1;
  *(undefined ***)this = &PTR__system_error_08fa9bf8;
  *(error_category **)(this + 0x18) = param_2;
  return;
}


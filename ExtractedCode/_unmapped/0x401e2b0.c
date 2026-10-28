// rea decompile_all
// name: std::__ndk1::ctype_byname<char>::ctype_byname
// address: 0x401e2b0
// body: available
// range: 0x401e2b0-0x401e38b inclusive
// range: 0x401e398-0x401e3af inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x401e374 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x401e3ac to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::ctype_byname<char>::ctype_byname(char const*, unsigned long) */

void __thiscall
std::__ndk1::ctype_byname<char>::ctype_byname(ctype_byname<char> *this,char *param_1,ulong param_2)

{
  char *pcVar1;
  __locale_t p_Var2;
  undefined8 uVar3;
  byte local_50 [16];
  void *local_40;
  byte local_38 [16];
  char *local_28;
  
  this[0x18] = (ctype_byname<char>)0x0;
  *(ulong *)(this + 8) = param_2 - 1;
  *(undefined **)(this + 0x10) = &UNK_023affb0;
  *(undefined ***)this = &PTR__ctype_byname_08faac38;
  p_Var2 = newlocale(0x1fbf,param_1,(__locale_t)0x0);
  *(__locale_t *)(this + 0x20) = p_Var2;
  if (p_Var2 != (__locale_t)0x0) {
    return;
  }
  FUN_03f6321c(local_50,param_1);
  FUN_0401ca38(local_38,"ctype_byname<char>::ctype_byname failed to construct for ",local_50);
  pcVar1 = (char *)((ulong)local_38 | 1);
  if ((local_38[0] & 1) != 0) {
    pcVar1 = local_28;
  }
  uVar3 = __throw_runtime_error(pcVar1);
  if ((local_38[0] & 1) != 0) {
    operator_delete(local_28);
  }
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
    ctype<char>::~ctype((ctype<char> *)this);
                    /* WARNING: Subroutine does not return */
    FUN_0404c2dc(uVar3);
  }
  ctype<char>::~ctype((ctype<char> *)this);
                    /* WARNING: Subroutine does not return */
  FUN_0404c2dc(uVar3);
}


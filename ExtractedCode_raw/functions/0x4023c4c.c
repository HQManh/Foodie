// rea decompile_all
// name: std::__ndk1::numpunct_byname<wchar_t>::__init
// address: 0x4023c4c
// body: available
// range: 0x4023c4c-0x4023d7b inclusive
// range: 0x4023d88-0x4023d9f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4023d64 to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4023d9c to 0x404c2dc FUN_0404c2dc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::__ndk1::numpunct_byname<wchar_t>::__init(char const*) */

void __thiscall
std::__ndk1::numpunct_byname<wchar_t>::__init(numpunct_byname<wchar_t> *this,char *param_1)

{
  char *pcVar1;
  int iVar2;
  __locale_t __dataset;
  __locale_t __dataset_00;
  lconv *plVar3;
  undefined8 uVar4;
  byte local_68 [16];
  void *local_58;
  __locale_t local_50 [2];
  char *local_40;
  __locale_t local_38;
  
  iVar2 = strcmp(param_1,"C");
  if (iVar2 != 0) {
    __dataset = newlocale(0x1fbf,param_1,(__locale_t)0x0);
    local_38 = __dataset;
    if (__dataset == (__locale_t)0x0) {
      FUN_03f6321c(local_68,param_1);
      FUN_0401ca38(local_50,"numpunct_byname<wchar_t>::numpunct_byname failed to construct for ",
                   local_68);
      pcVar1 = (char *)((ulong)local_50 | 1);
      if (((ulong)local_50[0] & 1) != 0) {
        pcVar1 = local_40;
      }
      uVar4 = __throw_runtime_error(pcVar1);
      if (((byte)local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
      if ((local_68[0] & 1) != 0) {
        operator_delete(local_58);
        FUN_04023bc0(&local_38);
                    /* WARNING: Subroutine does not return */
        FUN_0404c2dc(uVar4);
      }
      FUN_04023bc0(&local_38);
                    /* WARNING: Subroutine does not return */
      FUN_0404c2dc(uVar4);
    }
    __dataset_00 = uselocale(__dataset);
    local_50[0] = __dataset_00;
    plVar3 = localeconv();
    if (__dataset_00 != (__locale_t)0x0) {
      uselocale(__dataset_00);
    }
    FUN_04023e8c(this + 0x10,plVar3->decimal_point,__dataset);
    FUN_04023e8c(this + 0x14,plVar3->thousands_sep,__dataset);
    FUN_03fe2dcc(this + 0x18,plVar3->grouping);
    freelocale(__dataset);
  }
  return;
}


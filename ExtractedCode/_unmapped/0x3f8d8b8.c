// rea decompile_all
// name: FUN_03f8d8b8
// address: 0x3f8d8b8
// body: available
// range: 0x3f8d8b8-0x3f8d923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


__off_t FUN_03f8d8b8(int *param_1,__off_t param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  __off_t _Var2;
  undefined4 *puVar3;
  
  if (param_1[1] == 1) {
    if (param_3 < 3) {
      _Var2 = lseek(*param_1,param_2,param_3);
      if (_Var2 == -1) {
        puVar3 = (undefined4 *)__errno();
        uVar1 = FUN_03f89920(*puVar3);
        _Var2 = -1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      _Var2 = -1;
      uVar1 = 0x57;
    }
  }
  else {
    _Var2 = 0;
    uVar1 = 6;
  }
  *param_4 = uVar1;
  return _Var2;
}


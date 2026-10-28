// rea decompile_all
// name: thunk_FUN_03f8d778
// address: 0x758aa40
// body: available
// range: 0x758aa40-0x758aa43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


__off_t thunk_FUN_03f8d778(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  __off_t _Stack_60;
  
  if (param_1[1] == 1) {
    iVar1 = fstat(*param_1,(stat *)&stack0xffffffffffffff70);
    if (iVar1 == -1) {
      puVar3 = (undefined4 *)__errno();
      uVar2 = FUN_03f89920(*puVar3);
      _Stack_60 = -1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    _Stack_60 = 0;
    uVar2 = 6;
  }
  *param_2 = uVar2;
  return _Stack_60;
}


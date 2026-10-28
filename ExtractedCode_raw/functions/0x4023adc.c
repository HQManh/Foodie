// rea decompile_all
// name: FUN_04023adc
// address: 0x4023adc
// body: available
// range: 0x4023adc-0x4023ba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_04023adc(char *param_1,char *param_2,__locale_t param_3)

{
  int iVar1;
  ulong uVar2;
  __locale_t __dataset;
  wint_t local_3c;
  __locale_t local_38;
  
  if (*param_2 != '\0') {
    if (param_2[1] == '\0') {
      *param_1 = *param_2;
      return 1;
    }
    uVar2 = FUN_04023e8c(&local_3c);
    if ((uVar2 & 1) != 0) {
      __dataset = uselocale(param_3);
      local_38 = __dataset;
      iVar1 = wctob(local_3c);
      if (__dataset != (__locale_t)0x0) {
        uselocale(__dataset);
      }
      if (((iVar1 != -1) || (iVar1 = 0x20, local_3c == 0x202f)) || (local_3c == 0xa0)) {
        *param_1 = (char)iVar1;
        return 1;
      }
    }
  }
  return 0;
}


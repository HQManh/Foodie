// rea decompile_all
// name: FUN_03feb71c
// address: 0x3feb71c
// body: available
// range: 0x3feb71c-0x3feb8e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03feb71c(undefined8 *param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  
  if (param_3 < 2) {
    if (param_3 == 0) goto LAB_03feb7b0;
    if (param_3 == 1) {
      pcVar1 = operator_new(0x50);
      param_1[2] = pcVar1;
      param_1[1] = 0x48;
      *param_1 = 0x51;
      builtin_strncpy(pcVar1,
                      "The future has already been retrieved from the promise or packaged_task.",
                      0x49);
      return;
    }
  }
  else {
    if (param_3 == 2) {
      pcVar1 = operator_new(0x30);
      param_1[2] = pcVar1;
      param_1[1] = 0x2e;
      *param_1 = 0x31;
      builtin_strncpy(pcVar1,"The state of the promise has already been set.",0x2f);
      return;
    }
    if (param_3 == 3) {
      pcVar1 = operator_new(0x50);
      param_1[2] = pcVar1;
      pcVar1[0x40] = '.';
      param_1[1] = 0x41;
      *param_1 = 0x51;
      builtin_strncpy(pcVar1,"Operation not permitted on an object without an associated state",0x40
                     );
      pcVar1[0x41] = '\0';
      return;
    }
    if (param_3 == 4) {
LAB_03feb7b0:
      pcVar1 = operator_new(0x60);
      param_1[2] = pcVar1;
      param_1[1] = 0x58;
      *param_1 = 0x61;
      builtin_strncpy(pcVar1,
                      "The associated promise has been destructed prior to the associated state becoming ready."
                      ,0x59);
      return;
    }
  }
  pcVar1 = operator_new(0x20);
  param_1[2] = pcVar1;
  builtin_strncpy(pcVar1,"unspecified futu",0x10);
  param_1[1] = 0x1e;
  *param_1 = 0x21;
  builtin_strncpy(pcVar1 + 0xe,"ture_errc value\n",0x11);
  return;
}


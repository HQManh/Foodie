// rea decompile_all
// name: System.Runtime.InteropServices.Marshal$$StringToHGlobalAnsi
// address: 0x74ce2ec
// body: available
// range: 0x74ce2ec-0x74ce2ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * System_Runtime_InteropServices_Marshal__StringToHGlobalAnsi(long param_1)

{
  ulong uVar1;
  char *__src;
  char *__dest;
  byte abStack_38 [8];
  ulong uStack_30;
  char *pcStack_28;
  
  if (param_1 == 0) {
    __dest = (char *)0x0;
  }
  else {
    FUN_03f926e8(abStack_38);
    uVar1 = (ulong)(abStack_38[0] >> 1);
    if ((abStack_38[0] & 1) != 0) {
      uVar1 = uStack_30;
    }
    __dest = (char *)thunk_FUN_03f8a4c8(uVar1 + 1);
    __src = (char *)((ulong)abStack_38 | 1);
    if ((abStack_38[0] & 1) != 0) {
      __src = pcStack_28;
    }
    strcpy(__dest,__src);
    if ((abStack_38[0] & 1) != 0) {
      operator_delete(pcStack_28);
    }
  }
  return __dest;
}


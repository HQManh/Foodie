// rea decompile_all
// name: Newtonsoft.Json.Utilities.MathUtils$$IntLength
// address: 0x7698dd8
// body: available
// range: 0x7698dd8-0x7698f9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int Newtonsoft_Json_Utilities_MathUtils__IntLength(ulong param_1)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 < 10000000000) {
    if (param_1 < 10) {
      return 1;
    }
    if (param_1 < 100) {
      return 2;
    }
    if (param_1 < 1000) {
      return 3;
    }
    if (param_1 >> 4 < 0x271) {
      return 4;
    }
    if (param_1 >> 5 < 0xc35) {
      return 5;
    }
    if (param_1 < 1000000) {
      return 6;
    }
    if (param_1 < 10000000) {
      return 7;
    }
    if (param_1 < 100000000) {
      return 8;
    }
    bVar1 = 999999999 < param_1;
    iVar2 = 9;
  }
  else {
    if (param_1 < 100000000000) {
      return 0xb;
    }
    if (param_1 < 1000000000000) {
      return 0xc;
    }
    if (param_1 < 10000000000000) {
      return 0xd;
    }
    if (param_1 < 100000000000000) {
      return 0xe;
    }
    if (param_1 < 1000000000000000) {
      return 0xf;
    }
    if (param_1 < 10000000000000000) {
      return 0x10;
    }
    if (param_1 < 100000000000000000) {
      return 0x11;
    }
    if (param_1 < 1000000000000000000) {
      return 0x12;
    }
    bVar1 = 9999999999999999999 < param_1;
    iVar2 = 0x13;
  }
  if (bVar1) {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}


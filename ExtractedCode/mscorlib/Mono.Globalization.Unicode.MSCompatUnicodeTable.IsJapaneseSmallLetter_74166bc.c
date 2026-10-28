// rea decompile_all
// name: Mono.Globalization.Unicode.MSCompatUnicodeTable$$IsJapaneseSmallLetter
// address: 0x74166bc
// body: available
// range: 0x74166bc-0x74167bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Mono_Globalization_Unicode_MSCompatUnicodeTable__IsJapaneseSmallLetter(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (0xfff6 < (param_1 + 0x90 & 0xffff)) {
    return 1;
  }
  if (0xff46 < (param_1 - 0x30fa & 0xffff)) {
    uVar2 = param_1 & 0xffff;
    if ((param_1 & 0xffff) < 0x30aa) {
      if ((param_1 >> 2 & 0x3fff) < 0xc19) {
        uVar1 = uVar2 - 0x3041;
        if (8 < uVar1) {
          if ((param_1 & 0xffff) != 0x3063) {
            return 0;
          }
          return 1;
        }
      }
      else {
        uVar1 = uVar2 - 0x3083;
        if (4 < uVar1) {
          if ((param_1 & 0xffff) == 0x308e) {
            return 1;
          }
          uVar1 = uVar2 - 0x30a1;
          if (8 < uVar1) {
            return 0;
          }
        }
      }
LAB_074167b4:
      return (uint)((uVar1 & 1) == 0);
    }
    if ((param_1 >> 3 & 0x1fff) < 0x61d) {
      if ((param_1 & 0xffff) == 0x30c3) {
        return 1;
      }
      uVar1 = uVar2 - 0x30e3;
      if (uVar1 < 5) goto LAB_074167b4;
    }
    else if ((param_1 - 0x30ee & 0xffff) < 9) {
      return 0x181U >> (ulong)(param_1 - 0x30ee & 0x1f) & 1;
    }
  }
  return 0;
}


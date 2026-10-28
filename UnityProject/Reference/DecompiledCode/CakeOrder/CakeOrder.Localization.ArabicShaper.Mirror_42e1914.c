// rea decompile_all
// name: CakeOrder.Localization.ArabicShaper$$Mirror
// address: 0x42e1914
// body: available
// range: 0x42e1914-0x42e19bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_Localization_ArabicShaper__Mirror(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  uVar1 = uVar2 & 0xffff;
  if (uVar1 < 0x5e) {
    if (uVar1 < 0x2a) {
      if ((uVar2 & 0xffff) == 0x28) {
        return 0x29;
      }
      if ((uVar2 & 0xffff) == 0x29) {
        return 0x28;
      }
    }
    else {
      if ((uVar2 & 0xffff) == 0x5b) {
        return 0x5d;
      }
      if ((uVar2 & 0xffff) == 0x5d) {
        return 0x5b;
      }
    }
  }
  else if (uVar1 < 0x7e) {
    if ((uVar2 & 0xffff) == 0x7b) {
      return 0x7d;
    }
    if ((uVar2 & 0xffff) == 0x7d) {
      return 0x7b;
    }
  }
  else {
    if ((uVar2 & 0xffff) == 0xab) {
      return 0xbb;
    }
    if ((uVar2 & 0xffff) == 0xbb) {
      param_1 = 0xab;
    }
  }
  return param_1;
}


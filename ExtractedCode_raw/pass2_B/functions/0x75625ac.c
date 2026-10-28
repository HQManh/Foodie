// rea decompile_all
// name: System.Buffers.Text.FormattingHelpers$$CountDigits
// address: 0x75625ac
// body: available
// range: 0x75625ac-0x7562687 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_Buffers_Text_FormattingHelpers__CountDigits(ulong param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 < 10000000) {
    iVar1 = 1;
  }
  else if (param_1 < 100000000000000) {
    iVar1 = 8;
    param_1 = param_1 / 10000000;
  }
  else {
    iVar1 = 0xf;
    param_1 = param_1 / 100000000000000;
  }
  uVar2 = (uint)param_1;
  if (9 < uVar2) {
    if (uVar2 < 100) {
      return iVar1 + 1;
    }
    if (uVar2 < 1000) {
      return iVar1 + 2;
    }
    if (uVar2 >> 4 < 0x271) {
      return iVar1 + 3;
    }
    if (uVar2 >> 5 < 0xc35) {
      return iVar1 + 4;
    }
    if (uVar2 < 1000000) {
      return iVar1 + 5;
    }
    iVar1 = iVar1 + 6;
  }
  return iVar1;
}


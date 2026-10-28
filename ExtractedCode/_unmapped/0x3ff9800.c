// rea decompile_all
// name: FUN_03ff9800
// address: 0x3ff9800
// body: available
// range: 0x3ff9800-0x3ff9833 inclusive
// range: 0x3ff9924-0x3ff9933 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_03ff9800(uint param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_01a452ac;
  switch(param_1 & 0xfffffffd) {
  case 1:
  case 0x11:
    return &UNK_01a39d78;
  default:
    puVar1 = (undefined *)0x0;
code_r0x03ff9930:
    return puVar1;
  case 5:
  case 0x15:
    return &UNK_01a7e4e6;
  case 8:
    return &UNK_01a30509;
  case 9:
  case 0x19:
    return &UNK_01a56ff2;
  case 0xc:
    return &UNK_01a452af;
  case 0xd:
  case 0x1d:
    return &UNK_01a4b6c1;
  case 0x10:
  case 0x30:
    goto code_r0x03ff9930;
  case 0x14:
  case 0x34:
    return &UNK_01a3050c;
  case 0x18:
    return &UNK_01a7303c;
  case 0x1c:
    return &UNK_01a86ef1;
  case 0x38:
    return &UNK_01a707c5;
  case 0x3c:
    return &UNK_01a7883c;
  case 0x50:
  case 0x70:
    return &UNK_01a4827c;
  case 0x54:
  case 0x74:
    return &UNK_01a5140c;
  case 0x78:
    return &UNK_01a4e5f4;
  case 0x7c:
    return &UNK_01a73040;
  }
}


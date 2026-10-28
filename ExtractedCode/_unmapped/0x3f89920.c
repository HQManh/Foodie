// rea decompile_all
// name: FUN_03f89920
// address: 0x3f89920
// body: available
// range: 0x3f89920-0x3f899d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03f89920(int param_1)

{
  switch(param_1) {
  case 1:
  case 0xd:
  case 0x1e:
    return 5;
  case 2:
  case 0x14:
    return 2;
  case 3:
  case 6:
  case 7:
  case 10:
  case 0xc:
  case 0xe:
  case 0xf:
  case 0x12:
  case 0x13:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1f:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x25:
    goto switchD_03f89944_caseD_3;
  case 4:
    return 0x3e5;
  case 5:
  case 9:
    return 6;
  case 8:
    return 0xb;
  case 0xb:
    return 0x20;
  case 0x10:
    return 0x21;
  case 0x11:
    return 0x50;
  case 0x15:
    return 0x52;
  case 0x16:
  case 0x1d:
    return 0x19;
  case 0x17:
  case 0x18:
    return 4;
  case 0x1c:
    return 0x27;
  case 0x20:
    return 0x1d;
  case 0x24:
    return 0xce;
  case 0x26:
    return 0x32;
  case 0x27:
    return 0x91;
  default:
    if (param_1 == 0x73) {
      return 0x3e5;
    }
switchD_03f89944_caseD_3:
    return 0x1f;
  }
}


// rea decompile_all
// name: FUN_03f897e0
// address: 0x3f897e0
// body: available
// range: 0x3f897e0-0x3f8991f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_03f897e0(ulong param_1)

{
  switch((int)param_1) {
  case 0x3f:
  case 0x67:
switchD_03f89800_caseD_3f:
    return 0x2742;
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x5b:
  case 0x60:
  case 100:
  case 0x66:
  case 0x6c:
  case 0x6d:
switchD_03f8982c_caseD_0:
    return 0x277b;
  case 0x58:
switchD_03f89800_caseD_58:
    return 0x2736;
  case 0x59:
    return 0x2737;
  case 0x5a:
    return 0x2738;
  case 0x5c:
    return 0x273a;
  case 0x5d:
    return 0x273b;
  case 0x5e:
    return 0x273c;
  case 0x5f:
    return 0x273d;
  case 0x61:
    return 0x273f;
  case 0x62:
    return 0x2740;
  case 99:
    return 0x2741;
  case 0x65:
    return 0x2743;
  case 0x68:
    return 0x2746;
  case 0x69:
switchD_03f89800_caseD_69:
    return 0x2747;
  case 0x6a:
    return 0x2748;
  case 0x6b:
    return 0x2749;
  case 0x6e:
    return 0x274c;
  case 0x6f:
switchD_03f89800_caseD_6f:
    return 0x274d;
  case 0x70:
    return 0x2750;
  case 0x71:
    return 0x2751;
  case 0x72:
    return 0x2735;
  case 0x73:
    return 0x2734;
  }
  switch(param_1 & 0xffffffff) {
  case 0:
    return param_1;
  case 1:
  case 0xd:
    return 0x271d;
  case 2:
    goto switchD_03f89800_caseD_6f;
  default:
    goto switchD_03f8982c_caseD_0;
  case 4:
    return 0x2714;
  case 6:
    return 0x2af9;
  case 9:
  case 0x19:
    goto switchD_03f89800_caseD_58;
  case 0xb:
    return 0x2733;
  case 0xc:
    goto switchD_03f89800_caseD_69;
  case 0xe:
    return 0x271e;
  case 0x13:
    goto switchD_03f89800_caseD_3f;
  case 0x16:
    return 0x2726;
  case 0x18:
    return 0x2728;
  case 0x20:
    return 0x274a;
  }
}


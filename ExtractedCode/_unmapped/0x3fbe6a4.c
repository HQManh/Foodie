// rea decompile_all
// name: FUN_03fbe6a4
// address: 0x3fbe6a4
// body: available
// range: 0x3fbe6a4-0x3fbe807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fbe6a4(int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 1:
    return DAT_095353f8;
  case 2:
    return DAT_09535400;
  case 3:
    return DAT_09535460;
  case 4:
    return DAT_09535408;
  case 5:
    return DAT_095353f0;
  case 6:
    return DAT_09535410;
  case 7:
    return DAT_09535418;
  case 8:
    return DAT_09535420;
  case 9:
    return DAT_09535428;
  case 10:
    return DAT_09535440;
  case 0xb:
    return DAT_09535448;
  case 0xc:
    return DAT_09535450;
  case 0xd:
    return DAT_09535458;
  case 0xe:
    return DAT_09535468;
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x17:
  case 0x1a:
  case 0x1b:
    break;
  case 0x16:
    uVar1 = DAT_09535540;
    break;
  case 0x18:
    return DAT_09535430;
  case 0x19:
    return DAT_09535438;
  case 0x1c:
    return DAT_095353e8;
  default:
    if (param_1 == 0xff) {
      return DAT_095354b8;
    }
  }
  return uVar1;
}


// rea decompile_all
// name: FUN_03f7ae84
// address: 0x3f7ae84
// body: available
// range: 0x3f7ae84-0x3f7af5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f7ae84(code *param_1,undefined8 param_2)

{
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  
  FUN_03f85e5c(&DAT_095346b8);
  FUN_03f7e59c(auStack_68,0x95346c0);
  while( true ) {
    local_70 = 0;
    local_b0 = 0x95346c0;
    local_a8 = lRam0000000009534708;
    local_a0 = lRam0000000009534710;
    local_98 = lRam0000000009534710;
    local_90 = 0;
    lStack_88 = lRam0000000009534708;
    local_80 = lRam0000000009534710;
    lStack_78 = lRam0000000009534710;
    FUN_03f7c130(&local_b0);
    if ((((local_60 == local_a8) && (local_58 == local_a0)) && (local_50 == local_98)) &&
       ((local_50 == local_58 || (local_48 == local_90)))) break;
    (*param_1)(*(undefined8 *)(local_48 + 0x18),param_2);
    FUN_03f7e618(auStack_68);
  }
  FUN_03f85e64(&DAT_095346b8);
  return;
}


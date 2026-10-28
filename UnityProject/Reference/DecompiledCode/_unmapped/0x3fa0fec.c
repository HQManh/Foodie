// rea decompile_all
// name: FUN_03fa0fec
// address: 0x3fa0fec
// body: available
// range: 0x3fa0fec-0x3fa108b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_03fa0fec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
            undefined8 param_6,long param_7)

{
  undefined1 auVar1 [16];
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 *local_60;
  undefined1 local_58;
  undefined8 local_50;
  long lStack_48;
  undefined8 local_40;
  long lStack_38;
  
  puStack_68 = &local_50;
  local_60 = &local_40;
  local_58 = 0;
  lStack_48 = param_7;
  local_50 = param_6;
  local_70 = param_1;
  while (local_40 = param_6, lStack_38 = param_7, param_3 != param_5) {
    param_3 = param_3 + -0x10;
    FUN_03f7d300(param_7 + -0x10,param_3);
    param_7 = lStack_38 + -0x10;
    param_6 = local_40;
  }
  local_58 = 1;
  FUN_03fa10a0(&local_70);
  auVar1._8_8_ = param_7;
  auVar1._0_8_ = param_6;
  return auVar1;
}


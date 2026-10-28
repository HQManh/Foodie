// rea decompile_all
// name: MessagePack.MessagePackSerializer.LZ4Transform$$BeginInvoke
// address: 0x739692c
// body: available
// range: 0x739692c-0x73969e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void MessagePack_MessagePackSerializer_LZ4Transform__BeginInvoke
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  local_60 = param_4;
  uStack_58 = param_5;
  local_50 = param_2;
  local_48 = param_3;
  if ((DAT_09520b07 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917e570);
    FUN_03f5c2a4(&DAT_0917e7e8);
    DAT_09520b07 = 1;
  }
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_78 = FUN_03f5c42c(DAT_0917e570,&local_50);
  local_70 = FUN_03f5c42c(DAT_0917e7e8,&local_60);
  thunk_FUN_03fbdebc(param_1,&local_78,param_6,param_7);
  return;
}


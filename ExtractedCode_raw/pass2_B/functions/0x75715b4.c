// rea decompile_all
// name: System.IO.StreamWriter$$FlushAsyncInternal
// address: 0x75715b4
// body: available
// range: 0x75715b4-0x7571757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_StreamWriter__FlushAsyncInternal
               (undefined8 param_1,byte param_2,byte param_3,undefined8 param_4,undefined4 param_5,
               byte param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
               undefined8 param_10,undefined8 param_11)

{
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  byte local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  byte local_88;
  byte local_87;
  
  if ((DAT_09521a3d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1a08);
    FUN_03f5c2a4(&DAT_09181780);
    DAT_09521a3d = 1;
  }
  memset(local_f0,0,0x90);
  local_c8 = param_1;
  thunk_FUN_03f5d7b8(&local_c8,param_1);
  local_a0 = param_4;
  local_88 = param_3 & 1;
  local_87 = param_2 & 1;
  thunk_FUN_03f5d7b8(&local_a0,param_4);
  local_d0 = param_6 & 1;
  local_c0 = param_7;
  local_98 = param_5;
  thunk_FUN_03f5d7b8(&local_c0,param_7);
  local_a8 = param_8;
  thunk_FUN_03f5d7b8(&local_a8,param_8);
  local_90 = param_9;
  thunk_FUN_03f5d7b8(&local_90,param_9);
  local_b8 = param_10;
  thunk_FUN_03f5d7b8(&local_b8,param_10);
  local_b0 = param_11;
  thunk_FUN_03f5d7b8(&local_b0,0);
  if (*(int *)(DAT_09181780 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create(&local_108,0);
  uStack_e0 = uStack_100;
  local_e8 = local_108;
  local_d8 = local_f8;
  thunk_FUN_03f5d7b8(&local_e8,0);
  local_f0[0] = 0xffffffff;
  FUN_0499b8c0(&local_e8,local_f0,DAT_091c1a08);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task(&local_e8,0);
  return;
}


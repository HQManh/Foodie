// rea decompile_all
// name: Newtonsoft.Json.JsonWriter$$<InternalWriteEndAsync>g__AwaitEnd|11_2
// address: 0x7679a2c
// body: available
// range: 0x7679a2c-0x7679b47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonWriter__<InternalWriteEndAsync>g__AwaitEnd_11_2
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_09522527 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1940);
    FUN_03f5c2a4(&DAT_09181780);
    DAT_09522527 = 1;
  }
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  if (*(int *)(DAT_09181780 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create(&local_a8,0);
  uStack_80 = uStack_a0;
  uStack_88 = local_a8;
  local_78 = local_98;
  thunk_FUN_03f5d7b8((ulong)&local_90 | 8,0);
  uStack_68 = param_1;
  thunk_FUN_03f5d7b8(&uStack_68,param_1);
  local_70 = param_2;
  thunk_FUN_03f5d7b8(&local_70,param_2);
  local_60 = CONCAT44(local_60._4_4_,param_3);
  uStack_58 = param_4;
  thunk_FUN_03f5d7b8(&uStack_58,0);
  local_90 = CONCAT44(local_90._4_4_,0xffffffff);
  FUN_04999ff8((ulong)&local_90 | 8,&local_90,DAT_091c1940);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task((ulong)&local_90 | 8,0);
  return;
}


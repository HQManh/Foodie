// rea decompile_all
// name: Newtonsoft.Json.JsonTextReader$$ParseCommentAsync
// address: 0x764e4ec
// body: available
// range: 0x764e4ec-0x764e5f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonTextReader__ParseCommentAsync
               (undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09522389 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1850);
    FUN_03f5c2a4(&DAT_09181780);
    DAT_09522389 = 1;
  }
  local_40 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  uStack_90 = 0;
  if (*(int *)(DAT_09181780 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__Create(&local_b8,0);
  uStack_90 = uStack_b0;
  uStack_98 = local_b8;
  local_88 = local_a8;
  thunk_FUN_03f5d7b8((ulong)&local_a0 | 8,0);
  local_80 = param_1;
  thunk_FUN_03f5d7b8(&local_80,param_1);
  local_70 = CONCAT71(local_70._1_7_,param_2) & 0xffffffffffffff01;
  uStack_78 = param_3;
  thunk_FUN_03f5d7b8(&uStack_78,0);
  local_a0 = CONCAT44(local_a0._4_4_,0xffffffff);
  FUN_04998360((ulong)&local_a0 | 8,&local_a0,DAT_091c1850);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder__get_Task((ulong)&local_a0 | 8,0);
  return;
}


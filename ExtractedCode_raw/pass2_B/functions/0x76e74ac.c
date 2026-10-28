// rea decompile_all
// name: Newtonsoft.Json.Linq.JToken$$ReadFromAsync
// address: 0x76e74ac
// body: available
// range: 0x76e74ac-0x76e75ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JToken__ReadFromAsync
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 local_d8 [2];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8 [11];
  
  if ((DAT_09522834 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09198d70);
    FUN_03f5c2a4(&DAT_09198d68);
    FUN_03f5c2a4(&DAT_09198d90);
    FUN_03f5c2a4(&DAT_09175278);
    DAT_09522834 = 1;
  }
  memset(local_d8,0,0x88);
  if (*(int *)(DAT_09175278 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_069f7c64(&local_f0,DAT_09198d70);
  uStack_c8 = uStack_e8;
  local_d0 = local_f0;
  local_c0 = local_e0;
  thunk_FUN_03f5d7b8(&local_d0,0);
  local_b8 = param_1;
  thunk_FUN_03f5d7b8(&local_b8,param_1);
  local_b0 = param_2;
  thunk_FUN_03f5d7b8(&local_b0,param_2);
  local_a8[0] = param_3;
  thunk_FUN_03f5d7b8(local_a8,0);
  local_d8[0] = 0xffffffff;
  FUN_045f7650(&local_d0,local_d8,DAT_09198d68);
  FUN_069f7c78(&local_d0,DAT_09198d90);
  return;
}


// rea decompile_all
// name: FUN_043b2f5c
// address: 0x43b2f5c
// body: available
// range: 0x43b2f5c-0x43b2fc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_043b2f5c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined8 local_74;
  undefined8 uStack_6c;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined8 uStack_3c;
  undefined8 local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  local_34 = in_stack_00000000;
  local_2c = in_stack_00000008;
  local_28 = param_5;
  uStack_24 = param_6;
  local_20 = param_7;
  local_1c = param_2;
  uStack_18 = param_3;
  local_14 = param_4;
  UnityEngine_Matrix4x4__Internal_LookAt(&local_74,&local_1c,&local_28,&local_34,0);
  param_1[1] = uStack_6c;
  *param_1 = local_74;
  param_1[3] = uStack_5c;
  param_1[2] = local_64;
  param_1[5] = uStack_4c;
  param_1[4] = local_54;
  param_1[7] = uStack_3c;
  param_1[6] = local_44;
  return;
}

